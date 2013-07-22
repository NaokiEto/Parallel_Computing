// python wrapper for vtkPCorrelativeStatistics
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
#include "vtkPCorrelativeStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPCorrelativeStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPCorrelativeStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPCorrelativeStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPCorrelativeStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCorrelativeStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkCorrelativeStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkCorrelativeStatisticsNew
#endif

static const char **PyvtkPCorrelativeStatistics_Doc();


static PyObject *
PyvtkPCorrelativeStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

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
      tempr = op->vtkPCorrelativeStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

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
      tempr = op->vtkPCorrelativeStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

  vtkPCorrelativeStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPCorrelativeStatistics::NewInstance();
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
PyvtkPCorrelativeStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPCorrelativeStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPCorrelativeStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

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
      op->vtkPCorrelativeStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

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
      tempr = op->vtkPCorrelativeStatistics::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCorrelativeStatistics_Learn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Learn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCorrelativeStatistics *op = static_cast<vtkPCorrelativeStatistics *>(vp);

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
      op->vtkPCorrelativeStatistics::Learn(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPCorrelativeStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPCorrelativeStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPCorrelativeStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPCorrelativeStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPCorrelativeStatistics\nC++: vtkPCorrelativeStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPCorrelativeStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPCorrelativeStatistics\nC++: vtkPCorrelativeStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPCorrelativeStatistics_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPCorrelativeStatistics_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"Learn", PyvtkPCorrelativeStatistics_Learn, 1,
   (char*)"V.Learn(vtkTable, vtkTable, vtkMultiBlockDataSet)\nC++: virtual void Learn(vtkTable *inData, vtkTable *inParameters,\n    vtkMultiBlockDataSet *outMeta)\n\nExecute the parallel calculations required by the Learn option.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPCorrelativeStatistics_StaticNew()
{
  return vtkPCorrelativeStatistics::New();
}

PyObject *PyVTKClass_vtkPCorrelativeStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPCorrelativeStatistics_StaticNew,
    PyvtkPCorrelativeStatistics_Methods,
    "vtkPCorrelativeStatistics", modulename,
    NULL, NULL,
    PyvtkPCorrelativeStatistics_Doc(),
    PyVTKClass_vtkCorrelativeStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPCorrelativeStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPCorrelativeStatistics - A class for parallel bivariate\ncorrelative statistics\n\n",
    "Superclass: vtkCorrelativeStatistics\n\n",
    "vtkPCorrelativeStatistics is vtkCorrelativeStatistics subclass for\nparallel datasets. It learns and derives the global statistical model\non each node, but assesses each individual data points on the node\nthat owns it.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPCorrelativeStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPCorrelativeStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPCorrelativeStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

