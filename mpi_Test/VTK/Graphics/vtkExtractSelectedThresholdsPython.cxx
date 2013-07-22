// python wrapper for vtkExtractSelectedThresholds
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
#include "vtkExtractSelectedThresholds.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractSelectedThresholds(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractSelectedThresholds(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractSelectedThresholdsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractSelectedThresholdsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
extern "C" { PyObject *PyVTKClass_vtkExtractSelectionBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractSelectionBaseNew
#endif

static const char **PyvtkExtractSelectedThresholds_Doc();


static PyObject *
PyvtkExtractSelectedThresholds_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

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
      tempr = op->vtkExtractSelectedThresholds::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

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
      tempr = op->vtkExtractSelectedThresholds::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

  vtkExtractSelectedThresholds *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractSelectedThresholds::NewInstance();
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
PyvtkExtractSelectedThresholds_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractSelectedThresholds *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractSelectedThresholds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = NULL;
  vtkIdType temp1;
  vtkDataArray *temp2 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
    {
    tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = NULL;
  int temp1;
  vtkIdType temp2;
  vtkDataArray *temp3 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray"))
    {
    tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 3:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s1(self, args);
    case 4:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateValue");
  return NULL;
}


static PyMethodDef PyvtkExtractSelectedThresholds_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractSelectedThresholds_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractSelectedThresholds_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractSelectedThresholds_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractSelectedThresholds\nC++: vtkExtractSelectedThresholds *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractSelectedThresholds_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractSelectedThresholds\nC++: vtkExtractSelectedThresholds *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateValue", PyvtkExtractSelectedThresholds_EvaluateValue, 1,
   (char*)"V.EvaluateValue(vtkDataArray, int, vtkDataArray) -> int\nC++: static int EvaluateValue(vtkDataArray *scalars, vtkIdType id,\n     vtkDataArray *lims)\nV.EvaluateValue(vtkDataArray, int, int, vtkDataArray) -> int\nC++: static int EvaluateValue(vtkDataArray *array,\n    int array_component_no, vtkIdType id, vtkDataArray *lims)\n\nFunction for determining whether a value in a data array passes\nthe threshold test(s) provided in lims.  Returns 1 if the value\npasses at least one of the threshold tests. If scalars is NULL,\nthen the id itself is used as the scalar value.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractSelectedThresholds_StaticNew()
{
  return vtkExtractSelectedThresholds::New();
}

PyObject *PyVTKClass_vtkExtractSelectedThresholdsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractSelectedThresholds_StaticNew,
    PyvtkExtractSelectedThresholds_Methods,
    "vtkExtractSelectedThresholds", modulename,
    NULL, NULL,
    PyvtkExtractSelectedThresholds_Doc(),
    PyVTKClass_vtkExtractSelectionBaseNew(modulename));
  return cls;
}

const char **PyvtkExtractSelectedThresholds_Doc()
{
  static const char *docstring[] = {
    "vtkExtractSelectedThresholds - extract a cells or points from a \n\n",
    "Superclass: vtkExtractSelectionBase\n\n",
    "vtkExtractSelectedThresholds extracts all cells and points with\nattribute values that lie within a vtkSelection's THRESHOLD contents.\nThe selecion can specify to threshold a particular array within\neither the point or cell attribute data of the input. This is similar\nto vtkThreshold but allows mutliple thresholds ranges. This filter\nadds a scalar array called vtkOriginalCellIds that says what inpu",
    "t\ncell produced each output cell. This is an example of a Pedigree ID\nwhich helps to trace back results.\n\nSee Also:\n\nvtkSelection vtkExtractSelection vtkThreshold\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractSelectedThresholds(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractSelectedThresholdsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractSelectedThresholds", o) != 0)
    {
    Py_DECREF(o);
    }

}

