// python wrapper for vtkThresholdTable
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
#include "vtkVariant.h"
#include "vtkThresholdTable.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkThresholdTable(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkThresholdTable(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkThresholdTableNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkThresholdTableNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkThresholdTable_Doc();


static PyObject *
PyvtkThresholdTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

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
      tempr = op->vtkThresholdTable::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

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
      tempr = op->vtkThresholdTable::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkThresholdTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkThresholdTable::NewInstance();
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
PyvtkThresholdTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkThresholdTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkThresholdTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMode(temp0);
      }
    else
      {
      op->vtkThresholdTable::SetMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModeMinValue();
      }
    else
      {
      tempr = op->vtkThresholdTable::GetModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetModeMaxValue();
      }
    else
      {
      tempr = op->vtkThresholdTable::GetModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMode();
      }
    else
      {
      tempr = op->vtkThresholdTable::GetMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMinValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetMinValue(*temp0);
      }
    else
      {
      op->vtkThresholdTable::SetMinValue(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkThresholdTable_SetMinValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinValue(temp0);
      }
    else
      {
      op->vtkThresholdTable::SetMinValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkThresholdTable_SetMinValue_Methods[] = {
  {NULL, PyvtkThresholdTable_SetMinValue_s1, 1,
   (char*)"@O vtkVariant"},
  {NULL, PyvtkThresholdTable_SetMinValue_s2, 1,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkThresholdTable_SetMinValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_SetMinValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMinValue");
  return NULL;
}



static PyObject *
PyvtkThresholdTable_GetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinValue();
      }
    else
      {
      tempr = op->vtkThresholdTable::GetMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_SetMaxValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->SetMaxValue(*temp0);
      }
    else
      {
      op->vtkThresholdTable::SetMaxValue(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkThresholdTable_SetMaxValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxValue(temp0);
      }
    else
      {
      op->vtkThresholdTable::SetMaxValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkThresholdTable_SetMaxValue_Methods[] = {
  {NULL, PyvtkThresholdTable_SetMaxValue_s1, 1,
   (char*)"@O vtkVariant"},
  {NULL, PyvtkThresholdTable_SetMaxValue_s2, 1,
   (char*)"@d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkThresholdTable_SetMaxValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_SetMaxValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxValue");
  return NULL;
}



static PyObject *
PyvtkThresholdTable_GetMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxValue();
      }
    else
      {
      tempr = op->vtkThresholdTable::GetMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildSpecialObject(&tempr, "vtkVariant");
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdTable_ThresholdBetween_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  vtkVariant *temp1 = NULL;
  PyObject *pobj1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
    {
    if (ap.IsBound())
      {
      op->ThresholdBetween(*temp0, *temp1);
      }
    else
      {
      op->vtkThresholdTable::ThresholdBetween(*temp0, *temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkThresholdTable_ThresholdBetween_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdTable *op = static_cast<vtkThresholdTable *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ThresholdBetween(temp0, temp1);
      }
    else
      {
      op->vtkThresholdTable::ThresholdBetween(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkThresholdTable_ThresholdBetween_Methods[] = {
  {NULL, PyvtkThresholdTable_ThresholdBetween_s1, 1,
   (char*)"@OO vtkVariant vtkVariant"},
  {NULL, PyvtkThresholdTable_ThresholdBetween_s2, 1,
   (char*)"@dd"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkThresholdTable_ThresholdBetween(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThresholdTable_ThresholdBetween_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ThresholdBetween");
  return NULL;
}


static PyMethodDef PyvtkThresholdTable_Methods[] = {
  {(char*)"GetClassName", PyvtkThresholdTable_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThresholdTable_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThresholdTable_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkThresholdTable\nC++: vtkThresholdTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThresholdTable_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThresholdTable\nC++: vtkThresholdTable *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetMode", PyvtkThresholdTable_SetMode, 1,
   (char*)"V.SetMode(int)\nC++: void SetMode(int)\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {(char*)"GetModeMinValue", PyvtkThresholdTable_GetModeMinValue, 1,
   (char*)"V.GetModeMinValue() -> int\nC++: int GetModeMinValue()\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {(char*)"GetModeMaxValue", PyvtkThresholdTable_GetModeMaxValue, 1,
   (char*)"V.GetModeMaxValue() -> int\nC++: int GetModeMaxValue()\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {(char*)"GetMode", PyvtkThresholdTable_GetMode, 1,
   (char*)"V.GetMode() -> int\nC++: int GetMode()\n\nThe mode of the threshold filter.  Options are: ACCEPT_LESS_THAN\n(0) accepts rows with values < MaxValue; ACCEPT_GREATER_THAN (1)\naccepts rows with values > MinValue; ACCEPT_BETWEEN (2) accepts\nrows with values > MinValue and < MaxValue; ACCEPT_OUTSIDE (3)\naccepts rows with values < MinValue or > MaxValue.\n"},
  {(char*)"SetMinValue", PyvtkThresholdTable_SetMinValue, 1,
   (char*)"V.SetMinValue(vtkVariant)\nC++: virtual void SetMinValue(vtkVariant v)\nV.SetMinValue(float)\nC++: void SetMinValue(double v)\n\nThe minumum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {(char*)"GetMinValue", PyvtkThresholdTable_GetMinValue, 1,
   (char*)"V.GetMinValue() -> vtkVariant\nC++: virtual vtkVariant GetMinValue()\n\nThe minumum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {(char*)"SetMaxValue", PyvtkThresholdTable_SetMaxValue, 1,
   (char*)"V.SetMaxValue(vtkVariant)\nC++: virtual void SetMaxValue(vtkVariant v)\nV.SetMaxValue(float)\nC++: void SetMaxValue(double v)\n\nThe maximum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {(char*)"GetMaxValue", PyvtkThresholdTable_GetMaxValue, 1,
   (char*)"V.GetMaxValue() -> vtkVariant\nC++: virtual vtkVariant GetMaxValue()\n\nThe maximum value for the threshold. This may be any data type\nstored in a vtkVariant.\n"},
  {(char*)"ThresholdBetween", PyvtkThresholdTable_ThresholdBetween, 1,
   (char*)"V.ThresholdBetween(vtkVariant, vtkVariant)\nC++: void ThresholdBetween(vtkVariant lower, vtkVariant upper)\nV.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is rows whose scalars are between lower and upper\nthresholds (inclusive of the end values).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThresholdTable_StaticNew()
{
  return vtkThresholdTable::New();
}

PyObject *PyVTKClass_vtkThresholdTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThresholdTable_StaticNew,
    PyvtkThresholdTable_Methods,
    "vtkThresholdTable", modulename,
    NULL, NULL,
    PyvtkThresholdTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"ACCEPT_LESS_THAN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ACCEPT_GREATER_THAN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ACCEPT_BETWEEN", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"ACCEPT_OUTSIDE", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkThresholdTable_Doc()
{
  static const char *docstring[] = {
    "vtkThresholdTable - Thresholds table rows.\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "vtkThresholdTable uses minimum and/or maximum values to threshold\ntable rows based on the values in a particular column. The column to\nthreshold is specified using SetInputArrayToProcess(0, ...).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThresholdTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThresholdTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThresholdTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

