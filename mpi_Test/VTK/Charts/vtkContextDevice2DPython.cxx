// python wrapper for vtkContextDevice2D
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
#include "vtkStdString.h"
#include "vtkUnicodeString.h"
#include "vtkRect.h"
#include "vtkContextDevice2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContextDevice2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContextDevice2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContextDevice2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContextDevice2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkContextDevice2D_Doc();


static PyObject *
PyvtkContextDevice2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      tempr = op->vtkContextDevice2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

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
      tempr = op->vtkContextDevice2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkContextDevice2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContextDevice2D::NewInstance();
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
PyvtkContextDevice2D_DrawEllipseWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipseWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  float temp6;
  float temp7;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
    {
    op->DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_DrawEllipticArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipticArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    op->DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_ComputeStringBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkStdString temp0;
  float temp1[4];
  float save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->ComputeStringBounds(temp0, temp1);

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
PyvtkContextDevice2D_ComputeStringBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkUnicodeString temp0;
  float temp1[4];
  float save1[4];
  const int size1 = 4;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->ComputeStringBounds(temp0, temp1);

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

static PyMethodDef PyvtkContextDevice2D_ComputeStringBounds_Methods[] = {
  {NULL, PyvtkContextDevice2D_ComputeStringBounds_s1, 1,
   (char*)"@sO *f"},
  {NULL, PyvtkContextDevice2D_ComputeStringBounds_s2, 1,
   (char*)"@OO unicode *f"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContextDevice2D_ComputeStringBounds(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContextDevice2D_ComputeStringBounds_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeStringBounds");
  return NULL;
}



static PyObject *
PyvtkContextDevice2D_DrawImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  float temp0[2];
  float save0[2];
  const int size0 = 2;
  float temp1;
  vtkImageData *temp2 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
    {
    ap.SaveArray(temp0, save0, size0);

    op->DrawImage(temp0, temp1, temp2);

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
PyvtkContextDevice2D_DrawImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkRectf *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    op->DrawImage(*temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkContextDevice2D_DrawImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkContextDevice2D_DrawImage_s1(self, args);
    case 2:
      return PyvtkContextDevice2D_DrawImage_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "DrawImage");
  return NULL;
}



static PyObject *
PyvtkContextDevice2D_ApplyPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkPen *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
    {
    if (ap.IsBound())
      {
      op->ApplyPen(temp0);
      }
    else
      {
      op->vtkContextDevice2D::ApplyPen(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkPen *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPen();
      }
    else
      {
      tempr = op->vtkContextDevice2D::GetPen();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_ApplyBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkBrush *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
    {
    if (ap.IsBound())
      {
      op->ApplyBrush(temp0);
      }
    else
      {
      op->vtkContextDevice2D::ApplyBrush(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkBrush *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBrush();
      }
    else
      {
      tempr = op->vtkContextDevice2D::GetBrush();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_ApplyTextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyTextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->ApplyTextProp(temp0);
      }
    else
      {
      op->vtkContextDevice2D::ApplyTextProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetTextProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextProp();
      }
    else
      {
      tempr = op->vtkContextDevice2D::GetTextProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetColor4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  unsigned char temp0[4];
  unsigned char save0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    op->SetColor4(temp0);

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
PyvtkContextDevice2D_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkImageData *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1))
    {
    op->SetTexture(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetPointSize(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetLineWidth(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetLineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    op->SetLineType(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidth();
      }
    else
      {
      tempr = op->vtkContextDevice2D::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeight();
      }
    else
      {
      tempr = op->vtkContextDevice2D::GetHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
    {
    op->SetMatrix(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
    {
    op->GetMatrix(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_MultiplyMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
    {
    op->MultiplyMatrix(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_PushMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->PushMatrix();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_PopMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->PopMatrix();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_DisableClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->DisableClipping();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->Begin(temp0);
      }
    else
      {
      op->vtkContextDevice2D::Begin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->End();
      }
    else
      {
      op->vtkContextDevice2D::End();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_GetBufferIdMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferIdMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBufferIdMode();
      }
    else
      {
      tempr = op->vtkContextDevice2D::GetBufferIdMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_BufferIdModeBegin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeBegin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  vtkAbstractContextBufferId *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextBufferId"))
    {
    if (ap.IsBound())
      {
      op->BufferIdModeBegin(temp0);
      }
    else
      {
      op->vtkContextDevice2D::BufferIdModeBegin(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextDevice2D_BufferIdModeEnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferIdModeEnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice2D *op = static_cast<vtkContextDevice2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BufferIdModeEnd();
      }
    else
      {
      op->vtkContextDevice2D::BufferIdModeEnd();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkContextDevice2D_Methods[] = {
  {(char*)"GetClassName", PyvtkContextDevice2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextDevice2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextDevice2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContextDevice2D\nC++: vtkContextDevice2D *NewInstance()\n\n"},
  {(char*)"DrawEllipseWedge", PyvtkContextDevice2D_DrawEllipseWedge, 1,
   (char*)"V.DrawEllipseWedge(float, float, float, float, float, float,\n    float, float)\nC++: virtual void DrawEllipseWedge(float x, float y, float outRx,\n    float outRy, float inRx, float inRy, float startAngle,\n    float stopAngle)\n\nDraw an elliptic wedge with center at x, y, outer radii outRx,\noutRy, inner radii inRx, inRy between angles startAngle and\nstopAngle (expressed in degrees).\n\\pre positive_outRx: outRx>=0\n\\pre positive_outRy: outRy>=0\n\\pre positive_inRx: inRx>=0\n\\pre positive_inRy: inRy>=0\n\\pre ordered_rx: inRx<=outRx\n\\pre ordered_ry: inRy<=outRy\n"},
  {(char*)"DrawEllipticArc", PyvtkContextDevice2D_DrawEllipticArc, 1,
   (char*)"V.DrawEllipticArc(float, float, float, float, float, float)\nC++: virtual void DrawEllipticArc(float x, float y, float rX,\n    float rY, float startAngle, float stopAngle)\n\nDraw an elliptic arc with center at x,y with radii rX and rY\nbetween angles startAngle and stopAngle (expressed in degrees).\n\\pre positive_rX: rX>=0\n\\pre positive_rY: rY>=0\n"},
  {(char*)"ComputeStringBounds", PyvtkContextDevice2D_ComputeStringBounds, 1,
   (char*)"V.ComputeStringBounds(string, [float, float, float, float])\nC++: virtual void ComputeStringBounds(const vtkStdString &string,\n    float bounds[4])\nV.ComputeStringBounds(unicode, [float, float, float, float])\nC++: virtual void ComputeStringBounds(\n    const vtkUnicodeString &string, float bounds[4])\n\nCompute the bounds of the supplied string. The bounds will be\ncopied to the supplied bounds variable, the first two elements\nare the bottom corner of the string, and the second two elements\nare the width and height of the bounding box. NOTE: This function\ndoes not take account of the text rotation.\n"},
  {(char*)"DrawImage", PyvtkContextDevice2D_DrawImage, 1,
   (char*)"V.DrawImage([float, float], float, vtkImageData)\nC++: virtual void DrawImage(float p[2], float scale,\n    vtkImageData *image)\nV.DrawImage(vtkRectf, vtkImageData)\nC++: virtual void DrawImage(const vtkRectf &pos,\n    vtkImageData *image)\n\nDraw the supplied image at the given x, y (p[0], p[1]) (bottom\ncorner), scaled by scale (1.0 would match the image).\n"},
  {(char*)"ApplyPen", PyvtkContextDevice2D_ApplyPen, 1,
   (char*)"V.ApplyPen(vtkPen)\nC++: void ApplyPen(vtkPen *pen)\n\nApply the supplied pen which controls the outlines of shapes, as\nwell as lines, points and related primitives. This makes a deep\ncopy of the vtkPen object in the vtkContext2D, it does not hold a\npointer to the supplied object.\n"},
  {(char*)"GetPen", PyvtkContextDevice2D_GetPen, 1,
   (char*)"V.GetPen() -> vtkPen\nC++: vtkPen *GetPen()\n\nGet the pen which controls the outlines of shapes, as well as\nlines, points and related primitives. This object can be modified\nand the changes will be reflected in subsequent drawing\noperations.\n"},
  {(char*)"ApplyBrush", PyvtkContextDevice2D_ApplyBrush, 1,
   (char*)"V.ApplyBrush(vtkBrush)\nC++: void ApplyBrush(vtkBrush *brush)\n\nApply the supplied brush which controls the outlines of shapes,\nas well as lines, points and related primitives. This makes a\ndeep copy of the vtkBrush object in the vtkContext2D, it does not\nhold a pointer to the supplied object.\n"},
  {(char*)"GetBrush", PyvtkContextDevice2D_GetBrush, 1,
   (char*)"V.GetBrush() -> vtkBrush\nC++: vtkBrush *GetBrush()\n\nGet the pen which controls the outlines of shapes as well as\nlines, points and related primitives.\n"},
  {(char*)"ApplyTextProp", PyvtkContextDevice2D_ApplyTextProp, 1,
   (char*)"V.ApplyTextProp(vtkTextProperty)\nC++: void ApplyTextProp(vtkTextProperty *prop)\n\nApply the supplied text property which controls how text is\nrendered. This makes a deep copy of the vtkTextProperty object in\nthe vtkContext2D, it does not hold a pointer to the supplied\nobject.\n"},
  {(char*)"GetTextProp", PyvtkContextDevice2D_GetTextProp, 1,
   (char*)"V.GetTextProp() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProp()\n\nGet the text properties object for the vtkContext2D.\n"},
  {(char*)"SetColor4", PyvtkContextDevice2D_SetColor4, 1,
   (char*)"V.SetColor4([int, int, int, int])\nC++: virtual void SetColor4(unsigned char color[4])\n\nSet the color for the device using unsigned char of length 4,\nRGBA.\n"},
  {(char*)"SetTexture", PyvtkContextDevice2D_SetTexture, 1,
   (char*)"V.SetTexture(vtkImageData, int)\nC++: virtual void SetTexture(vtkImageData *image, int properties)\n\nSet the texture for the device, it is used to fill the polygons\n"},
  {(char*)"SetPointSize", PyvtkContextDevice2D_SetPointSize, 1,
   (char*)"V.SetPointSize(float)\nC++: virtual void SetPointSize(float size)\n\nSet the point size for glyphs/sprites.\n"},
  {(char*)"SetLineWidth", PyvtkContextDevice2D_SetLineWidth, 1,
   (char*)"V.SetLineWidth(float)\nC++: virtual void SetLineWidth(float width)\n\nSet the line width.\n"},
  {(char*)"SetLineType", PyvtkContextDevice2D_SetLineType, 1,
   (char*)"V.SetLineType(int)\nC++: virtual void SetLineType(int type)\n\nSet the line type type (using anonymous enum in vtkPen).\n"},
  {(char*)"GetWidth", PyvtkContextDevice2D_GetWidth, 1,
   (char*)"V.GetWidth() -> int\nC++: virtual int GetWidth()\n\nGet the width of the device in pixels.\n"},
  {(char*)"GetHeight", PyvtkContextDevice2D_GetHeight, 1,
   (char*)"V.GetHeight() -> int\nC++: virtual int GetHeight()\n\nGet the width of the device in pixels.\n"},
  {(char*)"SetMatrix", PyvtkContextDevice2D_SetMatrix, 1,
   (char*)"V.SetMatrix(vtkMatrix3x3)\nC++: virtual void SetMatrix(vtkMatrix3x3 *m)\n\nSet the model view matrix for the display\n"},
  {(char*)"GetMatrix", PyvtkContextDevice2D_GetMatrix, 1,
   (char*)"V.GetMatrix(vtkMatrix3x3)\nC++: virtual void GetMatrix(vtkMatrix3x3 *m)\n\nSet the model view matrix for the display\n"},
  {(char*)"MultiplyMatrix", PyvtkContextDevice2D_MultiplyMatrix, 1,
   (char*)"V.MultiplyMatrix(vtkMatrix3x3)\nC++: virtual void MultiplyMatrix(vtkMatrix3x3 *m)\n\nMultiply the current model view matrix by the supplied one\n"},
  {(char*)"PushMatrix", PyvtkContextDevice2D_PushMatrix, 1,
   (char*)"V.PushMatrix()\nC++: virtual void PushMatrix()\n\nPush the current matrix onto the stack.\n"},
  {(char*)"PopMatrix", PyvtkContextDevice2D_PopMatrix, 1,
   (char*)"V.PopMatrix()\nC++: virtual void PopMatrix()\n\nPop the current matrix off of the stack.\n"},
  {(char*)"DisableClipping", PyvtkContextDevice2D_DisableClipping, 1,
   (char*)"V.DisableClipping()\nC++: virtual void DisableClipping()\n\nDisable clipping of the display.\n"},
  {(char*)"Begin", PyvtkContextDevice2D_Begin, 1,
   (char*)"V.Begin(vtkViewport)\nC++: virtual void Begin(vtkViewport *)\n\nBegin drawing, pass in the viewport to set up the view.\n"},
  {(char*)"End", PyvtkContextDevice2D_End, 1,
   (char*)"V.End()\nC++: virtual void End()\n\nEnd drawing, clean up the view.\n"},
  {(char*)"GetBufferIdMode", PyvtkContextDevice2D_GetBufferIdMode, 1,
   (char*)"V.GetBufferIdMode() -> bool\nC++: virtual bool GetBufferIdMode()\n\nTell if the device context is in BufferId creation mode. Initial\nvalue is false.\n"},
  {(char*)"BufferIdModeBegin", PyvtkContextDevice2D_BufferIdModeBegin, 1,
   (char*)"V.BufferIdModeBegin(vtkAbstractContextBufferId)\nC++: virtual void BufferIdModeBegin(\n    vtkAbstractContextBufferId *bufferId)\n\nStart BufferId creation Mode. The default implementation is\nempty.\n\\pre not_yet: !GetBufferIdMode()\n\\pre bufferId_exists: bufferId!=0\n\\post started: GetBufferIdMode()\n"},
  {(char*)"BufferIdModeEnd", PyvtkContextDevice2D_BufferIdModeEnd, 1,
   (char*)"V.BufferIdModeEnd()\nC++: virtual void BufferIdModeEnd()\n\nFinalize BufferId creation Mode. It makes sure that the content\nof the bufferId passed in argument of BufferIdModeBegin() is\ncorrectly set. The default implementation is empty.\n\\pre started: GetBufferIdMode()\n\\post done: !GetBufferIdMode()\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkContextDevice2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkContextDevice2D_Methods,
    "vtkContextDevice2D", modulename,
    NULL, NULL,
    PyvtkContextDevice2D_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0x01);
    if (o && PyDict_SetItemString(d, (char *)"Nearest", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x02);
    if (o && PyDict_SetItemString(d, (char *)"Linear", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x04);
    if (o && PyDict_SetItemString(d, (char *)"Stretch", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0x08);
    if (o && PyDict_SetItemString(d, (char *)"Repeat", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkContextDevice2D_Doc()
{
  static const char *docstring[] = {
    "vtkContextDevice2D - Abstract class for drawing 2D primitives.\n\n",
    "Superclass: vtkObject\n\n",
    "This defines the interface for a vtkContextDevice2D. In this sense a\nContextDevice is a class used to paint 2D primitives onto a device,\nsuch as an OpenGL context or a QGraphicsView.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextDevice2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextDevice2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextDevice2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

