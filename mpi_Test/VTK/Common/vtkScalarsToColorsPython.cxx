// python wrapper for vtkScalarsToColors
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
#include "vtkScalarsToColors.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkScalarsToColors(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkScalarsToColors(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkScalarsToColorsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkScalarsToColorsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkScalarsToColors_Doc();


static PyObject *
PyvtkScalarsToColors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

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
      tempr = op->vtkScalarsToColors::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

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
      tempr = op->vtkScalarsToColors::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkScalarsToColors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkScalarsToColors::NewInstance();
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
PyvtkScalarsToColors_IsOpaque(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOpaque");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsOpaque();
      }
    else
      {
      tempr = op->vtkScalarsToColors::IsOpaque();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Build();
      }
    else
      {
      op->vtkScalarsToColors::Build();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetRange();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    op->SetRange(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkScalarsToColors_SetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

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
      op->SetRange(temp0);
      }
    else
      {
      op->vtkScalarsToColors::SetRange(temp0);
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
PyvtkScalarsToColors_SetRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkScalarsToColors_SetRange_s1(self, args);
    case 1:
      return PyvtkScalarsToColors_SetRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetRange");
  return NULL;
}



static PyObject *
PyvtkScalarsToColors_GetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    op->GetColor(temp0, temp1);

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
PyvtkScalarsToColors_GetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetColor(temp0);
      }
    else
      {
      tempr = op->vtkScalarsToColors::GetColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyObject *
PyvtkScalarsToColors_GetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkScalarsToColors_GetColor_s1(self, args);
    case 1:
      return PyvtkScalarsToColors_GetColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetColor");
  return NULL;
}



