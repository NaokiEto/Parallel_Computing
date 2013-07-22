// python wrapper for vtkImageHSIToRGB
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
#include "vtkImageHSIToRGB.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageHSIToRGB(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageHSIToRGB(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageHSIToRGBNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageHSIToRGBNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageHSIToRGB_Doc();


static PyObject *
PyvtkImageHSIToRGB_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

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
      tempr = op->vtkImageHSIToRGB::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

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
      tempr = op->vtkImageHSIToRGB::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  vtkImageHSIToRGB *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageHSIToRGB::NewInstance();
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
PyvtkImageHSIToRGB_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageHSIToRGB *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageHSIToRGB::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximum(temp0);
      }
    else
      {
      op->vtkImageHSIToRGB::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageHSIToRGB_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageHSIToRGB *op = static_cast<vtkImageHSIToRGB *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximum();
      }
    else
      {
      tempr = op->vtkImageHSIToRGB::GetMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageHSIToRGB_Methods[] = {
  {(char*)"GetClassName", PyvtkImageHSIToRGB_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageHSIToRGB_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageHSIToRGB_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageHSIToRGB\nC++: vtkImageHSIToRGB *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageHSIToRGB_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageHSIToRGB\nC++: vtkImageHSIToRGB *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximum", PyvtkImageHSIToRGB_SetMaximum, 1,
   (char*)"V.SetMaximum(float)\nC++: void SetMaximum(double a)\n\nHue is an angle. Maximum specifies when it maps back to 0.\nHueMaximum defaults to 255 instead of 2PI, because unsigned char\nis expected as input. Maximum also specifies the maximum of the\nSaturation, and R, G, B.\n"},
  {(char*)"GetMaximum", PyvtkImageHSIToRGB_GetMaximum, 1,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\nHue is an angle. Maximum specifies when it maps back to 0.\nHueMaximum defaults to 255 instead of 2PI, because unsigned char\nis expected as input. Maximum also specifies the maximum of the\nSaturation, and R, G, B.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageHSIToRGB_StaticNew()
{
  return vtkImageHSIToRGB::New();
}

PyObject *PyVTKClass_vtkImageHSIToRGBNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageHSIToRGB_StaticNew,
    PyvtkImageHSIToRGB_Methods,
    "vtkImageHSIToRGB", modulename,
    NULL, NULL,
    PyvtkImageHSIToRGB_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageHSIToRGB_Doc()
{
  static const char *docstring[] = {
    "vtkImageHSIToRGB - Converts HSI components to RGB.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "For each pixel with hue, saturation and intensity components this\nfilter outputs the color coded as red, green, blue.  Output type must\nbe the same as input type.\n\nSee Also:\n\nvtkImageRGBToHSI\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageHSIToRGB(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageHSIToRGBNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageHSIToRGB", o) != 0)
    {
    Py_DECREF(o);
    }

}

