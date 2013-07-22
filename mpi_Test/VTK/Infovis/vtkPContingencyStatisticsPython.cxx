// python wrapper for vtkPContingencyStatistics
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
#include "vtkPContingencyStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPContingencyStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPContingencyStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPContingencyStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPContingencyStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkContingencyStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkContingencyStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkContingencyStatisticsNew
#endif

static const char **PyvtkPContingencyStatistics_Doc();


static PyObject *
PyvtkPContingencyStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPContingencyStatistics *op = static_cast<vtkPContingencyStatistics *>(vp);

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
      tempr = op->vtkPContingencyStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPContingencyStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPContingencyStatistics *op = static_cast<vtkPContingencyStatistics *>(vp);

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
      tempr = op->vtkPContingencyStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPContingencyStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPContingencyStatistics *op = static_cast<vtkPContingencyStatistics *>(vp);

  vtkPContingencyStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPContingencyStatistics::NewInstance();
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
PyvtkPContingencyStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPContingencyStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPContingencyStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPContingencyStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPContingencyStatistics *op = static_cast<vtkPContingencyStatistics *>(vp);

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
      op->vtkPContingencyStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPContingencyStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPContingencyStatistics *op = static_cast<vtkPContingencyStatistics *>(vp);

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
      tempr = op->vtkPContingencyStatistics::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPContingencyStatistics_Learn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Learn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPContingencyStatistics *op = static_cast<vtkPContingencyStatistics *>(vp);

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
      op->vtkPContingencyStatistics::Learn(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPContingencyStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPContingencyStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPContingencyStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPContingencyStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPContingencyStatistics\nC++: vtkPContingencyStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPContingencyStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPContingencyStatistics\nC++: vtkPContingencyStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPContingencyStatistics_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPContingencyStatistics_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"Learn", PyvtkPContingencyStatistics_Learn, 1,
   (char*)"V.Learn(vtkTable, vtkTable, vtkMultiBlockDataSet)\nC++: virtual void Learn(vtkTable *inData, vtkTable *inParameters,\n    vtkMultiBlockDataSet *outMeta)\n\nExecute the parallel calculations required by the Learn option.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPContingencyStatistics_StaticNew()
{
  return vtkPContingencyStatistics::New();
}

PyObject *PyVTKClass_vtkPContingencyStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPContingencyStatistics_StaticNew,
    PyvtkPContingencyStatistics_Methods,
    "vtkPContingencyStatistics", modulename,
    NULL, NULL,
    PyvtkPContingencyStatistics_Doc(),
    PyVTKClass_vtkContingencyStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPContingencyStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPContingencyStatistics - A class for parallel bivariate\ncontingency statistics\n\n",
    "Superclass: vtkContingencyStatistics\n\n",
    "vtkPContingencyStatistics is vtkContingencyStatistics subclass for\nparallel datasets. It learns and derives the global statistical model\non each node, but assesses each individual data points on the node\nthat owns it.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPContingencyStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPContingencyStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPContingencyStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

