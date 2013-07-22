// python wrapper for vtkImageCanvasSource2D
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
#include "vtkImageCanvasSource2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageCanvasSource2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageCanvasSource2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageCanvasSource2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageCanvasSource2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkImageCanvasSource2D_Doc();


static PyObject *
PyvtkImageCanvasSource2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      tempr = op->vtkImageCanvasSource2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      tempr = op->vtkImageCanvasSource2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  vtkImageCanvasSource2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageCanvasSource2D::NewInstance();
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
PyvtkImageCanvasSource2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageCanvasSource2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageCanvasSource2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0;
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
      op->SetDrawColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetDrawColor(temp0);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDrawColor(temp0);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetDrawColor(temp0, temp1);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->SetDrawColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCanvasSource2D_SetDrawColor_Methods[] = {
  {NULL, PyvtkImageCanvasSource2D_SetDrawColor_s2, 1,
   (char*)"@O *d"},
  {NULL, PyvtkImageCanvasSource2D_SetDrawColor_s3, 1,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageCanvasSource2D_SetDrawColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkImageCanvasSource2D_SetDrawColor_s1(self, args);
    case 2:
      return PyvtkImageCanvasSource2D_SetDrawColor_s4(self, args);
    case 3:
      return PyvtkImageCanvasSource2D_SetDrawColor_s5(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetDrawColor");
  return NULL;
}



static PyObject *
PyvtkImageCanvasSource2D_GetDrawColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDrawColor();
      }
    else
      {
      tempr = op->vtkImageCanvasSource2D::GetDrawColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_FillBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->FillBox(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageCanvasSource2D::FillBox(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_FillTube(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTube");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  double temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->FillTube(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkImageCanvasSource2D::FillTube(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_FillTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->FillTriangle(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageCanvasSource2D::FillTriangle(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawCircle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawCircle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->DrawCircle(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCanvasSource2D::DrawCircle(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->DrawPoint(temp0, temp1);
      }
    else
      {
      op->vtkImageCanvasSource2D::DrawPoint(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->DrawSegment(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageCanvasSource2D::DrawSegment(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawSegment3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSegment3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->DrawSegment3D(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageCanvasSource2D::DrawSegment3D(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  vtkImageData *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->DrawImage(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCanvasSource2D::DrawImage(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_DrawImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  vtkImageData *temp2 = NULL;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      op->DrawImage(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      op->vtkImageCanvasSource2D::DrawImage(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_DrawImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageCanvasSource2D_DrawImage_s1(self, args);
    case 7:
      return PyvtkImageCanvasSource2D_DrawImage_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawImage");
  return NULL;
}



static PyObject *
PyvtkImageCanvasSource2D_FillPixel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillPixel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->FillPixel(temp0, temp1);
      }
    else
      {
      op->vtkImageCanvasSource2D::FillPixel(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetDefaultZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultZ(temp0);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetDefaultZ(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_GetDefaultZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultZ();
      }
    else
      {
      tempr = op->vtkImageCanvasSource2D::GetDefaultZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetRatio_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->SetRatio(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetRatio(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetRatio_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetRatio(temp0);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetRatio(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageCanvasSource2D_SetRatio_s1(self, args);
    case 1:
      return PyvtkImageCanvasSource2D_SetRatio_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRatio");
  return NULL;
}



static PyObject *
PyvtkImageCanvasSource2D_GetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRatio();
      }
    else
      {
      tempr = op->vtkImageCanvasSource2D::GetRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfScalarComponents(temp0);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetNumberOfScalarComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfScalarComponents();
      }
    else
      {
      tempr = op->vtkImageCanvasSource2D::GetNumberOfScalarComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToFloat();
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarTypeToFloat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToDouble();
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarTypeToDouble();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToInt();
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarTypeToInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedInt();
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedInt();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToLong();
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarTypeToLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedLong();
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedLong();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToShort();
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarTypeToShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedShort();
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedShort();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToUnsignedChar();
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetScalarTypeToChar();
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarTypeToChar();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScalarType(temp0);
      }
    else
      {
      op->vtkImageCanvasSource2D::SetScalarType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarType();
      }
    else
      {
      tempr = op->vtkImageCanvasSource2D::GetScalarType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageCanvasSource2D_Methods[] = {
  {(char*)"GetClassName", PyvtkImageCanvasSource2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageCanvasSource2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageCanvasSource2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageCanvasSource2D\nC++: vtkImageCanvasSource2D *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageCanvasSource2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageCanvasSource2D\nC++: vtkImageCanvasSource2D *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDrawColor", PyvtkImageCanvasSource2D_SetDrawColor, 1,
   (char*)"V.SetDrawColor(float, float, float, float)\nC++: void SetDrawColor(double, double, double, double)\nV.SetDrawColor((float, float, float, float))\nC++: void SetDrawColor(double a[4])\nV.SetDrawColor(float)\nC++: void SetDrawColor(double a)\nV.SetDrawColor(float, float)\nC++: void SetDrawColor(double a, double b)\nV.SetDrawColor(float, float, float)\nC++: void SetDrawColor(double a, double b, double c)\n\n"},
  {(char*)"GetDrawColor", PyvtkImageCanvasSource2D_GetDrawColor, 1,
   (char*)"V.GetDrawColor() -> (float, float, float, float)\nC++: double *GetDrawColor()\n\n"},
  {(char*)"FillBox", PyvtkImageCanvasSource2D_FillBox, 1,
   (char*)"V.FillBox(int, int, int, int)\nC++: void FillBox(int min0, int max0, int min1, int max1)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {(char*)"FillTube", PyvtkImageCanvasSource2D_FillTube, 1,
   (char*)"V.FillTube(int, int, int, int, float)\nC++: void FillTube(int x0, int y0, int x1, int y1, double radius)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {(char*)"FillTriangle", PyvtkImageCanvasSource2D_FillTriangle, 1,
   (char*)"V.FillTriangle(int, int, int, int, int, int)\nC++: void FillTriangle(int x0, int y0, int x1, int y1, int x2,\n    int y2)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {(char*)"DrawCircle", PyvtkImageCanvasSource2D_DrawCircle, 1,
   (char*)"V.DrawCircle(int, int, float)\nC++: void DrawCircle(int c0, int c1, double radius)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {(char*)"DrawPoint", PyvtkImageCanvasSource2D_DrawPoint, 1,
   (char*)"V.DrawPoint(int, int)\nC++: void DrawPoint(int p0, int p1)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {(char*)"DrawSegment", PyvtkImageCanvasSource2D_DrawSegment, 1,
   (char*)"V.DrawSegment(int, int, int, int)\nC++: void DrawSegment(int x0, int y0, int x1, int y1)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {(char*)"DrawSegment3D", PyvtkImageCanvasSource2D_DrawSegment3D, 1,
   (char*)"V.DrawSegment3D(float, float, float, float, float, float)\nC++: void DrawSegment3D(double x1, double y1, double z1,\n    double x2, double y2, double z2)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {(char*)"DrawImage", PyvtkImageCanvasSource2D_DrawImage, 1,
   (char*)"V.DrawImage(int, int, vtkImageData)\nC++: void DrawImage(int x0, int y0, vtkImageData *i)\nV.DrawImage(int, int, vtkImageData, int, int, int, int)\nC++: void DrawImage(int x0, int y0, vtkImageData *, int sx,\n    int sy, int width, int height)\n\nDraw subimage of the input image in the canvas at position x0 and\ny0. The subimage is defined with sx, sy, width, and height.\n"},
  {(char*)"FillPixel", PyvtkImageCanvasSource2D_FillPixel, 1,
   (char*)"V.FillPixel(int, int)\nC++: void FillPixel(int x, int y)\n\nFill a colored area with another color. (like connectivity) All\npixels connected (and with the same value) to pixel (x, y) get\nreplaced by the current \"DrawColor\".\n"},
  {(char*)"SetExtent", PyvtkImageCanvasSource2D_SetExtent, 1,
   (char*)"V.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int x1, int x2, int y1, int y2, int z1,\n    int z2)\n\nThese methods set the WholeExtent of the output It sets the size\nof the canvas. Extent is a min max 3D box.  Minimums and maximums\nare inclusive.\n"},
  {(char*)"SetDefaultZ", PyvtkImageCanvasSource2D_SetDefaultZ, 1,
   (char*)"V.SetDefaultZ(int)\nC++: void SetDefaultZ(int a)\n\nThe drawing operations can only draw into one 2D XY plane at a\ntime. If the canvas is a 3D volume, then this z value is used as\nthe default for 2D operations. The default is 0.\n"},
  {(char*)"GetDefaultZ", PyvtkImageCanvasSource2D_GetDefaultZ, 1,
   (char*)"V.GetDefaultZ() -> int\nC++: int GetDefaultZ()\n\nThe drawing operations can only draw into one 2D XY plane at a\ntime. If the canvas is a 3D volume, then this z value is used as\nthe default for 2D operations. The default is 0.\n"},
  {(char*)"SetRatio", PyvtkImageCanvasSource2D_SetRatio, 1,
   (char*)"V.SetRatio(float, float, float)\nC++: void SetRatio(double, double, double)\nV.SetRatio((float, float, float))\nC++: void SetRatio(double a[3])\n\n"},
  {(char*)"GetRatio", PyvtkImageCanvasSource2D_GetRatio, 1,
   (char*)"V.GetRatio() -> (float, float, float)\nC++: double *GetRatio()\n\n"},
  {(char*)"SetNumberOfScalarComponents", PyvtkImageCanvasSource2D_SetNumberOfScalarComponents, 1,
   (char*)"V.SetNumberOfScalarComponents(int)\nC++: virtual void SetNumberOfScalarComponents(int i)\n\nSet the number of scalar components\n"},
  {(char*)"GetNumberOfScalarComponents", PyvtkImageCanvasSource2D_GetNumberOfScalarComponents, 1,
   (char*)"V.GetNumberOfScalarComponents() -> int\nC++: virtual int GetNumberOfScalarComponents()\n\nSet the number of scalar components\n"},
  {(char*)"SetScalarTypeToFloat", PyvtkImageCanvasSource2D_SetScalarTypeToFloat, 1,
   (char*)"V.SetScalarTypeToFloat()\nC++: void SetScalarTypeToFloat()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToDouble", PyvtkImageCanvasSource2D_SetScalarTypeToDouble, 1,
   (char*)"V.SetScalarTypeToDouble()\nC++: void SetScalarTypeToDouble()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToInt", PyvtkImageCanvasSource2D_SetScalarTypeToInt, 1,
   (char*)"V.SetScalarTypeToInt()\nC++: void SetScalarTypeToInt()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToUnsignedInt", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedInt, 1,
   (char*)"V.SetScalarTypeToUnsignedInt()\nC++: void SetScalarTypeToUnsignedInt()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToLong", PyvtkImageCanvasSource2D_SetScalarTypeToLong, 1,
   (char*)"V.SetScalarTypeToLong()\nC++: void SetScalarTypeToLong()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToUnsignedLong", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedLong, 1,
   (char*)"V.SetScalarTypeToUnsignedLong()\nC++: void SetScalarTypeToUnsignedLong()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToShort", PyvtkImageCanvasSource2D_SetScalarTypeToShort, 1,
   (char*)"V.SetScalarTypeToShort()\nC++: void SetScalarTypeToShort()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToUnsignedShort", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedShort, 1,
   (char*)"V.SetScalarTypeToUnsignedShort()\nC++: void SetScalarTypeToUnsignedShort()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToUnsignedChar", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedChar, 1,
   (char*)"V.SetScalarTypeToUnsignedChar()\nC++: void SetScalarTypeToUnsignedChar()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarTypeToChar", PyvtkImageCanvasSource2D_SetScalarTypeToChar, 1,
   (char*)"V.SetScalarTypeToChar()\nC++: void SetScalarTypeToChar()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"SetScalarType", PyvtkImageCanvasSource2D_SetScalarType, 1,
   (char*)"V.SetScalarType(int)\nC++: void SetScalarType(int)\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {(char*)"GetScalarType", PyvtkImageCanvasSource2D_GetScalarType, 1,
   (char*)"V.GetScalarType() -> int\nC++: int GetScalarType()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageCanvasSource2D_StaticNew()
{
  return vtkImageCanvasSource2D::New();
}

PyObject *PyVTKClass_vtkImageCanvasSource2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageCanvasSource2D_StaticNew,
    PyvtkImageCanvasSource2D_Methods,
    "vtkImageCanvasSource2D", modulename,
    NULL, NULL,
    PyvtkImageCanvasSource2D_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageCanvasSource2D_Doc()
{
  static const char *docstring[] = {
    "vtkImageCanvasSource2D - Paints on a canvas\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkImageCanvasSource2D is a source that starts as a blank image. you\nmay add to the image with two-dimensional drawing routines. It can\npaint multi-spectral images.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageCanvasSource2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageCanvasSource2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageCanvasSource2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

