// python wrapper for vtkImageRGBToHSV
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
#include "vtkImageRGBToHSV.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageRGBToHSV(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageRGBToHSV(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageRGBToHSVNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageRGBToHSVNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageRGBToHSV_Doc();


static PyObject *
PyvtkImageRGBToHSV_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRGBToHSV *op = static_cast<vtkImageRGBToHSV *>(vp);

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
      tempr = op->vtkImageRGBToHSV::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRGBToHSV_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRGBToHSV *op = static_cast<vtkImageRGBToHSV *>(vp);

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
      tempr = op->vtkImageRGBToHSV::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRGBToHSV_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRGBToHSV *op = static_cast<vtkImageRGBToHSV *>(vp);

  vtkImageRGBToHSV *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageRGBToHSV::NewInstance();
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
PyvtkImageRGBToHSV_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageRGBToHSV *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageRGBToHSV::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageRGBToHSV_SetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRGBToHSV *op = static_cast<vtkImageRGBToHSV *>(vp);

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
      op->vtkImageRGBToHSV::SetMaximum(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageRGBToHSV_GetMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageRGBToHSV *op = static_cast<vtkImageRGBToHSV *>(vp);

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
      tempr = op->vtkImageRGBToHSV::GetMaximum();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageRGBToHSV_Methods[] = {
  {(char*)"GetClassName", PyvtkImageRGBToHSV_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageRGBToHSV_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageRGBToHSV_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageRGBToHSV\nC++: vtkImageRGBToHSV *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageRGBToHSV_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageRGBToHSV\nC++: vtkImageRGBToHSV *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMaximum", PyvtkImageRGBToHSV_SetMaximum, 1,
   (char*)"V.SetMaximum(float)\nC++: void SetMaximum(double a)\n\n"},
  {(char*)"GetMaximum", PyvtkImageRGBToHSV_GetMaximum, 1,
   (char*)"V.GetMaximum() -> float\nC++: double GetMaximum()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageRGBToHSV_StaticNew()
{
  return vtkImageRGBToHSV::New();
}

PyObject *PyVTKClass_vtkImageRGBToHSVNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageRGBToHSV_StaticNew,
    PyvtkImageRGBToHSV_Methods,
    "vtkImageRGBToHSV", modulename,
    NULL, NULL,
    PyvtkImageRGBToHSV_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageRGBToHSV_Doc()
{
  static const char *docstring[] = {
    "vtkImageRGBToHSV - Converts RGB components to HSV.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "For each pixel with red, blue, and green components this filter\noutput the color coded as hue, saturation and value. Output type must\nbe the same as input type.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageRGBToHSV(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageRGBToHSVNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageRGBToHSV", o) != 0)
    {
    Py_DECREF(o);
    }

}

