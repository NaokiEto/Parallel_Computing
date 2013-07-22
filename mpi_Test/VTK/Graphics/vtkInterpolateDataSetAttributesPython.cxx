// python wrapper for vtkInterpolateDataSetAttributes
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
#include "vtkInterpolateDataSetAttributes.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInterpolateDataSetAttributes(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInterpolateDataSetAttributes(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInterpolateDataSetAttributesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInterpolateDataSetAttributesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkInterpolateDataSetAttributes_Doc();


static PyObject *
PyvtkInterpolateDataSetAttributes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

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
      tempr = op->vtkInterpolateDataSetAttributes::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

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
      tempr = op->vtkInterpolateDataSetAttributes::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  vtkInterpolateDataSetAttributes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInterpolateDataSetAttributes::NewInstance();
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
PyvtkInterpolateDataSetAttributes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInterpolateDataSetAttributes *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInterpolateDataSetAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetInputList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  vtkDataSetCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputList();
      }
    else
      {
      tempr = op->vtkInterpolateDataSetAttributes::GetInputList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_SetT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetT(temp0);
      }
    else
      {
      op->vtkInterpolateDataSetAttributes::SetT(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetTMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTMinValue();
      }
    else
      {
      tempr = op->vtkInterpolateDataSetAttributes::GetTMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetTMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTMaxValue();
      }
    else
      {
      tempr = op->vtkInterpolateDataSetAttributes::GetTMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetT();
      }
    else
      {
      tempr = op->vtkInterpolateDataSetAttributes::GetT();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkInterpolateDataSetAttributes_Methods[] = {
  {(char*)"GetClassName", PyvtkInterpolateDataSetAttributes_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInterpolateDataSetAttributes_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInterpolateDataSetAttributes_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInterpolateDataSetAttributes\nC++: vtkInterpolateDataSetAttributes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInterpolateDataSetAttributes_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInterpolateDataSetAttributes\nC++: vtkInterpolateDataSetAttributes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInputList", PyvtkInterpolateDataSetAttributes_GetInputList, 1,
   (char*)"V.GetInputList() -> vtkDataSetCollection\nC++: vtkDataSetCollection *GetInputList()\n\nReturn the list of inputs to this filter.\n"},
  {(char*)"SetT", PyvtkInterpolateDataSetAttributes_SetT, 1,
   (char*)"V.SetT(float)\nC++: void SetT(double)\n\nSpecify interpolation parameter t.\n"},
  {(char*)"GetTMinValue", PyvtkInterpolateDataSetAttributes_GetTMinValue, 1,
   (char*)"V.GetTMinValue() -> float\nC++: double GetTMinValue()\n\nSpecify interpolation parameter t.\n"},
  {(char*)"GetTMaxValue", PyvtkInterpolateDataSetAttributes_GetTMaxValue, 1,
   (char*)"V.GetTMaxValue() -> float\nC++: double GetTMaxValue()\n\nSpecify interpolation parameter t.\n"},
  {(char*)"GetT", PyvtkInterpolateDataSetAttributes_GetT, 1,
   (char*)"V.GetT() -> float\nC++: double GetT()\n\nSpecify interpolation parameter t.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInterpolateDataSetAttributes_StaticNew()
{
  return vtkInterpolateDataSetAttributes::New();
}

PyObject *PyVTKClass_vtkInterpolateDataSetAttributesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInterpolateDataSetAttributes_StaticNew,
    PyvtkInterpolateDataSetAttributes_Methods,
    "vtkInterpolateDataSetAttributes", modulename,
    NULL, NULL,
    PyvtkInterpolateDataSetAttributes_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkInterpolateDataSetAttributes_Doc()
{
  static const char *docstring[] = {
    "vtkInterpolateDataSetAttributes - interpolate scalars, vectors, etc.\nand other dataset attributes\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkInterpolateDataSetAttributes is a filter that interpolates data\nset attribute values between input data sets. The input to the filter\nmust be datasets of the same type, same number of cells, and same\nnumber of points. The output of the filter is a data set of the same\ntype as the input dataset and whose attribute values have been\ninterpolated at the parametric value specified.\n\nThe filter is us",
    "ed by specifying two or more input data sets (total\nof N), and a parametric value t (0 <= t <= N-1). The output will\ncontain interpolated data set attributes common to all input data\nsets. (For example, if one input has scalars and vectors, and another\nhas just scalars, then only scalars will be interpolated and output.)\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInterpolateDataSetAttributes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInterpolateDataSetAttributesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInterpolateDataSetAttributes", o) != 0)
    {
    Py_DECREF(o);
    }

}

