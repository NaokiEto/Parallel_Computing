// python wrapper for vtkPDescriptiveStatistics
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
#include "vtkPDescriptiveStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPDescriptiveStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPDescriptiveStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPDescriptiveStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPDescriptiveStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDescriptiveStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkDescriptiveStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkDescriptiveStatisticsNew
#endif

static const char **PyvtkPDescriptiveStatistics_Doc();


static PyObject *
PyvtkPDescriptiveStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

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
      tempr = op->vtkPDescriptiveStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

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
      tempr = op->vtkPDescriptiveStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  vtkPDescriptiveStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPDescriptiveStatistics::NewInstance();
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
PyvtkPDescriptiveStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPDescriptiveStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPDescriptiveStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPDescriptiveStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkPDescriptiveStatistics::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDescriptiveStatistics_Learn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Learn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDescriptiveStatistics *op = static_cast<vtkPDescriptiveStatistics *>(vp);

  vtkTable *temp0 = NULL;
  vtkTable *temp1 = NULL;
  vtkMultiBlockDataSet *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetVTKObject(temp2, "vtkMultiBlockDataSet"))
    {
    if (ap.IsBound())
      {
      op->Learn(temp0, temp1, temp2);
      }
    else
      {
      op->vtkPDescriptiveStatistics::Learn(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPDescriptiveStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPDescriptiveStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPDescriptiveStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPDescriptiveStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPDescriptiveStatistics\nC++: vtkPDescriptiveStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPDescriptiveStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPDescriptiveStatistics\nC++: vtkPDescriptiveStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPDescriptiveStatistics_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPDescriptiveStatistics_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"Learn", PyvtkPDescriptiveStatistics_Learn, 1,
   (char*)"V.Learn(vtkTable, vtkTable, vtkMultiBlockDataSet)\nC++: virtual void Learn(vtkTable *inData, vtkTable *inParameters,\n    vtkMultiBlockDataSet *outMeta)\n\nExecute the parallel calculations required by the Learn option.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPDescriptiveStatistics_StaticNew()
{
  return vtkPDescriptiveStatistics::New();
}

PyObject *PyVTKClass_vtkPDescriptiveStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPDescriptiveStatistics_StaticNew,
    PyvtkPDescriptiveStatistics_Methods,
    "vtkPDescriptiveStatistics", modulename,
    NULL, NULL,
    PyvtkPDescriptiveStatistics_Doc(),
    PyVTKClass_vtkDescriptiveStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPDescriptiveStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPDescriptiveStatistics - A class for parallel univariate\ndescriptive statistics\n\n",
    "Superclass: vtkDescriptiveStatistics\n\n",
    "vtkPDescriptiveStatistics is vtkDescriptiveStatistics subclass for\nparallel datasets. It learns and derives the global statistical model\non each node, but assesses each individual data points on the node\nthat owns it.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPDescriptiveStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPDescriptiveStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPDescriptiveStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

