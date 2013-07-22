// python wrapper for vtkImageButterworthLowPass
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
#include "vtkImageButterworthLowPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageButterworthLowPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageButterworthLowPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageButterworthLowPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageButterworthLowPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageButterworthLowPass_Doc();


static PyObject *
PyvtkImageButterworthLowPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

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
      tempr = op->vtkImageButterworthLowPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

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
      tempr = op->vtkImageButterworthLowPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  vtkImageButterworthLowPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageButterworthLowPass::NewInstance();
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
PyvtkImageButterworthLowPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageButterworthLowPass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageButterworthLowPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetCutOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

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
      op->SetCutOff(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageButterworthLowPass::SetCutOff(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageButterworthLowPass_SetCutOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCutOff(temp0);
      }
    else
      {
      op->vtkImageButterworthLowPass::SetCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageButterworthLowPass_SetCutOff_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCutOff(temp0);
      }
    else
      {
      op->vtkImageButterworthLowPass::SetCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageButterworthLowPass_SetCutOff_Methods[] = {
  {NULL, PyvtkImageButterworthLowPass_SetCutOff_s2, 1,
   (char*)"@O *d"},
  {NULL, PyvtkImageButterworthLowPass_SetCutOff_s3, 1,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImageButterworthLowPass_SetCutOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageButterworthLowPass_SetCutOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageButterworthLowPass_SetCutOff_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOff");
  return NULL;
}



static PyObject *
PyvtkImageButterworthLowPass_SetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXCutOff(temp0);
      }
    else
      {
      op->vtkImageButterworthLowPass::SetXCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYCutOff(temp0);
      }
    else
      {
      op->vtkImageButterworthLowPass::SetYCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZCutOff(temp0);
      }
    else
      {
      op->vtkImageButterworthLowPass::SetZCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCutOff();
      }
    else
      {
      tempr = op->vtkImageButterworthLowPass::GetCutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXCutOff();
      }
    else
      {
      tempr = op->vtkImageButterworthLowPass::GetXCutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYCutOff();
      }
    else
      {
      tempr = op->vtkImageButterworthLowPass::GetYCutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZCutOff();
      }
    else
      {
      tempr = op->vtkImageButterworthLowPass::GetZCutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_SetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrder(temp0);
      }
    else
      {
      op->vtkImageButterworthLowPass::SetOrder(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageButterworthLowPass_GetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthLowPass *op = static_cast<vtkImageButterworthLowPass *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrder();
      }
    else
      {
      tempr = op->vtkImageButterworthLowPass::GetOrder();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageButterworthLowPass_Methods[] = {
  {(char*)"GetClassName", PyvtkImageButterworthLowPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageButterworthLowPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageButterworthLowPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageButterworthLowPass\nC++: vtkImageButterworthLowPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageButterworthLowPass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageButterworthLowPass\nC++: vtkImageButterworthLowPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCutOff", PyvtkImageButterworthLowPass_SetCutOff, 1,
   (char*)"V.SetCutOff(float, float, float)\nC++: void SetCutOff(double, double, double)\nV.SetCutOff((float, float, float))\nC++: void SetCutOff(double a[3])\nV.SetCutOff(float)\nC++: void SetCutOff(double v)\n\n"},
  {(char*)"SetXCutOff", PyvtkImageButterworthLowPass_SetXCutOff, 1,
   (char*)"V.SetXCutOff(float)\nC++: void SetXCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetYCutOff", PyvtkImageButterworthLowPass_SetYCutOff, 1,
   (char*)"V.SetYCutOff(float)\nC++: void SetYCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetZCutOff", PyvtkImageButterworthLowPass_SetZCutOff, 1,
   (char*)"V.SetZCutOff(float)\nC++: void SetZCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetCutOff", PyvtkImageButterworthLowPass_GetCutOff, 1,
   (char*)"V.GetCutOff() -> (float, float, float)\nC++: double *GetCutOff()\n\n"},
  {(char*)"GetXCutOff", PyvtkImageButterworthLowPass_GetXCutOff, 1,
   (char*)"V.GetXCutOff() -> float\nC++: double GetXCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetYCutOff", PyvtkImageButterworthLowPass_GetYCutOff, 1,
   (char*)"V.GetYCutOff() -> float\nC++: double GetYCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetZCutOff", PyvtkImageButterworthLowPass_GetZCutOff, 1,
   (char*)"V.GetZCutOff() -> float\nC++: double GetZCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetOrder", PyvtkImageButterworthLowPass_SetOrder, 1,
   (char*)"V.SetOrder(int)\nC++: void SetOrder(int a)\n\nThe order determines sharpness of the cutoff curve.\n"},
  {(char*)"GetOrder", PyvtkImageButterworthLowPass_GetOrder, 1,
   (char*)"V.GetOrder() -> int\nC++: int GetOrder()\n\nThe order determines sharpness of the cutoff curve.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageButterworthLowPass_StaticNew()
{
  return vtkImageButterworthLowPass::New();
}

PyObject *PyVTKClass_vtkImageButterworthLowPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageButterworthLowPass_StaticNew,
    PyvtkImageButterworthLowPass_Methods,
    "vtkImageButterworthLowPass", modulename,
    NULL, NULL,
    PyvtkImageButterworthLowPass_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageButterworthLowPass_Doc()
{
  static const char *docstring[] = {
    "vtkImageButterworthLowPass - Frequency domain Low pass.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "This filter only works on an image after it has been converted to\nfrequency domain by a vtkImageFFT filter.  A vtkImageRFFT filter can\nbe used to convert the output back into the spatial domain.\nvtkImageButterworthLowPass  the high frequency components are\nattenuated.  Input and output are in doubles, with two components\n(complex numbers). out(i, j) = (1 + pow(CutOff/Freq(i,j), 2*Order));\n\nSee Als",
    "o:\n\nvtkImageButterworthHighPass vtkImageFFT vtkImageRFFT\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageButterworthLowPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageButterworthLowPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageButterworthLowPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

