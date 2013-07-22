// python wrapper for vtkDiscretizableColorTransferFunction
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
#include "vtkDiscretizableColorTransferFunction.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDiscretizableColorTransferFunction(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDiscretizableColorTransferFunction(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDiscretizableColorTransferFunctionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDiscretizableColorTransferFunctionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkColorTransferFunctionNew
extern "C" { PyObject *PyVTKClass_vtkColorTransferFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkColorTransferFunctionNew
#endif

static const char **PyvtkDiscretizableColorTransferFunction_Doc();


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      tempr = op->vtkDiscretizableColorTransferFunction::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      tempr = op->vtkDiscretizableColorTransferFunction::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkDiscretizableColorTransferFunction *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDiscretizableColorTransferFunction::NewInstance();
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
PyvtkDiscretizableColorTransferFunction_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDiscretizableColorTransferFunction *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDiscretizableColorTransferFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_Build(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Build");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Build();
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::Build();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetDiscretize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiscretize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiscretize(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetDiscretize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetDiscretize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiscretize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiscretize();
      }
    else
      {
      tempr = op->vtkDiscretizableColorTransferFunction::GetDiscretize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_DiscretizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscretizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DiscretizeOn();
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::DiscretizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_DiscretizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DiscretizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DiscretizeOff();
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::DiscretizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetUseLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseLogScale(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetUseLogScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetUseLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseLogScale();
      }
    else
      {
      tempr = op->vtkDiscretizableColorTransferFunction::GetUseLogScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfValues(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetNumberOfValues(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetNumberOfValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfValues();
      }
    else
      {
      tempr = op->vtkDiscretizableColorTransferFunction::GetNumberOfValues();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  double temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->GetColor(temp0, temp1);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::GetColor(temp0, temp1);
      }

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
PyvtkDiscretizableColorTransferFunction_MapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      tempr = op->vtkDiscretizableColorTransferFunction::MapScalars(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      op->vtkDiscretizableColorTransferFunction::SetAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_SetNanColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      op->SetNanColor(temp0, temp1, temp2);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetNanColor(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkDiscretizableColorTransferFunction_SetNanColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNanColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      op->SetNanColor(temp0);
      }
    else
      {
      op->vtkDiscretizableColorTransferFunction::SetNanColor(temp0);
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
PyvtkDiscretizableColorTransferFunction_SetNanColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkDiscretizableColorTransferFunction_SetNanColor_s1(self, args);
    case 1:
      return PyvtkDiscretizableColorTransferFunction_SetNanColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetNanColor");
  return NULL;
}



static PyObject *
PyvtkDiscretizableColorTransferFunction_UsingLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsingLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

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
      tempr = op->vtkDiscretizableColorTransferFunction::UsingLogScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDiscretizableColorTransferFunction_GetNumberOfAvailableColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAvailableColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscretizableColorTransferFunction *op = static_cast<vtkDiscretizableColorTransferFunction *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfAvailableColors();
      }
    else
      {
      tempr = op->vtkDiscretizableColorTransferFunction::GetNumberOfAvailableColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDiscretizableColorTransferFunction_Methods[] = {
  {(char*)"GetClassName", PyvtkDiscretizableColorTransferFunction_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDiscretizableColorTransferFunction_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDiscretizableColorTransferFunction_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDiscretizableColorTransferFunction\nC++: vtkDiscretizableColorTransferFunction *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDiscretizableColorTransferFunction_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDiscretizableColorTransferFunction\nC++: vtkDiscretizableColorTransferFunction *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"Build", PyvtkDiscretizableColorTransferFunction_Build, 1,
   (char*)"V.Build()\nC++: virtual void Build()\n\nGenerate discretized lookup table, if applicable. This method\nmust be called after changes to the ColorTransferFunction\notherwise the discretized version will be inconsitent with the\nnon-discretized one.\n"},
  {(char*)"SetDiscretize", PyvtkDiscretizableColorTransferFunction_SetDiscretize, 1,
   (char*)"V.SetDiscretize(int)\nC++: void SetDiscretize(int a)\n\nSet if the values are to mapped after discretization. The number\nof discrete values is set by using SetNumberOfValues(). Not set\nby default, i.e. color value is determined by interpolating at\nthe scalar value.\n"},
  {(char*)"GetDiscretize", PyvtkDiscretizableColorTransferFunction_GetDiscretize, 1,
   (char*)"V.GetDiscretize() -> int\nC++: int GetDiscretize()\n\nSet if the values are to mapped after discretization. The number\nof discrete values is set by using SetNumberOfValues(). Not set\nby default, i.e. color value is determined by interpolating at\nthe scalar value.\n"},
  {(char*)"DiscretizeOn", PyvtkDiscretizableColorTransferFunction_DiscretizeOn, 1,
   (char*)"V.DiscretizeOn()\nC++: void DiscretizeOn()\n\nSet if the values are to mapped after discretization. The number\nof discrete values is set by using SetNumberOfValues(). Not set\nby default, i.e. color value is determined by interpolating at\nthe scalar value.\n"},
  {(char*)"DiscretizeOff", PyvtkDiscretizableColorTransferFunction_DiscretizeOff, 1,
   (char*)"V.DiscretizeOff()\nC++: void DiscretizeOff()\n\nSet if the values are to mapped after discretization. The number\nof discrete values is set by using SetNumberOfValues(). Not set\nby default, i.e. color value is determined by interpolating at\nthe scalar value.\n"},
  {(char*)"SetUseLogScale", PyvtkDiscretizableColorTransferFunction_SetUseLogScale, 1,
   (char*)"V.SetUseLogScale(int)\nC++: virtual void SetUseLogScale(int useLogScale)\n\nGet/Set if log scale must be used while mapping scalars to\ncolors. The default is 0.\n"},
  {(char*)"GetUseLogScale", PyvtkDiscretizableColorTransferFunction_GetUseLogScale, 1,
   (char*)"V.GetUseLogScale() -> int\nC++: int GetUseLogScale()\n\nGet/Set if log scale must be used while mapping scalars to\ncolors. The default is 0.\n"},
  {(char*)"SetNumberOfValues", PyvtkDiscretizableColorTransferFunction_SetNumberOfValues, 1,
   (char*)"V.SetNumberOfValues(int)\nC++: void SetNumberOfValues(vtkIdType number)\n\nSet the number of values i.e. colors to be generated in the\ndiscrete lookup table. This has no effect if Discretize is off.\nThe default is 256.\n"},
  {(char*)"GetNumberOfValues", PyvtkDiscretizableColorTransferFunction_GetNumberOfValues, 1,
   (char*)"V.GetNumberOfValues() -> int\nC++: vtkIdType GetNumberOfValues()\n\nSet the number of values i.e. colors to be generated in the\ndiscrete lookup table. This has no effect if Discretize is off.\nThe default is 256.\n"},
  {(char*)"GetColor", PyvtkDiscretizableColorTransferFunction_GetColor, 1,
   (char*)"V.GetColor(float, [float, float, float])\nC++: virtual void GetColor(double v, double rgb[3])\n\nMap one value through the lookup table and return the color as an\nRGB array of doubles between 0 and 1.\n"},
  {(char*)"MapScalars", PyvtkDiscretizableColorTransferFunction_MapScalars, 1,
   (char*)"V.MapScalars(vtkDataArray, int, int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *MapScalars(\n    vtkDataArray *scalars, int colorMode, int component)\n\nAn internal method maps a data array into a 4-component, unsigned\nchar RGBA array. The color mode determines the behavior of\nmapping. If VTK_COLOR_MODE_DEFAULT is set, then unsigned char\ndata arrays are treated as colors (and converted to RGBA if\nnecessary); otherwise, the data is mapped through this instance\nof ScalarsToColors. The offset is used for data arrays with more\nthan one component; it indicates which component to use to do the\nblending. When the component argument is -1, then the this object\nuses its own selected technique to change a vector into a scalar\nto map.\n"},
  {(char*)"SetAlpha", PyvtkDiscretizableColorTransferFunction_SetAlpha, 1,
   (char*)"V.SetAlpha(float)\nC++: virtual void SetAlpha(double alpha)\n\nSpecify an additional opacity (alpha) value to blend with. Values\n!= 1 modify the resulting color consistent with the requested\nform of the output. This is typically used by an actor in order\nto blend its opacity. Overridden to pass the alpha to the\ninternal vtkLookupTable.\n"},
  {(char*)"SetNanColor", PyvtkDiscretizableColorTransferFunction_SetNanColor, 1,
   (char*)"V.SetNanColor(float, float, float)\nC++: virtual void SetNanColor(double r, double g, double b)\nV.SetNanColor([float, float, float])\nC++: virtual void SetNanColor(double rgb[3])\n\nSet the color to use when a NaN (not a number) is encountered. \nThis is an RGB 3-tuple color of doubles in the range [0,1].\nOverridden to pass the NanColor to the internal vtkLookupTable.\n"},
  {(char*)"UsingLogScale", PyvtkDiscretizableColorTransferFunction_UsingLogScale, 1,
   (char*)"V.UsingLogScale() -> int\nC++: virtual int UsingLogScale()\n\nThis should return 1 is the subclass is using log scale for\nmapping scalars to colors.\n"},
  {(char*)"GetNumberOfAvailableColors", PyvtkDiscretizableColorTransferFunction_GetNumberOfAvailableColors, 1,
   (char*)"V.GetNumberOfAvailableColors() -> int\nC++: virtual vtkIdType GetNumberOfAvailableColors()\n\nGet the number of available colors for mapping to.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDiscretizableColorTransferFunction_StaticNew()
{
  return vtkDiscretizableColorTransferFunction::New();
}

PyObject *PyVTKClass_vtkDiscretizableColorTransferFunctionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDiscretizableColorTransferFunction_StaticNew,
    PyvtkDiscretizableColorTransferFunction_Methods,
    "vtkDiscretizableColorTransferFunction", modulename,
    NULL, NULL,
    PyvtkDiscretizableColorTransferFunction_Doc(),
    PyVTKClass_vtkColorTransferFunctionNew(modulename));
  return cls;
}

const char **PyvtkDiscretizableColorTransferFunction_Doc()
{
  static const char *docstring[] = {
    "vtkDiscretizableColorTransferFunction - a combination of\nvtkColorTransferFunction and\n\n",
    "Superclass: vtkColorTransferFunction\n\n",
    "This is a cross between a vtkColorTransferFunction and a\nvtkLookupTable selectively combiniting the functionality of both.\nNOTE: One must call Build() after making any changes to the points in\nthe ColorTransferFunction to ensure that the discrete and\nnon-discrete version match up.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDiscretizableColorTransferFunction(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDiscretizableColorTransferFunctionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDiscretizableColorTransferFunction", o) != 0)
    {
    Py_DECREF(o);
    }

}

