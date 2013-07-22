// python wrapper for vtkStreamPoints
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
#include "vtkStreamPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStreamPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStreamPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStreamPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStreamPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStreamerNew
extern "C" { PyObject *PyVTKClass_vtkStreamerNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamerNew
#endif

static const char **PyvtkStreamPoints_Doc();


static PyObject *
PyvtkStreamPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

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
      tempr = op->vtkStreamPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

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
      tempr = op->vtkStreamPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  vtkStreamPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStreamPoints::NewInstance();
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
PyvtkStreamPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStreamPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStreamPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_SetTimeIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeIncrement(temp0);
      }
    else
      {
      op->vtkStreamPoints::SetTimeIncrement(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_GetTimeIncrementMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeIncrementMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeIncrementMinValue();
      }
    else
      {
      tempr = op->vtkStreamPoints::GetTimeIncrementMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_GetTimeIncrementMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeIncrementMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeIncrementMaxValue();
      }
    else
      {
      tempr = op->vtkStreamPoints::GetTimeIncrementMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamPoints_GetTimeIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamPoints *op = static_cast<vtkStreamPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeIncrement();
      }
    else
      {
      tempr = op->vtkStreamPoints::GetTimeIncrement();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStreamPoints\nC++: vtkStreamPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamPoints\nC++: vtkStreamPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTimeIncrement", PyvtkStreamPoints_SetTimeIncrement, 1,
   (char*)"V.SetTimeIncrement(float)\nC++: void SetTimeIncrement(double)\n\nSpecify the separation of points in terms of absolute time.\n"},
  {(char*)"GetTimeIncrementMinValue", PyvtkStreamPoints_GetTimeIncrementMinValue, 1,
   (char*)"V.GetTimeIncrementMinValue() -> float\nC++: double GetTimeIncrementMinValue()\n\nSpecify the separation of points in terms of absolute time.\n"},
  {(char*)"GetTimeIncrementMaxValue", PyvtkStreamPoints_GetTimeIncrementMaxValue, 1,
   (char*)"V.GetTimeIncrementMaxValue() -> float\nC++: double GetTimeIncrementMaxValue()\n\nSpecify the separation of points in terms of absolute time.\n"},
  {(char*)"GetTimeIncrement", PyvtkStreamPoints_GetTimeIncrement, 1,
   (char*)"V.GetTimeIncrement() -> float\nC++: double GetTimeIncrement()\n\nSpecify the separation of points in terms of absolute time.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamPoints_StaticNew()
{
  return vtkStreamPoints::New();
}

PyObject *PyVTKClass_vtkStreamPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamPoints_StaticNew,
    PyvtkStreamPoints_Methods,
    "vtkStreamPoints", modulename,
    NULL, NULL,
    PyvtkStreamPoints_Doc(),
    PyVTKClass_vtkStreamerNew(modulename));
  return cls;
}

const char **PyvtkStreamPoints_Doc()
{
  static const char *docstring[] = {
    "vtkStreamPoints - generate points along streamer separated by\nconstant time increment\n\n",
    "Superclass: vtkStreamer\n\n",
    "vtkStreamPoints is a filter that generates points along a streamer.\nThe points are separated by a constant time increment. The resulting\nvisual effect (especially when coupled with vtkGlyph3D) is an\nindication of particle speed.\n\nSee Also:\n\nvtkStreamer vtkStreamLine vtkDashedStreamLine\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

