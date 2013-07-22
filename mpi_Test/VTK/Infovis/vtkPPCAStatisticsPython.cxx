// python wrapper for vtkPPCAStatistics
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
#include "vtkPPCAStatistics.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPPCAStatistics(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPPCAStatistics(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPPCAStatisticsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPPCAStatisticsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPCAStatisticsNew
extern "C" { PyObject *PyVTKClass_vtkPCAStatisticsNew(const char *); }
#define DECLARED_PyVTKClass_vtkPCAStatisticsNew
#endif

static const char **PyvtkPPCAStatistics_Doc();


static PyObject *
PyvtkPPCAStatistics_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPCAStatistics *op = static_cast<vtkPPCAStatistics *>(vp);

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
      tempr = op->vtkPPCAStatistics::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPCAStatistics_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPCAStatistics *op = static_cast<vtkPPCAStatistics *>(vp);

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
      tempr = op->vtkPPCAStatistics::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPCAStatistics_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPCAStatistics *op = static_cast<vtkPPCAStatistics *>(vp);

  vtkPPCAStatistics *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPPCAStatistics::NewInstance();
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
PyvtkPPCAStatistics_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPPCAStatistics *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPPCAStatistics::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPPCAStatistics_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPCAStatistics *op = static_cast<vtkPPCAStatistics *>(vp);

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
      op->vtkPPCAStatistics::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPPCAStatistics_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPPCAStatistics *op = static_cast<vtkPPCAStatistics *>(vp);

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
      tempr = op->vtkPPCAStatistics::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPPCAStatistics_Methods[] = {
  {(char*)"GetClassName", PyvtkPPCAStatistics_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPPCAStatistics_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPPCAStatistics_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPPCAStatistics\nC++: vtkPPCAStatistics *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPPCAStatistics_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPPCAStatistics\nC++: vtkPPCAStatistics *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPPCAStatistics_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {(char*)"GetController", PyvtkPPCAStatistics_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nGet/Set the multiprocess controller. If no controller is set,\nsingle process is assumed.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPPCAStatistics_StaticNew()
{
  return vtkPPCAStatistics::New();
}

PyObject *PyVTKClass_vtkPPCAStatisticsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPPCAStatistics_StaticNew,
    PyvtkPPCAStatistics_Methods,
    "vtkPPCAStatistics", modulename,
    NULL, NULL,
    PyvtkPPCAStatistics_Doc(),
    PyVTKClass_vtkPCAStatisticsNew(modulename));
  return cls;
}

const char **PyvtkPPCAStatistics_Doc()
{
  static const char *docstring[] = {
    "vtkPPCAStatistics - A class for parallel principal component analysis\n\n",
    "Superclass: vtkPCAStatistics\n\n",
    "vtkPPCAStatistics is vtkPCAStatistics subclass for parallel datasets.\nIt learns and derives the global statistical model on each node, but\nassesses each individual data points on the node that owns it.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPPCAStatistics(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPPCAStatisticsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPPCAStatistics", o) != 0)
    {
    Py_DECREF(o);
    }

}

