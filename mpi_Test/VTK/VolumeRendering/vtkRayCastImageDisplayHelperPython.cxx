// python wrapper for vtkRayCastImageDisplayHelper
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
#include "vtkRayCastImageDisplayHelper.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRayCastImageDisplayHelper(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRayCastImageDisplayHelper(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRayCastImageDisplayHelperNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRayCastImageDisplayHelperNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkRayCastImageDisplayHelper_Doc();


static PyObject *
PyvtkRayCastImageDisplayHelper_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

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
      tempr = op->vtkRayCastImageDisplayHelper::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

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
      tempr = op->vtkRayCastImageDisplayHelper::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  vtkRayCastImageDisplayHelper *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRayCastImageDisplayHelper::NewInstance();
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
PyvtkRayCastImageDisplayHelper_RenderTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = NULL;
  vtkRenderer *temp1 = NULL;
  vtkFixedPointRayCastImage *temp2 = NULL;
  float temp3;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkFixedPointRayCastImage") &&
      ap.GetValue(temp3))
    {
    op->RenderTexture(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_SetPreMultipliedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreMultipliedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPreMultipliedColors(temp0);
      }
    else
      {
      op->vtkRayCastImageDisplayHelper::SetPreMultipliedColors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreMultipliedColorsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreMultipliedColorsMinValue();
      }
    else
      {
      tempr = op->vtkRayCastImageDisplayHelper::GetPreMultipliedColorsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreMultipliedColorsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreMultipliedColorsMaxValue();
      }
    else
      {
      tempr = op->vtkRayCastImageDisplayHelper::GetPreMultipliedColorsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPreMultipliedColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreMultipliedColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPreMultipliedColors();
      }
    else
      {
      tempr = op->vtkRayCastImageDisplayHelper::GetPreMultipliedColors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultipliedColorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreMultipliedColorsOn();
      }
    else
      {
      op->vtkRayCastImageDisplayHelper::PreMultipliedColorsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreMultipliedColorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PreMultipliedColorsOff();
      }
    else
      {
      op->vtkRayCastImageDisplayHelper::PreMultipliedColorsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_SetPixelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPixelScale(temp0);
      }
    else
      {
      op->vtkRayCastImageDisplayHelper::SetPixelScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRayCastImageDisplayHelper_GetPixelScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRayCastImageDisplayHelper *op = static_cast<vtkRayCastImageDisplayHelper *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelScale();
      }
    else
      {
      tempr = op->vtkRayCastImageDisplayHelper::GetPixelScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRayCastImageDisplayHelper_Methods[] = {
  {(char*)"GetClassName", PyvtkRayCastImageDisplayHelper_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRayCastImageDisplayHelper_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRayCastImageDisplayHelper_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRayCastImageDisplayHelper\nC++: vtkRayCastImageDisplayHelper *NewInstance()\n\n"},
  {(char*)"RenderTexture", PyvtkRayCastImageDisplayHelper_RenderTexture, 1,
   (char*)"V.RenderTexture(vtkVolume, vtkRenderer, vtkFixedPointRayCastImage,\n     float)\nC++: virtual void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    vtkFixedPointRayCastImage *image, float requestedDepth)\n\n"},
  {(char*)"SetPreMultipliedColors", PyvtkRayCastImageDisplayHelper_SetPreMultipliedColors, 1,
   (char*)"V.SetPreMultipliedColors(int)\nC++: void SetPreMultipliedColors(int)\n\n"},
  {(char*)"GetPreMultipliedColorsMinValue", PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMinValue, 1,
   (char*)"V.GetPreMultipliedColorsMinValue() -> int\nC++: int GetPreMultipliedColorsMinValue()\n\n"},
  {(char*)"GetPreMultipliedColorsMaxValue", PyvtkRayCastImageDisplayHelper_GetPreMultipliedColorsMaxValue, 1,
   (char*)"V.GetPreMultipliedColorsMaxValue() -> int\nC++: int GetPreMultipliedColorsMaxValue()\n\n"},
  {(char*)"GetPreMultipliedColors", PyvtkRayCastImageDisplayHelper_GetPreMultipliedColors, 1,
   (char*)"V.GetPreMultipliedColors() -> int\nC++: int GetPreMultipliedColors()\n\n"},
  {(char*)"PreMultipliedColorsOn", PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOn, 1,
   (char*)"V.PreMultipliedColorsOn()\nC++: void PreMultipliedColorsOn()\n\n"},
  {(char*)"PreMultipliedColorsOff", PyvtkRayCastImageDisplayHelper_PreMultipliedColorsOff, 1,
   (char*)"V.PreMultipliedColorsOff()\nC++: void PreMultipliedColorsOff()\n\n"},
  {(char*)"SetPixelScale", PyvtkRayCastImageDisplayHelper_SetPixelScale, 1,
   (char*)"V.SetPixelScale(float)\nC++: void SetPixelScale(float a)\n\nSet / Get the pixel scale to be applied to the image before\ndisplay. Can be set to scale the incoming pixel values - for\nexample the fixed point mapper uses the unsigned short API but\nwith 15 bit values so needs a scale of 2.0.\n"},
  {(char*)"GetPixelScale", PyvtkRayCastImageDisplayHelper_GetPixelScale, 1,
   (char*)"V.GetPixelScale() -> float\nC++: float GetPixelScale()\n\nSet / Get the pixel scale to be applied to the image before\ndisplay. Can be set to scale the incoming pixel values - for\nexample the fixed point mapper uses the unsigned short API but\nwith 15 bit values so needs a scale of 2.0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRayCastImageDisplayHelper_StaticNew()
{
  return vtkRayCastImageDisplayHelper::New();
}

PyObject *PyVTKClass_vtkRayCastImageDisplayHelperNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRayCastImageDisplayHelper_StaticNew,
    PyvtkRayCastImageDisplayHelper_Methods,
    "vtkRayCastImageDisplayHelper", modulename,
    NULL, NULL,
    PyvtkRayCastImageDisplayHelper_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkRayCastImageDisplayHelper_Doc()
{
  static const char *docstring[] = {
    "vtkRayCastImageDisplayHelper - helper class that draws the image to\nthe screen\n\n",
    "Superclass: vtkObject\n\n",
    "This is a helper class for drawing images created from ray casting on\nthe screen. This is the abstract device-independent superclass.\n\nSee Also:\n\nvtkVolumeRayCastMapper vtkUnstructuredGridVolumeRayCastMapper\nvtkOpenGLRayCastImageDisplayHelper\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRayCastImageDisplayHelper(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRayCastImageDisplayHelperNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRayCastImageDisplayHelper", o) != 0)
    {
    Py_DECREF(o);
    }

}

