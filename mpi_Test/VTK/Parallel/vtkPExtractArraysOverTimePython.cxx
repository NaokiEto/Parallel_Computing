// python wrapper for vtkPExtractArraysOverTime
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
#include "vtkPExtractArraysOverTime.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPExtractArraysOverTime(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPExtractArraysOverTime(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPExtractArraysOverTimeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPExtractArraysOverTimeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractArraysOverTimeNew
extern "C" { PyObject *PyVTKClass_vtkExtractArraysOverTimeNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractArraysOverTimeNew
#endif

static const char **PyvtkPExtractArraysOverTime_Doc();


static PyObject *
PyvtkPExtractArraysOverTime_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractArraysOverTime *op = static_cast<vtkPExtractArraysOverTime *>(vp);

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
      tempr = op->vtkPExtractArraysOverTime::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractArraysOverTime_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractArraysOverTime *op = static_cast<vtkPExtractArraysOverTime *>(vp);

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
      tempr = op->vtkPExtractArraysOverTime::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractArraysOverTime_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractArraysOverTime *op = static_cast<vtkPExtractArraysOverTime *>(vp);

  vtkPExtractArraysOverTime *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPExtractArraysOverTime::NewInstance();
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
PyvtkPExtractArraysOverTime_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPExtractArraysOverTime *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPExtractArraysOverTime::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractArraysOverTime_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractArraysOverTime *op = static_cast<vtkPExtractArraysOverTime *>(vp);

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
      op->vtkPExtractArraysOverTime::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPExtractArraysOverTime_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPExtractArraysOverTime *op = static_cast<vtkPExtractArraysOverTime *>(vp);

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
      tempr = op->vtkPExtractArraysOverTime::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPExtractArraysOverTime_Methods[] = {
  {(char*)"GetClassName", PyvtkPExtractArraysOverTime_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPExtractArraysOverTime_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPExtractArraysOverTime_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPExtractArraysOverTime\nC++: vtkPExtractArraysOverTime *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPExtractArraysOverTime_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPExtractArraysOverTime\nC++: vtkPExtractArraysOverTime *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkPExtractArraysOverTime_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {(char*)"GetController", PyvtkPExtractArraysOverTime_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nSet and get the controller.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPExtractArraysOverTime_StaticNew()
{
  return vtkPExtractArraysOverTime::New();
}

PyObject *PyVTKClass_vtkPExtractArraysOverTimeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPExtractArraysOverTime_StaticNew,
    PyvtkPExtractArraysOverTime_Methods,
    "vtkPExtractArraysOverTime", modulename,
    NULL, NULL,
    PyvtkPExtractArraysOverTime_Doc(),
    PyVTKClass_vtkExtractArraysOverTimeNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(1972);
    if (o && PyDict_SetItemString(d, (char *)"EXCHANGE_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkPExtractArraysOverTime_Doc()
{
  static const char *docstring[] = {
    "vtkPExtractArraysOverTime - extract point or cell data over time\n(parallel)\n\n",
    "Superclass: vtkExtractArraysOverTime\n\n",
    "vtkPExtractArraysOverTime is a parallelized version of\nvtkExtractArraysOverTime. vtkExtractArraysOverTime extract point or\ncell data given a selection. For every cell or point extracted,\nvtkExtractArraysOverTime create a vtkTable that is placed in an\nappropriately named block in an output multi-block dataset. For\nglobal-id based selections or location based selections, it's\npossible that over time",
    " the cell/point moves across processes. This\nfilter ensures that such extractions spread across processes are\ncombined correctly into a single vtkTable. This filter produces a\nvalid output on the root node alone, all other nodes, simply have\nempty multi-block dataset with number of blocks matching the root (to\nensure that all processes have the same structure).\n\nSee Also:\n\nvtkExtractArraysOverTime",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPExtractArraysOverTime(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPExtractArraysOverTimeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPExtractArraysOverTime", o) != 0)
    {
    Py_DECREF(o);
    }

}

