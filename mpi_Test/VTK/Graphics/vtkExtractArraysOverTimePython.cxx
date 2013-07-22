// python wrapper for vtkExtractArraysOverTime
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
#include "vtkExtractArraysOverTime.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractArraysOverTime(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractArraysOverTime(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractArraysOverTimeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractArraysOverTimeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkMultiBlockDataSetAlgorithmNew
#endif

static const char **PyvtkExtractArraysOverTime_Doc();


static PyObject *
PyvtkExtractArraysOverTime_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

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
      tempr = op->vtkExtractArraysOverTime::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

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
      tempr = op->vtkExtractArraysOverTime::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  vtkExtractArraysOverTime *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractArraysOverTime::NewInstance();
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
PyvtkExtractArraysOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractArraysOverTime *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractArraysOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

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
      tempr = op->vtkExtractArraysOverTime::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractArraysOverTime_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractArraysOverTime *op = static_cast<vtkExtractArraysOverTime *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionConnection(temp0);
      }
    else
      {
      op->vtkExtractArraysOverTime::SetSelectionConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractArraysOverTime_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractArraysOverTime_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractArraysOverTime_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractArraysOverTime_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractArraysOverTime\nC++: vtkExtractArraysOverTime *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractArraysOverTime_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractArraysOverTime\nC++: vtkExtractArraysOverTime *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkExtractArraysOverTime_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nGet the number of time steps\n"},
  {(char*)"SetSelectionConnection", PyvtkExtractArraysOverTime_SetSelectionConnection, 1,
   (char*)"V.SetSelectionConnection(vtkAlgorithmOutput)\nC++: void SetSelectionConnection(vtkAlgorithmOutput *algOutput)\n\nConvenience method to specify the selection connection (2nd input\nport)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractArraysOverTime_StaticNew()
{
  return vtkExtractArraysOverTime::New();
}

PyObject *PyVTKClass_vtkExtractArraysOverTimeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractArraysOverTime_StaticNew,
    PyvtkExtractArraysOverTime_Methods,
    "vtkExtractArraysOverTime", modulename,
    NULL, NULL,
    PyvtkExtractArraysOverTime_Doc(),
    PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractArraysOverTime_Doc()
{
  static const char *docstring[] = {
    "vtkExtractArraysOverTime - extracts a selection over time.\n\n",
    "Superclass: vtkMultiBlockDataSetAlgorithm\n\n",
    "vtkExtractArraysOverTime extracts a selection over time. The output\nis a multiblock dataset. If selection content type is\nvtkSelection::Locations, then each output block corresponds to each\nprobed location. Otherwise, each output block corresponds to an\nextracted cell/point depending on whether the selection field type is\nCELL or POINT. Each block is a vtkTable with a column named Time (or\nTimeDat",
    "a if Time exists in the input). When extracting point data,\nthe input point coordinates are copied to a column named Point\nCoordinates or Points (if Point Coordinates exists in the input).\nThis algorithm does not produce a TIME_STEPS or TIME_RANGE\ninformation because it works across time. .Section Caveat This\nalgorithm works only with source that produce TIME_STEPS().\nContinuous time range is not ",
    "yet supported.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractArraysOverTime(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractArraysOverTimeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractArraysOverTime", o) != 0)
    {
    Py_DECREF(o);
    }

}

