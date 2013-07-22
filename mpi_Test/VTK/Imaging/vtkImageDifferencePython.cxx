// python wrapper for vtkImageDifference
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
#include "vtkImageDifference.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageDifference(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageDifference(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageDifferenceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageDifferenceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageDifference_Doc();


static PyObject *
PyvtkImageDifference_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

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
      tempr = op->vtkImageDifference::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

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
      tempr = op->vtkImageDifference::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  vtkImageDifference *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageDifference::NewInstance();
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
PyvtkImageDifference_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageDifference *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageDifference::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_SetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetImage(temp0);
      }
    else
      {
      op->vtkImageDifference::SetImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

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
      tempr = op->vtkImageDifference::GetImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetError();
      }
    else
      {
      tempr = op->vtkImageDifference::GetError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetThresholdedError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdedError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThresholdedError();
      }
    else
      {
      tempr = op->vtkImageDifference::GetThresholdedError();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_SetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetThreshold(temp0);
      }
    else
      {
      op->vtkImageDifference::SetThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetThreshold();
      }
    else
      {
      tempr = op->vtkImageDifference::GetThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_SetAllowShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAllowShift(temp0);
      }
    else
      {
      op->vtkImageDifference::SetAllowShift(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetAllowShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAllowShift();
      }
    else
      {
      tempr = op->vtkImageDifference::GetAllowShift();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_AllowShiftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowShiftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowShiftOn();
      }
    else
      {
      op->vtkImageDifference::AllowShiftOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_AllowShiftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowShiftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AllowShiftOff();
      }
    else
      {
      op->vtkImageDifference::AllowShiftOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_SetAveraging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAveraging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAveraging(temp0);
      }
    else
      {
      op->vtkImageDifference::SetAveraging(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_GetAveraging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAveraging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAveraging();
      }
    else
      {
      tempr = op->vtkImageDifference::GetAveraging();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_AveragingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AveragingOn();
      }
    else
      {
      op->vtkImageDifference::AveragingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageDifference_AveragingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AveragingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDifference *op = static_cast<vtkImageDifference *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AveragingOff();
      }
    else
      {
      op->vtkImageDifference::AveragingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDifference_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDifference_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDifference_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDifference_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageDifference\nC++: vtkImageDifference *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDifference_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDifference\nC++: vtkImageDifference *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetImage", PyvtkImageDifference_SetImage, 1,
   (char*)"V.SetImage(vtkDataObject)\nC++: void SetImage(vtkDataObject *image)\n\nSpecify the Image to compare the input to.\n"},
  {(char*)"GetImage", PyvtkImageDifference_GetImage, 1,
   (char*)"V.GetImage() -> vtkImageData\nC++: vtkImageData *GetImage()\n\nSpecify the Image to compare the input to.\n"},
  {(char*)"GetError", PyvtkImageDifference_GetError, 1,
   (char*)"V.GetError() -> float\nC++: double GetError(void)\n\nReturn the total error in comparing the two images.\n"},
  {(char*)"GetThresholdedError", PyvtkImageDifference_GetThresholdedError, 1,
   (char*)"V.GetThresholdedError() -> float\nC++: double GetThresholdedError(void)\n\nReturn the total thresholded error in comparing the two images.\nThe thresholded error is the error for a given pixel minus the\nthreshold and clamped at a minimum of zero.\n"},
  {(char*)"SetThreshold", PyvtkImageDifference_SetThreshold, 1,
   (char*)"V.SetThreshold(int)\nC++: void SetThreshold(int a)\n\nSpecify a threshold tolerance for pixel differences.\n"},
  {(char*)"GetThreshold", PyvtkImageDifference_GetThreshold, 1,
   (char*)"V.GetThreshold() -> int\nC++: int GetThreshold()\n\nSpecify a threshold tolerance for pixel differences.\n"},
  {(char*)"SetAllowShift", PyvtkImageDifference_SetAllowShift, 1,
   (char*)"V.SetAllowShift(int)\nC++: void SetAllowShift(int a)\n\nSpecify whether the comparison will allow a shift of one pixel\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {(char*)"GetAllowShift", PyvtkImageDifference_GetAllowShift, 1,
   (char*)"V.GetAllowShift() -> int\nC++: int GetAllowShift()\n\nSpecify whether the comparison will allow a shift of one pixel\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {(char*)"AllowShiftOn", PyvtkImageDifference_AllowShiftOn, 1,
   (char*)"V.AllowShiftOn()\nC++: void AllowShiftOn()\n\nSpecify whether the comparison will allow a shift of one pixel\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {(char*)"AllowShiftOff", PyvtkImageDifference_AllowShiftOff, 1,
   (char*)"V.AllowShiftOff()\nC++: void AllowShiftOff()\n\nSpecify whether the comparison will allow a shift of one pixel\nbetween the images.  If set, then the minimum difference between\ninput images will be used to determine the difference. Otherwise,\nthe difference is computed directly between pixels of identical\nrow/column values.\n"},
  {(char*)"SetAveraging", PyvtkImageDifference_SetAveraging, 1,
   (char*)"V.SetAveraging(int)\nC++: void SetAveraging(int a)\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {(char*)"GetAveraging", PyvtkImageDifference_GetAveraging, 1,
   (char*)"V.GetAveraging() -> int\nC++: int GetAveraging()\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {(char*)"AveragingOn", PyvtkImageDifference_AveragingOn, 1,
   (char*)"V.AveragingOn()\nC++: void AveragingOn()\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {(char*)"AveragingOff", PyvtkImageDifference_AveragingOff, 1,
   (char*)"V.AveragingOff()\nC++: void AveragingOff()\n\nSpecify whether the comparison will include comparison of\naveraged 3x3 data between the images. For graphics renderings you\nnormally would leave this on. For imaging operations it should be\noff.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDifference_StaticNew()
{
  return vtkImageDifference::New();
}

PyObject *PyVTKClass_vtkImageDifferenceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDifference_StaticNew,
    PyvtkImageDifference_Methods,
    "vtkImageDifference", modulename,
    NULL, NULL,
    PyvtkImageDifference_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDifference_Doc()
{
  static const char *docstring[] = {
    "vtkImageDifference - Compares images for regression tests.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageDifference takes two rgb unsigned char images and compares\nthem. It allows the images to be slightly different.  If AllowShift\nis on, then each pixel can be shifted by one pixel. Threshold is the\nallowable error for each pixel.\n\nThis is not a symetric filter and the difference computed is not\nsymetric when AllowShift is on. Specifically in that case a pixel in\nSetImage input will be compar",
    "ed to the matching pixel in the input as\nwell as to the input's eight connected neighbors. BUT... the opposite\nis not true. So for example if a valid image (SetImage) has a single\nwhite pixel in it, it will not find a match in the input image if the\ninput image is black (because none of the nine suspect pixels are\nwhite). In contrast, if there is a single white pixel in the input\nimage and the val",
    "id image (SetImage) is all black it will match with\nno error because all it has to do is find black pixels and even\nthough the input image has a white pixel, its neighbors are not\nwhite.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDifference(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDifferenceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDifference", o) != 0)
    {
    Py_DECREF(o);
    }

}

