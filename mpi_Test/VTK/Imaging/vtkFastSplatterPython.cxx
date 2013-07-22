// python wrapper for vtkFastSplatter
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
#include "vtkFastSplatter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFastSplatter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFastSplatter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFastSplatterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFastSplatterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageAlgorithmNew
#endif

static const char **PyvtkFastSplatter_Doc();


static PyObject *
PyvtkFastSplatter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

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
      tempr = op->vtkFastSplatter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

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
      tempr = op->vtkFastSplatter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  vtkFastSplatter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFastSplatter::NewInstance();
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
PyvtkFastSplatter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFastSplatter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFastSplatter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetModelBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

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
      op->SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkFastSplatter::SetModelBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFastSplatter_SetModelBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetModelBounds(temp0);
      }
    else
      {
      op->vtkFastSplatter::SetModelBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFastSplatter_SetModelBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkFastSplatter_SetModelBounds_s1(self, args);
    case 1:
      return PyvtkFastSplatter_SetModelBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetModelBounds");
  return NULL;
}



static PyObject *
PyvtkFastSplatter_GetModelBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModelBounds();
      }
    else
      {
      tempr = op->vtkFastSplatter::GetModelBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetOutputDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetOutputDimensions(temp0, temp1, temp2);
      }
    else
      {
      op->vtkFastSplatter::SetOutputDimensions(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFastSplatter_SetOutputDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetOutputDimensions(temp0);
      }
    else
      {
      op->vtkFastSplatter::SetOutputDimensions(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFastSplatter_SetOutputDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkFastSplatter_SetOutputDimensions_s1(self, args);
    case 1:
      return PyvtkFastSplatter_SetOutputDimensions_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputDimensions");
  return NULL;
}



static PyObject *
PyvtkFastSplatter_GetOutputDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputDimensions();
      }
    else
      {
      tempr = op->vtkFastSplatter::GetOutputDimensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetLimitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLimitMode(temp0);
      }
    else
      {
      op->vtkFastSplatter::SetLimitMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_GetLimitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLimitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLimitMode();
      }
    else
      {
      tempr = op->vtkFastSplatter::GetLimitMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetLimitModeToNone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitModeToNone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLimitModeToNone();
      }
    else
      {
      op->vtkFastSplatter::SetLimitModeToNone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetLimitModeToClamp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitModeToClamp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLimitModeToClamp();
      }
    else
      {
      op->vtkFastSplatter::SetLimitModeToClamp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetLimitModeToScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitModeToScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLimitModeToScale();
      }
    else
      {
      op->vtkFastSplatter::SetLimitModeToScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetLimitModeToFreezeScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitModeToFreezeScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetLimitModeToFreezeScale();
      }
    else
      {
      op->vtkFastSplatter::SetLimitModeToFreezeScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinValue(temp0);
      }
    else
      {
      op->vtkFastSplatter::SetMinValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_GetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinValue();
      }
    else
      {
      tempr = op->vtkFastSplatter::GetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxValue(temp0);
      }
    else
      {
      op->vtkFastSplatter::SetMaxValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_GetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxValue();
      }
    else
      {
      tempr = op->vtkFastSplatter::GetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_GetNumberOfPointsSplatted(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsSplatted");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointsSplatted();
      }
    else
      {
      tempr = op->vtkFastSplatter::GetNumberOfPointsSplatted();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFastSplatter_SetSplatConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplatConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFastSplatter *op = static_cast<vtkFastSplatter *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSplatConnection(temp0);
      }
    else
      {
      op->vtkFastSplatter::SetSplatConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFastSplatter_Methods[] = {
  {(char*)"GetClassName", PyvtkFastSplatter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFastSplatter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFastSplatter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFastSplatter\nC++: vtkFastSplatter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFastSplatter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFastSplatter\nC++: vtkFastSplatter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetModelBounds", PyvtkFastSplatter_SetModelBounds, 1,
   (char*)"V.SetModelBounds(float, float, float, float, float, float)\nC++: void SetModelBounds(double, double, double, double, double,\n    double)\nV.SetModelBounds((float, float, float, float, float, float))\nC++: void SetModelBounds(double a[6])\n\n"},
  {(char*)"GetModelBounds", PyvtkFastSplatter_GetModelBounds, 1,
   (char*)"V.GetModelBounds() -> (float, float, float, float, float, float)\nC++: double *GetModelBounds()\n\nSet / get the (xmin,xmax, ymin,ymax, zmin,zmax) bounding box in\nwhich the sampling is performed. If any of the (min,max) bounds\nvalues are min >= max, then the bounds will be computed\nautomatically from the input data. Otherwise, the user-specified\nbounds will be used.\n"},
  {(char*)"SetOutputDimensions", PyvtkFastSplatter_SetOutputDimensions, 1,
   (char*)"V.SetOutputDimensions(int, int, int)\nC++: void SetOutputDimensions(int, int, int)\nV.SetOutputDimensions((int, int, int))\nC++: void SetOutputDimensions(int a[3])\n\n"},
  {(char*)"GetOutputDimensions", PyvtkFastSplatter_GetOutputDimensions, 1,
   (char*)"V.GetOutputDimensions() -> (int, int, int)\nC++: int *GetOutputDimensions()\n\n"},
  {(char*)"SetLimitMode", PyvtkFastSplatter_SetLimitMode, 1,
   (char*)"V.SetLimitMode(int)\nC++: void SetLimitMode(int a)\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {(char*)"GetLimitMode", PyvtkFastSplatter_GetLimitMode, 1,
   (char*)"V.GetLimitMode() -> int\nC++: int GetLimitMode()\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {(char*)"SetLimitModeToNone", PyvtkFastSplatter_SetLimitModeToNone, 1,
   (char*)"V.SetLimitModeToNone()\nC++: void SetLimitModeToNone()\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {(char*)"SetLimitModeToClamp", PyvtkFastSplatter_SetLimitModeToClamp, 1,
   (char*)"V.SetLimitModeToClamp()\nC++: void SetLimitModeToClamp()\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {(char*)"SetLimitModeToScale", PyvtkFastSplatter_SetLimitModeToScale, 1,
   (char*)"V.SetLimitModeToScale()\nC++: void SetLimitModeToScale()\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {(char*)"SetLimitModeToFreezeScale", PyvtkFastSplatter_SetLimitModeToFreezeScale, 1,
   (char*)"V.SetLimitModeToFreezeScale()\nC++: void SetLimitModeToFreezeScale()\n\nSet/get the way voxel values will be limited.  If this is set to\nNone (the default), the output can have arbitrarily large values.\n If set to clamp, the output will be clamped to\n[MinValue,MaxValue].  If set to scale, the output will be\nlinearly scaled between MinValue and MaxValue.\n"},
  {(char*)"SetMinValue", PyvtkFastSplatter_SetMinValue, 1,
   (char*)"V.SetMinValue(float)\nC++: void SetMinValue(double a)\n\nSee the LimitMode method.\n"},
  {(char*)"GetMinValue", PyvtkFastSplatter_GetMinValue, 1,
   (char*)"V.GetMinValue() -> float\nC++: double GetMinValue()\n\nSee the LimitMode method.\n"},
  {(char*)"SetMaxValue", PyvtkFastSplatter_SetMaxValue, 1,
   (char*)"V.SetMaxValue(float)\nC++: void SetMaxValue(double a)\n\nSee the LimitMode method.\n"},
  {(char*)"GetMaxValue", PyvtkFastSplatter_GetMaxValue, 1,
   (char*)"V.GetMaxValue() -> float\nC++: double GetMaxValue()\n\nSee the LimitMode method.\n"},
  {(char*)"GetNumberOfPointsSplatted", PyvtkFastSplatter_GetNumberOfPointsSplatted, 1,
   (char*)"V.GetNumberOfPointsSplatted() -> int\nC++: int GetNumberOfPointsSplatted()\n\nThis returns the number of points splatted (as opposed to\ndiscarded for being outside the image) during the previous pass.\n"},
  {(char*)"SetSplatConnection", PyvtkFastSplatter_SetSplatConnection, 1,
   (char*)"V.SetSplatConnection(vtkAlgorithmOutput)\nC++: void SetSplatConnection(vtkAlgorithmOutput *)\n\nConvenience function for connecting the splat algorithm source.\nThis is provided mainly for convenience using the filter with\nParaView, VTK users should prefer SetInputConnection(1, splat)\ninstead.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFastSplatter_StaticNew()
{
  return vtkFastSplatter::New();
}

PyObject *PyVTKClass_vtkFastSplatterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFastSplatter_StaticNew,
    PyvtkFastSplatter_Methods,
    "vtkFastSplatter", modulename,
    NULL, NULL,
    PyvtkFastSplatter_Doc(),
    PyVTKClass_vtkImageAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"NoneLimit", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ClampLimit", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ScaleLimit", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"FreezeScaleLimit", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkFastSplatter_Doc()
{
  static const char *docstring[] = {
    "vtkFastSplatter - A splatter optimized for splatting single kernels.\n\n",
    "Superclass: vtkImageAlgorithm\n\n",
    "vtkFastSplatter takes any vtkPointSet as input (of which vtkPolyData\nand vtkUnstructuredGrid inherit).  Each point in the data set is\nconsidered to be an impulse.  These impulses are convolved with a\ngiven splat image.  In other words, the splat image is added to the\nfinal image at every place where there is an input point.\n\nNote that point and cell data are thrown away.  If you want a\nsampling of",
    " unstructured points consider vtkGaussianSplatter or\nvtkShepardMethod.\n\nUse input port 0 for the impulse data (vtkPointSet), and input port 1\nfor the splat image (vtkImageData)\n\nBugs:\n\nAny point outside of the extents of the image is thrown away, even if\nit is close enough such that it's convolution with the splat image\nwould overlap the extents.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFastSplatter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFastSplatterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFastSplatter", o) != 0)
    {
    Py_DECREF(o);
    }

}

