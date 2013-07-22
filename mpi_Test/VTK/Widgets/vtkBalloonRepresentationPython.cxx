// python wrapper for vtkBalloonRepresentation
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
#include "vtkBalloonRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBalloonRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBalloonRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBalloonRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBalloonRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkBalloonRepresentation_Doc();


static PyObject *
PyvtkBalloonRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      tempr = op->vtkBalloonRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      tempr = op->vtkBalloonRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkBalloonRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::NewInstance();
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
PyvtkBalloonRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBalloonRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBalloonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetBalloonImage(temp0);
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetBalloonImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBalloonImage();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::GetBalloonImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetBalloonText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBalloonText();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::GetBalloonText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBalloonText(temp0);
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetImageSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetImageSize(temp0, temp1);
      }
    else
      {
      op->vtkBalloonRepresentation::SetImageSize(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetImageSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetImageSize(temp0);
      }
    else
      {
      op->vtkBalloonRepresentation::SetImageSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetImageSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBalloonRepresentation_SetImageSize_s1(self, args);
    case 1:
      return PyvtkBalloonRepresentation_SetImageSize_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetImageSize");
  return NULL;
}



static PyObject *
PyvtkBalloonRepresentation_GetImageSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageSize();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::GetImageSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      op->vtkBalloonRepresentation::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      tempr = op->vtkBalloonRepresentation::GetTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetFrameProperty(temp0);
      }
    else
      {
      op->vtkBalloonRepresentation::SetFrameProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetFrameProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrameProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFrameProperty();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::GetFrameProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetImageProperty(temp0);
      }
    else
      {
      op->vtkBalloonRepresentation::SetImageProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetImageProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageProperty();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::GetImageProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBalloonLayout(temp0);
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonLayout(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetBalloonLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloonLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBalloonLayout();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::GetBalloonLayout();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBalloonLayoutToImageLeft();
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBalloonLayoutToImageRight();
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageRight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBalloonLayoutToImageBottom();
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageBottom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToImageTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToImageTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBalloonLayoutToImageTop();
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonLayoutToImageTop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBalloonLayoutToTextLeft();
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextLeft();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBalloonLayoutToTextRight();
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextRight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBalloonLayoutToTextTop();
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextTop();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetBalloonLayoutToTextBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBalloonLayoutToTextBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBalloonLayoutToTextBottom();
      }
    else
      {
      op->vtkBalloonRepresentation::SetBalloonLayoutToTextBottom();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0, temp1);
      }
    else
      {
      op->vtkBalloonRepresentation::SetOffset(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkBalloonRepresentation::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBalloonRepresentation_SetOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkBalloonRepresentation_SetOffset_s1(self, args);
    case 1:
      return PyvtkBalloonRepresentation_SetOffset_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOffset");
  return NULL;
}



static PyObject *
PyvtkBalloonRepresentation_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffset();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::GetOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPadding(temp0);
      }
    else
      {
      op->vtkBalloonRepresentation::SetPadding(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPaddingMinValue();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::GetPaddingMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPaddingMaxValue();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::GetPaddingMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPadding();
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::GetPadding();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_StartWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      op->vtkBalloonRepresentation::StartWidgetInteraction(temp0);
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
PyvtkBalloonRepresentation_EndWidgetInteraction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWidgetInteraction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      op->vtkBalloonRepresentation::EndWidgetInteraction(temp0);
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
PyvtkBalloonRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkBalloonRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      tempr = op->vtkBalloonRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

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
      op->vtkBalloonRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBalloonRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBalloonRepresentation *op = static_cast<vtkBalloonRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkBalloonRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBalloonRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkBalloonRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkBalloonRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkBalloonRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBalloonRepresentation\nC++: vtkBalloonRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkBalloonRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBalloonRepresentation\nC++: vtkBalloonRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"SetBalloonImage", PyvtkBalloonRepresentation_SetBalloonImage, 1,
   (char*)"V.SetBalloonImage(vtkImageData)\nC++: virtual void SetBalloonImage(vtkImageData *img)\n\nSpecify/retrieve the image to display in the balloon.\n"},
  {(char*)"GetBalloonImage", PyvtkBalloonRepresentation_GetBalloonImage, 1,
   (char*)"V.GetBalloonImage() -> vtkImageData\nC++: vtkImageData *GetBalloonImage()\n\nSpecify/retrieve the image to display in the balloon.\n"},
  {(char*)"GetBalloonText", PyvtkBalloonRepresentation_GetBalloonText, 1,
   (char*)"V.GetBalloonText() -> string\nC++: char *GetBalloonText()\n\nSpecify/retrieve the text to display in the balloon.\n"},
  {(char*)"SetBalloonText", PyvtkBalloonRepresentation_SetBalloonText, 1,
   (char*)"V.SetBalloonText(string)\nC++: void SetBalloonText(char *)\n\nSpecify/retrieve the text to display in the balloon.\n"},
  {(char*)"SetImageSize", PyvtkBalloonRepresentation_SetImageSize, 1,
   (char*)"V.SetImageSize(int, int)\nC++: void SetImageSize(int, int)\nV.SetImageSize((int, int))\nC++: void SetImageSize(int a[2])\n\n"},
  {(char*)"GetImageSize", PyvtkBalloonRepresentation_GetImageSize, 1,
   (char*)"V.GetImageSize() -> (int, int)\nC++: int *GetImageSize()\n\n"},
  {(char*)"SetTextProperty", PyvtkBalloonRepresentation_SetTextProperty, 1,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *p)\n\nSet/get the text property (relevant only if text is shown).\n"},
  {(char*)"GetTextProperty", PyvtkBalloonRepresentation_GetTextProperty, 1,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/get the text property (relevant only if text is shown).\n"},
  {(char*)"SetFrameProperty", PyvtkBalloonRepresentation_SetFrameProperty, 1,
   (char*)"V.SetFrameProperty(vtkProperty2D)\nC++: virtual void SetFrameProperty(vtkProperty2D *p)\n\nSet/get the frame property (relevant only if text is shown). The\nframe lies behind the text.\n"},
  {(char*)"GetFrameProperty", PyvtkBalloonRepresentation_GetFrameProperty, 1,
   (char*)"V.GetFrameProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetFrameProperty()\n\nSet/get the frame property (relevant only if text is shown). The\nframe lies behind the text.\n"},
  {(char*)"SetImageProperty", PyvtkBalloonRepresentation_SetImageProperty, 1,
   (char*)"V.SetImageProperty(vtkProperty2D)\nC++: virtual void SetImageProperty(vtkProperty2D *p)\n\nSet/get the image property (relevant only if an image is shown).\n"},
  {(char*)"GetImageProperty", PyvtkBalloonRepresentation_GetImageProperty, 1,
   (char*)"V.GetImageProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetImageProperty()\n\nSet/get the image property (relevant only if an image is shown).\n"},
  {(char*)"SetBalloonLayout", PyvtkBalloonRepresentation_SetBalloonLayout, 1,
   (char*)"V.SetBalloonLayout(int)\nC++: void SetBalloonLayout(int a)\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {(char*)"GetBalloonLayout", PyvtkBalloonRepresentation_GetBalloonLayout, 1,
   (char*)"V.GetBalloonLayout() -> int\nC++: int GetBalloonLayout()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {(char*)"SetBalloonLayoutToImageLeft", PyvtkBalloonRepresentation_SetBalloonLayoutToImageLeft, 1,
   (char*)"V.SetBalloonLayoutToImageLeft()\nC++: void SetBalloonLayoutToImageLeft()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {(char*)"SetBalloonLayoutToImageRight", PyvtkBalloonRepresentation_SetBalloonLayoutToImageRight, 1,
   (char*)"V.SetBalloonLayoutToImageRight()\nC++: void SetBalloonLayoutToImageRight()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {(char*)"SetBalloonLayoutToImageBottom", PyvtkBalloonRepresentation_SetBalloonLayoutToImageBottom, 1,
   (char*)"V.SetBalloonLayoutToImageBottom()\nC++: void SetBalloonLayoutToImageBottom()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {(char*)"SetBalloonLayoutToImageTop", PyvtkBalloonRepresentation_SetBalloonLayoutToImageTop, 1,
   (char*)"V.SetBalloonLayoutToImageTop()\nC++: void SetBalloonLayoutToImageTop()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {(char*)"SetBalloonLayoutToTextLeft", PyvtkBalloonRepresentation_SetBalloonLayoutToTextLeft, 1,
   (char*)"V.SetBalloonLayoutToTextLeft()\nC++: void SetBalloonLayoutToTextLeft()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {(char*)"SetBalloonLayoutToTextRight", PyvtkBalloonRepresentation_SetBalloonLayoutToTextRight, 1,
   (char*)"V.SetBalloonLayoutToTextRight()\nC++: void SetBalloonLayoutToTextRight()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {(char*)"SetBalloonLayoutToTextTop", PyvtkBalloonRepresentation_SetBalloonLayoutToTextTop, 1,
   (char*)"V.SetBalloonLayoutToTextTop()\nC++: void SetBalloonLayoutToTextTop()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {(char*)"SetBalloonLayoutToTextBottom", PyvtkBalloonRepresentation_SetBalloonLayoutToTextBottom, 1,
   (char*)"V.SetBalloonLayoutToTextBottom()\nC++: void SetBalloonLayoutToTextBottom()\n\nSpecify the layout of the image and text within the balloon. Note\nthat there are reduncies in these methods, for example\nSetBalloonLayoutToImageLeft() results in the same effect as\nSetBalloonLayoutToTextRight(). If only text is specified, or only\nan image is specified, then it doesn't matter how the layout is\nspecified.\n"},
  {(char*)"SetOffset", PyvtkBalloonRepresentation_SetOffset, 1,
   (char*)"V.SetOffset(int, int)\nC++: void SetOffset(int, int)\nV.SetOffset((int, int))\nC++: void SetOffset(int a[2])\n\n"},
  {(char*)"GetOffset", PyvtkBalloonRepresentation_GetOffset, 1,
   (char*)"V.GetOffset() -> (int, int)\nC++: int *GetOffset()\n\n"},
  {(char*)"SetPadding", PyvtkBalloonRepresentation_SetPadding, 1,
   (char*)"V.SetPadding(int)\nC++: void SetPadding(int)\n\nSet/Get the padding (in pixels) that is used between the text and\nthe frame.\n"},
  {(char*)"GetPaddingMinValue", PyvtkBalloonRepresentation_GetPaddingMinValue, 1,
   (char*)"V.GetPaddingMinValue() -> int\nC++: int GetPaddingMinValue()\n\nSet/Get the padding (in pixels) that is used between the text and\nthe frame.\n"},
  {(char*)"GetPaddingMaxValue", PyvtkBalloonRepresentation_GetPaddingMaxValue, 1,
   (char*)"V.GetPaddingMaxValue() -> int\nC++: int GetPaddingMaxValue()\n\nSet/Get the padding (in pixels) that is used between the text and\nthe frame.\n"},
  {(char*)"GetPadding", PyvtkBalloonRepresentation_GetPadding, 1,
   (char*)"V.GetPadding() -> int\nC++: int GetPadding()\n\nSet/Get the padding (in pixels) that is used between the text and\nthe frame.\n"},
  {(char*)"StartWidgetInteraction", PyvtkBalloonRepresentation_StartWidgetInteraction, 1,
   (char*)"V.StartWidgetInteraction([float, float])\nC++: virtual void StartWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"EndWidgetInteraction", PyvtkBalloonRepresentation_EndWidgetInteraction, 1,
   (char*)"V.EndWidgetInteraction([float, float])\nC++: virtual void EndWidgetInteraction(double e[2])\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"BuildRepresentation", PyvtkBalloonRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ComputeInteractionState", PyvtkBalloonRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nThese are methods that satisfy vtkWidgetRepresentation's API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkBalloonRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOverlay", PyvtkBalloonRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBalloonRepresentation_StaticNew()
{
  return vtkBalloonRepresentation::New();
}

PyObject *PyVTKClass_vtkBalloonRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBalloonRepresentation_StaticNew,
    PyvtkBalloonRepresentation_Methods,
    "vtkBalloonRepresentation", modulename,
    NULL, NULL,
    PyvtkBalloonRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"ImageLeft", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ImageRight", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ImageBottom", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"ImageTop", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Outside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OnText", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"OnImage", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkBalloonRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkBalloonRepresentation - represent the vtkBalloonWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "The vtkBalloonRepresentation is used to represent the\nvtkBalloonWidget. This representation is defined by two items: a text\nstring and an image. At least one of these two items must be defined,\nbut it is allowable to specify both, or just an image or just text.\nIf both the text and image are specified, then methods are available\nfor positioning the text and image with respect to each other.\n\nThe b",
    "alloon representation consists of three parts: text, a\nrectangular frame behind the text, and an image placed next to the\nframe and sized to match the frame.\n\nThe size of the balloon is ultimately controlled by the text\nproperties (i.e., font size). This representation uses a layout\npolicy as follows.\n\nIf there is just text and no image, then the text properties and\npadding are used to control the",
    " size of the balloon.\n\nIf there is just an image and no text, then the ImageSize[2] member\nis used to control the image size. (The image will fit into this\nrectangle, but will not necessarily fill the whole rectangle, i.e.,\nthe image is not stretched).\n\nIf there is text and an image, the following approach ia used. First,\nbased on the font size and other related properties (e.g., padding),\ndetermi",
    "ne the size of the frame. Second, depending on the layout of\nthe image and text frame, control the size of the neighboring image\n(since the frame and image share a common edge). However, if this\nresults in an image that is smaller than ImageSize[2], then the image\nsize will be set to ImageSize[2] and the frame will be adjusted\naccordingly. The text is always placed in the center of the frame if\nth",
    "e frame is resized.\n\nSee Also:\n\nvtkBalloonWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBalloonRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBalloonRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBalloonRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

