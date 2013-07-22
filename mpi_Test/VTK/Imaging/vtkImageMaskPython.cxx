// python wrapper for vtkImageMask
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
#include "vtkImageMask.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMask(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMask(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMaskNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMaskNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageMask_Doc();


static PyObject *
PyvtkImageMask_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

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
      tempr = op->vtkImageMask::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

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
      tempr = op->vtkImageMask::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkImageMask *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMask::NewInstance();
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
PyvtkImageMask_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageMask *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageMask::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetMaskedOutputValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskedOutputValue(temp0);
      }
    else
      {
      op->vtkImageMask::SetMaskedOutputValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMask_SetMaskedOutputValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetMaskedOutputValue(temp0, temp1);
      }
    else
      {
      op->vtkImageMask::SetMaskedOutputValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMask_SetMaskedOutputValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskedOutputValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

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
      op->SetMaskedOutputValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageMask::SetMaskedOutputValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMask_SetMaskedOutputValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageMask_SetMaskedOutputValue_s1(self, args);
    case 2:
      return PyvtkImageMask_SetMaskedOutputValue_s2(self, args);
    case 3:
      return PyvtkImageMask_SetMaskedOutputValue_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaskedOutputValue");
  return NULL;
}



