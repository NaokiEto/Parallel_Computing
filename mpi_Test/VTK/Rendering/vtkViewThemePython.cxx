// python wrapper for vtkViewTheme
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
#include "vtkViewTheme.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkViewTheme(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkViewTheme(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkViewThemeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkViewThemeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkViewTheme_Doc();


static PyObject *
PyvtkViewTheme_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      tempr = op->vtkViewTheme::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      tempr = op->vtkViewTheme::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkViewTheme *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkViewTheme::NewInstance();
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
PyvtkViewTheme_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkViewTheme *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkViewTheme::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointSize(temp0);
      }
    else
      {
      op->vtkViewTheme::SetPointSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_GetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointSize();
      }
    else
      {
      tempr = op->vtkViewTheme::GetPointSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLineWidth(temp0);
      }
    else
      {
      op->vtkViewTheme::SetLineWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineWidth();
      }
    else
      {
      tempr = op->vtkViewTheme::GetLineWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::SetPointColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPointColor(temp0);
      }
    else
      {
      op->vtkViewTheme::SetPointColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_SetPointColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointColor");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointColor();
      }
    else
      {
      tempr = op->vtkViewTheme::GetPointColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointOpacity(temp0);
      }
    else
      {
      op->vtkViewTheme::SetPointOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_GetPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointOpacity();
      }
    else
      {
      tempr = op->vtkViewTheme::GetPointOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointHueRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::SetPointHueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointHueRange(temp0);
      }
    else
      {
      op->vtkViewTheme::SetPointHueRange(temp0);
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
PyvtkViewTheme_SetPointHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_SetPointHueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointHueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointHueRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetPointHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetPointHueRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::GetPointHueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetPointHueRange(temp0);
      }
    else
      {
      op->vtkViewTheme::GetPointHueRange(temp0);
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
PyvtkViewTheme_GetPointHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_GetPointHueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_GetPointHueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPointHueRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_SetPointSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointSaturationRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::SetPointSaturationRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointSaturationRange(temp0);
      }
    else
      {
      op->vtkViewTheme::SetPointSaturationRange(temp0);
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
PyvtkViewTheme_SetPointSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_SetPointSaturationRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointSaturationRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointSaturationRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetPointSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetPointSaturationRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::GetPointSaturationRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetPointSaturationRange(temp0);
      }
    else
      {
      op->vtkViewTheme::GetPointSaturationRange(temp0);
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
PyvtkViewTheme_GetPointSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_GetPointSaturationRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_GetPointSaturationRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPointSaturationRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_SetPointValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointValueRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::SetPointValueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointValueRange(temp0);
      }
    else
      {
      op->vtkViewTheme::SetPointValueRange(temp0);
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
PyvtkViewTheme_SetPointValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_SetPointValueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointValueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointValueRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetPointValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetPointValueRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::GetPointValueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetPointValueRange(temp0);
      }
    else
      {
      op->vtkViewTheme::GetPointValueRange(temp0);
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
PyvtkViewTheme_GetPointValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_GetPointValueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_GetPointValueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPointValueRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_SetPointAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPointAlphaRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::SetPointAlphaRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetPointAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetPointAlphaRange(temp0);
      }
    else
      {
      op->vtkViewTheme::SetPointAlphaRange(temp0);
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
PyvtkViewTheme_SetPointAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_SetPointAlphaRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetPointAlphaRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointAlphaRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetPointAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetPointAlphaRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::GetPointAlphaRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_GetPointAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetPointAlphaRange(temp0);
      }
    else
      {
      op->vtkViewTheme::GetPointAlphaRange(temp0);
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
PyvtkViewTheme_GetPointAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_GetPointAlphaRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_GetPointAlphaRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPointAlphaRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetPointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointLookupTable();
      }
    else
      {
      tempr = op->vtkViewTheme::GetPointLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetPointLookupTable(temp0);
      }
    else
      {
      op->vtkViewTheme::SetPointLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetScalePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalePointLookupTable(temp0);
      }
    else
      {
      op->vtkViewTheme::SetScalePointLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_GetScalePointLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalePointLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalePointLookupTable();
      }
    else
      {
      tempr = op->vtkViewTheme::GetScalePointLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_ScalePointLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalePointLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalePointLookupTableOn();
      }
    else
      {
      op->vtkViewTheme::ScalePointLookupTableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_ScalePointLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalePointLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalePointLookupTableOff();
      }
    else
      {
      op->vtkViewTheme::ScalePointLookupTableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::SetCellColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCellColor(temp0);
      }
    else
      {
      op->vtkViewTheme::SetCellColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_SetCellColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCellColor");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellColor();
      }
    else
      {
      tempr = op->vtkViewTheme::GetCellColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCellOpacity(temp0);
      }
    else
      {
      op->vtkViewTheme::SetCellOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_GetCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellOpacity();
      }
    else
      {
      tempr = op->vtkViewTheme::GetCellOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellHueRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::SetCellHueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellHueRange(temp0);
      }
    else
      {
      op->vtkViewTheme::SetCellHueRange(temp0);
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
PyvtkViewTheme_SetCellHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_SetCellHueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellHueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCellHueRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetCellHueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetCellHueRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::GetCellHueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellHueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellHueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetCellHueRange(temp0);
      }
    else
      {
      op->vtkViewTheme::GetCellHueRange(temp0);
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
PyvtkViewTheme_GetCellHueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_GetCellHueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_GetCellHueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellHueRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_SetCellSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellSaturationRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::SetCellSaturationRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellSaturationRange(temp0);
      }
    else
      {
      op->vtkViewTheme::SetCellSaturationRange(temp0);
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
PyvtkViewTheme_SetCellSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_SetCellSaturationRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellSaturationRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCellSaturationRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetCellSaturationRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetCellSaturationRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::GetCellSaturationRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellSaturationRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSaturationRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetCellSaturationRange(temp0);
      }
    else
      {
      op->vtkViewTheme::GetCellSaturationRange(temp0);
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
PyvtkViewTheme_GetCellSaturationRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_GetCellSaturationRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_GetCellSaturationRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellSaturationRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_SetCellValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellValueRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::SetCellValueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellValueRange(temp0);
      }
    else
      {
      op->vtkViewTheme::SetCellValueRange(temp0);
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
PyvtkViewTheme_SetCellValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_SetCellValueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellValueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCellValueRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetCellValueRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetCellValueRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::GetCellValueRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellValueRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellValueRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetCellValueRange(temp0);
      }
    else
      {
      op->vtkViewTheme::GetCellValueRange(temp0);
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
PyvtkViewTheme_GetCellValueRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_GetCellValueRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_GetCellValueRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellValueRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_SetCellAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetCellAlphaRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::SetCellAlphaRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetCellAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetCellAlphaRange(temp0);
      }
    else
      {
      op->vtkViewTheme::SetCellAlphaRange(temp0);
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
PyvtkViewTheme_SetCellAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_SetCellAlphaRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetCellAlphaRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCellAlphaRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetCellAlphaRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->GetCellAlphaRange(temp0, temp1);
      }
    else
      {
      op->vtkViewTheme::GetCellAlphaRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_GetCellAlphaRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAlphaRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetCellAlphaRange(temp0);
      }
    else
      {
      op->vtkViewTheme::GetCellAlphaRange(temp0);
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
PyvtkViewTheme_GetCellAlphaRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkViewTheme_GetCellAlphaRange_s1(self, args);
    case 1:
      return PyvtkViewTheme_GetCellAlphaRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCellAlphaRange");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellLookupTable();
      }
    else
      {
      tempr = op->vtkViewTheme::GetCellLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      op->SetCellLookupTable(temp0);
      }
    else
      {
      op->vtkViewTheme::SetCellLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetScaleCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleCellLookupTable(temp0);
      }
    else
      {
      op->vtkViewTheme::SetScaleCellLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_GetScaleCellLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleCellLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleCellLookupTable();
      }
    else
      {
      tempr = op->vtkViewTheme::GetScaleCellLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_ScaleCellLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleCellLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleCellLookupTableOn();
      }
    else
      {
      op->vtkViewTheme::ScaleCellLookupTableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_ScaleCellLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleCellLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleCellLookupTableOff();
      }
    else
      {
      op->vtkViewTheme::ScaleCellLookupTableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetOutlineColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetOutlineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::SetOutlineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetOutlineColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutlineColor(temp0);
      }
    else
      {
      op->vtkViewTheme::SetOutlineColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetOutlineColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_SetOutlineColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetOutlineColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutlineColor");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetOutlineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutlineColor();
      }
    else
      {
      tempr = op->vtkViewTheme::GetOutlineColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedPointColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetSelectedPointColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::SetSelectedPointColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedPointColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedPointColor(temp0);
      }
    else
      {
      op->vtkViewTheme::SetSelectedPointColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedPointColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_SetSelectedPointColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetSelectedPointColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedPointColor");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetSelectedPointColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedPointColor();
      }
    else
      {
      tempr = op->vtkViewTheme::GetSelectedPointColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedPointOpacity(temp0);
      }
    else
      {
      op->vtkViewTheme::SetSelectedPointOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_GetSelectedPointOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedPointOpacity();
      }
    else
      {
      tempr = op->vtkViewTheme::GetSelectedPointOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedCellColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetSelectedCellColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::SetSelectedCellColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedCellColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedCellColor(temp0);
      }
    else
      {
      op->vtkViewTheme::SetSelectedCellColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetSelectedCellColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_SetSelectedCellColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetSelectedCellColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectedCellColor");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetSelectedCellColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCellColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedCellColor();
      }
    else
      {
      tempr = op->vtkViewTheme::GetSelectedCellColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetSelectedCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedCellOpacity(temp0);
      }
    else
      {
      op->vtkViewTheme::SetSelectedCellOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_GetSelectedCellOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedCellOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedCellOpacity();
      }
    else
      {
      tempr = op->vtkViewTheme::GetSelectedCellOpacity();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::SetBackgroundColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundColor(temp0);
      }
    else
      {
      op->vtkViewTheme::SetBackgroundColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetBackgroundColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundColor();
      }
    else
      {
      tempr = op->vtkViewTheme::GetBackgroundColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetBackgroundColor2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetBackgroundColor2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::SetBackgroundColor2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundColor2(temp0);
      }
    else
      {
      op->vtkViewTheme::SetBackgroundColor2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetBackgroundColor2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_SetBackgroundColor2_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetBackgroundColor2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor2");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetBackgroundColor2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundColor2();
      }
    else
      {
      tempr = op->vtkViewTheme::GetBackgroundColor2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetPointTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetPointTextProperty(temp0);
      }
    else
      {
      op->vtkViewTheme::SetPointTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_GetPointTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointTextProperty();
      }
    else
      {
      tempr = op->vtkViewTheme::GetPointTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetCellTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetCellTextProperty(temp0);
      }
    else
      {
      op->vtkViewTheme::SetCellTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_GetCellTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCellTextProperty();
      }
    else
      {
      tempr = op->vtkViewTheme::GetCellTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_SetVertexLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetVertexLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::SetVertexLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetVertexLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetVertexLabelColor(temp0);
      }
    else
      {
      op->vtkViewTheme::SetVertexLabelColor(temp0);
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
PyvtkViewTheme_SetVertexLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_SetVertexLabelColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetVertexLabelColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVertexLabelColor");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetVertexLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetVertexLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::GetVertexLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_GetVertexLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetVertexLabelColor(temp0);
      }
    else
      {
      op->vtkViewTheme::GetVertexLabelColor(temp0);
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
PyvtkViewTheme_GetVertexLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_GetVertexLabelColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_GetVertexLabelColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetVertexLabelColor");
  return NULL;
}