static PyObject *
PyvtkScalarsToColors_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOpacity(temp0);
      }
    else
      {
      tempr = op->vtkScalarsToColors::GetOpacity(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLuminance(temp0);
      }
    else
      {
      tempr = op->vtkScalarsToColors::GetLuminance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAlpha(temp0);
      }
    else
      {
      op->vtkScalarsToColors::SetAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAlpha();
      }
    else
      {
      tempr = op->vtkScalarsToColors::GetAlpha();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_MapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkDataArray *temp0 = NULL;
  int temp1;
  int temp2;
  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->MapScalars(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkScalarsToColors::MapScalars(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorMode(temp0);
      }
    else
      {
      op->vtkScalarsToColors::SetVectorMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorMode();
      }
    else
      {
      tempr = op->vtkScalarsToColors::GetVectorMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorModeToMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToMagnitude();
      }
    else
      {
      op->vtkScalarsToColors::SetVectorModeToMagnitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorModeToComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetVectorModeToComponent();
      }
    else
      {
      op->vtkScalarsToColors::SetVectorModeToComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_SetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorComponent(temp0);
      }
    else
      {
      op->vtkScalarsToColors::SetVectorComponent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetVectorComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorComponent();
      }
    else
      {
      tempr = op->vtkScalarsToColors::GetVectorComponent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_ConvertUnsignedCharToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertUnsignedCharToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkUnsignedCharArray *temp0 = NULL;
  int temp1;
  int temp2;
  vtkUnsignedCharArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkUnsignedCharArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->ConvertUnsignedCharToRGBA(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkScalarsToColors::ConvertUnsignedCharToRGBA(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_UsingLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsingLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->UsingLogScale();
      }
    else
      {
      tempr = op->vtkScalarsToColors::UsingLogScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkScalarsToColors_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToColors *op = static_cast<vtkScalarsToColors *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfAvailableColors();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkScalarsToColors_Methods[] = {
  {(char*)"GetClassName", PyvtkScalarsToColors_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkScalarsToColors_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkScalarsToColors_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkScalarsToColors\nC++: vtkScalarsToColors *NewInstance()\n\n"},
  {(char*)"IsOpaque", PyvtkScalarsToColors_IsOpaque, 1,
   (char*)"V.IsOpaque() -> int\nC++: virtual int IsOpaque()\n\nReturn true if all of the values defining the mapping have an\nopacity equal to 1. Default implementation return true.\n"},
  {(char*)"Build", PyvtkScalarsToColors_Build, 1,
   (char*)"V.Build()\nC++: virtual void Build()\n\nPerform any processing required (if any) before processing\nscalars.\n"},
  {(char*)"GetRange", PyvtkScalarsToColors_GetRange, 1,
   (char*)"V.GetRange() -> (float, float)\nC++: virtual double *GetRange()\n\nSets/Gets the range of scalars which will be mapped.\n"},
  {(char*)"SetRange", PyvtkScalarsToColors_SetRange, 1,
   (char*)"V.SetRange(float, float)\nC++: virtual void SetRange(double min, double max)\nV.SetRange([float, float])\nC++: void SetRange(double rng[2])\n\nSets/Gets the range of scalars which will be mapped.\n"},
  {(char*)"GetColor", PyvtkScalarsToColors_GetColor, 1,
   (char*)"V.GetColor(float, [float, float, float])\nC++: virtual void GetColor(double v, double rgb[3])\nV.GetColor(float) -> (float, float, float)\nC++: double *GetColor(double v)\n\nMap one value through the lookup table and return the color as an\nRGB array of doubles between 0 and 1.\n"},
  {(char*)"GetOpacity", PyvtkScalarsToColors_GetOpacity, 1,
   (char*)"V.GetOpacity(float) -> float\nC++: virtual double GetOpacity(double v)\n\nMap one value through the lookup table and return the alpha value\n(the opacity) as a double between 0 and 1.\n"},
  {(char*)"GetLuminance", PyvtkScalarsToColors_GetLuminance, 1,
   (char*)"V.GetLuminance(float) -> float\nC++: double GetLuminance(double x)\n\nMap one value through the lookup table and return the luminance\n0.3*red + 0.59*green + 0.11*blue as a double between 0 and 1.\nReturns the luminance value for the specified scalar value.\n"},
  {(char*)"SetAlpha", PyvtkScalarsToColors_SetAlpha, 1,
   (char*)"V.SetAlpha(float)\nC++: virtual void SetAlpha(double alpha)\n\nSpecify an additional opacity (alpha) value to blend with. Values\n!= 1 modify the resulting color consistent with the requested\nform of the output. This is typically used by an actor in order\nto blend its opacity.\n"},
  {(char*)"GetAlpha", PyvtkScalarsToColors_GetAlpha, 1,
   (char*)"V.GetAlpha() -> float\nC++: double GetAlpha()\n\nSpecify an additional opacity (alpha) value to blend with. Values\n!= 1 modify the resulting color consistent with the requested\nform of the output. This is typically used by an actor in order\nto blend its opacity.\n"},
  {(char*)"MapScalars", PyvtkScalarsToColors_MapScalars, 1,
   (char*)"V.MapScalars(vtkDataArray, int, int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(\n    vtkDataArray *scalars, int colorMode, int component)\n\nAn internal method maps a data array into a 4-component, unsigned\nchar RGBA array. The color mode determines the behavior of\nmapping. If VTK_COLOR_MODE_DEFAULT is set, then unsigned char\ndata arrays are treated as colors (and converted to RGBA if\nnecessary); otherwise, the data is mapped through this instance\nof ScalarsToColors. The offset is used for data arrays with more\nthan one component; it indicates which component to use to do the\nblending. When the component argument is -1, then the this object\nuses its own selected technique to change a vector into a scalar\nto map.\n"},
  {(char*)"SetVectorMode", PyvtkScalarsToColors_SetVectorMode, 1,
   (char*)"V.SetVectorMode(int)\nC++: void SetVectorMode(int a)\n\nChange mode that maps vectors by magnitude vs. component.\n"},
  {(char*)"GetVectorMode", PyvtkScalarsToColors_GetVectorMode, 1,
   (char*)"V.GetVectorMode() -> int\nC++: int GetVectorMode()\n\nChange mode that maps vectors by magnitude vs. component.\n"},
  {(char*)"SetVectorModeToMagnitude", PyvtkScalarsToColors_SetVectorModeToMagnitude, 1,
   (char*)"V.SetVectorModeToMagnitude()\nC++: void SetVectorModeToMagnitude()\n\nChange mode that maps vectors by magnitude vs. component.\n"},
  {(char*)"SetVectorModeToComponent", PyvtkScalarsToColors_SetVectorModeToComponent, 1,
   (char*)"V.SetVectorModeToComponent()\nC++: void SetVectorModeToComponent()\n\nChange mode that maps vectors by magnitude vs. component.\n"},
  {(char*)"SetVectorComponent", PyvtkScalarsToColors_SetVectorComponent, 1,
   (char*)"V.SetVectorComponent(int)\nC++: void SetVectorComponent(int a)\n\nIf the mapper does not select which component of a vector to map\nto colors, you can specify it here.\n"},
  {(char*)"GetVectorComponent", PyvtkScalarsToColors_GetVectorComponent, 1,
   (char*)"V.GetVectorComponent() -> int\nC++: int GetVectorComponent()\n\nIf the mapper does not select which component of a vector to map\nto colors, you can specify it here.\n"},
  {(char*)"ConvertUnsignedCharToRGBA", PyvtkScalarsToColors_ConvertUnsignedCharToRGBA, 1,
   (char*)"V.ConvertUnsignedCharToRGBA(vtkUnsignedCharArray, int, int)\n    -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *ConvertUnsignedCharToRGBA(\n    vtkUnsignedCharArray *colors, int numComp, int numTuples)\n\nAn internal method used to convert a color array to RGBA. The\nmethod instantiates a vtkUnsignedCharArray and returns it. The\nuser is responsible for managing the memory.\n"},
  {(char*)"UsingLogScale", PyvtkScalarsToColors_UsingLogScale, 1,
   (char*)"V.UsingLogScale() -> int\nC++: virtual int UsingLogScale()\n\nThis should return 1 is the subclass is using log scale for\nmapping scalars to colors. Default implementation returns 0.\n"},
  {(char*)"GetNumberOfAvailableColors", PyvtkScalarsToColors_GetNumberOfAvailableColors, 1,
   (char*)"V.GetNumberOfAvailableColors() -> int\nC++: virtual vtkIdType GetNumberOfAvailableColors()\n\nGet the number of available colors for mapping to.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkScalarsToColorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkScalarsToColors_Methods,
    "vtkScalarsToColors", modulename,
    NULL, NULL,
    PyvtkScalarsToColors_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"MAGNITUDE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"COMPONENT", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkScalarsToColors_Doc()
{
  static const char *docstring[] = {
    "vtkScalarsToColors - Superclass for mapping scalar values into \n\n",
    "Superclass: vtkObject\n\n",
    "vtkScalarsToColors is a general purpose superclass for objects that\nconvert scalars to colors. This include vtkLookupTable classes and\ncolor transfer functions.\n\nThe scalars to color mapping can be augmented with an additional\nuniform alpha blend. This is used, for example, to blend a vtkActor's\nopacity with the lookup table values.\n\nSee Also:\n\nvtkLookupTable vtkColorTransferFunction\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkScalarsToColors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkScalarsToColorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkScalarsToColors", o) != 0)
    {
    Py_DECREF(o);
    }

}

