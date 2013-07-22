// python wrapper for vtkImageToImageStencil
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
#include "vtkImageToImageStencil.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageToImageStencil(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageToImageStencil(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageToImageStencilNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageToImageStencilNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageStencilAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkImageStencilAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageStencilAlgorithmNew
#endif

static const char **PyvtkImageToImageStencil_Doc();


static PyObject *
PyvtkImageToImageStencil_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

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
      tempr = op->vtkImageToImageStencil::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

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
      tempr = op->vtkImageToImageStencil::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

  vtkImageToImageStencil *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageToImageStencil::NewInstance();
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
PyvtkImageToImageStencil_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageToImageStencil *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageToImageStencil::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImageToImageStencil::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkImageToImageStencil::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByUpper(temp0);
      }
    else
      {
      op->vtkImageToImageStencil::ThresholdByUpper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByLower(temp0);
      }
    else
      {
      op->vtkImageToImageStencil::ThresholdByLower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ThresholdBetween(temp0, temp1);
      }
    else
      {
      op->vtkImageToImageStencil::ThresholdBetween(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_SetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpperThreshold(temp0);
      }
    else
      {
      op->vtkImageToImageStencil::SetUpperThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpperThreshold();
      }
    else
      {
      tempr = op->vtkImageToImageStencil::GetUpperThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_SetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLowerThreshold(temp0);
      }
    else
      {
      op->vtkImageToImageStencil::SetLowerThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageToImageStencil_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageToImageStencil *op = static_cast<vtkImageToImageStencil *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLowerThreshold();
      }
    else
      {
      tempr = op->vtkImageToImageStencil::GetLowerThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageToImageStencil_Methods[] = {
  {(char*)"GetClassName", PyvtkImageToImageStencil_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageToImageStencil_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageToImageStencil_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageToImageStencil\nC++: vtkImageToImageStencil *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageToImageStencil_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageToImageStencil\nC++: vtkImageToImageStencil *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetInput", PyvtkImageToImageStencil_SetInput, 1,
   (char*)"V.SetInput(vtkImageData)\nC++: void SetInput(vtkImageData *input)\n\nSpecify the image data to convert into a stencil.\n"},
  {(char*)"GetInput", PyvtkImageToImageStencil_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nSpecify the image data to convert into a stencil.\n"},
  {(char*)"ThresholdByUpper", PyvtkImageToImageStencil_ThresholdByUpper, 1,
   (char*)"V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double thresh)\n\nThe values greater than or equal to the value match.\n"},
  {(char*)"ThresholdByLower", PyvtkImageToImageStencil_ThresholdByLower, 1,
   (char*)"V.ThresholdByLower(float)\nC++: void ThresholdByLower(double thresh)\n\nThe values less than or equal to the value match.\n"},
  {(char*)"ThresholdBetween", PyvtkImageToImageStencil_ThresholdBetween, 1,
   (char*)"V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nThe values in a range (inclusive) match\n"},
  {(char*)"SetUpperThreshold", PyvtkImageToImageStencil_SetUpperThreshold, 1,
   (char*)"V.SetUpperThreshold(float)\nC++: void SetUpperThreshold(double a)\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"GetUpperThreshold", PyvtkImageToImageStencil_GetUpperThreshold, 1,
   (char*)"V.GetUpperThreshold() -> float\nC++: double GetUpperThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"SetLowerThreshold", PyvtkImageToImageStencil_SetLowerThreshold, 1,
   (char*)"V.SetLowerThreshold(float)\nC++: void SetLowerThreshold(double a)\n\nGet the Upper and Lower thresholds.\n"},
  {(char*)"GetLowerThreshold", PyvtkImageToImageStencil_GetLowerThreshold, 1,
   (char*)"V.GetLowerThreshold() -> float\nC++: double GetLowerThreshold()\n\nGet the Upper and Lower thresholds.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageToImageStencil_StaticNew()
{
  return vtkImageToImageStencil::New();
}

PyObject *PyVTKClass_vtkImageToImageStencilNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageToImageStencil_StaticNew,
    PyvtkImageToImageStencil_Methods,
    "vtkImageToImageStencil", modulename,
    NULL, NULL,
    PyvtkImageToImageStencil_Doc(),
    PyVTKClass_vtkImageStencilAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageToImageStencil_Doc()
{
  static const char *docstring[] = {
    "vtkImageToImageStencil - clip an image with a mask image\n\n",
    "Superclass: vtkImageStencilAlgorithm\n\n",
    "vtkImageToImageStencil will convert a vtkImageData into an stencil\nthat can be used with vtkImageStecil or other vtk classes that apply\na stencil to an image.\n\nSee Also:\n\nvtkImageStencil vtkImplicitFunctionToImageStencil\nvtkPolyDataToImageStencil\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageToImageStencil(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageToImageStencilNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageToImageStencil", o) != 0)
    {
    Py_DECREF(o);
    }

}

