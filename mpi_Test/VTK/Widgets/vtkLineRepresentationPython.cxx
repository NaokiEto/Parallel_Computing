// python wrapper for vtkLineRepresentation
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
#include "vtkLineRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLineRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLineRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLineRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLineRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkLineRepresentation_Doc();


static PyObject *
PyvtkLineRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkLineRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLineRepresentation::NewInstance();
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
PyvtkLineRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLineRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLineRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPoint1WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint1WorldPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::GetPoint1WorldPosition(temp0);
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
PyvtkLineRepresentation_GetPoint1WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1WorldPosition();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetPoint1WorldPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLineRepresentation_GetPoint1WorldPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint1WorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1WorldPosition");
  return NULL;
}



static PyObject *
PyvtkLineRepresentation_GetPoint1DisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint1DisplayPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::GetPoint1DisplayPosition(temp0);
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
PyvtkLineRepresentation_GetPoint1DisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1DisplayPosition();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetPoint1DisplayPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLineRepresentation_GetPoint1DisplayPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint1DisplayPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint1DisplayPosition");
  return NULL;
}



static PyObject *
PyvtkLineRepresentation_SetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint1WorldPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetPoint1WorldPosition(temp0);
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
PyvtkLineRepresentation_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint1DisplayPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetPoint1DisplayPosition(temp0);
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
PyvtkLineRepresentation_GetPoint2DisplayPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint2DisplayPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::GetPoint2DisplayPosition(temp0);
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
PyvtkLineRepresentation_GetPoint2DisplayPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2DisplayPosition();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetPoint2DisplayPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLineRepresentation_GetPoint2DisplayPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint2DisplayPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2DisplayPosition");
  return NULL;
}



static PyObject *
PyvtkLineRepresentation_GetPoint2WorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->GetPoint2WorldPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::GetPoint2WorldPosition(temp0);
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
PyvtkLineRepresentation_GetPoint2WorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2WorldPosition();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetPoint2WorldPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkLineRepresentation_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLineRepresentation_GetPoint2WorldPosition_s1(self, args);
    case 0:
      return PyvtkLineRepresentation_GetPoint2WorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint2WorldPosition");
  return NULL;
}



