// python wrapper for vtkImageIdealHighPass
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
#include "vtkImageIdealHighPass.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageIdealHighPass(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageIdealHighPass(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageIdealHighPassNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageIdealHighPassNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageIdealHighPass_Doc();


static PyObject *
PyvtkImageIdealHighPass_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      tempr = op->vtkImageIdealHighPass::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      tempr = op->vtkImageIdealHighPass::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  vtkImageIdealHighPass *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageIdealHighPass::NewInstance();
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
PyvtkImageIdealHighPass_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageIdealHighPass *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageIdealHighPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_SetCutOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      op->vtkImageIdealHighPass::SetCutOff(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageIdealHighPass_SetCutOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      op->vtkImageIdealHighPass::SetCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageIdealHighPass_SetCutOff_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      op->vtkImageIdealHighPass::SetCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageIdealHighPass_SetCutOff_Methods[] = {
  {NULL, PyvtkImageIdealHighPass_SetCutOff_s2, 1,
   (char*)"@O *d"},
  {NULL, PyvtkImageIdealHighPass_SetCutOff_s3, 1,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkImageIdealHighPass_SetCutOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageIdealHighPass_SetCutOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageIdealHighPass_SetCutOff_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOff");
  return NULL;
}



static PyObject *
PyvtkImageIdealHighPass_SetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      op->vtkImageIdealHighPass::SetXCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_SetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      op->vtkImageIdealHighPass::SetYCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_SetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      op->vtkImageIdealHighPass::SetZCutOff(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_GetCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      tempr = op->vtkImageIdealHighPass::GetCutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_GetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      tempr = op->vtkImageIdealHighPass::GetXCutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_GetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      tempr = op->vtkImageIdealHighPass::GetYCutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_GetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      tempr = op->vtkImageIdealHighPass::GetZCutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageIdealHighPass_Methods[] = {
  {(char*)"GetClassName", PyvtkImageIdealHighPass_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageIdealHighPass_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageIdealHighPass_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageIdealHighPass\nC++: vtkImageIdealHighPass *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageIdealHighPass_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageIdealHighPass\nC++: vtkImageIdealHighPass *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCutOff", PyvtkImageIdealHighPass_SetCutOff, 1,
   (char*)"V.SetCutOff(float, float, float)\nC++: void SetCutOff(double, double, double)\nV.SetCutOff((float, float, float))\nC++: void SetCutOff(double a[3])\nV.SetCutOff(float)\nC++: void SetCutOff(double v)\n\n"},
  {(char*)"SetXCutOff", PyvtkImageIdealHighPass_SetXCutOff, 1,
   (char*)"V.SetXCutOff(float)\nC++: void SetXCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetYCutOff", PyvtkImageIdealHighPass_SetYCutOff, 1,
   (char*)"V.SetYCutOff(float)\nC++: void SetYCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"SetZCutOff", PyvtkImageIdealHighPass_SetZCutOff, 1,
   (char*)"V.SetZCutOff(float)\nC++: void SetZCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetCutOff", PyvtkImageIdealHighPass_GetCutOff, 1,
   (char*)"V.GetCutOff() -> (float, float, float)\nC++: double *GetCutOff()\n\n"},
  {(char*)"GetXCutOff", PyvtkImageIdealHighPass_GetXCutOff, 1,
   (char*)"V.GetXCutOff() -> float\nC++: double GetXCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetYCutOff", PyvtkImageIdealHighPass_GetYCutOff, 1,
   (char*)"V.GetYCutOff() -> float\nC++: double GetYCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {(char*)"GetZCutOff", PyvtkImageIdealHighPass_GetZCutOff, 1,
   (char*)"V.GetZCutOff() -> float\nC++: double GetZCutOff()\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageIdealHighPass_StaticNew()
{
  return vtkImageIdealHighPass::New();
}

PyObject *PyVTKClass_vtkImageIdealHighPassNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageIdealHighPass_StaticNew,
    PyvtkImageIdealHighPass_Methods,
    "vtkImageIdealHighPass", modulename,
    NULL, NULL,
    PyvtkImageIdealHighPass_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageIdealHighPass_Doc()
{
  static const char *docstring[] = {
    "vtkImageIdealHighPass - Simple frequency domain band pass.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "This filter only works on an image after it has been converted to\nfrequency domain by a vtkImageFFT filter.  A vtkImageRFFT filter can\nbe used to convert the output back into the spatial domain.\nvtkImageIdealHighPass just sets a portion of the image to zero.  The\nsharp cutoff in the frequence domain produces ringing in the spatial\ndomain. Input and Output must be doubles.  Dimensionality is set wh",
    "en\nthe axes are set.  Defaults to 2D on X and Y axes.\n\nSee Also:\n\nvtkImageButterworthHighPass vtkImageIdealLowPass vtkImageFFT\nvtkImageRFFT\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageIdealHighPass(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageIdealHighPassNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageIdealHighPass", o) != 0)
    {
    Py_DECREF(o);
    }

}

