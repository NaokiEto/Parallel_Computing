// python wrapper for vtkAxisActor
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
#include "vtkAxisActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAxisActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAxisActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAxisActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAxisActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkActorNew
extern "C" { PyObject *PyVTKClass_vtkActorNew(const char *); }
#define DECLARED_PyVTKClass_vtkActorNew
#endif

static const char **PyvtkAxisActor_Doc();


static PyObject *
PyvtkAxisActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      tempr = op->vtkAxisActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      tempr = op->vtkAxisActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkAxisActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAxisActor::NewInstance();
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
PyvtkAxisActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAxisActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAxisActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetPoint1Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1Coordinate();
      }
    else
      {
      tempr = op->vtkAxisActor::GetPoint1Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkAxisActor::SetPoint1(temp0);
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
PyvtkAxisActor_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxisActor_SetPoint1_s1(self, args);
    case 3:
      return PyvtkAxisActor_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkAxisActor_GetPoint2Coordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Coordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2Coordinate();
      }
    else
      {
      tempr = op->vtkAxisActor::GetPoint2Coordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkAxisActor::SetPoint2(temp0);
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
PyvtkAxisActor_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxisActor_SetPoint2_s1(self, args);
    case 3:
      return PyvtkAxisActor_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkAxisActor_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor::SetRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRange(temp0);
      }
    else
      {
      op->vtkAxisActor::SetRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkAxisActor_SetRange_s1(self, args);
    case 1:
      return PyvtkAxisActor_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkAxisActor_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRange();
      }
    else
      {
      tempr = op->vtkAxisActor::GetRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkAxisActor::SetBounds(temp0);
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
PyvtkAxisActor_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkAxisActor::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAxisActor_SetBounds_s1(self, args);
    case 6:
      return PyvtkAxisActor_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkAxisActor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      tempr = op->vtkAxisActor::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkAxisActor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->GetBounds(temp0);
      }
    else
      {
      op->vtkAxisActor::GetBounds(temp0);
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
PyvtkAxisActor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkAxisActor_GetBounds_s1(self, args);
    case 1:
      return PyvtkAxisActor_GetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return NULL;
}



