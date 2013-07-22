// python wrapper for vtkExtractDataOverTime
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
#include "vtkExtractDataOverTime.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractDataOverTime(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractDataOverTime(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractDataOverTimeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractDataOverTimeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointSetAlgorithmNew
#endif

static const char **PyvtkExtractDataOverTime_Doc();


static PyObject *
PyvtkExtractDataOverTime_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

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
      tempr = op->vtkExtractDataOverTime::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

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
      tempr = op->vtkExtractDataOverTime::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  vtkExtractDataOverTime *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractDataOverTime::NewInstance();
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
PyvtkExtractDataOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractDataOverTime *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractDataOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_SetPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPointIndex(temp0);
      }
    else
      {
      op->vtkExtractDataOverTime::SetPointIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_GetPointIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointIndex();
      }
    else
      {
      tempr = op->vtkExtractDataOverTime::GetPointIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataOverTime_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataOverTime *op = static_cast<vtkExtractDataOverTime *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTimeSteps();
      }
    else
      {
      tempr = op->vtkExtractDataOverTime::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractDataOverTime_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractDataOverTime_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractDataOverTime_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractDataOverTime_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractDataOverTime\nC++: vtkExtractDataOverTime *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractDataOverTime_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractDataOverTime\nC++: vtkExtractDataOverTime *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetPointIndex", PyvtkExtractDataOverTime_SetPointIndex, 1,
   (char*)"V.SetPointIndex(int)\nC++: void SetPointIndex(int a)\n\nIndex of point to extract at each time step\n"},
  {(char*)"GetPointIndex", PyvtkExtractDataOverTime_GetPointIndex, 1,
   (char*)"V.GetPointIndex() -> int\nC++: int GetPointIndex()\n\nIndex of point to extract at each time step\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkExtractDataOverTime_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nGet the number of time steps\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractDataOverTime_StaticNew()
{
  return vtkExtractDataOverTime::New();
}

PyObject *PyVTKClass_vtkExtractDataOverTimeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractDataOverTime_StaticNew,
    PyvtkExtractDataOverTime_Methods,
    "vtkExtractDataOverTime", modulename,
    NULL, NULL,
    PyvtkExtractDataOverTime_Doc(),
    PyVTKClass_vtkPointSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractDataOverTime_Doc()
{
  static const char *docstring[] = {
    "vtkExtractDataOverTime - extract point data from a time sequence for\n\n",
    "Superclass: vtkPointSetAlgorithm\n\n",
    "This filter extracts the point data from a time sequence and\nspecified index and creates an output of the same type as the input\nbut with Points containing \"number of time steps\" points; the point\nand PointData corresponding to the PointIndex are extracted at each\ntime step and added to the output.  A PointData array is added called\n\"Time\" (or \"TimeData\" if there is already an array called \"Time\")",
    ",\nwhich is the time at each index.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractDataOverTime(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractDataOverTimeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractDataOverTime", o) != 0)
    {
    Py_DECREF(o);
    }

}

