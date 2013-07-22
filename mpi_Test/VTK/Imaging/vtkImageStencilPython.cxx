// python wrapper for vtkImageStencil
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
#include "vtkImageStencil.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageStencil(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageStencil(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageStencilNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageStencilNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageStencil_Doc();


static PyObject *
PyvtkImageStencil_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

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
      tempr = op->vtkImageStencil::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

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
      tempr = op->vtkImageStencil::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  vtkImageStencil *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageStencil::NewInstance();
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
PyvtkImageStencil_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageStencil *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageStencil::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_SetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  vtkImageStencilData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
    {
    if (ap.IsBound())
      {
      op->SetStencil(temp0);
      }
    else
      {
      op->vtkImageStencil::SetStencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  vtkImageStencilData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStencil();
      }
    else
      {
      tempr = op->vtkImageStencil::GetStencil();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_SetReverseStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReverseStencil(temp0);
      }
    else
      {
      op->vtkImageStencil::SetReverseStencil(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_ReverseStencilOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseStencilOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseStencilOn();
      }
    else
      {
      op->vtkImageStencil::ReverseStencilOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_ReverseStencilOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseStencilOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReverseStencilOff();
      }
    else
      {
      op->vtkImageStencil::ReverseStencilOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_GetReverseStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReverseStencil();
      }
    else
      {
      tempr = op->vtkImageStencil::GetReverseStencil();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_SetBackgroundInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundInput(temp0);
      }
    else
      {
      op->vtkImageStencil::SetBackgroundInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_GetBackgroundInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundInput();
      }
    else
      {
      tempr = op->vtkImageStencil::GetBackgroundInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_SetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundValue(temp0);
      }
    else
      {
      op->vtkImageStencil::SetBackgroundValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_GetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundValue();
      }
    else
      {
      tempr = op->vtkImageStencil::GetBackgroundValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageStencil_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundColor(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkImageStencil::SetBackgroundColor(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencil_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  double temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBackgroundColor(temp0);
      }
    else
      {
      op->vtkImageStencil::SetBackgroundColor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageStencil_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkImageStencil_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkImageStencil_SetBackgroundColor_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return NULL;
}



static PyObject *
PyvtkImageStencil_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  double *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBackgroundColor();
      }
    else
      {
      tempr = op->vtkImageStencil::GetBackgroundColor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageStencil_Methods[] = {
  {(char*)"GetClassName", PyvtkImageStencil_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageStencil_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageStencil_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageStencil\nC++: vtkImageStencil *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageStencil_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageStencil\nC++: vtkImageStencil *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetStencil", PyvtkImageStencil_SetStencil, 1,
   (char*)"V.SetStencil(vtkImageStencilData)\nC++: virtual void SetStencil(vtkImageStencilData *stencil)\n\nSpecify the stencil to use.  The stencil can be created from a\nvtkImplicitFunction or a vtkPolyData.\n"},
  {(char*)"GetStencil", PyvtkImageStencil_GetStencil, 1,
   (char*)"V.GetStencil() -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\nSpecify the stencil to use.  The stencil can be created from a\nvtkImplicitFunction or a vtkPolyData.\n"},
  {(char*)"SetReverseStencil", PyvtkImageStencil_SetReverseStencil, 1,
   (char*)"V.SetReverseStencil(int)\nC++: void SetReverseStencil(int a)\n\nReverse the stencil.\n"},
  {(char*)"ReverseStencilOn", PyvtkImageStencil_ReverseStencilOn, 1,
   (char*)"V.ReverseStencilOn()\nC++: void ReverseStencilOn()\n\nReverse the stencil.\n"},
  {(char*)"ReverseStencilOff", PyvtkImageStencil_ReverseStencilOff, 1,
   (char*)"V.ReverseStencilOff()\nC++: void ReverseStencilOff()\n\nReverse the stencil.\n"},
  {(char*)"GetReverseStencil", PyvtkImageStencil_GetReverseStencil, 1,
   (char*)"V.GetReverseStencil() -> int\nC++: int GetReverseStencil()\n\nReverse the stencil.\n"},
  {(char*)"SetBackgroundInput", PyvtkImageStencil_SetBackgroundInput, 1,
   (char*)"V.SetBackgroundInput(vtkImageData)\nC++: virtual void SetBackgroundInput(vtkImageData *input)\n\nSet the second input.  This image will be used for the 'outside'\nof the stencil.  If not set, the output voxels will be filled\nwith BackgroundValue instead.\n"},
  {(char*)"GetBackgroundInput", PyvtkImageStencil_GetBackgroundInput, 1,
   (char*)"V.GetBackgroundInput() -> vtkImageData\nC++: vtkImageData *GetBackgroundInput()\n\nSet the second input.  This image will be used for the 'outside'\nof the stencil.  If not set, the output voxels will be filled\nwith BackgroundValue instead.\n"},
  {(char*)"SetBackgroundValue", PyvtkImageStencil_SetBackgroundValue, 1,
   (char*)"V.SetBackgroundValue(float)\nC++: void SetBackgroundValue(double val)\n\nSet the default output value to use when the second input is not\nset.\n"},
  {(char*)"GetBackgroundValue", PyvtkImageStencil_GetBackgroundValue, 1,
   (char*)"V.GetBackgroundValue() -> float\nC++: double GetBackgroundValue()\n\nSet the default output value to use when the second input is not\nset.\n"},
  {(char*)"SetBackgroundColor", PyvtkImageStencil_SetBackgroundColor, 1,
   (char*)"V.SetBackgroundColor(float, float, float, float)\nC++: void SetBackgroundColor(double, double, double, double)\nV.SetBackgroundColor((float, float, float, float))\nC++: void SetBackgroundColor(double a[4])\n\n"},
  {(char*)"GetBackgroundColor", PyvtkImageStencil_GetBackgroundColor, 1,
   (char*)"V.GetBackgroundColor() -> (float, float, float, float)\nC++: double *GetBackgroundColor()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageStencil_StaticNew()
{
  return vtkImageStencil::New();
}

PyObject *PyVTKClass_vtkImageStencilNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageStencil_StaticNew,
    PyvtkImageStencil_Methods,
    "vtkImageStencil", modulename,
    NULL, NULL,
    PyvtkImageStencil_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageStencil_Doc()
{
  static const char *docstring[] = {
    "vtkImageStencil - combine images via a cookie-cutter operation\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageStencil will combine two images together using a stencil. The\nstencil should be provided in the form of a vtkImageStencilData,\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageStencil(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageStencilNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageStencil", o) != 0)
    {
    Py_DECREF(o);
    }

}