static PyObject *
PyvtkViewTheme_SetEdgeLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetEdgeLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::SetEdgeLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_SetEdgeLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->SetEdgeLabelColor(temp0);
      }
    else
      {
      op->vtkViewTheme::SetEdgeLabelColor(temp0);
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
PyvtkViewTheme_SetEdgeLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_SetEdgeLabelColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_SetEdgeLabelColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeLabelColor");
  return NULL;
}



static PyObject *
PyvtkViewTheme_GetEdgeLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetEdgeLabelColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkViewTheme::GetEdgeLabelColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(0, temp0);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(1, temp1);
      }
    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkViewTheme_GetEdgeLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

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
      op->GetEdgeLabelColor(temp0);
      }
    else
      {
      op->vtkViewTheme::GetEdgeLabelColor(temp0);
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
PyvtkViewTheme_GetEdgeLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkViewTheme_GetEdgeLabelColor_s1(self, args);
    case 1:
      return PyvtkViewTheme_GetEdgeLabelColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetEdgeLabelColor");
  return NULL;
}



static PyObject *
PyvtkViewTheme_CreateOceanTheme(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateOceanTheme");

  vtkViewTheme *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkViewTheme::CreateOceanTheme();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_CreateMellowTheme(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateMellowTheme");

  vtkViewTheme *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkViewTheme::CreateMellowTheme();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_CreateNeonTheme(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateNeonTheme");

  vtkViewTheme *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkViewTheme::CreateNeonTheme();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_LookupMatchesPointTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupMatchesPointTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      tempr = op->LookupMatchesPointTheme(temp0);
      }
    else
      {
      tempr = op->vtkViewTheme::LookupMatchesPointTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkViewTheme_LookupMatchesCellTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LookupMatchesCellTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkViewTheme *op = static_cast<vtkViewTheme *>(vp);

  vtkScalarsToColors *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
    {
    if (ap.IsBound())
      {
      tempr = op->LookupMatchesCellTheme(temp0);
      }
    else
      {
      tempr = op->vtkViewTheme::LookupMatchesCellTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkViewTheme_Methods[] = {
  {(char*)"GetClassName", PyvtkViewTheme_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkViewTheme_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkViewTheme_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkViewTheme\nC++: vtkViewTheme *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkViewTheme_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkViewTheme\nC++: vtkViewTheme *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPointSize", PyvtkViewTheme_SetPointSize, 1,
   (char*)"V.SetPointSize(float)\nC++: void SetPointSize(double a)\n\nThe size of points or vertices\n"},
  {(char*)"GetPointSize", PyvtkViewTheme_GetPointSize, 1,
   (char*)"V.GetPointSize() -> float\nC++: double GetPointSize()\n\nThe size of points or vertices\n"},
  {(char*)"SetLineWidth", PyvtkViewTheme_SetLineWidth, 1,
   (char*)"V.SetLineWidth(float)\nC++: void SetLineWidth(double a)\n\nThe width of lines or edges\n"},
  {(char*)"GetLineWidth", PyvtkViewTheme_GetLineWidth, 1,
   (char*)"V.GetLineWidth() -> float\nC++: double GetLineWidth()\n\nThe width of lines or edges\n"},
  {(char*)"SetPointColor", PyvtkViewTheme_SetPointColor, 1,
   (char*)"V.SetPointColor(float, float, float)\nC++: void SetPointColor(double, double, double)\nV.SetPointColor((float, float, float))\nC++: void SetPointColor(double a[3])\n\n"},
  {(char*)"GetPointColor", PyvtkViewTheme_GetPointColor, 1,
   (char*)"V.GetPointColor() -> (float, float, float)\nC++: double *GetPointColor()\n\n"},
  {(char*)"SetPointOpacity", PyvtkViewTheme_SetPointOpacity, 1,
   (char*)"V.SetPointOpacity(float)\nC++: void SetPointOpacity(double a)\n\nThe color and opacity of points or vertices when not mapped\nthrough a lookup table.\n"},
  {(char*)"GetPointOpacity", PyvtkViewTheme_GetPointOpacity, 1,
   (char*)"V.GetPointOpacity() -> float\nC++: double GetPointOpacity()\n\nThe color and opacity of points or vertices when not mapped\nthrough a lookup table.\n"},
  {(char*)"SetPointHueRange", PyvtkViewTheme_SetPointHueRange, 1,
   (char*)"V.SetPointHueRange(float, float)\nC++: virtual void SetPointHueRange(double mn, double mx)\nV.SetPointHueRange([float, float])\nC++: virtual void SetPointHueRange(double rng[2])\n\nThe ranges to use in the point lookup table. You may also do this\nby accessing the point lookup table directly with\nGetPointLookupTable() and calling these methods.\n"},
  {(char*)"GetPointHueRange", PyvtkViewTheme_GetPointHueRange, 1,
   (char*)"V.GetPointHueRange(float, float)\nC++: virtual void GetPointHueRange(double &mn, double &mx)\nV.GetPointHueRange([float, float])\nC++: virtual void GetPointHueRange(double rng[2])\n\nThe ranges to use in the point lookup table. You may also do this\nby accessing the point lookup table directly with\nGetPointLookupTable() and calling these methods.\n"},
  {(char*)"SetPointSaturationRange", PyvtkViewTheme_SetPointSaturationRange, 1,
   (char*)"V.SetPointSaturationRange(float, float)\nC++: virtual void SetPointSaturationRange(double mn, double mx)\nV.SetPointSaturationRange([float, float])\nC++: virtual void SetPointSaturationRange(double rng[2])\n\n"},
  {(char*)"GetPointSaturationRange", PyvtkViewTheme_GetPointSaturationRange, 1,
   (char*)"V.GetPointSaturationRange(float, float)\nC++: virtual void GetPointSaturationRange(double &mn, double &mx)\nV.GetPointSaturationRange([float, float])\nC++: virtual void GetPointSaturationRange(double rng[2])\n\n"},
  {(char*)"SetPointValueRange", PyvtkViewTheme_SetPointValueRange, 1,
   (char*)"V.SetPointValueRange(float, float)\nC++: virtual void SetPointValueRange(double mn, double mx)\nV.SetPointValueRange([float, float])\nC++: virtual void SetPointValueRange(double rng[2])\n\n"},
  {(char*)"GetPointValueRange", PyvtkViewTheme_GetPointValueRange, 1,
   (char*)"V.GetPointValueRange(float, float)\nC++: virtual void GetPointValueRange(double &mn, double &mx)\nV.GetPointValueRange([float, float])\nC++: virtual void GetPointValueRange(double rng[2])\n\n"},
  {(char*)"SetPointAlphaRange", PyvtkViewTheme_SetPointAlphaRange, 1,
   (char*)"V.SetPointAlphaRange(float, float)\nC++: virtual void SetPointAlphaRange(double mn, double mx)\nV.SetPointAlphaRange([float, float])\nC++: virtual void SetPointAlphaRange(double rng[2])\n\n"},
  {(char*)"GetPointAlphaRange", PyvtkViewTheme_GetPointAlphaRange, 1,
   (char*)"V.GetPointAlphaRange(float, float)\nC++: virtual void GetPointAlphaRange(double &mn, double &mx)\nV.GetPointAlphaRange([float, float])\nC++: virtual void GetPointAlphaRange(double rng[2])\n\n"},
  {(char*)"GetPointLookupTable", PyvtkViewTheme_GetPointLookupTable, 1,
   (char*)"V.GetPointLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetPointLookupTable()\n\nSet/Get the point lookup table.\n"},
  {(char*)"SetPointLookupTable", PyvtkViewTheme_SetPointLookupTable, 1,
   (char*)"V.SetPointLookupTable(vtkScalarsToColors)\nC++: virtual void SetPointLookupTable(vtkScalarsToColors *lut)\n\nSet/Get the point lookup table.\n"},
  {(char*)"SetScalePointLookupTable", PyvtkViewTheme_SetScalePointLookupTable, 1,
   (char*)"V.SetScalePointLookupTable(bool)\nC++: void SetScalePointLookupTable(bool a)\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {(char*)"GetScalePointLookupTable", PyvtkViewTheme_GetScalePointLookupTable, 1,
   (char*)"V.GetScalePointLookupTable() -> bool\nC++: bool GetScalePointLookupTable()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {(char*)"ScalePointLookupTableOn", PyvtkViewTheme_ScalePointLookupTableOn, 1,
   (char*)"V.ScalePointLookupTableOn()\nC++: void ScalePointLookupTableOn()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {(char*)"ScalePointLookupTableOff", PyvtkViewTheme_ScalePointLookupTableOff, 1,
   (char*)"V.ScalePointLookupTableOff()\nC++: void ScalePointLookupTableOff()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {(char*)"SetCellColor", PyvtkViewTheme_SetCellColor, 1,
   (char*)"V.SetCellColor(float, float, float)\nC++: void SetCellColor(double, double, double)\nV.SetCellColor((float, float, float))\nC++: void SetCellColor(double a[3])\n\n"},
  {(char*)"GetCellColor", PyvtkViewTheme_GetCellColor, 1,
   (char*)"V.GetCellColor() -> (float, float, float)\nC++: double *GetCellColor()\n\n"},
  {(char*)"SetCellOpacity", PyvtkViewTheme_SetCellOpacity, 1,
   (char*)"V.SetCellOpacity(float)\nC++: void SetCellOpacity(double a)\n\nThe color and opacity of cells or edges when not mapped through a\nlookup table.\n"},
  {(char*)"GetCellOpacity", PyvtkViewTheme_GetCellOpacity, 1,
   (char*)"V.GetCellOpacity() -> float\nC++: double GetCellOpacity()\n\nThe color and opacity of cells or edges when not mapped through a\nlookup table.\n"},
  {(char*)"SetCellHueRange", PyvtkViewTheme_SetCellHueRange, 1,
   (char*)"V.SetCellHueRange(float, float)\nC++: virtual void SetCellHueRange(double mn, double mx)\nV.SetCellHueRange([float, float])\nC++: virtual void SetCellHueRange(double rng[2])\n\nThe ranges to use in the cell lookup table. You may also do this\nby accessing the cell lookup table directly with\nGetCellLookupTable() and calling these methods.\n"},
  {(char*)"GetCellHueRange", PyvtkViewTheme_GetCellHueRange, 1,
   (char*)"V.GetCellHueRange(float, float)\nC++: virtual void GetCellHueRange(double &mn, double &mx)\nV.GetCellHueRange([float, float])\nC++: virtual void GetCellHueRange(double rng[2])\n\nThe ranges to use in the cell lookup table. You may also do this\nby accessing the cell lookup table directly with\nGetCellLookupTable() and calling these methods.\n"},
  {(char*)"SetCellSaturationRange", PyvtkViewTheme_SetCellSaturationRange, 1,
   (char*)"V.SetCellSaturationRange(float, float)\nC++: virtual void SetCellSaturationRange(double mn, double mx)\nV.SetCellSaturationRange([float, float])\nC++: virtual void SetCellSaturationRange(double rng[2])\n\n"},
  {(char*)"GetCellSaturationRange", PyvtkViewTheme_GetCellSaturationRange, 1,
   (char*)"V.GetCellSaturationRange(float, float)\nC++: virtual void GetCellSaturationRange(double &mn, double &mx)\nV.GetCellSaturationRange([float, float])\nC++: virtual void GetCellSaturationRange(double rng[2])\n\n"},
  {(char*)"SetCellValueRange", PyvtkViewTheme_SetCellValueRange, 1,
   (char*)"V.SetCellValueRange(float, float)\nC++: virtual void SetCellValueRange(double mn, double mx)\nV.SetCellValueRange([float, float])\nC++: virtual void SetCellValueRange(double rng[2])\n\n"},
  {(char*)"GetCellValueRange", PyvtkViewTheme_GetCellValueRange, 1,
   (char*)"V.GetCellValueRange(float, float)\nC++: virtual void GetCellValueRange(double &mn, double &mx)\nV.GetCellValueRange([float, float])\nC++: virtual void GetCellValueRange(double rng[2])\n\n"},
  {(char*)"SetCellAlphaRange", PyvtkViewTheme_SetCellAlphaRange, 1,
   (char*)"V.SetCellAlphaRange(float, float)\nC++: virtual void SetCellAlphaRange(double mn, double mx)\nV.SetCellAlphaRange([float, float])\nC++: virtual void SetCellAlphaRange(double rng[2])\n\n"},
  {(char*)"GetCellAlphaRange", PyvtkViewTheme_GetCellAlphaRange, 1,
   (char*)"V.GetCellAlphaRange(float, float)\nC++: virtual void GetCellAlphaRange(double &mn, double &mx)\nV.GetCellAlphaRange([float, float])\nC++: virtual void GetCellAlphaRange(double rng[2])\n\n"},
  {(char*)"GetCellLookupTable", PyvtkViewTheme_GetCellLookupTable, 1,
   (char*)"V.GetCellLookupTable() -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetCellLookupTable()\n\nSet/Get the cell lookup table.\n"},
  {(char*)"SetCellLookupTable", PyvtkViewTheme_SetCellLookupTable, 1,
   (char*)"V.SetCellLookupTable(vtkScalarsToColors)\nC++: virtual void SetCellLookupTable(vtkScalarsToColors *lut)\n\nSet/Get the cell lookup table.\n"},
  {(char*)"SetScaleCellLookupTable", PyvtkViewTheme_SetScaleCellLookupTable, 1,
   (char*)"V.SetScaleCellLookupTable(bool)\nC++: void SetScaleCellLookupTable(bool a)\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {(char*)"GetScaleCellLookupTable", PyvtkViewTheme_GetScaleCellLookupTable, 1,
   (char*)"V.GetScaleCellLookupTable() -> bool\nC++: bool GetScaleCellLookupTable()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {(char*)"ScaleCellLookupTableOn", PyvtkViewTheme_ScaleCellLookupTableOn, 1,
   (char*)"V.ScaleCellLookupTableOn()\nC++: void ScaleCellLookupTableOn()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {(char*)"ScaleCellLookupTableOff", PyvtkViewTheme_ScaleCellLookupTableOff, 1,
   (char*)"V.ScaleCellLookupTableOff()\nC++: void ScaleCellLookupTableOff()\n\nWhether to scale the lookup table to fit the range of the data.\n"},
  {(char*)"SetOutlineColor", PyvtkViewTheme_SetOutlineColor, 1,
   (char*)"V.SetOutlineColor(float, float, float)\nC++: void SetOutlineColor(double, double, double)\nV.SetOutlineColor((float, float, float))\nC++: void SetOutlineColor(double a[3])\n\n"},
  {(char*)"GetOutlineColor", PyvtkViewTheme_GetOutlineColor, 1,
   (char*)"V.GetOutlineColor() -> (float, float, float)\nC++: double *GetOutlineColor()\n\n"},
  {(char*)"SetSelectedPointColor", PyvtkViewTheme_SetSelectedPointColor, 1,
   (char*)"V.SetSelectedPointColor(float, float, float)\nC++: void SetSelectedPointColor(double, double, double)\nV.SetSelectedPointColor((float, float, float))\nC++: void SetSelectedPointColor(double a[3])\n\n"},
  {(char*)"GetSelectedPointColor", PyvtkViewTheme_GetSelectedPointColor, 1,
   (char*)"V.GetSelectedPointColor() -> (float, float, float)\nC++: double *GetSelectedPointColor()\n\n"},
  {(char*)"SetSelectedPointOpacity", PyvtkViewTheme_SetSelectedPointOpacity, 1,
   (char*)"V.SetSelectedPointOpacity(float)\nC++: void SetSelectedPointOpacity(double a)\n\nThe color of selected points or vertices.\n"},
  {(char*)"GetSelectedPointOpacity", PyvtkViewTheme_GetSelectedPointOpacity, 1,
   (char*)"V.GetSelectedPointOpacity() -> float\nC++: double GetSelectedPointOpacity()\n\nThe color of selected points or vertices.\n"},
  {(char*)"SetSelectedCellColor", PyvtkViewTheme_SetSelectedCellColor, 1,
   (char*)"V.SetSelectedCellColor(float, float, float)\nC++: void SetSelectedCellColor(double, double, double)\nV.SetSelectedCellColor((float, float, float))\nC++: void SetSelectedCellColor(double a[3])\n\n"},
  {(char*)"GetSelectedCellColor", PyvtkViewTheme_GetSelectedCellColor, 1,
   (char*)"V.GetSelectedCellColor() -> (float, float, float)\nC++: double *GetSelectedCellColor()\n\n"},
  {(char*)"SetSelectedCellOpacity", PyvtkViewTheme_SetSelectedCellOpacity, 1,
   (char*)"V.SetSelectedCellOpacity(float)\nC++: void SetSelectedCellOpacity(double a)\n\nThe color of selected cells or edges.\n"},
  {(char*)"GetSelectedCellOpacity", PyvtkViewTheme_GetSelectedCellOpacity, 1,
   (char*)"V.GetSelectedCellOpacity() -> float\nC++: double GetSelectedCellOpacity()\n\nThe color of selected cells or edges.\n"},
  {(char*)"SetBackgroundColor", PyvtkViewTheme_SetBackgroundColor, 1,
   (char*)"V.SetBackgroundColor(float, float, float)\nC++: void SetBackgroundColor(double, double, double)\nV.SetBackgroundColor((float, float, float))\nC++: void SetBackgroundColor(double a[3])\n\n"},
  {(char*)"GetBackgroundColor", PyvtkViewTheme_GetBackgroundColor, 1,
   (char*)"V.GetBackgroundColor() -> (float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {(char*)"SetBackgroundColor2", PyvtkViewTheme_SetBackgroundColor2, 1,
   (char*)"V.SetBackgroundColor2(float, float, float)\nC++: void SetBackgroundColor2(double, double, double)\nV.SetBackgroundColor2((float, float, float))\nC++: void SetBackgroundColor2(double a[3])\n\n"},
  {(char*)"GetBackgroundColor2", PyvtkViewTheme_GetBackgroundColor2, 1,
   (char*)"V.GetBackgroundColor2() -> (float, float, float)\nC++: double *GetBackgroundColor2()\n\n"},
  {(char*)"SetPointTextProperty", PyvtkViewTheme_SetPointTextProperty, 1,
   (char*)"V.SetPointTextProperty(vtkTextProperty)\nC++: virtual void SetPointTextProperty(vtkTextProperty *tprop)\n\nThe text property to use for labelling points/vertices.\n"},
  {(char*)"GetPointTextProperty", PyvtkViewTheme_GetPointTextProperty, 1,
   (char*)"V.GetPointTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetPointTextProperty()\n\nThe text property to use for labelling points/vertices.\n"},
  {(char*)"SetCellTextProperty", PyvtkViewTheme_SetCellTextProperty, 1,
   (char*)"V.SetCellTextProperty(vtkTextProperty)\nC++: virtual void SetCellTextProperty(vtkTextProperty *tprop)\n\nThe text property to use for labelling edges/cells.\n"},
  {(char*)"GetCellTextProperty", PyvtkViewTheme_GetCellTextProperty, 1,
   (char*)"V.GetCellTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetCellTextProperty()\n\nThe text property to use for labelling edges/cells.\n"},
  {(char*)"SetVertexLabelColor", PyvtkViewTheme_SetVertexLabelColor, 1,
   (char*)"V.SetVertexLabelColor(float, float, float)\nC++: virtual void SetVertexLabelColor(double r, double g,\n    double b)\nV.SetVertexLabelColor([float, float, float])\nC++: virtual void SetVertexLabelColor(double c[3])\n\nThe color to use for labelling graph vertices. This is\ndeprecated. Use GetPointTextProperty()->SetColor() instead.\n"},
  {(char*)"GetVertexLabelColor", PyvtkViewTheme_GetVertexLabelColor, 1,
   (char*)"V.GetVertexLabelColor(float, float, float)\nC++: virtual void GetVertexLabelColor(double &r, double &g,\n    double &b)\nV.GetVertexLabelColor([float, float, float])\nC++: virtual void GetVertexLabelColor(double c[3])\n\nThe color to use for labelling graph vertices. This is\ndeprecated. Use GetPointTextProperty()->SetColor() instead.\n"},
  {(char*)"SetEdgeLabelColor", PyvtkViewTheme_SetEdgeLabelColor, 1,
   (char*)"V.SetEdgeLabelColor(float, float, float)\nC++: virtual void SetEdgeLabelColor(double r, double g, double b)\nV.SetEdgeLabelColor([float, float, float])\nC++: virtual void SetEdgeLabelColor(double c[3])\n\nThe color to use for labelling graph edges. This is deprecated.\nUse GetCellTextProperty()->SetColor() instead.\n"},
  {(char*)"GetEdgeLabelColor", PyvtkViewTheme_GetEdgeLabelColor, 1,
   (char*)"V.GetEdgeLabelColor(float, float, float)\nC++: virtual void GetEdgeLabelColor(double &r, double &g,\n    double &b)\nV.GetEdgeLabelColor([float, float, float])\nC++: virtual void GetEdgeLabelColor(double c[3])\n\nThe color to use for labelling graph edges. This is deprecated.\nUse GetCellTextProperty()->SetColor() instead.\n"},
  {(char*)"CreateOceanTheme", PyvtkViewTheme_CreateOceanTheme, 1,
   (char*)"V.CreateOceanTheme() -> vtkViewTheme\nC++: static vtkViewTheme *CreateOceanTheme()\n\nConvenience methods for creating some default view themes. The\nreturn reference is reference-counted, so you will have to call\nDelete() on the reference when you are finished with it.\n"},
  {(char*)"CreateMellowTheme", PyvtkViewTheme_CreateMellowTheme, 1,
   (char*)"V.CreateMellowTheme() -> vtkViewTheme\nC++: static vtkViewTheme *CreateMellowTheme()\n\nConvenience methods for creating some default view themes. The\nreturn reference is reference-counted, so you will have to call\nDelete() on the reference when you are finished with it.\n"},
  {(char*)"CreateNeonTheme", PyvtkViewTheme_CreateNeonTheme, 1,
   (char*)"V.CreateNeonTheme() -> vtkViewTheme\nC++: static vtkViewTheme *CreateNeonTheme()\n\nConvenience methods for creating some default view themes. The\nreturn reference is reference-counted, so you will have to call\nDelete() on the reference when you are finished with it.\n"},
  {(char*)"LookupMatchesPointTheme", PyvtkViewTheme_LookupMatchesPointTheme, 1,
   (char*)"V.LookupMatchesPointTheme(vtkScalarsToColors) -> bool\nC++: bool LookupMatchesPointTheme(vtkScalarsToColors *s2c)\n\nWhether a given lookup table matches the point or cell theme of\nthis theme.\n"},
  {(char*)"LookupMatchesCellTheme", PyvtkViewTheme_LookupMatchesCellTheme, 1,
   (char*)"V.LookupMatchesCellTheme(vtkScalarsToColors) -> bool\nC++: bool LookupMatchesCellTheme(vtkScalarsToColors *s2c)\n\nWhether a given lookup table matches the point or cell theme of\nthis theme.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkViewTheme_StaticNew()
{
  return vtkViewTheme::New();
}

PyObject *PyVTKClass_vtkViewThemeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkViewTheme_StaticNew,
    PyvtkViewTheme_Methods,
    "vtkViewTheme", modulename,
    NULL, NULL,
    PyvtkViewTheme_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkViewTheme_Doc()
{
  static const char *docstring[] = {
    "vtkViewTheme - Sets theme colors for a graphical view.\n\n",
    "Superclass: vtkObject\n\n",
    "This may be set on any subclass of vtkView.  The view class will\nattempt to use the values set in the theme to customize the view. \nViews will not generally use every aspect of the theme. NOTICE: This\nclass will be deprecated in favor of a more robust solution based on\nstyle sheets.  Do not become overly-dependent on the functionality of\nthemes.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkViewTheme(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkViewThemeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkViewTheme", o) != 0)
    {
    Py_DECREF(o);
    }

}

