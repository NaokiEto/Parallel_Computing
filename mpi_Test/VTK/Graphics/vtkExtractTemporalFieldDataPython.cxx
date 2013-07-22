// python wrapper for vtkExtractTemporalFieldData
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
#include "vtkExtractTemporalFieldData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractTemporalFieldData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractTemporalFieldData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractTemporalFieldDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractTemporalFieldDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkExtractTemporalFieldData_Doc();


static PyObject *
PyvtkExtractTemporalFieldData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

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
      tempr = op->vtkExtractTemporalFieldData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

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
      tempr = op->vtkExtractTemporalFieldData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

  vtkExtractTemporalFieldData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractTemporalFieldData::NewInstance();
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
PyvtkExtractTemporalFieldData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractTemporalFieldData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractTemporalFieldData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractTemporalFieldData_GetNumberOfTimeSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTimeSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractTemporalFieldData *op = static_cast<vtkExtractTemporalFieldData *>(vp);

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
      tempr = op->vtkExtractTemporalFieldData::GetNumberOfTimeSteps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractTemporalFieldData_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractTemporalFieldData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractTemporalFieldData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractTemporalFieldData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractTemporalFieldData\nC++: vtkExtractTemporalFieldData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractTemporalFieldData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractTemporalFieldData\nC++: vtkExtractTemporalFieldData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfTimeSteps", PyvtkExtractTemporalFieldData_GetNumberOfTimeSteps, 1,
   (char*)"V.GetNumberOfTimeSteps() -> int\nC++: int GetNumberOfTimeSteps()\n\nGet the number of time steps\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractTemporalFieldData_StaticNew()
{
  return vtkExtractTemporalFieldData::New();
}

PyObject *PyVTKClass_vtkExtractTemporalFieldDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractTemporalFieldData_StaticNew,
    PyvtkExtractTemporalFieldData_Methods,
    "vtkExtractTemporalFieldData", modulename,
    NULL, NULL,
    PyvtkExtractTemporalFieldData_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractTemporalFieldData_Doc()
{
  static const char *docstring[] = {
    "vtkExtractTemporalFieldData - Extract temporal arrays from input\nfield data\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkExtractTemporalFieldData extracts arrays from the input\nvtkFieldData. These arrays are assumed to contain temporal data,\nwhere the nth tuple contains the value for the nth timestep. The\noutput is a 1D rectilinear grid where the XCoordinates correspond to\ntime (the same array is also copied to a point array named Time or\nTimeData (if Time exists in the input). This algorithm does not\nproduce a T",
    "IME_STEPS or TIME_RANGE information because it works\nacross time. .Section Caveat vtkExtractTemporalFieldData puts a\nvtkOnePieceExtentTranslator in the output during\nRequestInformation(). As a result, the same whole extented is\nproduced independent of the piece request. This algorithm works only\nwith source that produce TIME_STEPS(). Continuous time range is not\nyet supported.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractTemporalFieldData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractTemporalFieldDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractTemporalFieldData", o) != 0)
    {
    Py_DECREF(o);
    }

}

