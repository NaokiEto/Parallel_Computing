// python wrapper for vtkArcSource
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
#include "vtkArcSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArcSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArcSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArcSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArcSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkArcSource_Doc();


static PyObject *
PyvtkArcSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      tempr = op->vtkArcSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      tempr = op->vtkArcSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  vtkArcSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArcSource::NewInstance();
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
PyvtkArcSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkArcSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkArcSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArcSource::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint1(temp0);
      }
    else
      {
      op->vtkArcSource::SetPoint1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArcSource_SetPoint1_s1(self, args);
    case 1:
      return PyvtkArcSource_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkArcSource_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint1();
      }
    else
      {
      tempr = op->vtkArcSource::GetPoint1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
      }
    else
      {
      op->vtkArcSource::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPoint2(temp0);
      }
    else
      {
      op->vtkArcSource::SetPoint2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArcSource_SetPoint2_s1(self, args);
    case 1:
      return PyvtkArcSource_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkArcSource_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoint2();
      }
    else
      {
      tempr = op->vtkArcSource::GetPoint2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->vtkArcSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      op->vtkArcSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkArcSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkArcSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkArcSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkArcSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

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
      tempr = op->vtkArcSource::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkArcSource::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolutionMinValue();
      }
    else
      {
      tempr = op->vtkArcSource::GetResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkArcSource::GetResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolution();
      }
    else
      {
      tempr = op->vtkArcSource::GetResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_SetNegative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNegative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNegative(temp0);
      }
    else
      {
      op->vtkArcSource::SetNegative(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_GetNegative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNegative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNegative();
      }
    else
      {
      tempr = op->vtkArcSource::GetNegative();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_NegativeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NegativeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NegativeOn();
      }
    else
      {
      op->vtkArcSource::NegativeOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkArcSource_NegativeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NegativeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArcSource *op = static_cast<vtkArcSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NegativeOff();
      }
    else
      {
      op->vtkArcSource::NegativeOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkArcSource_Methods[] = {
  {(char*)"GetClassName", PyvtkArcSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArcSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArcSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArcSource\nC++: vtkArcSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArcSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArcSource\nC++: vtkArcSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPoint1", PyvtkArcSource_SetPoint1, 1,
   (char*)"V.SetPoint1(float, float, float)\nC++: void SetPoint1(double, double, double)\nV.SetPoint1((float, float, float))\nC++: void SetPoint1(double a[3])\n\n"},
  {(char*)"GetPoint1", PyvtkArcSource_GetPoint1, 1,
   (char*)"V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\n\nSet position of first end point.\n"},
  {(char*)"SetPoint2", PyvtkArcSource_SetPoint2, 1,
   (char*)"V.SetPoint2(float, float, float)\nC++: void SetPoint2(double, double, double)\nV.SetPoint2((float, float, float))\nC++: void SetPoint2(double a[3])\n\n"},
  {(char*)"GetPoint2", PyvtkArcSource_GetPoint2, 1,
   (char*)"V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\n\nSet position of other end point.\n"},
  {(char*)"SetCenter", PyvtkArcSource_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkArcSource_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet position of the center of the circle that define the arc.\nNote: you can use the function vtkMath::Solve3PointCircle to find\nthe center from 3 points located on a circle.\n"},
  {(char*)"SetResolution", PyvtkArcSource_SetResolution, 1,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int)\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 (default), the arc is a straight line.\n"},
  {(char*)"GetResolutionMinValue", PyvtkArcSource_GetResolutionMinValue, 1,
   (char*)"V.GetResolutionMinValue() -> int\nC++: int GetResolutionMinValue()\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 (default), the arc is a straight line.\n"},
  {(char*)"GetResolutionMaxValue", PyvtkArcSource_GetResolutionMaxValue, 1,
   (char*)"V.GetResolutionMaxValue() -> int\nC++: int GetResolutionMaxValue()\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 (default), the arc is a straight line.\n"},
  {(char*)"GetResolution", PyvtkArcSource_GetResolution, 1,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nDivide line into resolution number of pieces. Note: if Resolution\nis set to 1 (default), the arc is a straight line.\n"},
  {(char*)"SetNegative", PyvtkArcSource_SetNegative, 1,
   (char*)"V.SetNegative(bool)\nC++: void SetNegative(bool a)\n\nUse the angle that is a negative coterminal of the vectors angle:\nthe longest angle. Note: false by default.\n"},
  {(char*)"GetNegative", PyvtkArcSource_GetNegative, 1,
   (char*)"V.GetNegative() -> bool\nC++: bool GetNegative()\n\nUse the angle that is a negative coterminal of the vectors angle:\nthe longest angle. Note: false by default.\n"},
  {(char*)"NegativeOn", PyvtkArcSource_NegativeOn, 1,
   (char*)"V.NegativeOn()\nC++: void NegativeOn()\n\nUse the angle that is a negative coterminal of the vectors angle:\nthe longest angle. Note: false by default.\n"},
  {(char*)"NegativeOff", PyvtkArcSource_NegativeOff, 1,
   (char*)"V.NegativeOff()\nC++: void NegativeOff()\n\nUse the angle that is a negative coterminal of the vectors angle:\nthe longest angle. Note: false by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArcSource_StaticNew()
{
  return vtkArcSource::New();
}

PyObject *PyVTKClass_vtkArcSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArcSource_StaticNew,
    PyvtkArcSource_Methods,
    "vtkArcSource", modulename,
    NULL, NULL,
    PyvtkArcSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArcSource_Doc()
{
  static const char *docstring[] = {
    "vtkArcSource - create an arc between two end points\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkArcSource is a source object that creates an arc defined by two\nendpoints and a center. The number of segments composing the polyline\nis controlled by setting the object resolution.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArcSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArcSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArcSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

