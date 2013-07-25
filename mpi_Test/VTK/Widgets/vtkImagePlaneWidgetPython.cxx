// python wrapper for vtkImagePlaneWidget
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
#include "vtkImagePlaneWidget.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImagePlaneWidget(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImagePlaneWidget(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImagePlaneWidgetNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImagePlaneWidgetNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataSourceWidgetNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataSourceWidgetNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataSourceWidgetNew
#endif

static const char **PyvtkImagePlaneWidget_Doc();


static PyObject *
PyvtkImagePlaneWidget_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      tempr = op->vtkImagePlaneWidget::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      tempr = op->vtkImagePlaneWidget::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkImagePlaneWidget *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::NewInstance();
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
PyvtkImagePlaneWidget_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImagePlaneWidget *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImagePlaneWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEnabled(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetEnabled(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::PlaceWidget(temp0);
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
PyvtkImagePlaneWidget_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PlaceWidget();
      }
    else
      {
      op->vtkImagePlaneWidget::PlaceWidget();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_PlaceWidget_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImagePlaneWidget::PlaceWidget(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImagePlaneWidget_PlaceWidget_s1(self, args);
    case 0:
      return PyvtkImagePlaneWidget_PlaceWidget_s2(self, args);
    case 6:
      return PyvtkImagePlaneWidget_PlaceWidget_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkImagePlaneWidget_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::SetOrigin(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::SetOrigin(temp0);
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
PyvtkImagePlaneWidget_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImagePlaneWidget_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_SetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return NULL;
}



static PyObject *
PyvtkImagePlaneWidget_GetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      tempr = op->vtkImagePlaneWidget::GetOrigin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::GetOrigin(temp0);
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
PyvtkImagePlaneWidget_GetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImagePlaneWidget_GetOrigin_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetOrigin_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOrigin");
  return NULL;
}



static PyObject *
PyvtkImagePlaneWidget_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::SetPoint1(temp0);
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
PyvtkImagePlaneWidget_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImagePlaneWidget_SetPoint1_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkImagePlaneWidget_GetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      tempr = op->vtkImagePlaneWidget::GetPoint1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetPoint1(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::GetPoint1(temp0);
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
PyvtkImagePlaneWidget_GetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImagePlaneWidget_GetPoint1_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1");
  return NULL;
}



static PyObject *
PyvtkImagePlaneWidget_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::SetPoint2(temp0);
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
PyvtkImagePlaneWidget_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImagePlaneWidget_SetPoint2_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkImagePlaneWidget_GetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      tempr = op->vtkImagePlaneWidget::GetPoint2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetPoint2(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::GetPoint2(temp0);
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
PyvtkImagePlaneWidget_GetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImagePlaneWidget_GetPoint2_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2");
  return NULL;
}



static PyObject *
PyvtkImagePlaneWidget_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      tempr = op->vtkImagePlaneWidget::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetCenter(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::GetCenter(temp0);
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
PyvtkImagePlaneWidget_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImagePlaneWidget_GetCenter_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return NULL;
}



static PyObject *
PyvtkImagePlaneWidget_GetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      tempr = op->vtkImagePlaneWidget::GetNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkImagePlaneWidget_GetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::GetNormal(temp0);
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
PyvtkImagePlaneWidget_GetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImagePlaneWidget_GetNormal_s1(self, args);
    case 1:
      return PyvtkImagePlaneWidget_GetNormal_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetNormal");
  return NULL;
}



static PyObject *
PyvtkImagePlaneWidget_GetVector1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetVector1(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::GetVector1(temp0);
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
PyvtkImagePlaneWidget_GetVector2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetVector2(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::GetVector2(temp0);
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
PyvtkImagePlaneWidget_GetSliceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSliceIndex();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetSliceIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetSliceIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSliceIndex(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetSliceIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetSlicePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSlicePosition();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetSlicePosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetSlicePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSlicePosition(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetSlicePosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResliceInterpolate(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetResliceInterpolate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetResliceInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResliceInterpolate();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetResliceInterpolate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolateToNearestNeighbour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToNearestNeighbour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetResliceInterpolateToNearestNeighbour();
      }
    else
      {
      op->vtkImagePlaneWidget::SetResliceInterpolateToNearestNeighbour();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolateToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetResliceInterpolateToLinear();
      }
    else
      {
      op->vtkImagePlaneWidget::SetResliceInterpolateToLinear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetResliceInterpolateToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetResliceInterpolateToCubic();
      }
    else
      {
      op->vtkImagePlaneWidget::SetResliceInterpolateToCubic();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetResliceOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResliceOutput();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetResliceOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetRestrictPlaneToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRestrictPlaneToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRestrictPlaneToVolume(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetRestrictPlaneToVolume(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRestrictPlaneToVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRestrictPlaneToVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRestrictPlaneToVolume();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetRestrictPlaneToVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_RestrictPlaneToVolumeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPlaneToVolumeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestrictPlaneToVolumeOn();
      }
    else
      {
      op->vtkImagePlaneWidget::RestrictPlaneToVolumeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_RestrictPlaneToVolumeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RestrictPlaneToVolumeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RestrictPlaneToVolumeOff();
      }
    else
      {
      op->vtkImagePlaneWidget::RestrictPlaneToVolumeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetUserControlledLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserControlledLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUserControlledLookupTable(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetUserControlledLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetUserControlledLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserControlledLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUserControlledLookupTable();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetUserControlledLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UserControlledLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserControlledLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UserControlledLookupTableOn();
      }
    else
      {
      op->vtkImagePlaneWidget::UserControlledLookupTableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UserControlledLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserControlledLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UserControlledLookupTableOff();
      }
    else
      {
      op->vtkImagePlaneWidget::UserControlledLookupTableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTextureInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureInterpolate(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetTextureInterpolate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTextureInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureInterpolate();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetTextureInterpolate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureInterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureInterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TextureInterpolateOn();
      }
    else
      {
      op->vtkImagePlaneWidget::TextureInterpolateOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureInterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureInterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TextureInterpolateOff();
      }
    else
      {
      op->vtkImagePlaneWidget::TextureInterpolateOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTextureVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureVisibility(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetTextureVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTextureVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureVisibility();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetTextureVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TextureVisibilityOn();
      }
    else
      {
      op->vtkImagePlaneWidget::TextureVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_TextureVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->TextureVisibilityOff();
      }
    else
      {
      op->vtkImagePlaneWidget::TextureVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->vtkImagePlaneWidget::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPolyDataAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      tempr = op->vtkImagePlaneWidget::GetPolyDataAlgorithm();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UpdatePlacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePlacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdatePlacement();
      }
    else
      {
      op->vtkImagePlaneWidget::UpdatePlacement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexture();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkImageMapToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorMap();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetColorMap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkImageMapToColors *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapToColors"))
    {
    if (ap.IsBound())
      {
      op->SetColorMap(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetColorMap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetPlaneProperty(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetPlaneProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      tempr = op->vtkImagePlaneWidget::GetPlaneProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedPlaneProperty(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetSelectedPlaneProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetSelectedPlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      tempr = op->vtkImagePlaneWidget::GetSelectedPlaneProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneOrientation(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetPlaneOrientation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetPlaneOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlaneOrientation();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetPlaneOrientation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientationToXAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientationToXAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneOrientationToXAxes();
      }
    else
      {
      op->vtkImagePlaneWidget::SetPlaneOrientationToXAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientationToYAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientationToYAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneOrientationToYAxes();
      }
    else
      {
      op->vtkImagePlaneWidget::SetPlaneOrientationToYAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPlaneOrientationToZAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneOrientationToZAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneOrientationToZAxes();
      }
    else
      {
      op->vtkImagePlaneWidget::SetPlaneOrientationToZAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkAbstractPropPicker *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPropPicker"))
    {
    if (ap.IsBound())
      {
      op->SetPicker(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetPicker(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkLookupTable *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
    {
    if (ap.IsBound())
      {
      op->SetLookupTable(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkLookupTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLookupTable();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDisplayText(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetDisplayText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetDisplayText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplayText();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetDisplayText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_DisplayTextOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisplayTextOn();
      }
    else
      {
      op->vtkImagePlaneWidget::DisplayTextOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_DisplayTextOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayTextOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DisplayTextOff();
      }
    else
      {
      op->vtkImagePlaneWidget::DisplayTextOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetCursorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCursorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetCursorProperty(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetCursorProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCursorProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorProperty();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetCursorProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMarginProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarginProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetMarginProperty(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetMarginProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarginProperty();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMarginProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMarginSizeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarginSizeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMarginSizeX(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetMarginSizeX(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeXMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeXMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarginSizeXMinValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMarginSizeXMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeXMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeXMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarginSizeXMaxValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMarginSizeXMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarginSizeX();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMarginSizeX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMarginSizeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarginSizeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMarginSizeY(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetMarginSizeY(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeYMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeYMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarginSizeYMinValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMarginSizeYMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeYMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeYMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarginSizeYMaxValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMarginSizeYMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMarginSizeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarginSizeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMarginSizeY();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMarginSizeY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextProperty();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetTexturePlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexturePlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTexturePlaneProperty(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetTexturePlaneProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetTexturePlaneProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexturePlaneProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexturePlaneProperty();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetTexturePlaneProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0;
  double temp1;
  int temp2 = 0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      op->SetWindowLevel(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImagePlaneWidget::SetWindowLevel(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetWindowLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

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
      op->GetWindowLevel(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::GetWindowLevel(temp0);
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
PyvtkImagePlaneWidget_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindow();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetWindow();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLevel();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCursorData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double temp0[4];
  double save0[4];
  const int size0 = 4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GetCursorData(temp0);
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetCursorData(temp0);
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
PyvtkImagePlaneWidget_GetCursorDataStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCursorDataStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCursorDataStatus();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetCursorDataStatus();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCurrentCursorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentCursorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentCursorPosition();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetCurrentCursorPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetCurrentImageValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentImageValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentImageValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetCurrentImageValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetResliceAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResliceAxes();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetResliceAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetReslice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReslice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  vtkImageReslice *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReslice();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetReslice();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetUseContinuousCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseContinuousCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseContinuousCursor(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetUseContinuousCursor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetUseContinuousCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseContinuousCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseContinuousCursor();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetUseContinuousCursor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UseContinuousCursorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCursorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseContinuousCursorOn();
      }
    else
      {
      op->vtkImagePlaneWidget::UseContinuousCursorOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_UseContinuousCursorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseContinuousCursorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseContinuousCursorOff();
      }
    else
      {
      op->vtkImagePlaneWidget::UseContinuousCursorOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteraction(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetInteraction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInteraction();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetInteraction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_InteractionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractionOn();
      }
    else
      {
      op->vtkImagePlaneWidget::InteractionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_InteractionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InteractionOff();
      }
    else
      {
      op->vtkImagePlaneWidget::InteractionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetLeftButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftButtonAction(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetLeftButtonAction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonActionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonActionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftButtonActionMinValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetLeftButtonActionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonActionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonActionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftButtonActionMaxValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetLeftButtonActionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftButtonAction();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetLeftButtonAction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMiddleButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMiddleButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMiddleButtonAction(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetMiddleButtonAction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonActionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonActionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMiddleButtonActionMinValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMiddleButtonActionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonActionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonActionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMiddleButtonActionMaxValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMiddleButtonActionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMiddleButtonAction();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMiddleButtonAction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetRightButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRightButtonAction(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetRightButtonAction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonActionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonActionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightButtonActionMinValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetRightButtonActionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonActionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonActionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightButtonActionMaxValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetRightButtonActionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightButtonAction();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetRightButtonAction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetLeftButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLeftButtonAutoModifier(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetLeftButtonAutoModifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAutoModifierMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftButtonAutoModifierMinValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetLeftButtonAutoModifierMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAutoModifierMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftButtonAutoModifierMaxValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetLeftButtonAutoModifierMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetLeftButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeftButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLeftButtonAutoModifier();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetLeftButtonAutoModifier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetMiddleButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMiddleButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMiddleButtonAutoModifier(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetMiddleButtonAutoModifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAutoModifierMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMiddleButtonAutoModifierMinValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMiddleButtonAutoModifierMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAutoModifierMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMiddleButtonAutoModifierMaxValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMiddleButtonAutoModifierMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetMiddleButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMiddleButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMiddleButtonAutoModifier();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetMiddleButtonAutoModifier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_SetRightButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRightButtonAutoModifier(temp0);
      }
    else
      {
      op->vtkImagePlaneWidget::SetRightButtonAutoModifier(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAutoModifierMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAutoModifierMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightButtonAutoModifierMinValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetRightButtonAutoModifierMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAutoModifierMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAutoModifierMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightButtonAutoModifierMaxValue();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetRightButtonAutoModifierMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImagePlaneWidget_GetRightButtonAutoModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightButtonAutoModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImagePlaneWidget *op = static_cast<vtkImagePlaneWidget *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRightButtonAutoModifier();
      }
    else
      {
      tempr = op->vtkImagePlaneWidget::GetRightButtonAutoModifier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImagePlaneWidget_Methods[] = {
  {(char*)"GetClassName", PyvtkImagePlaneWidget_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImagePlaneWidget_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImagePlaneWidget_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImagePlaneWidget\nC++: vtkImagePlaneWidget *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImagePlaneWidget_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImagePlaneWidget\nC++: vtkImagePlaneWidget *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetEnabled", PyvtkImagePlaneWidget_SetEnabled, 1,
   (char*)"V.SetEnabled(int)\nC++: virtual void SetEnabled(int)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"PlaceWidget", PyvtkImagePlaneWidget_PlaceWidget, 1,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget()\nC++: void PlaceWidget()\nV.PlaceWidget(float, float, float, float, float, float)\nC++: void PlaceWidget(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nMethods that satisfy the superclass' API.\n"},
  {(char*)"SetInput", PyvtkImagePlaneWidget_SetInput, 1,
   (char*)"V.SetInput(vtkDataSet)\nC++: void SetInput(vtkDataSet *input)\n\nSet the vtkImageData* input for the vtkImageReslice.\n"},
  {(char*)"SetOrigin", PyvtkImagePlaneWidget_SetOrigin, 1,
   (char*)"V.SetOrigin(float, float, float)\nC++: void SetOrigin(double x, double y, double z)\nV.SetOrigin([float, float, float])\nC++: void SetOrigin(double xyz[3])\n\nSet/Get the origin of the plane.\n"},
  {(char*)"GetOrigin", PyvtkImagePlaneWidget_GetOrigin, 1,
   (char*)"V.GetOrigin() -> (float, float, float)\nC++: double *GetOrigin()\nV.GetOrigin([float, float, float])\nC++: void GetOrigin(double xyz[3])\n\nSet/Get the origin of the plane.\n"},
  {(char*)"SetPoint1", PyvtkImagePlaneWidget_SetPoint1, 1,
   (char*)"V.SetPoint1(float, float, float)\nC++: void SetPoint1(double x, double y, double z)\nV.SetPoint1([float, float, float])\nC++: void SetPoint1(double xyz[3])\n\nSet/Get the position of the point defining the first axis of the\nplane.\n"},
  {(char*)"GetPoint1", PyvtkImagePlaneWidget_GetPoint1, 1,
   (char*)"V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\nV.GetPoint1([float, float, float])\nC++: void GetPoint1(double xyz[3])\n\nSet/Get the position of the point defining the first axis of the\nplane.\n"},
  {(char*)"SetPoint2", PyvtkImagePlaneWidget_SetPoint2, 1,
   (char*)"V.SetPoint2(float, float, float)\nC++: void SetPoint2(double x, double y, double z)\nV.SetPoint2([float, float, float])\nC++: void SetPoint2(double xyz[3])\n\nSet/Get the position of the point defining the second axis of the\nplane.\n"},
  {(char*)"GetPoint2", PyvtkImagePlaneWidget_GetPoint2, 1,
   (char*)"V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\nV.GetPoint2([float, float, float])\nC++: void GetPoint2(double xyz[3])\n\nSet/Get the position of the point defining the second axis of the\nplane.\n"},
  {(char*)"GetCenter", PyvtkImagePlaneWidget_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\nV.GetCenter([float, float, float])\nC++: void GetCenter(double xyz[3])\n\nGet the center of the plane.\n"},
  {(char*)"GetNormal", PyvtkImagePlaneWidget_GetNormal, 1,
   (char*)"V.GetNormal() -> (float, float, float)\nC++: double *GetNormal()\nV.GetNormal([float, float, float])\nC++: void GetNormal(double xyz[3])\n\nGet the normal to the plane.\n"},
  {(char*)"GetVector1", PyvtkImagePlaneWidget_GetVector1, 1,
   (char*)"V.GetVector1([float, float, float])\nC++: void GetVector1(double v1[3])\n\nGet the vector from the plane origin to point1.\n"},
  {(char*)"GetVector2", PyvtkImagePlaneWidget_GetVector2, 1,
   (char*)"V.GetVector2([float, float, float])\nC++: void GetVector2(double v2[3])\n\nGet the vector from the plane origin to point2.\n"},
  {(char*)"GetSliceIndex", PyvtkImagePlaneWidget_GetSliceIndex, 1,
   (char*)"V.GetSliceIndex() -> int\nC++: int GetSliceIndex()\n\nGet the slice position in terms of the data extent.\n"},
  {(char*)"SetSliceIndex", PyvtkImagePlaneWidget_SetSliceIndex, 1,
   (char*)"V.SetSliceIndex(int)\nC++: void SetSliceIndex(int index)\n\nSet the slice position in terms of the data extent.\n"},
  {(char*)"GetSlicePosition", PyvtkImagePlaneWidget_GetSlicePosition, 1,
   (char*)"V.GetSlicePosition() -> float\nC++: double GetSlicePosition()\n\nGet the position of the slice along its normal.\n"},
  {(char*)"SetSlicePosition", PyvtkImagePlaneWidget_SetSlicePosition, 1,
   (char*)"V.SetSlicePosition(float)\nC++: void SetSlicePosition(double position)\n\nSet the position of the slice along its normal.\n"},
  {(char*)"SetResliceInterpolate", PyvtkImagePlaneWidget_SetResliceInterpolate, 1,
   (char*)"V.SetResliceInterpolate(int)\nC++: void SetResliceInterpolate(int)\n\nSet the interpolation to use when texturing the plane.\n"},
  {(char*)"GetResliceInterpolate", PyvtkImagePlaneWidget_GetResliceInterpolate, 1,
   (char*)"V.GetResliceInterpolate() -> int\nC++: int GetResliceInterpolate()\n\nSet the interpolation to use when texturing the plane.\n"},
  {(char*)"SetResliceInterpolateToNearestNeighbour", PyvtkImagePlaneWidget_SetResliceInterpolateToNearestNeighbour, 1,
   (char*)"V.SetResliceInterpolateToNearestNeighbour()\nC++: void SetResliceInterpolateToNearestNeighbour()\n\nSet the interpolation to use when texturing the plane.\n"},
  {(char*)"SetResliceInterpolateToLinear", PyvtkImagePlaneWidget_SetResliceInterpolateToLinear, 1,
   (char*)"V.SetResliceInterpolateToLinear()\nC++: void SetResliceInterpolateToLinear()\n\nSet the interpolation to use when texturing the plane.\n"},
  {(char*)"SetResliceInterpolateToCubic", PyvtkImagePlaneWidget_SetResliceInterpolateToCubic, 1,
   (char*)"V.SetResliceInterpolateToCubic()\nC++: void SetResliceInterpolateToCubic()\n\nSet the interpolation to use when texturing the plane.\n"},
  {(char*)"GetResliceOutput", PyvtkImagePlaneWidget_GetResliceOutput, 1,
   (char*)"V.GetResliceOutput() -> vtkImageData\nC++: vtkImageData *GetResliceOutput()\n\nConvenience method to get the vtkImageReslice output.\n"},
  {(char*)"SetRestrictPlaneToVolume", PyvtkImagePlaneWidget_SetRestrictPlaneToVolume, 1,
   (char*)"V.SetRestrictPlaneToVolume(int)\nC++: void SetRestrictPlaneToVolume(int a)\n\nMake sure that the plane remains within the volume. Default is\nOn.\n"},
  {(char*)"GetRestrictPlaneToVolume", PyvtkImagePlaneWidget_GetRestrictPlaneToVolume, 1,
   (char*)"V.GetRestrictPlaneToVolume() -> int\nC++: int GetRestrictPlaneToVolume()\n\nMake sure that the plane remains within the volume. Default is\nOn.\n"},
  {(char*)"RestrictPlaneToVolumeOn", PyvtkImagePlaneWidget_RestrictPlaneToVolumeOn, 1,
   (char*)"V.RestrictPlaneToVolumeOn()\nC++: void RestrictPlaneToVolumeOn()\n\nMake sure that the plane remains within the volume. Default is\nOn.\n"},
  {(char*)"RestrictPlaneToVolumeOff", PyvtkImagePlaneWidget_RestrictPlaneToVolumeOff, 1,
   (char*)"V.RestrictPlaneToVolumeOff()\nC++: void RestrictPlaneToVolumeOff()\n\nMake sure that the plane remains within the volume. Default is\nOn.\n"},
  {(char*)"SetUserControlledLookupTable", PyvtkImagePlaneWidget_SetUserControlledLookupTable, 1,
   (char*)"V.SetUserControlledLookupTable(int)\nC++: void SetUserControlledLookupTable(int a)\n\nLet the user control the lookup table. NOTE: apply this method\nBEFORE applying the SetLookupTable method. Default is Off.\n"},
  {(char*)"GetUserControlledLookupTable", PyvtkImagePlaneWidget_GetUserControlledLookupTable, 1,
   (char*)"V.GetUserControlledLookupTable() -> int\nC++: int GetUserControlledLookupTable()\n\nLet the user control the lookup table. NOTE: apply this method\nBEFORE applying the SetLookupTable method. Default is Off.\n"},
  {(char*)"UserControlledLookupTableOn", PyvtkImagePlaneWidget_UserControlledLookupTableOn, 1,
   (char*)"V.UserControlledLookupTableOn()\nC++: void UserControlledLookupTableOn()\n\nLet the user control the lookup table. NOTE: apply this method\nBEFORE applying the SetLookupTable method. Default is Off.\n"},
  {(char*)"UserControlledLookupTableOff", PyvtkImagePlaneWidget_UserControlledLookupTableOff, 1,
   (char*)"V.UserControlledLookupTableOff()\nC++: void UserControlledLookupTableOff()\n\nLet the user control the lookup table. NOTE: apply this method\nBEFORE applying the SetLookupTable method. Default is Off.\n"},
  {(char*)"SetTextureInterpolate", PyvtkImagePlaneWidget_SetTextureInterpolate, 1,
   (char*)"V.SetTextureInterpolate(int)\nC++: void SetTextureInterpolate(int a)\n\nSpecify whether to interpolate the texture or not. When off, the\nreslice interpolation is nearest neighbour regardless of how the\ninterpolation is set through the API. Set before setting the\nvtkImageData input. Default is On.\n"},
  {(char*)"GetTextureInterpolate", PyvtkImagePlaneWidget_GetTextureInterpolate, 1,
   (char*)"V.GetTextureInterpolate() -> int\nC++: int GetTextureInterpolate()\n\nSpecify whether to interpolate the texture or not. When off, the\nreslice interpolation is nearest neighbour regardless of how the\ninterpolation is set through the API. Set before setting the\nvtkImageData input. Default is On.\n"},
  {(char*)"TextureInterpolateOn", PyvtkImagePlaneWidget_TextureInterpolateOn, 1,
   (char*)"V.TextureInterpolateOn()\nC++: void TextureInterpolateOn()\n\nSpecify whether to interpolate the texture or not. When off, the\nreslice interpolation is nearest neighbour regardless of how the\ninterpolation is set through the API. Set before setting the\nvtkImageData input. Default is On.\n"},
  {(char*)"TextureInterpolateOff", PyvtkImagePlaneWidget_TextureInterpolateOff, 1,
   (char*)"V.TextureInterpolateOff()\nC++: void TextureInterpolateOff()\n\nSpecify whether to interpolate the texture or not. When off, the\nreslice interpolation is nearest neighbour regardless of how the\ninterpolation is set through the API. Set before setting the\nvtkImageData input. Default is On.\n"},
  {(char*)"SetTextureVisibility", PyvtkImagePlaneWidget_SetTextureVisibility, 1,
   (char*)"V.SetTextureVisibility(int)\nC++: virtual void SetTextureVisibility(int)\n\nControl the visibility of the actual texture mapped reformatted\nplane. in some cases you may only want the plane outline for\nexample.\n"},
  {(char*)"GetTextureVisibility", PyvtkImagePlaneWidget_GetTextureVisibility, 1,
   (char*)"V.GetTextureVisibility() -> int\nC++: int GetTextureVisibility()\n\nControl the visibility of the actual texture mapped reformatted\nplane. in some cases you may only want the plane outline for\nexample.\n"},
  {(char*)"TextureVisibilityOn", PyvtkImagePlaneWidget_TextureVisibilityOn, 1,
   (char*)"V.TextureVisibilityOn()\nC++: void TextureVisibilityOn()\n\nControl the visibility of the actual texture mapped reformatted\nplane. in some cases you may only want the plane outline for\nexample.\n"},
  {(char*)"TextureVisibilityOff", PyvtkImagePlaneWidget_TextureVisibilityOff, 1,
   (char*)"V.TextureVisibilityOff()\nC++: void TextureVisibilityOff()\n\nControl the visibility of the actual texture mapped reformatted\nplane. in some cases you may only want the plane outline for\nexample.\n"},
  {(char*)"GetPolyData", PyvtkImagePlaneWidget_GetPolyData, 1,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nGrab the polydata (including points) that defines the plane.  The\npolydata consists of (res+1)*(res+1) points, and res*res\nquadrilateral polygons, where res is the resolution of the plane.\nThese point values are guaranteed to be up-to-date when either\nthe InteractionEvent or EndInteraction events are invoked. The\nuser provides the vtkPolyData and the points and polygons are\nadded to it.\n"},
  {(char*)"GetPolyDataAlgorithm", PyvtkImagePlaneWidget_GetPolyDataAlgorithm, 1,
   (char*)"V.GetPolyDataAlgorithm() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *GetPolyDataAlgorithm()\n\nSatisfies superclass API.  This returns a pointer to the\nunderlying vtkPolyData.  Make changes to this before calling the\ninitial PlaceWidget() to have the initial placement follow suit. \nOr, make changes after the widget has been initialised and call\nUpdatePlacement() to realise.\n"},
  {(char*)"UpdatePlacement", PyvtkImagePlaneWidget_UpdatePlacement, 1,
   (char*)"V.UpdatePlacement()\nC++: void UpdatePlacement(void)\n\nSatisfies superclass API.  This will change the state of the\nwidget to match changes that have been made to the underlying\nvtkPolyDataSource\n"},
  {(char*)"GetTexture", PyvtkImagePlaneWidget_GetTexture, 1,
   (char*)"V.GetTexture() -> vtkTexture\nC++: vtkTexture *GetTexture()\n\nConvenience method to get the texture used by this widget.  This\ncan be used in external slice viewers.\n"},
  {(char*)"GetColorMap", PyvtkImagePlaneWidget_GetColorMap, 1,
   (char*)"V.GetColorMap() -> vtkImageMapToColors\nC++: vtkImageMapToColors *GetColorMap()\n\nConvenience method to get the vtkImageMapToColors filter used by\nthis widget.  The user can properly render other transparent\nactors in a scene by calling the filter's SetOutputFormatToRGB\nand PassAlphaToOutputOff.\n"},
  {(char*)"SetColorMap", PyvtkImagePlaneWidget_SetColorMap, 1,
   (char*)"V.SetColorMap(vtkImageMapToColors)\nC++: virtual void SetColorMap(vtkImageMapToColors *)\n\nConvenience method to get the vtkImageMapToColors filter used by\nthis widget.  The user can properly render other transparent\nactors in a scene by calling the filter's SetOutputFormatToRGB\nand PassAlphaToOutputOff.\n"},
  {(char*)"SetPlaneProperty", PyvtkImagePlaneWidget_SetPlaneProperty, 1,
   (char*)"V.SetPlaneProperty(vtkProperty)\nC++: virtual void SetPlaneProperty(vtkProperty *)\n\nSet/Get the plane's outline properties. The properties of the\nplane's outline when selected and unselected can be manipulated.\n"},
  {(char*)"GetPlaneProperty", PyvtkImagePlaneWidget_GetPlaneProperty, 1,
   (char*)"V.GetPlaneProperty() -> vtkProperty\nC++: vtkProperty *GetPlaneProperty()\n\nSet/Get the plane's outline properties. The properties of the\nplane's outline when selected and unselected can be manipulated.\n"},
  {(char*)"SetSelectedPlaneProperty", PyvtkImagePlaneWidget_SetSelectedPlaneProperty, 1,
   (char*)"V.SetSelectedPlaneProperty(vtkProperty)\nC++: virtual void SetSelectedPlaneProperty(vtkProperty *)\n\nSet/Get the plane's outline properties. The properties of the\nplane's outline when selected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedPlaneProperty", PyvtkImagePlaneWidget_GetSelectedPlaneProperty, 1,
   (char*)"V.GetSelectedPlaneProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedPlaneProperty()\n\nSet/Get the plane's outline properties. The properties of the\nplane's outline when selected and unselected can be manipulated.\n"},
  {(char*)"SetPlaneOrientation", PyvtkImagePlaneWidget_SetPlaneOrientation, 1,
   (char*)"V.SetPlaneOrientation(int)\nC++: void SetPlaneOrientation(int)\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {(char*)"GetPlaneOrientation", PyvtkImagePlaneWidget_GetPlaneOrientation, 1,
   (char*)"V.GetPlaneOrientation() -> int\nC++: int GetPlaneOrientation()\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {(char*)"SetPlaneOrientationToXAxes", PyvtkImagePlaneWidget_SetPlaneOrientationToXAxes, 1,
   (char*)"V.SetPlaneOrientationToXAxes()\nC++: void SetPlaneOrientationToXAxes()\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {(char*)"SetPlaneOrientationToYAxes", PyvtkImagePlaneWidget_SetPlaneOrientationToYAxes, 1,
   (char*)"V.SetPlaneOrientationToYAxes()\nC++: void SetPlaneOrientationToYAxes()\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {(char*)"SetPlaneOrientationToZAxes", PyvtkImagePlaneWidget_SetPlaneOrientationToZAxes, 1,
   (char*)"V.SetPlaneOrientationToZAxes()\nC++: void SetPlaneOrientationToZAxes()\n\nConvenience method sets the plane orientation normal to the x, y,\nor z axes.  Default is XAxes (0).\n"},
  {(char*)"SetPicker", PyvtkImagePlaneWidget_SetPicker, 1,
   (char*)"V.SetPicker(vtkAbstractPropPicker)\nC++: void SetPicker(vtkAbstractPropPicker *)\n\nSet the internal picker to one defined by the user.  In this way,\na set of three orthogonal planes can share the same picker so\nthat picking is performed correctly.  The default internal picker\ncan be re-set/allocated by setting to 0 (NULL).\n"},
  {(char*)"SetLookupTable", PyvtkImagePlaneWidget_SetLookupTable, 1,
   (char*)"V.SetLookupTable(vtkLookupTable)\nC++: virtual void SetLookupTable(vtkLookupTable *)\n\nSet/Get the internal lookuptable (lut) to one defined by the\nuser, or, alternatively, to the lut of another\nvtkImgePlaneWidget.  In this way, a set of three orthogonal\nplanes can share the same lut so that window-levelling is\nperformed uniformly among planes.  The default internal lut can\nbe re- set/allocated by setting to 0 (NULL).\n"},
  {(char*)"GetLookupTable", PyvtkImagePlaneWidget_GetLookupTable, 1,
   (char*)"V.GetLookupTable() -> vtkLookupTable\nC++: vtkLookupTable *GetLookupTable()\n\nSet/Get the internal lookuptable (lut) to one defined by the\nuser, or, alternatively, to the lut of another\nvtkImgePlaneWidget.  In this way, a set of three orthogonal\nplanes can share the same lut so that window-levelling is\nperformed uniformly among planes.  The default internal lut can\nbe re- set/allocated by setting to 0 (NULL).\n"},
  {(char*)"SetDisplayText", PyvtkImagePlaneWidget_SetDisplayText, 1,
   (char*)"V.SetDisplayText(int)\nC++: void SetDisplayText(int a)\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {(char*)"GetDisplayText", PyvtkImagePlaneWidget_GetDisplayText, 1,
   (char*)"V.GetDisplayText() -> int\nC++: int GetDisplayText()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {(char*)"DisplayTextOn", PyvtkImagePlaneWidget_DisplayTextOn, 1,
   (char*)"V.DisplayTextOn()\nC++: void DisplayTextOn()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {(char*)"DisplayTextOff", PyvtkImagePlaneWidget_DisplayTextOff, 1,
   (char*)"V.DisplayTextOff()\nC++: void DisplayTextOff()\n\nEnable/disable text display of window-level, image coordinates\nand scalar values in a render window.\n"},
  {(char*)"SetCursorProperty", PyvtkImagePlaneWidget_SetCursorProperty, 1,
   (char*)"V.SetCursorProperty(vtkProperty)\nC++: virtual void SetCursorProperty(vtkProperty *)\n\nSet the properties of the cross-hair cursor.\n"},
  {(char*)"GetCursorProperty", PyvtkImagePlaneWidget_GetCursorProperty, 1,
   (char*)"V.GetCursorProperty() -> vtkProperty\nC++: vtkProperty *GetCursorProperty()\n\nSet the properties of the cross-hair cursor.\n"},
  {(char*)"SetMarginProperty", PyvtkImagePlaneWidget_SetMarginProperty, 1,
   (char*)"V.SetMarginProperty(vtkProperty)\nC++: virtual void SetMarginProperty(vtkProperty *)\n\nSet the properties of the margins.\n"},
  {(char*)"GetMarginProperty", PyvtkImagePlaneWidget_GetMarginProperty, 1,
   (char*)"V.GetMarginProperty() -> vtkProperty\nC++: vtkProperty *GetMarginProperty()\n\nSet the properties of the margins.\n"},
  {(char*)"SetMarginSizeX", PyvtkImagePlaneWidget_SetMarginSizeX, 1,
   (char*)"V.SetMarginSizeX(float)\nC++: void SetMarginSizeX(double)\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {(char*)"GetMarginSizeXMinValue", PyvtkImagePlaneWidget_GetMarginSizeXMinValue, 1,
   (char*)"V.GetMarginSizeXMinValue() -> float\nC++: double GetMarginSizeXMinValue()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {(char*)"GetMarginSizeXMaxValue", PyvtkImagePlaneWidget_GetMarginSizeXMaxValue, 1,
   (char*)"V.GetMarginSizeXMaxValue() -> float\nC++: double GetMarginSizeXMaxValue()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {(char*)"GetMarginSizeX", PyvtkImagePlaneWidget_GetMarginSizeX, 1,
   (char*)"V.GetMarginSizeX() -> float\nC++: double GetMarginSizeX()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {(char*)"SetMarginSizeY", PyvtkImagePlaneWidget_SetMarginSizeY, 1,
   (char*)"V.SetMarginSizeY(float)\nC++: void SetMarginSizeY(double)\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {(char*)"GetMarginSizeYMinValue", PyvtkImagePlaneWidget_GetMarginSizeYMinValue, 1,
   (char*)"V.GetMarginSizeYMinValue() -> float\nC++: double GetMarginSizeYMinValue()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {(char*)"GetMarginSizeYMaxValue", PyvtkImagePlaneWidget_GetMarginSizeYMaxValue, 1,
   (char*)"V.GetMarginSizeYMaxValue() -> float\nC++: double GetMarginSizeYMaxValue()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {(char*)"GetMarginSizeY", PyvtkImagePlaneWidget_GetMarginSizeY, 1,
   (char*)"V.GetMarginSizeY() -> float\nC++: double GetMarginSizeY()\n\nSet the size of the margins based on a percentage of the plane's\nwidth and height, limited between 0 and 50%.\n"},
  {(char*)"SetTextProperty", PyvtkImagePlaneWidget_SetTextProperty, 1,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: void SetTextProperty(vtkTextProperty *tprop)\n\nSet/Get the text property for the image data and window-level\nannotation.\n"},
  {(char*)"GetTextProperty", PyvtkImagePlaneWidget_GetTextProperty, 1,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/Get the text property for the image data and window-level\nannotation.\n"},
  {(char*)"SetTexturePlaneProperty", PyvtkImagePlaneWidget_SetTexturePlaneProperty, 1,
   (char*)"V.SetTexturePlaneProperty(vtkProperty)\nC++: virtual void SetTexturePlaneProperty(vtkProperty *)\n\nSet/Get the property for the resliced image.\n"},
  {(char*)"GetTexturePlaneProperty", PyvtkImagePlaneWidget_GetTexturePlaneProperty, 1,
   (char*)"V.GetTexturePlaneProperty() -> vtkProperty\nC++: vtkProperty *GetTexturePlaneProperty()\n\nSet/Get the property for the resliced image.\n"},
  {(char*)"SetWindowLevel", PyvtkImagePlaneWidget_SetWindowLevel, 1,
   (char*)"V.SetWindowLevel(float, float, int)\nC++: void SetWindowLevel(double window, double level, int copy=0)\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {(char*)"GetWindowLevel", PyvtkImagePlaneWidget_GetWindowLevel, 1,
   (char*)"V.GetWindowLevel([float, float])\nC++: void GetWindowLevel(double wl[2])\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {(char*)"GetWindow", PyvtkImagePlaneWidget_GetWindow, 1,
   (char*)"V.GetWindow() -> float\nC++: double GetWindow()\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {(char*)"GetLevel", PyvtkImagePlaneWidget_GetLevel, 1,
   (char*)"V.GetLevel() -> float\nC++: double GetLevel()\n\nSet/Get the current window and level values.  SetWindowLevel\nshould only be called after SetInput.  If a shared lookup table\nis being used, a callback is required to update the window level\nvalues without having to update the lookup table again.\n"},
  {(char*)"GetCursorData", PyvtkImagePlaneWidget_GetCursorData, 1,
   (char*)"V.GetCursorData([float, float, float, float]) -> int\nC++: int GetCursorData(double xyzv[4])\n\nGet the image coordinate position and voxel value.  Currently\nonly supports single component image data.\n"},
  {(char*)"GetCursorDataStatus", PyvtkImagePlaneWidget_GetCursorDataStatus, 1,
   (char*)"V.GetCursorDataStatus() -> int\nC++: int GetCursorDataStatus()\n\nGet the status of the cursor data.  If this returns 1 the\nCurrentCursorPosition and CurrentImageValue will have current\ndata.  If it returns 0, these values are invalid.\n"},
  {(char*)"GetCurrentCursorPosition", PyvtkImagePlaneWidget_GetCurrentCursorPosition, 1,
   (char*)"V.GetCurrentCursorPosition() -> (float, float, float)\nC++: double *GetCurrentCursorPosition()\n\nGet the current cursor position.  To be used in conjunction with\nGetCursorDataStatus.\n"},
  {(char*)"GetCurrentImageValue", PyvtkImagePlaneWidget_GetCurrentImageValue, 1,
   (char*)"V.GetCurrentImageValue() -> float\nC++: double GetCurrentImageValue()\n\nGet the current image value at the current cursor position.  To\nbe used in conjunction with GetCursorDataStatus.  The value is\nVTK_DOUBLE_MAX when the data is invalid.\n"},
  {(char*)"GetResliceAxes", PyvtkImagePlaneWidget_GetResliceAxes, 1,
   (char*)"V.GetResliceAxes() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetResliceAxes()\n\nGet the current reslice class and reslice axes\n"},
  {(char*)"GetReslice", PyvtkImagePlaneWidget_GetReslice, 1,
   (char*)"V.GetReslice() -> vtkImageReslice\nC++: vtkImageReslice *GetReslice()\n\nGet the current reslice class and reslice axes\n"},
  {(char*)"SetUseContinuousCursor", PyvtkImagePlaneWidget_SetUseContinuousCursor, 1,
   (char*)"V.SetUseContinuousCursor(int)\nC++: void SetUseContinuousCursor(int a)\n\nChoose between voxel centered or continuous cursor probing.  With\nvoxel centered probing, the cursor snaps to the nearest voxel and\nthe reported cursor coordinates are extent based.  With\ncontinuous probing, voxel data is interpolated using\nvtkDataSetAttributes' InterpolatePoint method and the reported\ncoordinates are 3D spatial continuous.\n"},
  {(char*)"GetUseContinuousCursor", PyvtkImagePlaneWidget_GetUseContinuousCursor, 1,
   (char*)"V.GetUseContinuousCursor() -> int\nC++: int GetUseContinuousCursor()\n\nChoose between voxel centered or continuous cursor probing.  With\nvoxel centered probing, the cursor snaps to the nearest voxel and\nthe reported cursor coordinates are extent based.  With\ncontinuous probing, voxel data is interpolated using\nvtkDataSetAttributes' InterpolatePoint method and the reported\ncoordinates are 3D spatial continuous.\n"},
  {(char*)"UseContinuousCursorOn", PyvtkImagePlaneWidget_UseContinuousCursorOn, 1,
   (char*)"V.UseContinuousCursorOn()\nC++: void UseContinuousCursorOn()\n\nChoose between voxel centered or continuous cursor probing.  With\nvoxel centered probing, the cursor snaps to the nearest voxel and\nthe reported cursor coordinates are extent based.  With\ncontinuous probing, voxel data is interpolated using\nvtkDataSetAttributes' InterpolatePoint method and the reported\ncoordinates are 3D spatial continuous.\n"},
  {(char*)"UseContinuousCursorOff", PyvtkImagePlaneWidget_UseContinuousCursorOff, 1,
   (char*)"V.UseContinuousCursorOff()\nC++: void UseContinuousCursorOff()\n\nChoose between voxel centered or continuous cursor probing.  With\nvoxel centered probing, the cursor snaps to the nearest voxel and\nthe reported cursor coordinates are extent based.  With\ncontinuous probing, voxel data is interpolated using\nvtkDataSetAttributes' InterpolatePoint method and the reported\ncoordinates are 3D spatial continuous.\n"},
  {(char*)"SetInteraction", PyvtkImagePlaneWidget_SetInteraction, 1,
   (char*)"V.SetInteraction(int)\nC++: void SetInteraction(int interact)\n\nEnable/disable mouse interaction so the widget remains on\ndisplay.\n"},
  {(char*)"GetInteraction", PyvtkImagePlaneWidget_GetInteraction, 1,
   (char*)"V.GetInteraction() -> int\nC++: int GetInteraction()\n\nEnable/disable mouse interaction so the widget remains on\ndisplay.\n"},
  {(char*)"InteractionOn", PyvtkImagePlaneWidget_InteractionOn, 1,
   (char*)"V.InteractionOn()\nC++: void InteractionOn()\n\nEnable/disable mouse interaction so the widget remains on\ndisplay.\n"},
  {(char*)"InteractionOff", PyvtkImagePlaneWidget_InteractionOff, 1,
   (char*)"V.InteractionOff()\nC++: void InteractionOff()\n\nEnable/disable mouse interaction so the widget remains on\ndisplay.\n"},
  {(char*)"SetLeftButtonAction", PyvtkImagePlaneWidget_SetLeftButtonAction, 1,
   (char*)"V.SetLeftButtonAction(int)\nC++: void SetLeftButtonAction(int)\n\nSet action associated to buttons.\n"},
  {(char*)"GetLeftButtonActionMinValue", PyvtkImagePlaneWidget_GetLeftButtonActionMinValue, 1,
   (char*)"V.GetLeftButtonActionMinValue() -> int\nC++: int GetLeftButtonActionMinValue()\n\nSet action associated to buttons.\n"},
  {(char*)"GetLeftButtonActionMaxValue", PyvtkImagePlaneWidget_GetLeftButtonActionMaxValue, 1,
   (char*)"V.GetLeftButtonActionMaxValue() -> int\nC++: int GetLeftButtonActionMaxValue()\n\nSet action associated to buttons.\n"},
  {(char*)"GetLeftButtonAction", PyvtkImagePlaneWidget_GetLeftButtonAction, 1,
   (char*)"V.GetLeftButtonAction() -> int\nC++: int GetLeftButtonAction()\n\nSet action associated to buttons.\n"},
  {(char*)"SetMiddleButtonAction", PyvtkImagePlaneWidget_SetMiddleButtonAction, 1,
   (char*)"V.SetMiddleButtonAction(int)\nC++: void SetMiddleButtonAction(int)\n\nSet action associated to buttons.\n"},
  {(char*)"GetMiddleButtonActionMinValue", PyvtkImagePlaneWidget_GetMiddleButtonActionMinValue, 1,
   (char*)"V.GetMiddleButtonActionMinValue() -> int\nC++: int GetMiddleButtonActionMinValue()\n\nSet action associated to buttons.\n"},
  {(char*)"GetMiddleButtonActionMaxValue", PyvtkImagePlaneWidget_GetMiddleButtonActionMaxValue, 1,
   (char*)"V.GetMiddleButtonActionMaxValue() -> int\nC++: int GetMiddleButtonActionMaxValue()\n\nSet action associated to buttons.\n"},
  {(char*)"GetMiddleButtonAction", PyvtkImagePlaneWidget_GetMiddleButtonAction, 1,
   (char*)"V.GetMiddleButtonAction() -> int\nC++: int GetMiddleButtonAction()\n\nSet action associated to buttons.\n"},
  {(char*)"SetRightButtonAction", PyvtkImagePlaneWidget_SetRightButtonAction, 1,
   (char*)"V.SetRightButtonAction(int)\nC++: void SetRightButtonAction(int)\n\nSet action associated to buttons.\n"},
  {(char*)"GetRightButtonActionMinValue", PyvtkImagePlaneWidget_GetRightButtonActionMinValue, 1,
   (char*)"V.GetRightButtonActionMinValue() -> int\nC++: int GetRightButtonActionMinValue()\n\nSet action associated to buttons.\n"},
  {(char*)"GetRightButtonActionMaxValue", PyvtkImagePlaneWidget_GetRightButtonActionMaxValue, 1,
   (char*)"V.GetRightButtonActionMaxValue() -> int\nC++: int GetRightButtonActionMaxValue()\n\nSet action associated to buttons.\n"},
  {(char*)"GetRightButtonAction", PyvtkImagePlaneWidget_GetRightButtonAction, 1,
   (char*)"V.GetRightButtonAction() -> int\nC++: int GetRightButtonAction()\n\nSet action associated to buttons.\n"},
  {(char*)"SetLeftButtonAutoModifier", PyvtkImagePlaneWidget_SetLeftButtonAutoModifier, 1,
   (char*)"V.SetLeftButtonAutoModifier(int)\nC++: void SetLeftButtonAutoModifier(int)\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"GetLeftButtonAutoModifierMinValue", PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMinValue, 1,
   (char*)"V.GetLeftButtonAutoModifierMinValue() -> int\nC++: int GetLeftButtonAutoModifierMinValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"GetLeftButtonAutoModifierMaxValue", PyvtkImagePlaneWidget_GetLeftButtonAutoModifierMaxValue, 1,
   (char*)"V.GetLeftButtonAutoModifierMaxValue() -> int\nC++: int GetLeftButtonAutoModifierMaxValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"GetLeftButtonAutoModifier", PyvtkImagePlaneWidget_GetLeftButtonAutoModifier, 1,
   (char*)"V.GetLeftButtonAutoModifier() -> int\nC++: int GetLeftButtonAutoModifier()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"SetMiddleButtonAutoModifier", PyvtkImagePlaneWidget_SetMiddleButtonAutoModifier, 1,
   (char*)"V.SetMiddleButtonAutoModifier(int)\nC++: void SetMiddleButtonAutoModifier(int)\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"GetMiddleButtonAutoModifierMinValue", PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMinValue, 1,
   (char*)"V.GetMiddleButtonAutoModifierMinValue() -> int\nC++: int GetMiddleButtonAutoModifierMinValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"GetMiddleButtonAutoModifierMaxValue", PyvtkImagePlaneWidget_GetMiddleButtonAutoModifierMaxValue, 1,
   (char*)"V.GetMiddleButtonAutoModifierMaxValue() -> int\nC++: int GetMiddleButtonAutoModifierMaxValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"GetMiddleButtonAutoModifier", PyvtkImagePlaneWidget_GetMiddleButtonAutoModifier, 1,
   (char*)"V.GetMiddleButtonAutoModifier() -> int\nC++: int GetMiddleButtonAutoModifier()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"SetRightButtonAutoModifier", PyvtkImagePlaneWidget_SetRightButtonAutoModifier, 1,
   (char*)"V.SetRightButtonAutoModifier(int)\nC++: void SetRightButtonAutoModifier(int)\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"GetRightButtonAutoModifierMinValue", PyvtkImagePlaneWidget_GetRightButtonAutoModifierMinValue, 1,
   (char*)"V.GetRightButtonAutoModifierMinValue() -> int\nC++: int GetRightButtonAutoModifierMinValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"GetRightButtonAutoModifierMaxValue", PyvtkImagePlaneWidget_GetRightButtonAutoModifierMaxValue, 1,
   (char*)"V.GetRightButtonAutoModifierMaxValue() -> int\nC++: int GetRightButtonAutoModifierMaxValue()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {(char*)"GetRightButtonAutoModifier", PyvtkImagePlaneWidget_GetRightButtonAutoModifier, 1,
   (char*)"V.GetRightButtonAutoModifier() -> int\nC++: int GetRightButtonAutoModifier()\n\nSet the auto-modifiers associated to buttons. This allows users\nto bind some buttons to actions that are usually triggered by a\nkey modifier. For example, if you do not need cursoring, you can\nbind the left button action to VTK_SLICE_MOTION_ACTION (see\nabove) and the left button auto modifier to VTK_CONTROL_MODIFIER:\nyou end up with the left button controling panning without\npressing a key.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImagePlaneWidget_StaticNew()
{
  return vtkImagePlaneWidget::New();
}

PyObject *PyVTKClass_vtkImagePlaneWidgetNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImagePlaneWidget_StaticNew,
    PyvtkImagePlaneWidget_Methods,
    "vtkImagePlaneWidget", modulename,
    NULL, NULL,
    PyvtkImagePlaneWidget_Doc(),
    PyVTKClass_vtkPolyDataSourceWidgetNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"VTK_CURSOR_ACTION", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VTK_SLICE_MOTION_ACTION", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VTK_WINDOW_LEVEL_ACTION", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"VTK_NO_MODIFIER", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VTK_SHIFT_MODIFIER", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VTK_CONTROL_MODIFIER", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkImagePlaneWidget_Doc()
{
  static const char *docstring[] = {
    "vtkImagePlaneWidget - 3D widget for reslicing image data\n\n",
    "Superclass: vtkPolyDataSourceWidget\n\n",
    "This 3D widget defines a plane that can be interactively placed in an\nimage volume. A nice feature of the object is that the\nvtkImagePlaneWidget, like any 3D widget, will work with the current\ninteractor style. That is, if vtkImagePlaneWidget does not handle an\nevent, then all other registered observers (including the interactor\nstyle) have an opportunity to process the event. Otherwise, the\nvtkIm",
    "agePlaneWidget will terminate the processing of the event that\nit handles.\n\nThe core functionality of the widget is provided by a vtkImageReslice\nobject which passes its output onto a texture mapping pipeline for\nfast slicing through volumetric data. See the key methods:\nGenerateTexturePlane() and UpdatePlane() for implementation details.\n\nTo use this object, just invoke SetInteractor() with the a",
    "rgument of\nthe method a vtkRenderWindowInteractor.  You may also wish to invoke\n\"PlaceWidget()\" to initially position the widget. If the \"i\" key (for\n\"interactor\") is pressed, the vtkImagePlaneWidget will appear. (See\nsuperclass documentation for information about changing this\nbehavior.)\n\nSelecting the widget with the middle mouse button with and without\nholding the shift or control keys enables ",
    "complex reslicing\ncapablilites. To facilitate use, a set of 'margins' (left, right,\ntop, bottom) are shown as a set of plane-axes aligned lines, the\nproperties of which can be changed as a group. Without keyboard\nmodifiers: selecting in the middle of the margins enables translation\nof the plane along its normal. Selecting one of the corners within\nthe margins enables spinning around the plane's no",
    "rmal at its center.\n Selecting within a margin allows rotating about the center of the\nplane around an axis aligned with the margin (i.e., selecting left\nmargin enables rotating around the plane's local y-prime axis). With\ncontrol key modifier: margin selection enables edge translation\n(i.e., a constrained form of scaling). Selecting within the margins\nenables translation of the entire plane. With",
    " shift key modifier:\nuniform plane scaling is enabled.  Moving the mouse up enlarges the\nplane while downward movement shrinks it.\n\nWindow-level is achieved by using the right mouse button. \nWindow-level values can be reset by shift + 'r' or control + 'r'\nwhile regular reset camera is maintained with 'r' or 'R'. The left\nmouse button can be used to query the underlying image data with a\nsnap-to cr",
    "oss-hair cursor.  Currently, the nearest point in the input\nimage data to the mouse cursor generates the cross-hairs.  With\noblique slicing, this behaviour may appear unsatisfactory. Text\ndisplay of window-level and image coordinates/data values are\nprovided by a text actor/mapper pair.\n\nEvents that occur outside of the widget (i.e., no part of the widget\nis picked) are propagated to any other reg",
    "istered obsevers (such as\nthe interaction style). Turn off the widget by pressing the \"i\" key\nagain (or invoke the Off() method). To support interactive\nmanipulation of objects, this class invokes the events\nStartInteractionEvent, InteractionEvent, and EndInteractionEvent as\nwell as StartWindowLevelEvent, WindowLevelEvent, EndWindowLevelEvent\nand ResetWindowLevelEvent.\n\nThe vtkImagePlaneWidget has",
    " several methods that can be used in\nconjunction with other VTK objects. The GetPolyData() method can be\nused to get the polygonal representation of the plane and can be used\nas input for other VTK objects. Typical usage of the widget is to\nmake use of the StartInteractionEvent, InteractionEvent, and\nEndInteractionEvent events. The InteractionEvent is called on mouse\nmotion; the other two events a",
    "re called on button down and button up\n(either left or right button).\n\nSome additional features of this class include the ability to control\nthe properties of the widget. You can set the properties of: the\nselected and unselected representations of the plane's outline; the\ntext actor via its vtkTextProperty; the cross-hair cursor. In\naddition there are methods to constrain the plane so that it is\n",
    "aligned along the x-y-z axes.  Finally, one can specify the degree of\ninterpolation (vtkImageReslice): nearest neighbour, linear, and\ncubic.\n\nCaveats:\n\nNote that handles and plane can be picked even when they are \"behind\"\nother actors.  This is an intended feature and not a bug.\n\nSee Also:\n\nvtk3DWidget vtkBoxWidget vtkLineWidget  vtkPlaneWidget vtkPointWidget\nvtkPolyDataSourceWidget vtkSphereWidge",
    "t vtkImplicitPlaneWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImagePlaneWidget(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImagePlaneWidgetNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImagePlaneWidget", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_NEAREST_RESLICE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_LINEAR_RESLICE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_CUBIC_RESLICE", o) != 0)
    {
    Py_DECREF(o);
    }

}