static PyObject *
PyvtkLineRepresentation_SetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint2WorldPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetPoint2WorldPosition(temp0);
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
PyvtkLineRepresentation_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetPoint2DisplayPosition(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetPoint2DisplayPosition(temp0);
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
PyvtkLineRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkPointHandleRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointHandleRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetHandleRepresentation(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetHandleRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_InstantiateHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InstantiateHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InstantiateHandleRepresentation();
      }
    else
      {
      op->vtkLineRepresentation::InstantiateHandleRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPoint1Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkPointHandleRepresentation3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1Representation();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetPoint1Representation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPoint2Representation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2Representation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkPointHandleRepresentation3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2Representation();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetPoint2Representation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetLineHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkPointHandleRepresentation3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineHandleRepresentation();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetLineHandleRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetEndPointProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndPointProperty();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetEndPointProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetSelectedEndPointProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedEndPointProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedEndPointProperty();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetSelectedEndPointProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetEndPoint2Property(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPoint2Property");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndPoint2Property();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetEndPoint2Property();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetSelectedEndPoint2Property(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedEndPoint2Property");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedEndPoint2Property();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetSelectedEndPoint2Property();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLineProperty();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetLineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetSelectedLineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedLineProperty();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetSelectedLineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
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
      op->vtkLineRepresentation::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMinValue();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolution();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::PlaceWidget(temp0);
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
PyvtkLineRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkLineRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::StartWidgetInteraction(temp0);
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
PyvtkLineRepresentation_WidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::WidgetInteraction(temp0);
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
PyvtkLineRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetInteractionStateMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::GetInteractionStateMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetInteractionStateMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionStateMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::GetInteractionStateMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->vtkLineRepresentation::SetRepresentationState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetRepresentationState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::GetRepresentationState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      tempr = op->vtkLineRepresentation::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceAnnotationVisibility(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetDistanceAnnotationVisibility(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceAnnotationVisibility();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetDistanceAnnotationVisibility();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_DistanceAnnotationVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceAnnotationVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DistanceAnnotationVisibilityOn();
      }
    else
      {
      op->vtkLineRepresentation::DistanceAnnotationVisibilityOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_DistanceAnnotationVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DistanceAnnotationVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DistanceAnnotationVisibilityOff();
      }
    else
      {
      op->vtkLineRepresentation::DistanceAnnotationVisibilityOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceAnnotationFormat(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetDistanceAnnotationFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceAnnotationFormat();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetDistanceAnnotationFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetDistanceAnnotationScale(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLineRepresentation::SetDistanceAnnotationScale(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineRepresentation_SetDistanceAnnotationScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceAnnotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetDistanceAnnotationScale(temp0);
      }
    else
      {
      op->vtkLineRepresentation::SetDistanceAnnotationScale(temp0);
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
PyvtkLineRepresentation_SetDistanceAnnotationScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLineRepresentation_SetDistanceAnnotationScale_s1(self, args);
    case 1:
      return PyvtkLineRepresentation_SetDistanceAnnotationScale_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDistanceAnnotationScale");
  return NULL;
}



static PyObject *
PyvtkLineRepresentation_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistance();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetDistance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

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
      op->SetLineColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkLineRepresentation::SetLineColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetDistanceAnnotationProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceAnnotationProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceAnnotationProperty();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetDistanceAnnotationProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineRepresentation_GetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineRepresentation *op = static_cast<vtkLineRepresentation *>(vp);

  vtkFollower *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextActor();
      }
    else
      {
      tempr = op->vtkLineRepresentation::GetTextActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLineRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkLineRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkLineRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkLineRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLineRepresentation\nC++: vtkLineRepresentation *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkLineRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLineRepresentation\nC++: vtkLineRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"GetPoint1WorldPosition", PyvtkLineRepresentation_GetPoint1WorldPosition, 1,
   (char*)"V.GetPoint1WorldPosition([float, float, float])\nC++: void GetPoint1WorldPosition(double pos[3])\nV.GetPoint1WorldPosition() -> (float, float, float)\nC++: double *GetPoint1WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint1DisplayPosition", PyvtkLineRepresentation_GetPoint1DisplayPosition, 1,
   (char*)"V.GetPoint1DisplayPosition([float, float, float])\nC++: void GetPoint1DisplayPosition(double pos[3])\nV.GetPoint1DisplayPosition() -> (float, float, float)\nC++: double *GetPoint1DisplayPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1WorldPosition", PyvtkLineRepresentation_SetPoint1WorldPosition, 1,
   (char*)"V.SetPoint1WorldPosition([float, float, float])\nC++: void SetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1DisplayPosition", PyvtkLineRepresentation_SetPoint1DisplayPosition, 1,
   (char*)"V.SetPoint1DisplayPosition([float, float, float])\nC++: void SetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2DisplayPosition", PyvtkLineRepresentation_GetPoint2DisplayPosition, 1,
   (char*)"V.GetPoint2DisplayPosition([float, float, float])\nC++: void GetPoint2DisplayPosition(double pos[3])\nV.GetPoint2DisplayPosition() -> (float, float, float)\nC++: double *GetPoint2DisplayPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2WorldPosition", PyvtkLineRepresentation_GetPoint2WorldPosition, 1,
   (char*)"V.GetPoint2WorldPosition([float, float, float])\nC++: void GetPoint2WorldPosition(double pos[3])\nV.GetPoint2WorldPosition() -> (float, float, float)\nC++: double *GetPoint2WorldPosition()\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2WorldPosition", PyvtkLineRepresentation_SetPoint2WorldPosition, 1,
   (char*)"V.SetPoint2WorldPosition([float, float, float])\nC++: void SetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2DisplayPosition", PyvtkLineRepresentation_SetPoint2DisplayPosition, 1,
   (char*)"V.SetPoint2DisplayPosition([float, float, float])\nC++: void SetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetHandleRepresentation", PyvtkLineRepresentation_SetHandleRepresentation, 1,
   (char*)"V.SetHandleRepresentation(vtkPointHandleRepresentation3D)\nC++: void SetHandleRepresentation(\n    vtkPointHandleRepresentation3D *handle)\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkLineWidget2. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkLineRepresentation uses this dummy to\nclone three vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkLineWidget2.)\n"},
  {(char*)"InstantiateHandleRepresentation", PyvtkLineRepresentation_InstantiateHandleRepresentation, 1,
   (char*)"V.InstantiateHandleRepresentation()\nC++: void InstantiateHandleRepresentation()\n\nThis method is used to specify the type of handle representation\nto use for the three internal vtkHandleWidgets within\nvtkLineWidget2. To use this method, create a dummy\nvtkHandleWidget (or subclass), and then invoke this method with\nthis dummy. Then the vtkLineRepresentation uses this dummy to\nclone three vtkHandleWidgets of the same type. Make sure you set\nthe handle representation before the widget is enabled. (The\nmethod InstantiateHandleRepresentation() is invoked by the\nvtkLineWidget2.)\n"},
  {(char*)"GetPoint1Representation", PyvtkLineRepresentation_GetPoint1Representation, 1,
   (char*)"V.GetPoint1Representation() -> vtkPointHandleRepresentation3D\nC++: vtkPointHandleRepresentation3D *GetPoint1Representation()\n\nGet the three handle representations used for the vtkLineWidget2.\n"},
  {(char*)"GetPoint2Representation", PyvtkLineRepresentation_GetPoint2Representation, 1,
   (char*)"V.GetPoint2Representation() -> vtkPointHandleRepresentation3D\nC++: vtkPointHandleRepresentation3D *GetPoint2Representation()\n\nGet the three handle representations used for the vtkLineWidget2.\n"},
  {(char*)"GetLineHandleRepresentation", PyvtkLineRepresentation_GetLineHandleRepresentation, 1,
   (char*)"V.GetLineHandleRepresentation() -> vtkPointHandleRepresentation3D\nC++: vtkPointHandleRepresentation3D *GetLineHandleRepresentation()\n\nGet the three handle representations used for the vtkLineWidget2.\n"},
  {(char*)"GetEndPointProperty", PyvtkLineRepresentation_GetEndPointProperty, 1,
   (char*)"V.GetEndPointProperty() -> vtkProperty\nC++: vtkProperty *GetEndPointProperty()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedEndPointProperty", PyvtkLineRepresentation_GetSelectedEndPointProperty, 1,
   (char*)"V.GetSelectedEndPointProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedEndPointProperty()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {(char*)"GetEndPoint2Property", PyvtkLineRepresentation_GetEndPoint2Property, 1,
   (char*)"V.GetEndPoint2Property() -> vtkProperty\nC++: vtkProperty *GetEndPoint2Property()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {(char*)"GetSelectedEndPoint2Property", PyvtkLineRepresentation_GetSelectedEndPoint2Property, 1,
   (char*)"V.GetSelectedEndPoint2Property() -> vtkProperty\nC++: vtkProperty *GetSelectedEndPoint2Property()\n\nGet the end-point (sphere) properties. The properties of the\nend-points when selected and unselected can be manipulated.\n"},
  {(char*)"GetLineProperty", PyvtkLineRepresentation_GetLineProperty, 1,
   (char*)"V.GetLineProperty() -> vtkProperty\nC++: vtkProperty *GetLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {(char*)"GetSelectedLineProperty", PyvtkLineRepresentation_GetSelectedLineProperty, 1,
   (char*)"V.GetSelectedLineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedLineProperty()\n\nGet the line properties. The properties of the line when selected\nand unselected can be manipulated.\n"},
  {(char*)"SetTolerance", PyvtkLineRepresentation_SetTolerance, 1,
   (char*)"V.SetTolerance(int)\nC++: void SetTolerance(int)\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {(char*)"GetToleranceMinValue", PyvtkLineRepresentation_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> int\nC++: int GetToleranceMinValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkLineRepresentation_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> int\nC++: int GetToleranceMaxValue()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {(char*)"GetTolerance", PyvtkLineRepresentation_GetTolerance, 1,
   (char*)"V.GetTolerance() -> int\nC++: int GetTolerance()\n\nThe tolerance representing the distance to the widget (in pixels)\nin which the cursor is considered near enough to the line or end\npoint to be active.\n"},
  {(char*)"SetResolution", PyvtkLineRepresentation_SetResolution, 1,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int res)\n\nSet/Get the resolution (number of subdivisions) of the line. A\nline with resolution greater than one is useful when points along\nthe line are desired; e.g., generating a rake of streamlines.\n"},
  {(char*)"GetResolution", PyvtkLineRepresentation_GetResolution, 1,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get the resolution (number of subdivisions) of the line. A\nline with resolution greater than one is useful when points along\nthe line are desired; e.g., generating a rake of streamlines.\n"},
  {(char*)"GetPolyData", PyvtkLineRepresentation_GetPolyData, 1,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nRetrieve the polydata (including points) that defines the line. \nThe polydata consists of n+1 points, where n is the resolution of\nthe line. These point values are guaranteed to be up-to-date\nwhenever any one of the three handles are moved. To use this\nmethod, the user provides the vtkPolyData as an input argument,\nand the points and polyline are copied into it.\n"},
  {(char*)"PlaceWidget", PyvtkLineRepresentation_PlaceWidget, 1,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"BuildRepresentation", PyvtkLineRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ComputeInteractionState", PyvtkLineRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"StartWidgetInteraction", PyvtkLineRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"WidgetInteraction", PyvtkLineRepresentation_WidgetInteraction, 1,
   (char*)"V.WidgetInteraction([float, float])\nC++: virtual void WidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"GetBounds", PyvtkLineRepresentation_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"GetActors", PyvtkLineRepresentation_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *pc)\n\nMethods supporting the rendering process.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLineRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nMethods supporting the rendering process.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkLineRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nMethods supporting the rendering process.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkLineRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nMethods supporting the rendering process.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkLineRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nMethods supporting the rendering process.\n"},
  {(char*)"SetInteractionState", PyvtkLineRepresentation_SetInteractionState, 1,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int)\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMinValue", PyvtkLineRepresentation_GetInteractionStateMinValue, 1,
   (char*)"V.GetInteractionStateMinValue() -> int\nC++: int GetInteractionStateMinValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"GetInteractionStateMaxValue", PyvtkLineRepresentation_GetInteractionStateMaxValue, 1,
   (char*)"V.GetInteractionStateMaxValue() -> int\nC++: int GetInteractionStateMaxValue()\n\nThe interaction state may be set from a widget (e.g.,\nvtkLineWidget2) or other object. This controls how the\ninteraction with the widget proceeds. Normally this method is\nused as part of a handshaking process with the widget: First\nComputeInteractionState() is invoked that returns a state based\non geometric considerations (i.e., cursor near a widget feature),\nthen based on events, the widget may modify this further.\n"},
  {(char*)"SetRepresentationState", PyvtkLineRepresentation_SetRepresentationState, 1,
   (char*)"V.SetRepresentationState(int)\nC++: virtual void SetRepresentationState(int)\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {(char*)"GetRepresentationState", PyvtkLineRepresentation_GetRepresentationState, 1,
   (char*)"V.GetRepresentationState() -> int\nC++: int GetRepresentationState()\n\nSets the visual appearance of the representation based on the\nstate it is in. This state is usually the same as\nInteractionState.\n"},
  {(char*)"GetMTime", PyvtkLineRepresentation_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverload the superclasses' GetMTime() because internal classes\nare used to keep the state of the representation.\n"},
  {(char*)"SetRenderer", PyvtkLineRepresentation_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nOverridden to set the rendererer on the internal representations.\n"},
  {(char*)"SetDistanceAnnotationVisibility", PyvtkLineRepresentation_SetDistanceAnnotationVisibility, 1,
   (char*)"V.SetDistanceAnnotationVisibility(int)\nC++: void SetDistanceAnnotationVisibility(int a)\n\nShow the distance between the points.\n"},
  {(char*)"GetDistanceAnnotationVisibility", PyvtkLineRepresentation_GetDistanceAnnotationVisibility, 1,
   (char*)"V.GetDistanceAnnotationVisibility() -> int\nC++: int GetDistanceAnnotationVisibility()\n\nShow the distance between the points.\n"},
  {(char*)"DistanceAnnotationVisibilityOn", PyvtkLineRepresentation_DistanceAnnotationVisibilityOn, 1,
   (char*)"V.DistanceAnnotationVisibilityOn()\nC++: void DistanceAnnotationVisibilityOn()\n\nShow the distance between the points.\n"},
  {(char*)"DistanceAnnotationVisibilityOff", PyvtkLineRepresentation_DistanceAnnotationVisibilityOff, 1,
   (char*)"V.DistanceAnnotationVisibilityOff()\nC++: void DistanceAnnotationVisibilityOff()\n\nShow the distance between the points.\n"},
  {(char*)"SetDistanceAnnotationFormat", PyvtkLineRepresentation_SetDistanceAnnotationFormat, 1,
   (char*)"V.SetDistanceAnnotationFormat(string)\nC++: void SetDistanceAnnotationFormat(char *)\n\nSpecify the format to use for labelling the line. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {(char*)"GetDistanceAnnotationFormat", PyvtkLineRepresentation_GetDistanceAnnotationFormat, 1,
   (char*)"V.GetDistanceAnnotationFormat() -> string\nC++: char *GetDistanceAnnotationFormat()\n\nSpecify the format to use for labelling the line. Note that an\nempty string results in no label, or a format string without a\n\"%\" character will not print the angle value.\n"},
  {(char*)"SetDistanceAnnotationScale", PyvtkLineRepresentation_SetDistanceAnnotationScale, 1,
   (char*)"V.SetDistanceAnnotationScale(float, float, float)\nC++: void SetDistanceAnnotationScale(double x, double y, double z)\nV.SetDistanceAnnotationScale([float, float, float])\nC++: virtual void SetDistanceAnnotationScale(double scale[3])\n\nScale text (font size along each dimension).\n"},
  {(char*)"GetDistance", PyvtkLineRepresentation_GetDistance, 1,
   (char*)"V.GetDistance() -> float\nC++: double GetDistance()\n\nGet the distance between the points.\n"},
  {(char*)"SetLineColor", PyvtkLineRepresentation_SetLineColor, 1,
   (char*)"V.SetLineColor(float, float, float)\nC++: void SetLineColor(double r, double g, double b)\n\nConvenience method to set the line color. Ideally one should use\nGetLineProperty()->SetColor().\n"},
  {(char*)"GetDistanceAnnotationProperty", PyvtkLineRepresentation_GetDistanceAnnotationProperty, 1,
   (char*)"V.GetDistanceAnnotationProperty() -> vtkProperty\nC++: virtual vtkProperty *GetDistanceAnnotationProperty()\n\nGet the distance annotation property\n"},
  {(char*)"GetTextActor", PyvtkLineRepresentation_GetTextActor, 1,
   (char*)"V.GetTextActor() -> vtkFollower\nC++: vtkFollower *GetTextActor()\n\nGet the text actor\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLineRepresentation_StaticNew()
{
  return vtkLineRepresentation::New();
}

PyObject *PyVTKClass_vtkLineRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLineRepresentation_StaticNew,
    PyvtkLineRepresentation_Methods,
    "vtkLineRepresentation", modulename,
    NULL, NULL,
    PyvtkLineRepresentation_Doc(),
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
    if (o && PyDict_SetItemString(d, (char *)"OnP1", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"OnP2", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"TranslatingP1", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"TranslatingP2", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"OnLine", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"Scaling", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkLineRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkLineRepresentation - a class defining the representation for a\nvtkLineWidget2\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class is a concrete representation for the vtkLineWidget2. It\nrepresents a straight line with three handles: one at the beginning\nand ending of the line, and one used to translate the line. Through\ninteraction with the widget, the line representation can be\narbitrarily placed in the 3D space.\n\nTo use this representation, you normally specify the position of the\ntwo end points (either in world",
    " or display coordinates). The\nPlaceWidget() method is also used to intially position the\nrepresentation.\n\nCaveats:\n\nThis class, and vtkLineWidget2, are next generation VTK widgets. An\nearlier version of this functionality was defined in the class\nvtkLineWidget.\n\nSee Also:\n\nvtkLineWidget2 vtkLineWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLineRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLineRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLineRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

