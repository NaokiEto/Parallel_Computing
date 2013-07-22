// python wrapper for vtkRectangularButtonSource
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
#include "vtkRectangularButtonSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRectangularButtonSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRectangularButtonSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRectangularButtonSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRectangularButtonSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkButtonSourceNew
extern "C" { PyObject *PyVTKClass_vtkButtonSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkButtonSourceNew
#endif

static const char **PyvtkRectangularButtonSource_Doc();


static PyObject *
PyvtkRectangularButtonSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

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
      tempr = op->vtkRectangularButtonSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

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
      tempr = op->vtkRectangularButtonSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  vtkRectangularButtonSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::NewInstance();
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
PyvtkRectangularButtonSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRectangularButtonSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRectangularButtonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWidth(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetWidth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidthMinValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetWidthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidthMaxValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetWidthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWidth();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightMinValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetHeightMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightMaxValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetHeightMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeight();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDepth(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepthMinValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetDepthMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepthMaxValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetDepthMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDepth();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetDepth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetBoxRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoxRatio(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetBoxRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetBoxRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoxRatioMinValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetBoxRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetBoxRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoxRatioMaxValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetBoxRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetBoxRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoxRatio();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetBoxRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetTextureRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureRatio(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetTextureRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureRatioMinValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetTextureRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureRatioMaxValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetTextureRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureRatio();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetTextureRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetTextureHeightRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureHeightRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTextureHeightRatio(temp0);
      }
    else
      {
      op->vtkRectangularButtonSource::SetTextureHeightRatio(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureHeightRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureHeightRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureHeightRatioMinValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetTextureHeightRatioMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureHeightRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureHeightRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureHeightRatioMaxValue();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetTextureHeightRatioMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureHeightRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureHeightRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextureHeightRatio();
      }
    else
      {
      tempr = op->vtkRectangularButtonSource::GetTextureHeightRatio();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRectangularButtonSource_Methods[] = {
  {(char*)"GetClassName", PyvtkRectangularButtonSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectangularButtonSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectangularButtonSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRectangularButtonSource\nC++: vtkRectangularButtonSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRectangularButtonSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRectangularButtonSource\nC++: vtkRectangularButtonSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWidth", PyvtkRectangularButtonSource_SetWidth, 1,
   (char*)"V.SetWidth(float)\nC++: void SetWidth(double)\n\nSet/Get the width of the button.\n"},
  {(char*)"GetWidthMinValue", PyvtkRectangularButtonSource_GetWidthMinValue, 1,
   (char*)"V.GetWidthMinValue() -> float\nC++: double GetWidthMinValue()\n\nSet/Get the width of the button.\n"},
  {(char*)"GetWidthMaxValue", PyvtkRectangularButtonSource_GetWidthMaxValue, 1,
   (char*)"V.GetWidthMaxValue() -> float\nC++: double GetWidthMaxValue()\n\nSet/Get the width of the button.\n"},
  {(char*)"GetWidth", PyvtkRectangularButtonSource_GetWidth, 1,
   (char*)"V.GetWidth() -> float\nC++: double GetWidth()\n\nSet/Get the width of the button.\n"},
  {(char*)"SetHeight", PyvtkRectangularButtonSource_SetHeight, 1,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double)\n\nSet/Get the height of the button.\n"},
  {(char*)"GetHeightMinValue", PyvtkRectangularButtonSource_GetHeightMinValue, 1,
   (char*)"V.GetHeightMinValue() -> float\nC++: double GetHeightMinValue()\n\nSet/Get the height of the button.\n"},
  {(char*)"GetHeightMaxValue", PyvtkRectangularButtonSource_GetHeightMaxValue, 1,
   (char*)"V.GetHeightMaxValue() -> float\nC++: double GetHeightMaxValue()\n\nSet/Get the height of the button.\n"},
  {(char*)"GetHeight", PyvtkRectangularButtonSource_GetHeight, 1,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nSet/Get the height of the button.\n"},
  {(char*)"SetDepth", PyvtkRectangularButtonSource_SetDepth, 1,
   (char*)"V.SetDepth(float)\nC++: void SetDepth(double)\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepthMinValue", PyvtkRectangularButtonSource_GetDepthMinValue, 1,
   (char*)"V.GetDepthMinValue() -> float\nC++: double GetDepthMinValue()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepthMaxValue", PyvtkRectangularButtonSource_GetDepthMaxValue, 1,
   (char*)"V.GetDepthMaxValue() -> float\nC++: double GetDepthMaxValue()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"GetDepth", PyvtkRectangularButtonSource_GetDepth, 1,
   (char*)"V.GetDepth() -> float\nC++: double GetDepth()\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {(char*)"SetBoxRatio", PyvtkRectangularButtonSource_SetBoxRatio, 1,
   (char*)"V.SetBoxRatio(float)\nC++: void SetBoxRatio(double)\n\nSet/Get the ratio of the bottom of the button with the shoulder\nregion. Numbers greater than one produce buttons with a wider\nbottom than shoulder; ratios less than one produce buttons that\nhave a wider shoulder than bottom.\n"},
  {(char*)"GetBoxRatioMinValue", PyvtkRectangularButtonSource_GetBoxRatioMinValue, 1,
   (char*)"V.GetBoxRatioMinValue() -> float\nC++: double GetBoxRatioMinValue()\n\nSet/Get the ratio of the bottom of the button with the shoulder\nregion. Numbers greater than one produce buttons with a wider\nbottom than shoulder; ratios less than one produce buttons that\nhave a wider shoulder than bottom.\n"},
  {(char*)"GetBoxRatioMaxValue", PyvtkRectangularButtonSource_GetBoxRatioMaxValue, 1,
   (char*)"V.GetBoxRatioMaxValue() -> float\nC++: double GetBoxRatioMaxValue()\n\nSet/Get the ratio of the bottom of the button with the shoulder\nregion. Numbers greater than one produce buttons with a wider\nbottom than shoulder; ratios less than one produce buttons that\nhave a wider shoulder than bottom.\n"},
  {(char*)"GetBoxRatio", PyvtkRectangularButtonSource_GetBoxRatio, 1,
   (char*)"V.GetBoxRatio() -> float\nC++: double GetBoxRatio()\n\nSet/Get the ratio of the bottom of the button with the shoulder\nregion. Numbers greater than one produce buttons with a wider\nbottom than shoulder; ratios less than one produce buttons that\nhave a wider shoulder than bottom.\n"},
  {(char*)"SetTextureRatio", PyvtkRectangularButtonSource_SetTextureRatio, 1,
   (char*)"V.SetTextureRatio(float)\nC++: void SetTextureRatio(double)\n\nSet/Get the ratio of the texture region to the shoulder region.\nThis number must be 0<=tr<=1. If the texture style is to fit the\nimage, then satisfying the texture ratio may only be possible in\none of the two directions (length or width) depending on the\ndimensions of the texture.\n"},
  {(char*)"GetTextureRatioMinValue", PyvtkRectangularButtonSource_GetTextureRatioMinValue, 1,
   (char*)"V.GetTextureRatioMinValue() -> float\nC++: double GetTextureRatioMinValue()\n\nSet/Get the ratio of the texture region to the shoulder region.\nThis number must be 0<=tr<=1. If the texture style is to fit the\nimage, then satisfying the texture ratio may only be possible in\none of the two directions (length or width) depending on the\ndimensions of the texture.\n"},
  {(char*)"GetTextureRatioMaxValue", PyvtkRectangularButtonSource_GetTextureRatioMaxValue, 1,
   (char*)"V.GetTextureRatioMaxValue() -> float\nC++: double GetTextureRatioMaxValue()\n\nSet/Get the ratio of the texture region to the shoulder region.\nThis number must be 0<=tr<=1. If the texture style is to fit the\nimage, then satisfying the texture ratio may only be possible in\none of the two directions (length or width) depending on the\ndimensions of the texture.\n"},
  {(char*)"GetTextureRatio", PyvtkRectangularButtonSource_GetTextureRatio, 1,
   (char*)"V.GetTextureRatio() -> float\nC++: double GetTextureRatio()\n\nSet/Get the ratio of the texture region to the shoulder region.\nThis number must be 0<=tr<=1. If the texture style is to fit the\nimage, then satisfying the texture ratio may only be possible in\none of the two directions (length or width) depending on the\ndimensions of the texture.\n"},
  {(char*)"SetTextureHeightRatio", PyvtkRectangularButtonSource_SetTextureHeightRatio, 1,
   (char*)"V.SetTextureHeightRatio(float)\nC++: void SetTextureHeightRatio(double)\n\nSet/Get the ratio of the height of the texture region to the\nshoulder height. Values greater than 1.0 yield convex buttons\nwith the texture region raised above the shoulder. Values less\nthan 1.0 yield concave buttons with the texture region below the\nshoulder.\n"},
  {(char*)"GetTextureHeightRatioMinValue", PyvtkRectangularButtonSource_GetTextureHeightRatioMinValue, 1,
   (char*)"V.GetTextureHeightRatioMinValue() -> float\nC++: double GetTextureHeightRatioMinValue()\n\nSet/Get the ratio of the height of the texture region to the\nshoulder height. Values greater than 1.0 yield convex buttons\nwith the texture region raised above the shoulder. Values less\nthan 1.0 yield concave buttons with the texture region below the\nshoulder.\n"},
  {(char*)"GetTextureHeightRatioMaxValue", PyvtkRectangularButtonSource_GetTextureHeightRatioMaxValue, 1,
   (char*)"V.GetTextureHeightRatioMaxValue() -> float\nC++: double GetTextureHeightRatioMaxValue()\n\nSet/Get the ratio of the height of the texture region to the\nshoulder height. Values greater than 1.0 yield convex buttons\nwith the texture region raised above the shoulder. Values less\nthan 1.0 yield concave buttons with the texture region below the\nshoulder.\n"},
  {(char*)"GetTextureHeightRatio", PyvtkRectangularButtonSource_GetTextureHeightRatio, 1,
   (char*)"V.GetTextureHeightRatio() -> float\nC++: double GetTextureHeightRatio()\n\nSet/Get the ratio of the height of the texture region to the\nshoulder height. Values greater than 1.0 yield convex buttons\nwith the texture region raised above the shoulder. Values less\nthan 1.0 yield concave buttons with the texture region below the\nshoulder.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRectangularButtonSource_StaticNew()
{
  return vtkRectangularButtonSource::New();
}

PyObject *PyVTKClass_vtkRectangularButtonSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRectangularButtonSource_StaticNew,
    PyvtkRectangularButtonSource_Methods,
    "vtkRectangularButtonSource", modulename,
    NULL, NULL,
    PyvtkRectangularButtonSource_Doc(),
    PyVTKClass_vtkButtonSourceNew(modulename));
  return cls;
}

const char **PyvtkRectangularButtonSource_Doc()
{
  static const char *docstring[] = {
    "vtkRectangularButtonSource - create a rectangular button\n\n",
    "Superclass: vtkButtonSource\n\n",
    "vtkRectangularButtonSource creates a rectangular shaped button with\ntexture coordinates suitable for application of a texture map. This\nprovides a way to make nice looking 3D buttons. The buttons are\nrepresented as vtkPolyData that includes texture coordinates and\nnormals. The button lies in the x-y plane.\n\nTo use this class you must define its width, height and length. These\nmeasurements are all ",
    "taken with respect to the shoulder of the\nbutton. The shoulder is defined as follows. Imagine a box sitting on\nthe floor. The distance from the floor to the top of the box is the\ndepth; the other directions are the length (x-direction) and height\n(y-direction). In this particular widget the box can have a smaller\nbottom than top. The ratio in size between bottom and top is called\nthe box ratio (by",
    " default=1.0). The ratio of the texture region to\nthe shoulder region is the texture ratio. And finally the texture\nregion may be out of plane compared to the shoulder. The texture\nheight ratio controls this.\n\nCaveats:\n\nThe button is defined in the x-y plane. Use\nvtkTransformPolyDataFilter or vtkGlyph3D to orient the button in a\ndifferent direction.\n\nSee Also:\n\nvtkButtonSource vtkEllipticalButtonS",
    "ource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectangularButtonSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectangularButtonSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectangularButtonSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