static PyObject *
PyvtkAxisActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelFormat(temp0);
      }
    else
      {
      op->vtkAxisActor::SetLabelFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelFormat();
      }
    else
      {
      tempr = op->vtkAxisActor::GetLabelFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinorTicksVisible(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMinorTicksVisible(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorTicksVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTicksVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinorTicksVisible();
      }
    else
      {
      tempr = op->vtkAxisActor::GetMinorTicksVisible();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_MinorTicksVisibleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinorTicksVisibleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MinorTicksVisibleOn();
      }
    else
      {
      op->vtkAxisActor::MinorTicksVisibleOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_MinorTicksVisibleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MinorTicksVisibleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MinorTicksVisibleOff();
      }
    else
      {
      op->vtkAxisActor::MinorTicksVisibleOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetTitle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      tempr = op->vtkAxisActor::GetTitle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMajorTickSize(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMajorTickSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMajorTickSize();
      }
    else
      {
      tempr = op->vtkAxisActor::GetMajorTickSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinorTickSize(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMinorTickSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorTickSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorTickSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinorTickSize();
      }
    else
      {
      tempr = op->vtkAxisActor::GetMinorTickSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocation(temp0);
      }
    else
      {
      op->vtkAxisActor::SetTickLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickLocationMinValue();
      }
    else
      {
      tempr = op->vtkAxisActor::GetTickLocationMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickLocationMaxValue();
      }
    else
      {
      tempr = op->vtkAxisActor::GetTickLocationMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickLocation();
      }
    else
      {
      tempr = op->vtkAxisActor::GetTickLocation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToInside();
      }
    else
      {
      op->vtkAxisActor::SetTickLocationToInside();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToOutside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToOutside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToOutside();
      }
    else
      {
      op->vtkAxisActor::SetTickLocationToOutside();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickLocationToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickLocationToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetTickLocationToBoth();
      }
    else
      {
      op->vtkAxisActor::SetTickLocationToBoth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisVisibility(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisVisibility();
      }
    else
      {
      tempr = op->vtkAxisActor::GetAxisVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_AxisVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisVisibilityOn();
      }
    else
      {
      op->vtkAxisActor::AxisVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_AxisVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AxisVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AxisVisibilityOff();
      }
    else
      {
      op->vtkAxisActor::AxisVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTickVisibility(temp0);
      }
    else
      {
      op->vtkAxisActor::SetTickVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTickVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTickVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTickVisibility();
      }
    else
      {
      tempr = op->vtkAxisActor::GetTickVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_TickVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TickVisibilityOn();
      }
    else
      {
      op->vtkAxisActor::TickVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_TickVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TickVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TickVisibilityOff();
      }
    else
      {
      op->vtkAxisActor::TickVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetLabelVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetLabelVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      tempr = op->vtkAxisActor::GetLabelVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_LabelVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOn();
      }
    else
      {
      op->vtkAxisActor::LabelVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_LabelVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LabelVisibilityOff();
      }
    else
      {
      op->vtkAxisActor::LabelVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::SetTitleVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetTitleVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      tempr = op->vtkAxisActor::GetTitleVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_TitleVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TitleVisibilityOn();
      }
    else
      {
      op->vtkAxisActor::TitleVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_TitleVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TitleVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TitleVisibilityOff();
      }
    else
      {
      op->vtkAxisActor::TitleVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDrawGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawGridlines(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDrawGridlines(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDrawGridlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawGridlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDrawGridlines();
      }
    else
      {
      tempr = op->vtkAxisActor::GetDrawGridlines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawGridlinesOn();
      }
    else
      {
      op->vtkAxisActor::DrawGridlinesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_DrawGridlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawGridlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DrawGridlinesOff();
      }
    else
      {
      op->vtkAxisActor::DrawGridlinesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridlineXLength(temp0);
      }
    else
      {
      op->vtkAxisActor::SetGridlineXLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineXLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineXLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGridlineXLength();
      }
    else
      {
      tempr = op->vtkAxisActor::GetGridlineXLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridlineYLength(temp0);
      }
    else
      {
      op->vtkAxisActor::SetGridlineYLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineYLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineYLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGridlineYLength();
      }
    else
      {
      tempr = op->vtkAxisActor::GetGridlineYLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetGridlineZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridlineZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGridlineZLength(temp0);
      }
    else
      {
      op->vtkAxisActor::SetGridlineZLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetGridlineZLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridlineZLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGridlineZLength();
      }
    else
      {
      tempr = op->vtkAxisActor::GetGridlineZLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisType(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisTypeMinValue();
      }
    else
      {
      tempr = op->vtkAxisActor::GetAxisTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisTypeMaxValue();
      }
    else
      {
      tempr = op->vtkAxisActor::GetAxisTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisType();
      }
    else
      {
      tempr = op->vtkAxisActor::GetAxisType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTypeToX();
      }
    else
      {
      op->vtkAxisActor::SetAxisTypeToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTypeToY();
      }
    else
      {
      op->vtkAxisActor::SetAxisTypeToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisTypeToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTypeToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisTypeToZ();
      }
    else
      {
      op->vtkAxisActor::SetAxisTypeToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxisPosition(temp0);
      }
    else
      {
      op->vtkAxisActor::SetAxisPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPositionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPositionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisPositionMinValue();
      }
    else
      {
      tempr = op->vtkAxisActor::GetAxisPositionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPositionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPositionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisPositionMaxValue();
      }
    else
      {
      tempr = op->vtkAxisActor::GetAxisPositionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetAxisPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisPosition();
      }
    else
      {
      tempr = op->vtkAxisActor::GetAxisPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMinMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMinMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisPositionToMinMin();
      }
    else
      {
      op->vtkAxisActor::SetAxisPositionToMinMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMinMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMinMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisPositionToMinMax();
      }
    else
      {
      op->vtkAxisActor::SetAxisPositionToMinMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMaxMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMaxMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisPositionToMaxMax();
      }
    else
      {
      op->vtkAxisActor::SetAxisPositionToMaxMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetAxisPositionToMaxMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisPositionToMaxMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisPositionToMaxMin();
      }
    else
      {
      op->vtkAxisActor::SetAxisPositionToMaxMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkCamera *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
    {
    if (ap.IsBound())
      {
      op->SetCamera(temp0);
      }
    else
      {
      op->vtkAxisActor::SetCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkCamera *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCamera();
      }
    else
      {
      tempr = op->vtkAxisActor::GetCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      tempr = op->vtkAxisActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_RenderTranslucentGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentGeometry(temp0);
      }
    else
      {
      tempr = op->vtkAxisActor::RenderTranslucentGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

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
      op->vtkAxisActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkAxisActor::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_ComputeMaxLabelLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeMaxLabelLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeMaxLabelLength(temp0);
      }
    else
      {
      tempr = op->vtkAxisActor::ComputeMaxLabelLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_ComputeTitleLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeTitleLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0[3];
  const int size0 = 3;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeTitleLength(temp0);
      }
    else
      {
      tempr = op->vtkAxisActor::ComputeTitleLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelScale(temp0);
      }
    else
      {
      op->vtkAxisActor::SetLabelScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetTitleScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTitleScale(temp0);
      }
    else
      {
      op->vtkAxisActor::SetTitleScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinorStart(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMinorStart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinorStart();
      }
    else
      {
      tempr = op->vtkAxisActor::GetMinorStart();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMajorStart(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMajorStart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMajorStart();
      }
    else
      {
      tempr = op->vtkAxisActor::GetMajorStart();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeltaMinor(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDeltaMinor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDeltaMinor();
      }
    else
      {
      tempr = op->vtkAxisActor::GetDeltaMinor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeltaMajor(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDeltaMajor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDeltaMajor();
      }
    else
      {
      tempr = op->vtkAxisActor::GetDeltaMajor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMinorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinorRangeStart(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMinorRangeStart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMinorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinorRangeStart();
      }
    else
      {
      tempr = op->vtkAxisActor::GetMinorRangeStart();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetMajorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMajorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMajorRangeStart(temp0);
      }
    else
      {
      op->vtkAxisActor::SetMajorRangeStart(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetMajorRangeStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMajorRangeStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMajorRangeStart();
      }
    else
      {
      tempr = op->vtkAxisActor::GetMajorRangeStart();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeltaRangeMinor(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDeltaRangeMinor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaRangeMinor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMinor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDeltaRangeMinor();
      }
    else
      {
      tempr = op->vtkAxisActor::GetDeltaRangeMinor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeltaRangeMajor(temp0);
      }
    else
      {
      op->vtkAxisActor::SetDeltaRangeMajor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_GetDeltaRangeMajor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRangeMajor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDeltaRangeMajor();
      }
    else
      {
      tempr = op->vtkAxisActor::GetDeltaRangeMajor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_SetLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkStringArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
    {
    if (ap.IsBound())
      {
      op->SetLabels(temp0);
      }
    else
      {
      op->vtkAxisActor::SetLabels(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAxisActor_BuildAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAxisActor *op = static_cast<vtkAxisActor *>(vp);

  vtkViewport *temp0 = NULL;
  bool temp1 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->BuildAxis(temp0, temp1);
      }
    else
      {
      op->vtkAxisActor::BuildAxis(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAxisActor_Methods[] = {
  {(char*)"GetClassName", PyvtkAxisActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAxisActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAxisActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAxisActor\nC++: vtkAxisActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAxisActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAxisActor\nC++: vtkAxisActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetPoint1Coordinate", PyvtkAxisActor_GetPoint1Coordinate, 1,
   (char*)"V.GetPoint1Coordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint1Coordinate()\n\nSpecify the position of the first point defining the axis.\n"},
  {(char*)"SetPoint1", PyvtkAxisActor_SetPoint1, 1,
   (char*)"V.SetPoint1([float, float, float])\nC++: virtual void SetPoint1(double x[3])\nV.SetPoint1(float, float, float)\nC++: virtual void SetPoint1(double x, double y, double z)\n\nSpecify the position of the first point defining the axis.\n"},
  {(char*)"GetPoint2Coordinate", PyvtkAxisActor_GetPoint2Coordinate, 1,
   (char*)"V.GetPoint2Coordinate() -> vtkCoordinate\nC++: virtual vtkCoordinate *GetPoint2Coordinate()\n\nSpecify the position of the second point defining the axis.\n"},
  {(char*)"SetPoint2", PyvtkAxisActor_SetPoint2, 1,
   (char*)"V.SetPoint2([float, float, float])\nC++: virtual void SetPoint2(double x[3])\nV.SetPoint2(float, float, float)\nC++: virtual void SetPoint2(double x, double y, double z)\n\nSpecify the position of the second point defining the axis.\n"},
  {(char*)"SetRange", PyvtkAxisActor_SetRange, 1,
   (char*)"V.SetRange(float, float)\nC++: void SetRange(double, double)\nV.SetRange((float, float))\nC++: void SetRange(double a[2])\n\n"},
  {(char*)"GetRange", PyvtkAxisActor_GetRange, 1,
   (char*)"V.GetRange() -> (float, float)\nC++: double *GetRange()\n\nSpecify the (min,max) axis range. This will be used in the\ngeneration of labels, if labels are visible.\n"},
  {(char*)"SetBounds", PyvtkAxisActor_SetBounds, 1,
   (char*)"V.SetBounds([float, float, float, float, float, float])\nC++: void SetBounds(double bounds[6])\nV.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nSet or get the bounds for this Actor as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {(char*)"GetBounds", PyvtkAxisActor_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds(void)\nV.GetBounds([float, float, float, float, float, float])\nC++: void GetBounds(double bounds[6])\n\nSet or get the bounds for this Actor as\n(Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {(char*)"SetLabelFormat", PyvtkAxisActor_SetLabelFormat, 1,
   (char*)"V.SetLabelFormat(string)\nC++: void SetLabelFormat(char *)\n\nSet/Get the format with which to print the labels on the axis.\n"},
  {(char*)"GetLabelFormat", PyvtkAxisActor_GetLabelFormat, 1,
   (char*)"V.GetLabelFormat() -> string\nC++: char *GetLabelFormat()\n\nSet/Get the format with which to print the labels on the axis.\n"},
  {(char*)"SetMinorTicksVisible", PyvtkAxisActor_SetMinorTicksVisible, 1,
   (char*)"V.SetMinorTicksVisible(int)\nC++: void SetMinorTicksVisible(int a)\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {(char*)"GetMinorTicksVisible", PyvtkAxisActor_GetMinorTicksVisible, 1,
   (char*)"V.GetMinorTicksVisible() -> int\nC++: int GetMinorTicksVisible()\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {(char*)"MinorTicksVisibleOn", PyvtkAxisActor_MinorTicksVisibleOn, 1,
   (char*)"V.MinorTicksVisibleOn()\nC++: void MinorTicksVisibleOn()\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {(char*)"MinorTicksVisibleOff", PyvtkAxisActor_MinorTicksVisibleOff, 1,
   (char*)"V.MinorTicksVisibleOff()\nC++: void MinorTicksVisibleOff()\n\nSet/Get the flag that controls whether the minor ticks are\nvisible.\n"},
  {(char*)"SetTitle", PyvtkAxisActor_SetTitle, 1,
   (char*)"V.SetTitle(string)\nC++: void SetTitle(const char *t)\n\nSet/Get the title of the axis actor,\n"},
  {(char*)"GetTitle", PyvtkAxisActor_GetTitle, 1,
   (char*)"V.GetTitle() -> string\nC++: char *GetTitle()\n\nSet/Get the title of the axis actor,\n"},
  {(char*)"SetMajorTickSize", PyvtkAxisActor_SetMajorTickSize, 1,
   (char*)"V.SetMajorTickSize(float)\nC++: void SetMajorTickSize(double a)\n\nSet/Get the size of the major tick marks\n"},
  {(char*)"GetMajorTickSize", PyvtkAxisActor_GetMajorTickSize, 1,
   (char*)"V.GetMajorTickSize() -> float\nC++: double GetMajorTickSize()\n\nSet/Get the size of the major tick marks\n"},
  {(char*)"SetMinorTickSize", PyvtkAxisActor_SetMinorTickSize, 1,
   (char*)"V.SetMinorTickSize(float)\nC++: void SetMinorTickSize(double a)\n\nSet/Get the size of the major tick marks\n"},
  {(char*)"GetMinorTickSize", PyvtkAxisActor_GetMinorTickSize, 1,
   (char*)"V.GetMinorTickSize() -> float\nC++: double GetMinorTickSize()\n\nSet/Get the size of the major tick marks\n"},
  {(char*)"SetTickLocation", PyvtkAxisActor_SetTickLocation, 1,
   (char*)"V.SetTickLocation(int)\nC++: void SetTickLocation(int)\n\nSet/Get the location of the ticks.\n"},
  {(char*)"GetTickLocationMinValue", PyvtkAxisActor_GetTickLocationMinValue, 1,
   (char*)"V.GetTickLocationMinValue() -> int\nC++: int GetTickLocationMinValue()\n\nSet/Get the location of the ticks.\n"},
  {(char*)"GetTickLocationMaxValue", PyvtkAxisActor_GetTickLocationMaxValue, 1,
   (char*)"V.GetTickLocationMaxValue() -> int\nC++: int GetTickLocationMaxValue()\n\nSet/Get the location of the ticks.\n"},
  {(char*)"GetTickLocation", PyvtkAxisActor_GetTickLocation, 1,
   (char*)"V.GetTickLocation() -> int\nC++: int GetTickLocation()\n\nSet/Get the location of the ticks.\n"},
  {(char*)"SetTickLocationToInside", PyvtkAxisActor_SetTickLocationToInside, 1,
   (char*)"V.SetTickLocationToInside()\nC++: void SetTickLocationToInside(void)\n\n"},
  {(char*)"SetTickLocationToOutside", PyvtkAxisActor_SetTickLocationToOutside, 1,
   (char*)"V.SetTickLocationToOutside()\nC++: void SetTickLocationToOutside(void)\n\n"},
  {(char*)"SetTickLocationToBoth", PyvtkAxisActor_SetTickLocationToBoth, 1,
   (char*)"V.SetTickLocationToBoth()\nC++: void SetTickLocationToBoth(void)\n\n"},
  {(char*)"SetAxisVisibility", PyvtkAxisActor_SetAxisVisibility, 1,
   (char*)"V.SetAxisVisibility(int)\nC++: void SetAxisVisibility(int a)\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"GetAxisVisibility", PyvtkAxisActor_GetAxisVisibility, 1,
   (char*)"V.GetAxisVisibility() -> int\nC++: int GetAxisVisibility()\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"AxisVisibilityOn", PyvtkAxisActor_AxisVisibilityOn, 1,
   (char*)"V.AxisVisibilityOn()\nC++: void AxisVisibilityOn()\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"AxisVisibilityOff", PyvtkAxisActor_AxisVisibilityOff, 1,
   (char*)"V.AxisVisibilityOff()\nC++: void AxisVisibilityOff()\n\nSet/Get visibility of the axis line.\n"},
  {(char*)"SetTickVisibility", PyvtkAxisActor_SetTickVisibility, 1,
   (char*)"V.SetTickVisibility(int)\nC++: void SetTickVisibility(int a)\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"GetTickVisibility", PyvtkAxisActor_GetTickVisibility, 1,
   (char*)"V.GetTickVisibility() -> int\nC++: int GetTickVisibility()\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"TickVisibilityOn", PyvtkAxisActor_TickVisibilityOn, 1,
   (char*)"V.TickVisibilityOn()\nC++: void TickVisibilityOn()\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"TickVisibilityOff", PyvtkAxisActor_TickVisibilityOff, 1,
   (char*)"V.TickVisibilityOff()\nC++: void TickVisibilityOff()\n\nSet/Get visibility of the axis tick marks.\n"},
  {(char*)"SetLabelVisibility", PyvtkAxisActor_SetLabelVisibility, 1,
   (char*)"V.SetLabelVisibility(int)\nC++: void SetLabelVisibility(int a)\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"GetLabelVisibility", PyvtkAxisActor_GetLabelVisibility, 1,
   (char*)"V.GetLabelVisibility() -> int\nC++: int GetLabelVisibility()\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"LabelVisibilityOn", PyvtkAxisActor_LabelVisibilityOn, 1,
   (char*)"V.LabelVisibilityOn()\nC++: void LabelVisibilityOn()\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"LabelVisibilityOff", PyvtkAxisActor_LabelVisibilityOff, 1,
   (char*)"V.LabelVisibilityOff()\nC++: void LabelVisibilityOff()\n\nSet/Get visibility of the axis labels.\n"},
  {(char*)"SetTitleVisibility", PyvtkAxisActor_SetTitleVisibility, 1,
   (char*)"V.SetTitleVisibility(int)\nC++: void SetTitleVisibility(int a)\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"GetTitleVisibility", PyvtkAxisActor_GetTitleVisibility, 1,
   (char*)"V.GetTitleVisibility() -> int\nC++: int GetTitleVisibility()\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"TitleVisibilityOn", PyvtkAxisActor_TitleVisibilityOn, 1,
   (char*)"V.TitleVisibilityOn()\nC++: void TitleVisibilityOn()\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"TitleVisibilityOff", PyvtkAxisActor_TitleVisibilityOff, 1,
   (char*)"V.TitleVisibilityOff()\nC++: void TitleVisibilityOff()\n\nSet/Get visibility of the axis title.\n"},
  {(char*)"SetDrawGridlines", PyvtkAxisActor_SetDrawGridlines, 1,
   (char*)"V.SetDrawGridlines(int)\nC++: void SetDrawGridlines(int a)\n\nSet/Get whether gridlines should be drawn.\n"},
  {(char*)"GetDrawGridlines", PyvtkAxisActor_GetDrawGridlines, 1,
   (char*)"V.GetDrawGridlines() -> int\nC++: int GetDrawGridlines()\n\nSet/Get whether gridlines should be drawn.\n"},
  {(char*)"DrawGridlinesOn", PyvtkAxisActor_DrawGridlinesOn, 1,
   (char*)"V.DrawGridlinesOn()\nC++: void DrawGridlinesOn()\n\nSet/Get whether gridlines should be drawn.\n"},
  {(char*)"DrawGridlinesOff", PyvtkAxisActor_DrawGridlinesOff, 1,
   (char*)"V.DrawGridlinesOff()\nC++: void DrawGridlinesOff()\n\nSet/Get whether gridlines should be drawn.\n"},
  {(char*)"SetGridlineXLength", PyvtkAxisActor_SetGridlineXLength, 1,
   (char*)"V.SetGridlineXLength(float)\nC++: void SetGridlineXLength(double a)\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"GetGridlineXLength", PyvtkAxisActor_GetGridlineXLength, 1,
   (char*)"V.GetGridlineXLength() -> float\nC++: double GetGridlineXLength()\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"SetGridlineYLength", PyvtkAxisActor_SetGridlineYLength, 1,
   (char*)"V.SetGridlineYLength(float)\nC++: void SetGridlineYLength(double a)\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"GetGridlineYLength", PyvtkAxisActor_GetGridlineYLength, 1,
   (char*)"V.GetGridlineYLength() -> float\nC++: double GetGridlineYLength()\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"SetGridlineZLength", PyvtkAxisActor_SetGridlineZLength, 1,
   (char*)"V.SetGridlineZLength(float)\nC++: void SetGridlineZLength(double a)\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"GetGridlineZLength", PyvtkAxisActor_GetGridlineZLength, 1,
   (char*)"V.GetGridlineZLength() -> float\nC++: double GetGridlineZLength()\n\nSet/Get the length to use when drawing gridlines.\n"},
  {(char*)"SetAxisType", PyvtkAxisActor_SetAxisType, 1,
   (char*)"V.SetAxisType(int)\nC++: void SetAxisType(int)\n\nSet/Get the type of this axis.\n"},
  {(char*)"GetAxisTypeMinValue", PyvtkAxisActor_GetAxisTypeMinValue, 1,
   (char*)"V.GetAxisTypeMinValue() -> int\nC++: int GetAxisTypeMinValue()\n\nSet/Get the type of this axis.\n"},
  {(char*)"GetAxisTypeMaxValue", PyvtkAxisActor_GetAxisTypeMaxValue, 1,
   (char*)"V.GetAxisTypeMaxValue() -> int\nC++: int GetAxisTypeMaxValue()\n\nSet/Get the type of this axis.\n"},
  {(char*)"GetAxisType", PyvtkAxisActor_GetAxisType, 1,
   (char*)"V.GetAxisType() -> int\nC++: int GetAxisType()\n\nSet/Get the type of this axis.\n"},
  {(char*)"SetAxisTypeToX", PyvtkAxisActor_SetAxisTypeToX, 1,
   (char*)"V.SetAxisTypeToX()\nC++: void SetAxisTypeToX(void)\n\nSet/Get the type of this axis.\n"},
  {(char*)"SetAxisTypeToY", PyvtkAxisActor_SetAxisTypeToY, 1,
   (char*)"V.SetAxisTypeToY()\nC++: void SetAxisTypeToY(void)\n\nSet/Get the type of this axis.\n"},
  {(char*)"SetAxisTypeToZ", PyvtkAxisActor_SetAxisTypeToZ, 1,
   (char*)"V.SetAxisTypeToZ()\nC++: void SetAxisTypeToZ(void)\n\nSet/Get the type of this axis.\n"},
  {(char*)"SetAxisPosition", PyvtkAxisActor_SetAxisPosition, 1,
   (char*)"V.SetAxisPosition(int)\nC++: void SetAxisPosition(int)\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {(char*)"GetAxisPositionMinValue", PyvtkAxisActor_GetAxisPositionMinValue, 1,
   (char*)"V.GetAxisPositionMinValue() -> int\nC++: int GetAxisPositionMinValue()\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {(char*)"GetAxisPositionMaxValue", PyvtkAxisActor_GetAxisPositionMaxValue, 1,
   (char*)"V.GetAxisPositionMaxValue() -> int\nC++: int GetAxisPositionMaxValue()\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {(char*)"GetAxisPosition", PyvtkAxisActor_GetAxisPosition, 1,
   (char*)"V.GetAxisPosition() -> int\nC++: int GetAxisPosition()\n\nSet/Get the position of this axis (in relation to an an assumed\nbounding box).  For an x-type axis, MINMIN corresponds to the\nx-edge in the bounding box where Y values are minimum and Z\nvalues are minimum. For a y-type axis, MAXMIN corresponds to the\ny-edge where X values are maximum and Z values are minimum.\n"},
  {(char*)"SetAxisPositionToMinMin", PyvtkAxisActor_SetAxisPositionToMinMin, 1,
   (char*)"V.SetAxisPositionToMinMin()\nC++: void SetAxisPositionToMinMin(void)\n\n"},
  {(char*)"SetAxisPositionToMinMax", PyvtkAxisActor_SetAxisPositionToMinMax, 1,
   (char*)"V.SetAxisPositionToMinMax()\nC++: void SetAxisPositionToMinMax(void)\n\n"},
  {(char*)"SetAxisPositionToMaxMax", PyvtkAxisActor_SetAxisPositionToMaxMax, 1,
   (char*)"V.SetAxisPositionToMaxMax()\nC++: void SetAxisPositionToMaxMax(void)\n\n"},
  {(char*)"SetAxisPositionToMaxMin", PyvtkAxisActor_SetAxisPositionToMaxMin, 1,
   (char*)"V.SetAxisPositionToMaxMin()\nC++: void SetAxisPositionToMaxMin(void)\n\n"},
  {(char*)"SetCamera", PyvtkAxisActor_SetCamera, 1,
   (char*)"V.SetCamera(vtkCamera)\nC++: virtual void SetCamera(vtkCamera *)\n\nSet/Get the camera for this axis.  The camera is used by the\nlabels to 'follow' the camera and be legible from any viewpoint.\n"},
  {(char*)"GetCamera", PyvtkAxisActor_GetCamera, 1,
   (char*)"V.GetCamera() -> vtkCamera\nC++: vtkCamera *GetCamera()\n\nSet/Get the camera for this axis.  The camera is used by the\nlabels to 'follow' the camera and be legible from any viewpoint.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkAxisActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nDraw the axis.\n"},
  {(char*)"RenderTranslucentGeometry", PyvtkAxisActor_RenderTranslucentGeometry, 1,
   (char*)"V.RenderTranslucentGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentGeometry(vtkViewport *)\n\nDraw the axis.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAxisActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"ShallowCopy", PyvtkAxisActor_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: void ShallowCopy(vtkProp *prop)\n\nShallow copy of an axis actor. Overloads the virtual vtkProp\nmethod.\n"},
  {(char*)"ComputeMaxLabelLength", PyvtkAxisActor_ComputeMaxLabelLength, 1,
   (char*)"V.ComputeMaxLabelLength((float, float, float)) -> float\nC++: double ComputeMaxLabelLength(const double[3])\n\n"},
  {(char*)"ComputeTitleLength", PyvtkAxisActor_ComputeTitleLength, 1,
   (char*)"V.ComputeTitleLength((float, float, float)) -> float\nC++: double ComputeTitleLength(const double[3])\n\n"},
  {(char*)"SetLabelScale", PyvtkAxisActor_SetLabelScale, 1,
   (char*)"V.SetLabelScale(float)\nC++: void SetLabelScale(const double)\n\n"},
  {(char*)"SetTitleScale", PyvtkAxisActor_SetTitleScale, 1,
   (char*)"V.SetTitleScale(float)\nC++: void SetTitleScale(const double)\n\n"},
  {(char*)"SetMinorStart", PyvtkAxisActor_SetMinorStart, 1,
   (char*)"V.SetMinorStart(float)\nC++: void SetMinorStart(double a)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"GetMinorStart", PyvtkAxisActor_GetMinorStart, 1,
   (char*)"V.GetMinorStart() -> float\nC++: double GetMinorStart()\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"SetMajorStart", PyvtkAxisActor_SetMajorStart, 1,
   (char*)"V.SetMajorStart(float)\nC++: void SetMajorStart(double a)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"GetMajorStart", PyvtkAxisActor_GetMajorStart, 1,
   (char*)"V.GetMajorStart() -> float\nC++: double GetMajorStart()\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"SetDeltaMinor", PyvtkAxisActor_SetDeltaMinor, 1,
   (char*)"V.SetDeltaMinor(float)\nC++: void SetDeltaMinor(double a)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"GetDeltaMinor", PyvtkAxisActor_GetDeltaMinor, 1,
   (char*)"V.GetDeltaMinor() -> float\nC++: double GetDeltaMinor()\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"SetDeltaMajor", PyvtkAxisActor_SetDeltaMajor, 1,
   (char*)"V.SetDeltaMajor(float)\nC++: void SetDeltaMajor(double a)\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"GetDeltaMajor", PyvtkAxisActor_GetDeltaMajor, 1,
   (char*)"V.GetDeltaMajor() -> float\nC++: double GetDeltaMajor()\n\nSet/Get the starting position for minor and major tick points,\nand the delta values that determine their spacing.\n"},
  {(char*)"SetMinorRangeStart", PyvtkAxisActor_SetMinorRangeStart, 1,
   (char*)"V.SetMinorRangeStart(float)\nC++: void SetMinorRangeStart(double a)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"GetMinorRangeStart", PyvtkAxisActor_GetMinorRangeStart, 1,
   (char*)"V.GetMinorRangeStart() -> float\nC++: double GetMinorRangeStart()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"SetMajorRangeStart", PyvtkAxisActor_SetMajorRangeStart, 1,
   (char*)"V.SetMajorRangeStart(float)\nC++: void SetMajorRangeStart(double a)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"GetMajorRangeStart", PyvtkAxisActor_GetMajorRangeStart, 1,
   (char*)"V.GetMajorRangeStart() -> float\nC++: double GetMajorRangeStart()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"SetDeltaRangeMinor", PyvtkAxisActor_SetDeltaRangeMinor, 1,
   (char*)"V.SetDeltaRangeMinor(float)\nC++: void SetDeltaRangeMinor(double a)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"GetDeltaRangeMinor", PyvtkAxisActor_GetDeltaRangeMinor, 1,
   (char*)"V.GetDeltaRangeMinor() -> float\nC++: double GetDeltaRangeMinor()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"SetDeltaRangeMajor", PyvtkAxisActor_SetDeltaRangeMajor, 1,
   (char*)"V.SetDeltaRangeMajor(float)\nC++: void SetDeltaRangeMajor(double a)\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"GetDeltaRangeMajor", PyvtkAxisActor_GetDeltaRangeMajor, 1,
   (char*)"V.GetDeltaRangeMajor() -> float\nC++: double GetDeltaRangeMajor()\n\nSet/Get the starting position for minor and major tick points on\nthe range and the delta values that determine their spacing. The\nrange and the position need not be identical. ie the displayed\nvalues need not match the actual positions in 3D space.\n"},
  {(char*)"SetLabels", PyvtkAxisActor_SetLabels, 1,
   (char*)"V.SetLabels(vtkStringArray)\nC++: void SetLabels(vtkStringArray *labels)\n\n"},
  {(char*)"BuildAxis", PyvtkAxisActor_BuildAxis, 1,
   (char*)"V.BuildAxis(vtkViewport, bool)\nC++: void BuildAxis(vtkViewport *viewport, bool)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAxisActor_StaticNew()
{
  return vtkAxisActor::New();
}

PyObject *PyVTKClass_vtkAxisActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAxisActor_StaticNew,
    PyvtkAxisActor_Methods,
    "vtkAxisActor", modulename,
    NULL, NULL,
    PyvtkAxisActor_Doc(),
    PyVTKClass_vtkActorNew(modulename));
  return cls;
}

const char **PyvtkAxisActor_Doc()
{
  static const char *docstring[] = {
    "vtkAxisActor - Create an axis with tick marks and labels\n\n",
    "Superclass: vtkActor\n\n",
    "vtkAxisActor creates an axis with tick marks, labels, and/or a title,\ndepending on the particular instance variable settings. It is assumed\nthat the axes is part of a bounding box and is orthoganal to one of\nthe coordinate axes.  To use this class, you typically specify two\npoints defining the start and end points of the line (xyz definition\nusing vtkCoordinate class), the axis type (X, Y or Z), t",
    "he axis\nlocation in relation to the bounding box, the bounding box, the\nnumber of labels, and the data range (min,max). You can also control\nwhat parts of the axis are visible including the line, the tick\nmarks, the labels, and the title. It is also possible to control\ngridlines, and specifiy on which 'side' the tickmarks are drawn\n(again with respect to the underlying assumed bounding box). You c",
    "an\nalso specify the label format (a printf style format).\n\nThis class decides how to locate the labels, and how to create\nreasonable tick marks and labels.\n\nLabels follow the camera so as to be legible from any viewpoint.\n\nThe instance variables Point1 and Point2 are instances of\nvtkCoordinate. All calculations and references are in World\nCoordinates.\n\nNotes:\n\nThis class was adapted from a 2D vers",
    "ion created by Hank Childs\ncalled vtkHankAxisActor2D.\n\nSee Also:\n\nvtkActor vtkVectorText vtkPolyDataMapper vtkAxisActor2D vtkCoordinate\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAxisActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAxisActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAxisActor", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(200);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MAX_LABELS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1000);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_MAX_TICKS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_AXIS_TYPE_X", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_AXIS_TYPE_Y", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_AXIS_TYPE_Z", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TICKS_INSIDE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TICKS_OUTSIDE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_TICKS_BOTH", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_AXIS_POS_MINMIN", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_AXIS_POS_MINMAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_AXIS_POS_MAXMAX", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_AXIS_POS_MAXMIN", o) != 0)
    {
    Py_DECREF(o);
    }

}

