// python wrapper for vtkImageMagnify
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
#include "vtkImageMagnify.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMagnify(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMagnify(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMagnifyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMagnifyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageMagnify_Doc();


static PyObject *
PyvtkImageMagnify_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

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
      tempr = op->vtkImageMagnify::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMagnify_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

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
      tempr = op->vtkImageMagnify::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMagnify_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  vtkImageMagnify *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMagnify::NewInstance();
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
PyvtkImageMagnify_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageMagnify *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageMagnify::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMagnify_SetMagnificationFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetMagnificationFactors(temp0, temp1, temp2);
      }
    else
      {
      op->vtkImageMagnify::SetMagnificationFactors(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMagnify_SetMagnificationFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  int temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetMagnificationFactors(temp0);
      }
    else
      {
      op->vtkImageMagnify::SetMagnificationFactors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageMagnify_SetMagnificationFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkImageMagnify_SetMagnificationFactors_s1(self, args);
    case 1:
      return PyvtkImageMagnify_SetMagnificationFactors_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMagnificationFactors");
  return NULL;
}



static PyObject *
PyvtkImageMagnify_GetMagnificationFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  int *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMagnificationFactors();
      }
    else
      {
      tempr = op->vtkImageMagnify::GetMagnificationFactors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMagnify_SetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInterpolate(temp0);
      }
    else
      {
      op->vtkImageMagnify::SetInterpolate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMagnify_GetInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInterpolate();
      }
    else
      {
      tempr = op->vtkImageMagnify::GetInterpolate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMagnify_InterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateOn();
      }
    else
      {
      op->vtkImageMagnify::InterpolateOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageMagnify_InterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnify *op = static_cast<vtkImageMagnify *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InterpolateOff();
      }
    else
      {
      op->vtkImageMagnify::InterpolateOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMagnify_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMagnify_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMagnify_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMagnify_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMagnify\nC++: vtkImageMagnify *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMagnify_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMagnify\nC++: vtkImageMagnify *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMagnificationFactors", PyvtkImageMagnify_SetMagnificationFactors, 1,
   (char*)"V.SetMagnificationFactors(int, int, int)\nC++: void SetMagnificationFactors(int, int, int)\nV.SetMagnificationFactors((int, int, int))\nC++: void SetMagnificationFactors(int a[3])\n\n"},
  {(char*)"GetMagnificationFactors", PyvtkImageMagnify_GetMagnificationFactors, 1,
   (char*)"V.GetMagnificationFactors() -> (int, int, int)\nC++: int *GetMagnificationFactors()\n\n"},
  {(char*)"SetInterpolate", PyvtkImageMagnify_SetInterpolate, 1,
   (char*)"V.SetInterpolate(int)\nC++: void SetInterpolate(int a)\n\nTurn interpolation on and off (pixel replication is used when\noff). Initially, interpolation is off.\n"},
  {(char*)"GetInterpolate", PyvtkImageMagnify_GetInterpolate, 1,
   (char*)"V.GetInterpolate() -> int\nC++: int GetInterpolate()\n\nTurn interpolation on and off (pixel replication is used when\noff). Initially, interpolation is off.\n"},
  {(char*)"InterpolateOn", PyvtkImageMagnify_InterpolateOn, 1,
   (char*)"V.InterpolateOn()\nC++: void InterpolateOn()\n\nTurn interpolation on and off (pixel replication is used when\noff). Initially, interpolation is off.\n"},
  {(char*)"InterpolateOff", PyvtkImageMagnify_InterpolateOff, 1,
   (char*)"V.InterpolateOff()\nC++: void InterpolateOff()\n\nTurn interpolation on and off (pixel replication is used when\noff). Initially, interpolation is off.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMagnify_StaticNew()
{
  return vtkImageMagnify::New();
}

PyObject *PyVTKClass_vtkImageMagnifyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMagnify_StaticNew,
    PyvtkImageMagnify_Methods,
    "vtkImageMagnify", modulename,
    NULL, NULL,
    PyvtkImageMagnify_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageMagnify_Doc()
{
  static const char *docstring[] = {
    "vtkImageMagnify - magnify an image by an integer value\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageMagnify maps each pixel of the input onto a nxmx... region of\nthe output.  Location (0,0,...) remains in the same place. The\nmagnification occurs via pixel replication, or if Interpolate is on,\nby bilinear interpolation. Initially, interpolation is off and\nmagnification factors are set to 1 in all directions.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMagnify(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMagnifyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMagnify", o) != 0)
    {
    Py_DECREF(o);
    }

}

