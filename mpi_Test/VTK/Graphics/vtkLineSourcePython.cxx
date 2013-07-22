// python wrapper for vtkLineSource
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
#include "vtkLineSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLineSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLineSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLineSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLineSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkLineSource_Doc();


static PyObject *
PyvtkLineSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      tempr = op->vtkLineSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      tempr = op->vtkLineSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

  vtkLineSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLineSource::NewInstance();
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
PyvtkLineSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLineSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLineSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineSource_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      op->vtkLineSource::SetPoint1(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineSource_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      op->vtkLineSource::SetPoint1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineSource_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLineSource_SetPoint1_s1(self, args);
    case 1:
      return PyvtkLineSource_SetPoint1_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return NULL;
}



static PyObject *
PyvtkLineSource_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      tempr = op->vtkLineSource::GetPoint1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLineSource_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      op->vtkLineSource::SetPoint2(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineSource_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      op->vtkLineSource::SetPoint2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLineSource_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkLineSource_SetPoint2_s1(self, args);
    case 1:
      return PyvtkLineSource_SetPoint2_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return NULL;
}



static PyObject *
PyvtkLineSource_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      tempr = op->vtkLineSource::GetPoint2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLineSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      op->vtkLineSource::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLineSource_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      tempr = op->vtkLineSource::GetResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineSource_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      tempr = op->vtkLineSource::GetResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLineSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLineSource *op = static_cast<vtkLineSource *>(vp);

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
      tempr = op->vtkLineSource::GetResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLineSource_Methods[] = {
  {(char*)"GetClassName", PyvtkLineSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLineSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLineSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLineSource\nC++: vtkLineSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLineSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLineSource\nC++: vtkLineSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPoint1", PyvtkLineSource_SetPoint1, 1,
   (char*)"V.SetPoint1(float, float, float)\nC++: void SetPoint1(double, double, double)\nV.SetPoint1((float, float, float))\nC++: void SetPoint1(double a[3])\n\n"},
  {(char*)"GetPoint1", PyvtkLineSource_GetPoint1, 1,
   (char*)"V.GetPoint1() -> (float, float, float)\nC++: double *GetPoint1()\n\nSet position of first end point.\n"},
  {(char*)"SetPoint2", PyvtkLineSource_SetPoint2, 1,
   (char*)"V.SetPoint2(float, float, float)\nC++: void SetPoint2(double, double, double)\nV.SetPoint2((float, float, float))\nC++: void SetPoint2(double a[3])\n\n"},
  {(char*)"GetPoint2", PyvtkLineSource_GetPoint2, 1,
   (char*)"V.GetPoint2() -> (float, float, float)\nC++: double *GetPoint2()\n\nSet position of other end point.\n"},
  {(char*)"SetResolution", PyvtkLineSource_SetResolution, 1,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int)\n\nDivide line into resolution number of pieces.\n"},
  {(char*)"GetResolutionMinValue", PyvtkLineSource_GetResolutionMinValue, 1,
   (char*)"V.GetResolutionMinValue() -> int\nC++: int GetResolutionMinValue()\n\nDivide line into resolution number of pieces.\n"},
  {(char*)"GetResolutionMaxValue", PyvtkLineSource_GetResolutionMaxValue, 1,
   (char*)"V.GetResolutionMaxValue() -> int\nC++: int GetResolutionMaxValue()\n\nDivide line into resolution number of pieces.\n"},
  {(char*)"GetResolution", PyvtkLineSource_GetResolution, 1,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nDivide line into resolution number of pieces.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLineSource_StaticNew()
{
  return vtkLineSource::New();
}

PyObject *PyVTKClass_vtkLineSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLineSource_StaticNew,
    PyvtkLineSource_Methods,
    "vtkLineSource", modulename,
    NULL, NULL,
    PyvtkLineSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkLineSource_Doc()
{
  static const char *docstring[] = {
    "vtkLineSource - create a line defined by two end points\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkLineSource is a source object that creates a polyline defined by\ntwo endpoints. The number of segments composing the polyline is\ncontrolled by setting the object resolution.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLineSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLineSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLineSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

