// python wrapper for vtkTensorGlyph
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
#include "vtkTensorGlyph.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTensorGlyph(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTensorGlyph(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTensorGlyphNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTensorGlyphNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkTensorGlyph_Doc();


static PyObject *
PyvtkTensorGlyph_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

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
      tempr = op->vtkTensorGlyph::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

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
      tempr = op->vtkTensorGlyph::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  vtkTensorGlyph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTensorGlyph::NewInstance();
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
PyvtkTensorGlyph_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTensorGlyph *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTensorGlyph::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSource(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetSource(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSource();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetSourceConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0, temp1);
      }
    else
      {
      op->vtkTensorGlyph::SetSourceConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTensorGlyph_SetSourceConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSourceConnection(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetSourceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTensorGlyph_SetSourceConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTensorGlyph_SetSourceConnection_s1(self, args);
    case 1:
      return PyvtkTensorGlyph_SetSourceConnection_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetSourceConnection");
  return NULL;
}



static PyObject *
PyvtkTensorGlyph_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaling(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaling();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOn();
      }
    else
      {
      op->vtkTensorGlyph::ScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScalingOff();
      }
    else
      {
      op->vtkTensorGlyph::ScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactor();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetThreeGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreeGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreeGlyphs(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetThreeGlyphs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetThreeGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreeGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThreeGlyphs();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetThreeGlyphs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ThreeGlyphsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeGlyphsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeGlyphsOn();
      }
    else
      {
      op->vtkTensorGlyph::ThreeGlyphsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ThreeGlyphsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreeGlyphsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ThreeGlyphsOff();
      }
    else
      {
      op->vtkTensorGlyph::ThreeGlyphsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetSymmetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSymmetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSymmetric(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetSymmetric(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetSymmetric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymmetric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSymmetric();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetSymmetric();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SymmetricOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SymmetricOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SymmetricOn();
      }
    else
      {
      op->vtkTensorGlyph::SymmetricOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SymmetricOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SymmetricOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SymmetricOff();
      }
    else
      {
      op->vtkTensorGlyph::SymmetricOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLength(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetLength(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLength();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetExtractEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetExtractEigenvalues(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetExtractEigenvalues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ExtractEigenvaluesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractEigenvaluesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractEigenvaluesOn();
      }
    else
      {
      op->vtkTensorGlyph::ExtractEigenvaluesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ExtractEigenvaluesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractEigenvaluesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ExtractEigenvaluesOff();
      }
    else
      {
      op->vtkTensorGlyph::ExtractEigenvaluesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetExtractEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtractEigenvalues();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetExtractEigenvalues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetColorGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorGlyphs(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetColorGlyphs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetColorGlyphs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorGlyphs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorGlyphs();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetColorGlyphs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ColorGlyphsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorGlyphsOn();
      }
    else
      {
      op->vtkTensorGlyph::ColorGlyphsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ColorGlyphsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorGlyphsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ColorGlyphsOff();
      }
    else
      {
      op->vtkTensorGlyph::ColorGlyphsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetColorMode(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetColorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetColorModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorModeMinValue();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetColorModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetColorModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorModeMaxValue();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetColorModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColorMode();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetColorMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetColorModeToScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToScalars();
      }
    else
      {
      op->vtkTensorGlyph::SetColorModeToScalars();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetColorModeToEigenvalues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorModeToEigenvalues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetColorModeToEigenvalues();
      }
    else
      {
      op->vtkTensorGlyph::SetColorModeToEigenvalues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetClampScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClampScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClampScaling(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetClampScaling(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetClampScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClampScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClampScaling();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetClampScaling();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ClampScalingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampScalingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampScalingOn();
      }
    else
      {
      op->vtkTensorGlyph::ClampScalingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_ClampScalingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClampScalingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClampScalingOff();
      }
    else
      {
      op->vtkTensorGlyph::ClampScalingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_SetMaxScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxScaleFactor(temp0);
      }
    else
      {
      op->vtkTensorGlyph::SetMaxScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTensorGlyph_GetMaxScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorGlyph *op = static_cast<vtkTensorGlyph *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxScaleFactor();
      }
    else
      {
      tempr = op->vtkTensorGlyph::GetMaxScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTensorGlyph_Methods[] = {
  {(char*)"GetClassName", PyvtkTensorGlyph_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTensorGlyph_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTensorGlyph_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTensorGlyph\nC++: vtkTensorGlyph *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTensorGlyph_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTensorGlyph\nC++: vtkTensorGlyph *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSource", PyvtkTensorGlyph_SetSource, 1,
   (char*)"V.SetSource(vtkPolyData)\nC++: void SetSource(vtkPolyData *source)\n\nSpecify the geometry to copy to each point. Old style. See\nSetSourceConnection.\n"},
  {(char*)"GetSource", PyvtkTensorGlyph_GetSource, 1,
   (char*)"V.GetSource() -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\nSpecify the geometry to copy to each point. Old style. See\nSetSourceConnection.\n"},
  {(char*)"SetSourceConnection", PyvtkTensorGlyph_SetSourceConnection, 1,
   (char*)"V.SetSourceConnection(int, vtkAlgorithmOutput)\nC++: void SetSourceConnection(int id,\n    vtkAlgorithmOutput *algOutput)\nV.SetSourceConnection(vtkAlgorithmOutput)\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify a source object at a specified table location. New style.\nSource connection is stored in port 1. This method is equivalent\nto SetInputConnection(1, id, outputPort).\n"},
  {(char*)"SetScaling", PyvtkTensorGlyph_SetScaling, 1,
   (char*)"V.SetScaling(int)\nC++: void SetScaling(int a)\n\nTurn on/off scaling of glyph with eigenvalues.\n"},
  {(char*)"GetScaling", PyvtkTensorGlyph_GetScaling, 1,
   (char*)"V.GetScaling() -> int\nC++: int GetScaling()\n\nTurn on/off scaling of glyph with eigenvalues.\n"},
  {(char*)"ScalingOn", PyvtkTensorGlyph_ScalingOn, 1,
   (char*)"V.ScalingOn()\nC++: void ScalingOn()\n\nTurn on/off scaling of glyph with eigenvalues.\n"},
  {(char*)"ScalingOff", PyvtkTensorGlyph_ScalingOff, 1,
   (char*)"V.ScalingOff()\nC++: void ScalingOff()\n\nTurn on/off scaling of glyph with eigenvalues.\n"},
  {(char*)"SetScaleFactor", PyvtkTensorGlyph_SetScaleFactor, 1,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double a)\n\nSpecify scale factor to scale object by. (Scale factor always\naffects output even if scaling is off.)\n"},
  {(char*)"GetScaleFactor", PyvtkTensorGlyph_GetScaleFactor, 1,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nSpecify scale factor to scale object by. (Scale factor always\naffects output even if scaling is off.)\n"},
  {(char*)"SetThreeGlyphs", PyvtkTensorGlyph_SetThreeGlyphs, 1,
   (char*)"V.SetThreeGlyphs(int)\nC++: void SetThreeGlyphs(int a)\n\nTurn on/off drawing three glyphs\n"},
  {(char*)"GetThreeGlyphs", PyvtkTensorGlyph_GetThreeGlyphs, 1,
   (char*)"V.GetThreeGlyphs() -> int\nC++: int GetThreeGlyphs()\n\nTurn on/off drawing three glyphs\n"},
  {(char*)"ThreeGlyphsOn", PyvtkTensorGlyph_ThreeGlyphsOn, 1,
   (char*)"V.ThreeGlyphsOn()\nC++: void ThreeGlyphsOn()\n\nTurn on/off drawing three glyphs\n"},
  {(char*)"ThreeGlyphsOff", PyvtkTensorGlyph_ThreeGlyphsOff, 1,
   (char*)"V.ThreeGlyphsOff()\nC++: void ThreeGlyphsOff()\n\nTurn on/off drawing three glyphs\n"},
  {(char*)"SetSymmetric", PyvtkTensorGlyph_SetSymmetric, 1,
   (char*)"V.SetSymmetric(int)\nC++: void SetSymmetric(int a)\n\nTurn on/off drawing a mirror of each glyph\n"},
  {(char*)"GetSymmetric", PyvtkTensorGlyph_GetSymmetric, 1,
   (char*)"V.GetSymmetric() -> int\nC++: int GetSymmetric()\n\nTurn on/off drawing a mirror of each glyph\n"},
  {(char*)"SymmetricOn", PyvtkTensorGlyph_SymmetricOn, 1,
   (char*)"V.SymmetricOn()\nC++: void SymmetricOn()\n\nTurn on/off drawing a mirror of each glyph\n"},
  {(char*)"SymmetricOff", PyvtkTensorGlyph_SymmetricOff, 1,
   (char*)"V.SymmetricOff()\nC++: void SymmetricOff()\n\nTurn on/off drawing a mirror of each glyph\n"},
  {(char*)"SetLength", PyvtkTensorGlyph_SetLength, 1,
   (char*)"V.SetLength(float)\nC++: void SetLength(double a)\n\nSet/Get the distance, along x, from the origin to the end of the\nsource glyph. It is used to draw the symmetric glyphs.\n"},
  {(char*)"GetLength", PyvtkTensorGlyph_GetLength, 1,
   (char*)"V.GetLength() -> float\nC++: double GetLength()\n\nSet/Get the distance, along x, from the origin to the end of the\nsource glyph. It is used to draw the symmetric glyphs.\n"},
  {(char*)"SetExtractEigenvalues", PyvtkTensorGlyph_SetExtractEigenvalues, 1,
   (char*)"V.SetExtractEigenvalues(int)\nC++: void SetExtractEigenvalues(int a)\n\nTurn on/off extraction of eigenvalues from tensor.\n"},
  {(char*)"ExtractEigenvaluesOn", PyvtkTensorGlyph_ExtractEigenvaluesOn, 1,
   (char*)"V.ExtractEigenvaluesOn()\nC++: void ExtractEigenvaluesOn()\n\nTurn on/off extraction of eigenvalues from tensor.\n"},
  {(char*)"ExtractEigenvaluesOff", PyvtkTensorGlyph_ExtractEigenvaluesOff, 1,
   (char*)"V.ExtractEigenvaluesOff()\nC++: void ExtractEigenvaluesOff()\n\nTurn on/off extraction of eigenvalues from tensor.\n"},
  {(char*)"GetExtractEigenvalues", PyvtkTensorGlyph_GetExtractEigenvalues, 1,
   (char*)"V.GetExtractEigenvalues() -> int\nC++: int GetExtractEigenvalues()\n\nTurn on/off extraction of eigenvalues from tensor.\n"},
  {(char*)"SetColorGlyphs", PyvtkTensorGlyph_SetColorGlyphs, 1,
   (char*)"V.SetColorGlyphs(int)\nC++: void SetColorGlyphs(int a)\n\nTurn on/off coloring of glyph with input scalar data or\neigenvalues. If false, or input scalar data not present, then the\nscalars from the source object are passed through the filter.\n"},
  {(char*)"GetColorGlyphs", PyvtkTensorGlyph_GetColorGlyphs, 1,
   (char*)"V.GetColorGlyphs() -> int\nC++: int GetColorGlyphs()\n\nTurn on/off coloring of glyph with input scalar data or\neigenvalues. If false, or input scalar data not present, then the\nscalars from the source object are passed through the filter.\n"},
  {(char*)"ColorGlyphsOn", PyvtkTensorGlyph_ColorGlyphsOn, 1,
   (char*)"V.ColorGlyphsOn()\nC++: void ColorGlyphsOn()\n\nTurn on/off coloring of glyph with input scalar data or\neigenvalues. If false, or input scalar data not present, then the\nscalars from the source object are passed through the filter.\n"},
  {(char*)"ColorGlyphsOff", PyvtkTensorGlyph_ColorGlyphsOff, 1,
   (char*)"V.ColorGlyphsOff()\nC++: void ColorGlyphsOff()\n\nTurn on/off coloring of glyph with input scalar data or\neigenvalues. If false, or input scalar data not present, then the\nscalars from the source object are passed through the filter.\n"},
  {(char*)"SetColorMode", PyvtkTensorGlyph_SetColorMode, 1,
   (char*)"V.SetColorMode(int)\nC++: void SetColorMode(int)\n\nSet the color mode to be used for the glyphs.  This can be set to\nuse the input scalars (default) or to use the eigenvalues at the\npoint.  If ThreeGlyphs is set and the eigenvalues are chosen for\ncoloring then each glyph is colored by the corresponding\neigenvalue and if not set the color corresponding to the largest\neigenvalue is chosen.  The recognized values are:\nCOLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1\n"},
  {(char*)"GetColorModeMinValue", PyvtkTensorGlyph_GetColorModeMinValue, 1,
   (char*)"V.GetColorModeMinValue() -> int\nC++: int GetColorModeMinValue()\n\nSet the color mode to be used for the glyphs.  This can be set to\nuse the input scalars (default) or to use the eigenvalues at the\npoint.  If ThreeGlyphs is set and the eigenvalues are chosen for\ncoloring then each glyph is colored by the corresponding\neigenvalue and if not set the color corresponding to the largest\neigenvalue is chosen.  The recognized values are:\nCOLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1\n"},
  {(char*)"GetColorModeMaxValue", PyvtkTensorGlyph_GetColorModeMaxValue, 1,
   (char*)"V.GetColorModeMaxValue() -> int\nC++: int GetColorModeMaxValue()\n\nSet the color mode to be used for the glyphs.  This can be set to\nuse the input scalars (default) or to use the eigenvalues at the\npoint.  If ThreeGlyphs is set and the eigenvalues are chosen for\ncoloring then each glyph is colored by the corresponding\neigenvalue and if not set the color corresponding to the largest\neigenvalue is chosen.  The recognized values are:\nCOLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1\n"},
  {(char*)"GetColorMode", PyvtkTensorGlyph_GetColorMode, 1,
   (char*)"V.GetColorMode() -> int\nC++: int GetColorMode()\n\nSet the color mode to be used for the glyphs.  This can be set to\nuse the input scalars (default) or to use the eigenvalues at the\npoint.  If ThreeGlyphs is set and the eigenvalues are chosen for\ncoloring then each glyph is colored by the corresponding\neigenvalue and if not set the color corresponding to the largest\neigenvalue is chosen.  The recognized values are:\nCOLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1\n"},
  {(char*)"SetColorModeToScalars", PyvtkTensorGlyph_SetColorModeToScalars, 1,
   (char*)"V.SetColorModeToScalars()\nC++: void SetColorModeToScalars()\n\nSet the color mode to be used for the glyphs.  This can be set to\nuse the input scalars (default) or to use the eigenvalues at the\npoint.  If ThreeGlyphs is set and the eigenvalues are chosen for\ncoloring then each glyph is colored by the corresponding\neigenvalue and if not set the color corresponding to the largest\neigenvalue is chosen.  The recognized values are:\nCOLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1\n"},
  {(char*)"SetColorModeToEigenvalues", PyvtkTensorGlyph_SetColorModeToEigenvalues, 1,
   (char*)"V.SetColorModeToEigenvalues()\nC++: void SetColorModeToEigenvalues()\n\nSet the color mode to be used for the glyphs.  This can be set to\nuse the input scalars (default) or to use the eigenvalues at the\npoint.  If ThreeGlyphs is set and the eigenvalues are chosen for\ncoloring then each glyph is colored by the corresponding\neigenvalue and if not set the color corresponding to the largest\neigenvalue is chosen.  The recognized values are:\nCOLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1\n"},
  {(char*)"SetClampScaling", PyvtkTensorGlyph_SetClampScaling, 1,
   (char*)"V.SetClampScaling(int)\nC++: void SetClampScaling(int a)\n\nTurn on/off scalar clamping. If scalar clamping is on, the ivar\nMaxScaleFactor is used to control the maximum scale factor. (This\nis useful to prevent uncontrolled scaling near singularities.)\n"},
  {(char*)"GetClampScaling", PyvtkTensorGlyph_GetClampScaling, 1,
   (char*)"V.GetClampScaling() -> int\nC++: int GetClampScaling()\n\nTurn on/off scalar clamping. If scalar clamping is on, the ivar\nMaxScaleFactor is used to control the maximum scale factor. (This\nis useful to prevent uncontrolled scaling near singularities.)\n"},
  {(char*)"ClampScalingOn", PyvtkTensorGlyph_ClampScalingOn, 1,
   (char*)"V.ClampScalingOn()\nC++: void ClampScalingOn()\n\nTurn on/off scalar clamping. If scalar clamping is on, the ivar\nMaxScaleFactor is used to control the maximum scale factor. (This\nis useful to prevent uncontrolled scaling near singularities.)\n"},
  {(char*)"ClampScalingOff", PyvtkTensorGlyph_ClampScalingOff, 1,
   (char*)"V.ClampScalingOff()\nC++: void ClampScalingOff()\n\nTurn on/off scalar clamping. If scalar clamping is on, the ivar\nMaxScaleFactor is used to control the maximum scale factor. (This\nis useful to prevent uncontrolled scaling near singularities.)\n"},
  {(char*)"SetMaxScaleFactor", PyvtkTensorGlyph_SetMaxScaleFactor, 1,
   (char*)"V.SetMaxScaleFactor(float)\nC++: void SetMaxScaleFactor(double a)\n\nSet/Get the maximum allowable scale factor. This value is\ncompared to the combination of the scale factor times the\neigenvalue. If less, the scale factor is reset to the\nMaxScaleFactor. The boolean ClampScaling has to be \"on\" for this\nto work.\n"},
  {(char*)"GetMaxScaleFactor", PyvtkTensorGlyph_GetMaxScaleFactor, 1,
   (char*)"V.GetMaxScaleFactor() -> float\nC++: double GetMaxScaleFactor()\n\nSet/Get the maximum allowable scale factor. This value is\ncompared to the combination of the scale factor times the\neigenvalue. If less, the scale factor is reset to the\nMaxScaleFactor. The boolean ClampScaling has to be \"on\" for this\nto work.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTensorGlyph_StaticNew()
{
  return vtkTensorGlyph::New();
}

PyObject *PyVTKClass_vtkTensorGlyphNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTensorGlyph_StaticNew,
    PyvtkTensorGlyph_Methods,
    "vtkTensorGlyph", modulename,
    NULL, NULL,
    PyvtkTensorGlyph_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"COLOR_BY_SCALARS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"COLOR_BY_EIGENVALUES", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTensorGlyph_Doc()
{
  static const char *docstring[] = {
    "vtkTensorGlyph - scale and orient glyph(s) according to tensor\neigenvalues and eigenvectors\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkTensorGlyph is a filter that copies a geometric representation\n(specified as polygonal data) to every input point. The geometric\nrepresentation, or glyph, can be scaled and/or rotated according to\nthe tensor at the input point. Scaling and rotation is controlled by\nthe eigenvalues/eigenvectors of the tensor as follows. For each\ntensor, the eigenvalues (and associated eigenvectors) are sorted to",
    "\ndetermine the major, medium, and minor eigenvalues/eigenvectors.\n\nIf the boolean variable ThreeGlyphs is not set the major eigenvalue\nscales the glyph in the x-direction, the medium in the y-direction,\nand the minor in the  z-direction. Then, the glyph is rotated so that\nthe glyph's local x-axis lies along the major eigenvector, y-axis\nalong the medium eigenvector, and z-axis along the minor.\n\nIf",
    " the boolean variable ThreeGlyphs is set three glyphs are produced,\neach of them oriented along an eigenvector and scaled according to\nthe corresponding eigenvector.\n\nIf the boolean variable Symmetric is set each glyph is mirrored (2 or\n6 glyphs will be produced)\n\nThe x-axis of the source glyph will correspond to the eigenvector on\noutput. Point (0,0,0) in the source will be placed in the data poi",
    "nt.\nVariable Length will normally correspond to the distance from the\norigin to the tip of the source glyph along the x-axis, but can be\nchanged to produce other results when Symmetric is on, e.g. glyphs\nthat do not touch or that overlap.\n\nPlease note that when Symmetric is false it will generally be better\nto place the source glyph from (-0.5,0,0) to (0.5,0,0), i.e. centred\nat the origin. When sy",
    "mmetric is true the placement from (0,0,0) to\n(1,0,0) will generally be more convenient.\n\nA scale factor is provided to control the amount of scaling. Also,\nyou can turn off scaling completely if desired. The boolean variable\nClampScaling controls the maximum scaling (in conjunction with\nMaxScaleFactor.) This is useful in certain applications where\nsingularities or large order of magnitude differe",
    "nces exist in the\neigenvalues.\n\nIf the boolean variable ColorGlyphs is set to true the glyphs are\ncolored.  The glyphs can be colored using the input scalars\n(SetColorModeToScalars), which is the default, or colored using the\neigenvalues (SetColorModeToEigenvalues).\n\nAnother instance variable, ExtractEigenvalues, has been provided to\ncontrol extraction of eigenvalues/eigenvectors. If this boolean ",
    "is\nfalse, then eigenvalues/eigenvectors are not extracted, and the\ncolumns of the tensor are taken as the eigenvectors (the norm of\ncolumn, always positive, is the eigenvalue).  This allows additional\ncapability over the vtkGlyph3D object. That is, the glyph can be\noriented in three directions instead of one.\n\nSee Also:\n\nvtkGlyph3D vtkPointLoad vtkHyperStreamline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTensorGlyph(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTensorGlyphNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTensorGlyph", o) != 0)
    {
    Py_DECREF(o);
    }

}
