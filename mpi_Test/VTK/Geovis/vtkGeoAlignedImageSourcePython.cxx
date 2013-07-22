// python wrapper for vtkGeoAlignedImageSource
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
#include "vtkGeoAlignedImageSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoAlignedImageSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoAlignedImageSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoAlignedImageSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoAlignedImageSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGeoSourceNew
extern "C" { PyObject *PyVTKClass_vtkGeoSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeoSourceNew
#endif

static const char **PyvtkGeoAlignedImageSource_Doc();


static PyObject *
PyvtkGeoAlignedImageSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

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
      tempr = op->vtkGeoAlignedImageSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

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
      tempr = op->vtkGeoAlignedImageSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  vtkGeoAlignedImageSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoAlignedImageSource::NewInstance();
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
PyvtkGeoAlignedImageSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoAlignedImageSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoAlignedImageSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_FetchRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      tempr = op->FetchRoot(temp0);
      }
    else
      {
      tempr = op->vtkGeoAlignedImageSource::FetchRoot(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_FetchChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FetchChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  int temp1;
  vtkGeoTreeNode *temp2 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      tempr = op->FetchChild(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkGeoAlignedImageSource::FetchChild(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImage();
      }
    else
      {
      tempr = op->vtkGeoAlignedImageSource::GetImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_SetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetImage(temp0);
      }
    else
      {
      op->vtkGeoAlignedImageSource::SetImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_SetLatitudeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLatitudeRange(temp0, temp1);
      }
    else
      {
      op->vtkGeoAlignedImageSource::SetLatitudeRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoAlignedImageSource_SetLatitudeRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLatitudeRange(temp0);
      }
    else
      {
      op->vtkGeoAlignedImageSource::SetLatitudeRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoAlignedImageSource_SetLatitudeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGeoAlignedImageSource_SetLatitudeRange_s1(self, args);
    case 1:
      return PyvtkGeoAlignedImageSource_SetLatitudeRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLatitudeRange");
  return NULL;
}



static PyObject *
PyvtkGeoAlignedImageSource_GetLatitudeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLatitudeRange();
      }
    else
      {
      tempr = op->vtkGeoAlignedImageSource::GetLatitudeRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_SetLongitudeRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLongitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetLongitudeRange(temp0, temp1);
      }
    else
      {
      op->vtkGeoAlignedImageSource::SetLongitudeRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoAlignedImageSource_SetLongitudeRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLongitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetLongitudeRange(temp0);
      }
    else
      {
      op->vtkGeoAlignedImageSource::SetLongitudeRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGeoAlignedImageSource_SetLongitudeRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkGeoAlignedImageSource_SetLongitudeRange_s1(self, args);
    case 1:
      return PyvtkGeoAlignedImageSource_SetLongitudeRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetLongitudeRange");
  return NULL;
}



static PyObject *
PyvtkGeoAlignedImageSource_GetLongitudeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLongitudeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLongitudeRange();
      }
    else
      {
      tempr = op->vtkGeoAlignedImageSource::GetLongitudeRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_SetOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOverlap(temp0);
      }
    else
      {
      op->vtkGeoAlignedImageSource::SetOverlap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_GetOverlapMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlapMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOverlapMinValue();
      }
    else
      {
      tempr = op->vtkGeoAlignedImageSource::GetOverlapMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_GetOverlapMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlapMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOverlapMaxValue();
      }
    else
      {
      tempr = op->vtkGeoAlignedImageSource::GetOverlapMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_GetOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOverlap();
      }
    else
      {
      tempr = op->vtkGeoAlignedImageSource::GetOverlap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_SetPowerOfTwoSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPowerOfTwoSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPowerOfTwoSize(temp0);
      }
    else
      {
      op->vtkGeoAlignedImageSource::SetPowerOfTwoSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_GetPowerOfTwoSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPowerOfTwoSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPowerOfTwoSize();
      }
    else
      {
      tempr = op->vtkGeoAlignedImageSource::GetPowerOfTwoSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_PowerOfTwoSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PowerOfTwoSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PowerOfTwoSizeOn();
      }
    else
      {
      op->vtkGeoAlignedImageSource::PowerOfTwoSizeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoAlignedImageSource_PowerOfTwoSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PowerOfTwoSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoAlignedImageSource *op = static_cast<vtkGeoAlignedImageSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PowerOfTwoSizeOff();
      }
    else
      {
      op->vtkGeoAlignedImageSource::PowerOfTwoSizeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoAlignedImageSource_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoAlignedImageSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoAlignedImageSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoAlignedImageSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoAlignedImageSource\nC++: vtkGeoAlignedImageSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoAlignedImageSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoAlignedImageSource\nC++: vtkGeoAlignedImageSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"FetchRoot", PyvtkGeoAlignedImageSource_FetchRoot, 1,
   (char*)"V.FetchRoot(vtkGeoTreeNode) -> bool\nC++: virtual bool FetchRoot(vtkGeoTreeNode *node)\n\nFetch the root image.\n"},
  {(char*)"FetchChild", PyvtkGeoAlignedImageSource_FetchChild, 1,
   (char*)"V.FetchChild(vtkGeoTreeNode, int, vtkGeoTreeNode) -> bool\nC++: virtual bool FetchChild(vtkGeoTreeNode *parent, int index,\n    vtkGeoTreeNode *child)\n\nFetch a child image.\n"},
  {(char*)"GetImage", PyvtkGeoAlignedImageSource_GetImage, 1,
   (char*)"V.GetImage() -> vtkImageData\nC++: vtkImageData *GetImage()\n\nThe high-resolution image to be used to cover the globe.\n"},
  {(char*)"SetImage", PyvtkGeoAlignedImageSource_SetImage, 1,
   (char*)"V.SetImage(vtkImageData)\nC++: virtual void SetImage(vtkImageData *image)\n\nThe high-resolution image to be used to cover the globe.\n"},
  {(char*)"SetLatitudeRange", PyvtkGeoAlignedImageSource_SetLatitudeRange, 1,
   (char*)"V.SetLatitudeRange(float, float)\nC++: void SetLatitudeRange(double, double)\nV.SetLatitudeRange((float, float))\nC++: void SetLatitudeRange(double a[2])\n\n"},
  {(char*)"GetLatitudeRange", PyvtkGeoAlignedImageSource_GetLatitudeRange, 1,
   (char*)"V.GetLatitudeRange() -> (float, float)\nC++: double *GetLatitudeRange()\n\n"},
  {(char*)"SetLongitudeRange", PyvtkGeoAlignedImageSource_SetLongitudeRange, 1,
   (char*)"V.SetLongitudeRange(float, float)\nC++: void SetLongitudeRange(double, double)\nV.SetLongitudeRange((float, float))\nC++: void SetLongitudeRange(double a[2])\n\n"},
  {(char*)"GetLongitudeRange", PyvtkGeoAlignedImageSource_GetLongitudeRange, 1,
   (char*)"V.GetLongitudeRange() -> (float, float)\nC++: double *GetLongitudeRange()\n\n"},
  {(char*)"SetOverlap", PyvtkGeoAlignedImageSource_SetOverlap, 1,
   (char*)"V.SetOverlap(float)\nC++: void SetOverlap(double)\n\nThe overlap of adjacent tiles.\n"},
  {(char*)"GetOverlapMinValue", PyvtkGeoAlignedImageSource_GetOverlapMinValue, 1,
   (char*)"V.GetOverlapMinValue() -> float\nC++: double GetOverlapMinValue()\n\nThe overlap of adjacent tiles.\n"},
  {(char*)"GetOverlapMaxValue", PyvtkGeoAlignedImageSource_GetOverlapMaxValue, 1,
   (char*)"V.GetOverlapMaxValue() -> float\nC++: double GetOverlapMaxValue()\n\nThe overlap of adjacent tiles.\n"},
  {(char*)"GetOverlap", PyvtkGeoAlignedImageSource_GetOverlap, 1,
   (char*)"V.GetOverlap() -> float\nC++: double GetOverlap()\n\nThe overlap of adjacent tiles.\n"},
  {(char*)"SetPowerOfTwoSize", PyvtkGeoAlignedImageSource_SetPowerOfTwoSize, 1,
   (char*)"V.SetPowerOfTwoSize(bool)\nC++: void SetPowerOfTwoSize(bool a)\n\nWhether to force image sizes to a power of two.\n"},
  {(char*)"GetPowerOfTwoSize", PyvtkGeoAlignedImageSource_GetPowerOfTwoSize, 1,
   (char*)"V.GetPowerOfTwoSize() -> bool\nC++: bool GetPowerOfTwoSize()\n\nWhether to force image sizes to a power of two.\n"},
  {(char*)"PowerOfTwoSizeOn", PyvtkGeoAlignedImageSource_PowerOfTwoSizeOn, 1,
   (char*)"V.PowerOfTwoSizeOn()\nC++: void PowerOfTwoSizeOn()\n\nWhether to force image sizes to a power of two.\n"},
  {(char*)"PowerOfTwoSizeOff", PyvtkGeoAlignedImageSource_PowerOfTwoSizeOff, 1,
   (char*)"V.PowerOfTwoSizeOff()\nC++: void PowerOfTwoSizeOff()\n\nWhether to force image sizes to a power of two.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoAlignedImageSource_StaticNew()
{
  return vtkGeoAlignedImageSource::New();
}

PyObject *PyVTKClass_vtkGeoAlignedImageSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoAlignedImageSource_StaticNew,
    PyvtkGeoAlignedImageSource_Methods,
    "vtkGeoAlignedImageSource", modulename,
    NULL, NULL,
    PyvtkGeoAlignedImageSource_Doc(),
    PyVTKClass_vtkGeoSourceNew(modulename));
  return cls;
}

const char **PyvtkGeoAlignedImageSource_Doc()
{
  static const char *docstring[] = {
    "vtkGeoAlignedImageSource - Splits hi-res image into tiles.\n\n",
    "Superclass: vtkGeoSource\n\n",
    "vtkGeoAlignedImageSource uses a high resolution image to generate\ntiles at multiple resolutions in a hierarchy. It should be used as a\nsource in vtkGeoAlignedImageRepresentation.\n\nSee Also:\n\nvtkGeoAlignedImageRepresentation vtkGeoView vtkGeoView2D\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoAlignedImageSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoAlignedImageSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoAlignedImageSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

