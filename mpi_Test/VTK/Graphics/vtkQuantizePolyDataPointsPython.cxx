// python wrapper for vtkQuantizePolyDataPoints
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
#include "vtkQuantizePolyDataPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkQuantizePolyDataPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkQuantizePolyDataPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkQuantizePolyDataPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkQuantizePolyDataPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCleanPolyDataNew
extern "C" { PyObject *PyVTKClass_vtkCleanPolyDataNew(const char *); }
#define DECLARED_PyVTKClass_vtkCleanPolyDataNew
#endif

static const char **PyvtkQuantizePolyDataPoints_Doc();


static PyObject *
PyvtkQuantizePolyDataPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

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
      tempr = op->vtkQuantizePolyDataPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

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
      tempr = op->vtkQuantizePolyDataPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  vtkQuantizePolyDataPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkQuantizePolyDataPoints::NewInstance();
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
PyvtkQuantizePolyDataPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkQuantizePolyDataPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkQuantizePolyDataPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_SetQFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetQFactor(temp0);
      }
    else
      {
      op->vtkQuantizePolyDataPoints::SetQFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQFactorMinValue();
      }
    else
      {
      tempr = op->vtkQuantizePolyDataPoints::GetQFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQFactorMaxValue();
      }
    else
      {
      tempr = op->vtkQuantizePolyDataPoints::GetQFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetQFactor();
      }
    else
      {
      tempr = op->vtkQuantizePolyDataPoints::GetQFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_OperateOnPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->OperateOnPoint(temp0, temp1);
      }
    else
      {
      op->vtkQuantizePolyDataPoints::OperateOnPoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_OperateOnBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->OperateOnBounds(temp0, temp1);
      }
    else
      {
      op->vtkQuantizePolyDataPoints::OperateOnBounds(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkQuantizePolyDataPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkQuantizePolyDataPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkQuantizePolyDataPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkQuantizePolyDataPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkQuantizePolyDataPoints\nC++: vtkQuantizePolyDataPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkQuantizePolyDataPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkQuantizePolyDataPoints\nC++: vtkQuantizePolyDataPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetQFactor", PyvtkQuantizePolyDataPoints_SetQFactor, 1,
   (char*)"V.SetQFactor(float)\nC++: void SetQFactor(double)\n\nSpecify quantization grain size. Default is 0.25\n"},
  {(char*)"GetQFactorMinValue", PyvtkQuantizePolyDataPoints_GetQFactorMinValue, 1,
   (char*)"V.GetQFactorMinValue() -> float\nC++: double GetQFactorMinValue()\n\nSpecify quantization grain size. Default is 0.25\n"},
  {(char*)"GetQFactorMaxValue", PyvtkQuantizePolyDataPoints_GetQFactorMaxValue, 1,
   (char*)"V.GetQFactorMaxValue() -> float\nC++: double GetQFactorMaxValue()\n\nSpecify quantization grain size. Default is 0.25\n"},
  {(char*)"GetQFactor", PyvtkQuantizePolyDataPoints_GetQFactor, 1,
   (char*)"V.GetQFactor() -> float\nC++: double GetQFactor()\n\nSpecify quantization grain size. Default is 0.25\n"},
  {(char*)"OperateOnPoint", PyvtkQuantizePolyDataPoints_OperateOnPoint, 1,
   (char*)"V.OperateOnPoint([float, float, float], [float, float, float])\nC++: virtual void OperateOnPoint(double in[3], double out[3])\n\nPerform quantization on a point\n"},
  {(char*)"OperateOnBounds", PyvtkQuantizePolyDataPoints_OperateOnBounds, 1,
   (char*)"V.OperateOnBounds([float, float, float, float, float, float],\n    [float, float, float, float, float, float])\nC++: virtual void OperateOnBounds(double in[6], double out[6])\n\nPerform quantization on bounds\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkQuantizePolyDataPoints_StaticNew()
{
  return vtkQuantizePolyDataPoints::New();
}

PyObject *PyVTKClass_vtkQuantizePolyDataPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkQuantizePolyDataPoints_StaticNew,
    PyvtkQuantizePolyDataPoints_Methods,
    "vtkQuantizePolyDataPoints", modulename,
    NULL, NULL,
    PyvtkQuantizePolyDataPoints_Doc(),
    PyVTKClass_vtkCleanPolyDataNew(modulename));
  return cls;
}

const char **PyvtkQuantizePolyDataPoints_Doc()
{
  static const char *docstring[] = {
    "vtkQuantizePolyDataPoints - quantizes x,y,z coordinates of points\n\n",
    "Superclass: vtkCleanPolyData\n\n",
    "vtkQuantizePolyDataPoints is a subclass of vtkCleanPolyData and\ninherits the functionality of vtkCleanPolyData with the addition that\nit quantizes the point coordinates before inserting into the point\nlist. The user should set QFactor to a positive value (0.25 by\ndefault) and all {x,y,z} coordinates will be quantized to that grain\nsize.\n\nA tolerance of zero is expected, though positive values may ",
    "be used,\nthe quantization will take place before the tolerance is applied.\n\nCaveats:\n\nMerging points can alter topology, including introducing non-manifold\nforms. Handling of degenerate cells is controlled by switches in\nvtkCleanPolyData.\n\nSee Also:\n\nvtkCleanPolyData\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkQuantizePolyDataPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkQuantizePolyDataPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkQuantizePolyDataPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

