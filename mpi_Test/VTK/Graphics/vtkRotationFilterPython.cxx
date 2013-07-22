// python wrapper for vtkRotationFilter
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
#include "vtkRotationFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRotationFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRotationFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRotationFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRotationFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkRotationFilter_Doc();


static PyObject *
PyvtkRotationFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

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
      tempr = op->vtkRotationFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

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
      tempr = op->vtkRotationFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  vtkRotationFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRotationFilter::NewInstance();
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
PyvtkRotationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRotationFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRotationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAxis(temp0);
      }
    else
      {
      op->vtkRotationFilter::SetAxis(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisMinValue();
      }
    else
      {
      tempr = op->vtkRotationFilter::GetAxisMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxisMaxValue();
      }
    else
      {
      tempr = op->vtkRotationFilter::GetAxisMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAxis();
      }
    else
      {
      tempr = op->vtkRotationFilter::GetAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisToX();
      }
    else
      {
      op->vtkRotationFilter::SetAxisToX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisToY();
      }
    else
      {
      op->vtkRotationFilter::SetAxisToY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetAxisToZ();
      }
    else
      {
      op->vtkRotationFilter::SetAxisToZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngle(temp0);
      }
    else
      {
      op->vtkRotationFilter::SetAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngle();
      }
    else
      {
      tempr = op->vtkRotationFilter::GetAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkRotationFilter::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRotationFilter_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkRotationFilter::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkRotationFilter_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkRotationFilter_SetCenter_s1(self, args);
    case 1:
      return PyvtkRotationFilter_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkRotationFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkRotationFilter::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetNumberOfCopies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCopies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfCopies(temp0);
      }
    else
      {
      op->vtkRotationFilter::SetNumberOfCopies(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetNumberOfCopies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCopies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCopies();
      }
    else
      {
      tempr = op->vtkRotationFilter::GetNumberOfCopies();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

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
      op->vtkRotationFilter::SetCopyInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

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
      tempr = op->vtkRotationFilter::GetCopyInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_CopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyInputOn();
      }
    else
      {
      op->vtkRotationFilter::CopyInputOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationFilter_CopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CopyInputOff();
      }
    else
      {
      op->vtkRotationFilter::CopyInputOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRotationFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkRotationFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRotationFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRotationFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRotationFilter\nC++: vtkRotationFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRotationFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRotationFilter\nC++: vtkRotationFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetAxis", PyvtkRotationFilter_SetAxis, 1,
   (char*)"V.SetAxis(int)\nC++: void SetAxis(int)\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"GetAxisMinValue", PyvtkRotationFilter_GetAxisMinValue, 1,
   (char*)"V.GetAxisMinValue() -> int\nC++: int GetAxisMinValue()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"GetAxisMaxValue", PyvtkRotationFilter_GetAxisMaxValue, 1,
   (char*)"V.GetAxisMaxValue() -> int\nC++: int GetAxisMaxValue()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"GetAxis", PyvtkRotationFilter_GetAxis, 1,
   (char*)"V.GetAxis() -> int\nC++: int GetAxis()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAxisToX", PyvtkRotationFilter_SetAxisToX, 1,
   (char*)"V.SetAxisToX()\nC++: void SetAxisToX()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAxisToY", PyvtkRotationFilter_SetAxisToY, 1,
   (char*)"V.SetAxisToY()\nC++: void SetAxisToY()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAxisToZ", PyvtkRotationFilter_SetAxisToZ, 1,
   (char*)"V.SetAxisToZ()\nC++: void SetAxisToZ()\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {(char*)"SetAngle", PyvtkRotationFilter_SetAngle, 1,
   (char*)"V.SetAngle(float)\nC++: void SetAngle(double a)\n\nSet the rotation angle to use.\n"},
  {(char*)"GetAngle", PyvtkRotationFilter_GetAngle, 1,
   (char*)"V.GetAngle() -> float\nC++: double GetAngle()\n\nSet the rotation angle to use.\n"},
  {(char*)"SetCenter", PyvtkRotationFilter_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkRotationFilter_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\n"},
  {(char*)"SetNumberOfCopies", PyvtkRotationFilter_SetNumberOfCopies, 1,
   (char*)"V.SetNumberOfCopies(int)\nC++: void SetNumberOfCopies(int a)\n\nSet the number of copies to create. The source will be rotated N\ntimes and a new polydata copy of the original created at each\nangular position All copies will be appended to form a single\noutput\n"},
  {(char*)"GetNumberOfCopies", PyvtkRotationFilter_GetNumberOfCopies, 1,
   (char*)"V.GetNumberOfCopies() -> int\nC++: int GetNumberOfCopies()\n\nSet the number of copies to create. The source will be rotated N\ntimes and a new polydata copy of the original created at each\nangular position All copies will be appended to form a single\noutput\n"},
  {(char*)"SetCopyInput", PyvtkRotationFilter_SetCopyInput, 1,
   (char*)"V.SetCopyInput(int)\nC++: void SetCopyInput(int a)\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {(char*)"GetCopyInput", PyvtkRotationFilter_GetCopyInput, 1,
   (char*)"V.GetCopyInput() -> int\nC++: int GetCopyInput()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {(char*)"CopyInputOn", PyvtkRotationFilter_CopyInputOn, 1,
   (char*)"V.CopyInputOn()\nC++: void CopyInputOn()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {(char*)"CopyInputOff", PyvtkRotationFilter_CopyInputOff, 1,
   (char*)"V.CopyInputOff()\nC++: void CopyInputOff()\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRotationFilter_StaticNew()
{
  return vtkRotationFilter::New();
}

PyObject *PyVTKClass_vtkRotationFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRotationFilter_StaticNew,
    PyvtkRotationFilter_Methods,
    "vtkRotationFilter", modulename,
    NULL, NULL,
    PyvtkRotationFilter_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"USE_X", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"USE_Y", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"USE_Z", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkRotationFilter_Doc()
{
  static const char *docstring[] = {
    "vtkRotationFilter - Duplicates a data set by rotation about an axis\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "The vtkRotationFilter duplicates a data set by rotation about one of\nthe 3 axis of the dataset's reference. Since it converts data sets\ninto unstructured grids, it is not efficient for structured data\nsets.\n\nThanks:\n\nTheophane Foggia of The Swiss National Supercomputing Centre (CSCS)\nfor creating and contributing this filter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRotationFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRotationFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRotationFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

