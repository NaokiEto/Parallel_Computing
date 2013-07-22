// python wrapper for vtkReflectionFilter
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
#include "vtkReflectionFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkReflectionFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkReflectionFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkReflectionFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkReflectionFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectAlgorithmNew
#endif

static const char **PyvtkReflectionFilter_Doc();


static PyObject *
PyvtkReflectionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

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
      tempr = op->vtkReflectionFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

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
      tempr = op->vtkReflectionFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  vtkReflectionFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkReflectionFilter::NewInstance();
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
PyvtkReflectionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkReflectionFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkReflectionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPlane(temp0);
      }
    else
      {
      op->vtkReflectionFilter::SetPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlaneMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlaneMinValue();
      }
    else
      {
      tempr = op->vtkReflectionFilter::GetPlaneMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlaneMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlaneMaxValue();
      }
    else
      {
      tempr = op->vtkReflectionFilter::GetPlaneMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlane();
      }
    else
      {
      tempr = op->vtkReflectionFilter::GetPlane();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToX();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToY();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToZ();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToXMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToXMin();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToXMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToYMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToYMin();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToYMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToZMin();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToZMin();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToXMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToXMax();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToXMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToYMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToYMax();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToYMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetPlaneToZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetPlaneToZMax();
      }
    else
      {
      op->vtkReflectionFilter::SetPlaneToZMax();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkReflectionFilter::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkReflectionFilter::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_SetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCopyInput(temp0);
      }
    else
      {
      op->vtkReflectionFilter::SetCopyInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_GetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCopyInput();
      }
    else
      {
      tempr = op->vtkReflectionFilter::GetCopyInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_CopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyInputOn();
      }
    else
      {
      op->vtkReflectionFilter::CopyInputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkReflectionFilter_CopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReflectionFilter *op = static_cast<vtkReflectionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyInputOff();
      }
    else
      {
      op->vtkReflectionFilter::CopyInputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkReflectionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkReflectionFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkReflectionFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkReflectionFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkReflectionFilter\nC++: vtkReflectionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkReflectionFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkReflectionFilter\nC++: vtkReflectionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPlane", PyvtkReflectionFilter_SetPlane, 1,
   (char*)"V.SetPlane(int)\nC++: void SetPlane(int)\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"GetPlaneMinValue", PyvtkReflectionFilter_GetPlaneMinValue, 1,
   (char*)"V.GetPlaneMinValue() -> int\nC++: int GetPlaneMinValue()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"GetPlaneMaxValue", PyvtkReflectionFilter_GetPlaneMaxValue, 1,
   (char*)"V.GetPlaneMaxValue() -> int\nC++: int GetPlaneMaxValue()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"GetPlane", PyvtkReflectionFilter_GetPlane, 1,
   (char*)"V.GetPlane() -> int\nC++: int GetPlane()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToX", PyvtkReflectionFilter_SetPlaneToX, 1,
   (char*)"V.SetPlaneToX()\nC++: void SetPlaneToX()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToY", PyvtkReflectionFilter_SetPlaneToY, 1,
   (char*)"V.SetPlaneToY()\nC++: void SetPlaneToY()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToZ", PyvtkReflectionFilter_SetPlaneToZ, 1,
   (char*)"V.SetPlaneToZ()\nC++: void SetPlaneToZ()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToXMin", PyvtkReflectionFilter_SetPlaneToXMin, 1,
   (char*)"V.SetPlaneToXMin()\nC++: void SetPlaneToXMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToYMin", PyvtkReflectionFilter_SetPlaneToYMin, 1,
   (char*)"V.SetPlaneToYMin()\nC++: void SetPlaneToYMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToZMin", PyvtkReflectionFilter_SetPlaneToZMin, 1,
   (char*)"V.SetPlaneToZMin()\nC++: void SetPlaneToZMin()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToXMax", PyvtkReflectionFilter_SetPlaneToXMax, 1,
   (char*)"V.SetPlaneToXMax()\nC++: void SetPlaneToXMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToYMax", PyvtkReflectionFilter_SetPlaneToYMax, 1,
   (char*)"V.SetPlaneToYMax()\nC++: void SetPlaneToYMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetPlaneToZMax", PyvtkReflectionFilter_SetPlaneToZMax, 1,
   (char*)"V.SetPlaneToZMax()\nC++: void SetPlaneToZMax()\n\nSet the normal of the plane to use as mirror.\n"},
  {(char*)"SetCenter", PyvtkReflectionFilter_SetCenter, 1,
   (char*)"V.SetCenter(float)\nC++: void SetCenter(double a)\n\nIf the reflection plane is set to X, Y or Z, this variable is use\nto set the position of the plane.\n"},
  {(char*)"GetCenter", PyvtkReflectionFilter_GetCenter, 1,
   (char*)"V.GetCenter() -> float\nC++: double GetCenter()\n\nIf the reflection plane is set to X, Y or Z, this variable is use\nto set the position of the plane.\n"},
  {(char*)"SetCopyInput", PyvtkReflectionFilter_SetCopyInput, 1,
   (char*)"V.SetCopyInput(int)\nC++: void SetCopyInput(int a)\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {(char*)"GetCopyInput", PyvtkReflectionFilter_GetCopyInput, 1,
   (char*)"V.GetCopyInput() -> int\nC++: int GetCopyInput()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {(char*)"CopyInputOn", PyvtkReflectionFilter_CopyInputOn, 1,
   (char*)"V.CopyInputOn()\nC++: void CopyInputOn()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {(char*)"CopyInputOff", PyvtkReflectionFilter_CopyInputOff, 1,
   (char*)"V.CopyInputOff()\nC++: void CopyInputOff()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the reflection.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkReflectionFilter_StaticNew()
{
  return vtkReflectionFilter::New();
}

PyObject *PyVTKClass_vtkReflectionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkReflectionFilter_StaticNew,
    PyvtkReflectionFilter_Methods,
    "vtkReflectionFilter", modulename,
    NULL, NULL,
    PyvtkReflectionFilter_Doc(),
    PyVTKClass_vtkDataObjectAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"USE_X_MIN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"USE_Y_MIN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"USE_Z_MIN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"USE_X_MAX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"USE_Y_MAX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"USE_Z_MAX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"USE_X", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"USE_Y", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"USE_Z", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkReflectionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkReflectionFilter - reflects a data set across a plane\n\n",
    "Superclass: vtkDataObjectAlgorithm\n\n",
    "The vtkReflectionFilter reflects a data set across one of the planes\nformed by the data set's bounding box. Since it converts data sets\ninto unstructured grids, it is not effeicient for structured data\nsets.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkReflectionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkReflectionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkReflectionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