static PyObject *
PyvtkImageMask_GetMaskedOutputValueLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskedOutputValueLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaskedOutputValueLength();
      }
    else
      {
      tempr = op->vtkImageMask::GetMaskedOutputValueLength();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetMaskAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaskAlpha(temp0);
      }
    else
      {
      op->vtkImageMask::SetMaskAlpha(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskAlphaMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAlphaMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaskAlphaMinValue();
      }
    else
      {
      tempr = op->vtkImageMask::GetMaskAlphaMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskAlphaMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAlphaMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaskAlphaMaxValue();
      }
    else
      {
      tempr = op->vtkImageMask::GetMaskAlphaMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_GetMaskAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaskAlpha();
      }
    else
      {
      tempr = op->vtkImageMask::GetMaskAlpha();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetImageInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetImageInput(temp0);
      }
    else
      {
      op->vtkImageMask::SetImageInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetMaskInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetMaskInput(temp0);
      }
    else
      {
      op->vtkImageMask::SetMaskInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetNotMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNotMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNotMask(temp0);
      }
    else
      {
      op->vtkImageMask::SetNotMask(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_GetNotMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNotMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNotMask();
      }
    else
      {
      tempr = op->vtkImageMask::GetNotMask();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_NotMaskOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotMaskOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NotMaskOn();
      }
    else
      {
      op->vtkImageMask::NotMaskOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_NotMaskOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NotMaskOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NotMaskOff();
      }
    else
      {
      op->vtkImageMask::NotMaskOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetInput1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput1(temp0);
      }
    else
      {
      op->vtkImageMask::SetInput1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMask_SetInput2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMask *op = static_cast<vtkImageMask *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput2(temp0);
      }
    else
      {
      op->vtkImageMask::SetInput2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMask_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMask_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMask_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMask_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMask\nC++: vtkImageMask *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMask_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMask\nC++: vtkImageMask *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaskedOutputValue", PyvtkImageMask_SetMaskedOutputValue, 1,
   (char*)"V.SetMaskedOutputValue(float)\nC++: void SetMaskedOutputValue(double v)\nV.SetMaskedOutputValue(float, float)\nC++: void SetMaskedOutputValue(double v1, double v2)\nV.SetMaskedOutputValue(float, float, float)\nC++: void SetMaskedOutputValue(double v1, double v2, double v3)\n\nSetGet the value of the output pixel replaced by mask.\n"},
  {(char*)"GetMaskedOutputValueLength", PyvtkImageMask_GetMaskedOutputValueLength, 1,
   (char*)"V.GetMaskedOutputValueLength() -> int\nC++: int GetMaskedOutputValueLength()\n\nSetGet the value of the output pixel replaced by mask.\n"},
  {(char*)"SetMaskAlpha", PyvtkImageMask_SetMaskAlpha, 1,
   (char*)"V.SetMaskAlpha(float)\nC++: void SetMaskAlpha(double)\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {(char*)"GetMaskAlphaMinValue", PyvtkImageMask_GetMaskAlphaMinValue, 1,
   (char*)"V.GetMaskAlphaMinValue() -> float\nC++: double GetMaskAlphaMinValue()\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {(char*)"GetMaskAlphaMaxValue", PyvtkImageMask_GetMaskAlphaMaxValue, 1,
   (char*)"V.GetMaskAlphaMaxValue() -> float\nC++: double GetMaskAlphaMaxValue()\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {(char*)"GetMaskAlpha", PyvtkImageMask_GetMaskAlpha, 1,
   (char*)"V.GetMaskAlpha() -> float\nC++: double GetMaskAlpha()\n\nSet/Get the alpha blending value for the mask The input image is\nassumed to be at alpha = 1.0 and the mask image uses this alpha\nto blend using an over operator.\n"},
  {(char*)"SetImageInput", PyvtkImageMask_SetImageInput, 1,
   (char*)"V.SetImageInput(vtkImageData)\nC++: void SetImageInput(vtkImageData *in)\n\nSet the input to be masked.\n"},
  {(char*)"SetMaskInput", PyvtkImageMask_SetMaskInput, 1,
   (char*)"V.SetMaskInput(vtkImageData)\nC++: void SetMaskInput(vtkImageData *in)\n\nSet the mask to be used.\n"},
  {(char*)"SetNotMask", PyvtkImageMask_SetNotMask, 1,
   (char*)"V.SetNotMask(int)\nC++: void SetNotMask(int a)\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {(char*)"GetNotMask", PyvtkImageMask_GetNotMask, 1,
   (char*)"V.GetNotMask() -> int\nC++: int GetNotMask()\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {(char*)"NotMaskOn", PyvtkImageMask_NotMaskOn, 1,
   (char*)"V.NotMaskOn()\nC++: void NotMaskOn()\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {(char*)"NotMaskOff", PyvtkImageMask_NotMaskOff, 1,
   (char*)"V.NotMaskOff()\nC++: void NotMaskOff()\n\nWhen Not Mask is on, the mask is passed through a boolean not\nbefore it is used to mask the image.  The effect is to pass the\npixels where the input mask is zero, and replace the pixels where\nthe input value is non zero.\n"},
  {(char*)"SetInput1", PyvtkImageMask_SetInput1, 1,
   (char*)"V.SetInput1(vtkDataObject)\nC++: virtual void SetInput1(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {(char*)"SetInput2", PyvtkImageMask_SetInput2, 1,
   (char*)"V.SetInput2(vtkDataObject)\nC++: virtual void SetInput2(vtkDataObject *in)\n\nSet the two inputs to this filter\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMask_StaticNew()
{
  return vtkImageMask::New();
}

PyObject *PyVTKClass_vtkImageMaskNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMask_StaticNew,
    PyvtkImageMask_Methods,
    "vtkImageMask", modulename,
    NULL, NULL,
    PyvtkImageMask_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageMask_Doc()
{
  static const char *docstring[] = {
    "vtkImageMask - Combines a mask and an image.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageMask combines a mask with an image.  Non zero mask implies\nthe output pixel will be the same as the image. If a mask pixel is\nzero,  then the output pixel is set to \"MaskedValue\".  The filter\nalso has the option to pass the mask through a boolean not operation\nbefore processing the image. This reverses the passed and replaced\npixels. The two inputs should have the same \"WholeExtent\". The m",
    "ask\ninput should be unsigned char, and the image scalar type is the same\nas the output scalar type.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMask(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMaskNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMask", o) != 0)
    {
    Py_DECREF(o);
    }

}

