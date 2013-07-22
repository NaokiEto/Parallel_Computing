// python wrapper for vtkStreamingStatistics
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
#include "vtkStreamingStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStreamingStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStreamingStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStreamingStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStreamingStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkStreamingStatistics_Doc();


static PyObject *
PyvtkStreamingStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

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
      tempr = op->vtkStreamingStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

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
      tempr = op->vtkStreamingStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

  vtkStreamingStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStreamingStatistics::NewInstance();
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
PyvtkStreamingStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkStreamingStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkStreamingStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStreamingStatistics_SetStatisticsAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStatisticsAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamingStatistics *op = static_cast<vtkStreamingStatistics *>(vp);

  vtkStatisticsAlgorithm *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStatisticsAlgorithm"))
    {
    if (ap.IsBound())
      {
      op->SetStatisticsAlgorithm(temp0);
      }
    else
      {
      op->vtkStreamingStatistics::SetStatisticsAlgorithm(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkStreamingStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkStreamingStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStreamingStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStreamingStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStreamingStatistics\nC++: vtkStreamingStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkStreamingStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkStreamingStatistics\nC++: vtkStreamingStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetStatisticsAlgorithm", PyvtkStreamingStatistics_SetStatisticsAlgorithm, 1,
   (char*)"V.SetStatisticsAlgorithm(vtkStatisticsAlgorithm)\nC++: virtual void SetStatisticsAlgorithm(vtkStatisticsAlgorithm *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkStreamingStatistics_StaticNew()
{
  return vtkStreamingStatistics::New();
}

PyObject *PyVTKClass_vtkStreamingStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkStreamingStatistics_StaticNew,
    PyvtkStreamingStatistics_Methods,
    "vtkStreamingStatistics", modulename,
    NULL, NULL,
    PyvtkStreamingStatistics_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"INPUT_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"LEARN_PARAMETERS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"INPUT_MODEL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"OUTPUT_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"OUTPUT_MODEL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ASSESSMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"OUTPUT_TEST", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkStreamingStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkStreamingStatistics - A class for using the statistics filters\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "A class for using the statistics filters in a streaming mode or\nperhaps an \"online, incremental, push\" mode.\n\nThanks:\n\nThanks to the Universe for unfolding in a way that allowed this class\nto be implemented, also Godzilla for not crushing my computer.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStreamingStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStreamingStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStreamingStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

