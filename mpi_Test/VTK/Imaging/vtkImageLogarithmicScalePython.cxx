// python wrapper for vtkImageLogarithmicScale
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
#include "vtkImageLogarithmicScale.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageLogarithmicScale(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageLogarithmicScale(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageLogarithmicScaleNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageLogarithmicScaleNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageLogarithmicScale_Doc();


static PyObject *
PyvtkImageLogarithmicScale_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogarithmicScale *op = static_cast<vtkImageLogarithmicScale *>(vp);

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
      tempr = op->vtkImageLogarithmicScale::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogarithmicScale_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogarithmicScale *op = static_cast<vtkImageLogarithmicScale *>(vp);

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
      tempr = op->vtkImageLogarithmicScale::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogarithmicScale_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogarithmicScale *op = static_cast<vtkImageLogarithmicScale *>(vp);

  vtkImageLogarithmicScale *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageLogarithmicScale::NewInstance();
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
PyvtkImageLogarithmicScale_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageLogarithmicScale *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageLogarithmicScale::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogarithmicScale_SetConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogarithmicScale *op = static_cast<vtkImageLogarithmicScale *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetConstant(temp0);
      }
    else
      {
      op->vtkImageLogarithmicScale::SetConstant(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogarithmicScale_GetConstant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogarithmicScale *op = static_cast<vtkImageLogarithmicScale *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetConstant();
      }
    else
      {
      tempr = op->vtkImageLogarithmicScale::GetConstant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageLogarithmicScale_Methods[] = {
  {(char*)"GetClassName", PyvtkImageLogarithmicScale_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageLogarithmicScale_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageLogarithmicScale_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageLogarithmicScale\nC++: vtkImageLogarithmicScale *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageLogarithmicScale_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageLogarithmicScale\nC++: vtkImageLogarithmicScale *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetConstant", PyvtkImageLogarithmicScale_SetConstant, 1,
   (char*)"V.SetConstant(float)\nC++: void SetConstant(double a)\n\nSet/Get the scale factor for the logarithmic function.\n"},
  {(char*)"GetConstant", PyvtkImageLogarithmicScale_GetConstant, 1,
   (char*)"V.GetConstant() -> float\nC++: double GetConstant()\n\nSet/Get the scale factor for the logarithmic function.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageLogarithmicScale_StaticNew()
{
  return vtkImageLogarithmicScale::New();
}

PyObject *PyVTKClass_vtkImageLogarithmicScaleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageLogarithmicScale_StaticNew,
    PyvtkImageLogarithmicScale_Methods,
    "vtkImageLogarithmicScale", modulename,
    NULL, NULL,
    PyvtkImageLogarithmicScale_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageLogarithmicScale_Doc()
{
  static const char *docstring[] = {
    "vtkImageLogarithmicScale - Passes each pixel through log function.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageLogarithmicScale passes each pixel through the function\nc*log(1+x).  It also handles negative values with the function\n-c*log(1-x).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageLogarithmicScale(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageLogarithmicScaleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageLogarithmicScale", o) != 0)
    {
    Py_DECREF(o);
    }

}

