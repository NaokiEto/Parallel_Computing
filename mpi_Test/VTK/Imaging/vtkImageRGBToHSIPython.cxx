// python wrapper for vtkImageRGBToHSI
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
#include "vtkImageRGBToHSI.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageRGBToHSI(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageRGBToHSI(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageRGBToHSINew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageRGBToHSINew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageRGBToHSI_Doc();


static PyObject *
PyvtkImageRGBToHSI_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRGBToHSI *op = static_cast<vtkImageRGBToHSI *>(vp);

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
      tempr = op->vtkImageRGBToHSI::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRGBToHSI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRGBToHSI *op = static_cast<vtkImageRGBToHSI *>(vp);

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
      tempr = op->vtkImageRGBToHSI::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRGBToHSI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRGBToHSI *op = static_cast<vtkImageRGBToHSI *>(vp);

  vtkImageRGBToHSI *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageRGBToHSI::NewInstance();
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
PyvtkImageRGBToHSI_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageRGBToHSI *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageRGBToHSI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRGBToHSI_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRGBToHSI *op = static_cast<vtkImageRGBToHSI *>(vp);

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
      op->vtkImageRGBToHSI::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRGBToHSI_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRGBToHSI *op = static_cast<vtkImageRGBToHSI *>(vp);

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
      tempr = op->vtkImageRGBToHSI::GetMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageRGBToHSI_Methods[] = {
  {(char*)"GetClassName", PyvtkImageRGBToHSI_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageRGBToHSI_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageRGBToHSI_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageRGBToHSI\nC++: vtkImageRGBToHSI *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageRGBToHSI_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageRGBToHSI\nC++: vtkImageRGBToHSI *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximum", PyvtkImageRGBToHSI_SetMaximum, 1,
   (char*)"V.SetMaximum(float)\nC++: void SetMaximum(double a)\n\nHue is an angle. Maximum specifies when it maps back to 0. \nHueMaximum defaults to 255 instead of 2PI, because unsigned char\nis expected as input.  Maximum also specifies the maximum of the\nSaturation.\n"},
  {(char*)"GetMaximum", PyvtkImageRGBToHSI_GetMaximum, 1,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\nHue is an angle. Maximum specifies when it maps back to 0. \nHueMaximum defaults to 255 instead of 2PI, because unsigned char\nis expected as input.  Maximum also specifies the maximum of the\nSaturation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageRGBToHSI_StaticNew()
{
  return vtkImageRGBToHSI::New();
}

PyObject *PyVTKClass_vtkImageRGBToHSINew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageRGBToHSI_StaticNew,
    PyvtkImageRGBToHSI_Methods,
    "vtkImageRGBToHSI", modulename,
    NULL, NULL,
    PyvtkImageRGBToHSI_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageRGBToHSI_Doc()
{
  static const char *docstring[] = {
    "vtkImageRGBToHSI - Converts RGB components to HSI.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "For each pixel with red, blue, and green components this filter\noutput the color coded as hue, saturation and intensity. Output type\nmust be the same as input type.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageRGBToHSI(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageRGBToHSINew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageRGBToHSI", o) != 0)
    {
    Py_DECREF(o);
    }

}

