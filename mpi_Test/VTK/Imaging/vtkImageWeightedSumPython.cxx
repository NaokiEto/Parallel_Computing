// python wrapper for vtkImageWeightedSum
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
#include "vtkImageWeightedSum.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageWeightedSum(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageWeightedSum(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageWeightedSumNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageWeightedSumNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageWeightedSum_Doc();


static PyObject *
PyvtkImageWeightedSum_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

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
      tempr = op->vtkImageWeightedSum::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

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
      tempr = op->vtkImageWeightedSum::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  vtkImageWeightedSum *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageWeightedSum::NewInstance();
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
PyvtkImageWeightedSum_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageWeightedSum *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageWeightedSum::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_SetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  vtkDoubleArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
    {
    if (ap.IsBound())
      {
      op->SetWeights(temp0);
      }
    else
      {
      op->vtkImageWeightedSum::SetWeights(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_GetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  vtkDoubleArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWeights();
      }
    else
      {
      tempr = op->vtkImageWeightedSum::GetWeights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_SetWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  vtkIdType temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetWeight(temp0, temp1);
      }
    else
      {
      op->vtkImageWeightedSum::SetWeight(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_GetNormalizeByWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeByWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalizeByWeight();
      }
    else
      {
      tempr = op->vtkImageWeightedSum::GetNormalizeByWeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_SetNormalizeByWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeByWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNormalizeByWeight(temp0);
      }
    else
      {
      op->vtkImageWeightedSum::SetNormalizeByWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_GetNormalizeByWeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeByWeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalizeByWeightMinValue();
      }
    else
      {
      tempr = op->vtkImageWeightedSum::GetNormalizeByWeightMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_GetNormalizeByWeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeByWeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalizeByWeightMaxValue();
      }
    else
      {
      tempr = op->vtkImageWeightedSum::GetNormalizeByWeightMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_NormalizeByWeightOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeByWeightOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeByWeightOn();
      }
    else
      {
      op->vtkImageWeightedSum::NormalizeByWeightOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_NormalizeByWeightOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeByWeightOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->NormalizeByWeightOff();
      }
    else
      {
      op->vtkImageWeightedSum::NormalizeByWeightOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_CalculateTotalWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateTotalWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CalculateTotalWeight();
      }
    else
      {
      tempr = op->vtkImageWeightedSum::CalculateTotalWeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageWeightedSum_Methods[] = {
  {(char*)"GetClassName", PyvtkImageWeightedSum_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageWeightedSum_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageWeightedSum_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageWeightedSum\nC++: vtkImageWeightedSum *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageWeightedSum_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageWeightedSum\nC++: vtkImageWeightedSum *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWeights", PyvtkImageWeightedSum_SetWeights, 1,
   (char*)"V.SetWeights(vtkDoubleArray)\nC++: virtual void SetWeights(vtkDoubleArray *)\n\nThe weights control the contribution of each input to the sum.\nThey will be normalized to sum to 1 before filter execution.\n"},
  {(char*)"GetWeights", PyvtkImageWeightedSum_GetWeights, 1,
   (char*)"V.GetWeights() -> vtkDoubleArray\nC++: vtkDoubleArray *GetWeights()\n\nThe weights control the contribution of each input to the sum.\nThey will be normalized to sum to 1 before filter execution.\n"},
  {(char*)"SetWeight", PyvtkImageWeightedSum_SetWeight, 1,
   (char*)"V.SetWeight(int, float)\nC++: virtual void SetWeight(vtkIdType id, double weight)\n\nChange a specific weight. Reallocation is done\n"},
  {(char*)"GetNormalizeByWeight", PyvtkImageWeightedSum_GetNormalizeByWeight, 1,
   (char*)"V.GetNormalizeByWeight() -> int\nC++: int GetNormalizeByWeight()\n\nSetting NormalizeByWeight on will divide the final result by the\ntotal weight of the component functions. This process does not\notherwise normalize the weighted sum By default,\nNormalizeByWeight is on.\n"},
  {(char*)"SetNormalizeByWeight", PyvtkImageWeightedSum_SetNormalizeByWeight, 1,
   (char*)"V.SetNormalizeByWeight(int)\nC++: void SetNormalizeByWeight(int)\n\nSetting NormalizeByWeight on will divide the final result by the\ntotal weight of the component functions. This process does not\notherwise normalize the weighted sum By default,\nNormalizeByWeight is on.\n"},
  {(char*)"GetNormalizeByWeightMinValue", PyvtkImageWeightedSum_GetNormalizeByWeightMinValue, 1,
   (char*)"V.GetNormalizeByWeightMinValue() -> int\nC++: int GetNormalizeByWeightMinValue()\n\nSetting NormalizeByWeight on will divide the final result by the\ntotal weight of the component functions. This process does not\notherwise normalize the weighted sum By default,\nNormalizeByWeight is on.\n"},
  {(char*)"GetNormalizeByWeightMaxValue", PyvtkImageWeightedSum_GetNormalizeByWeightMaxValue, 1,
   (char*)"V.GetNormalizeByWeightMaxValue() -> int\nC++: int GetNormalizeByWeightMaxValue()\n\nSetting NormalizeByWeight on will divide the final result by the\ntotal weight of the component functions. This process does not\notherwise normalize the weighted sum By default,\nNormalizeByWeight is on.\n"},
  {(char*)"NormalizeByWeightOn", PyvtkImageWeightedSum_NormalizeByWeightOn, 1,
   (char*)"V.NormalizeByWeightOn()\nC++: void NormalizeByWeightOn()\n\nSetting NormalizeByWeight on will divide the final result by the\ntotal weight of the component functions. This process does not\notherwise normalize the weighted sum By default,\nNormalizeByWeight is on.\n"},
  {(char*)"NormalizeByWeightOff", PyvtkImageWeightedSum_NormalizeByWeightOff, 1,
   (char*)"V.NormalizeByWeightOff()\nC++: void NormalizeByWeightOff()\n\nSetting NormalizeByWeight on will divide the final result by the\ntotal weight of the component functions. This process does not\notherwise normalize the weighted sum By default,\nNormalizeByWeight is on.\n"},
  {(char*)"CalculateTotalWeight", PyvtkImageWeightedSum_CalculateTotalWeight, 1,
   (char*)"V.CalculateTotalWeight() -> float\nC++: double CalculateTotalWeight()\n\nCompute the total value of all the weight\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageWeightedSum_StaticNew()
{
  return vtkImageWeightedSum::New();
}

PyObject *PyVTKClass_vtkImageWeightedSumNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageWeightedSum_StaticNew,
    PyvtkImageWeightedSum_Methods,
    "vtkImageWeightedSum", modulename,
    NULL, NULL,
    PyvtkImageWeightedSum_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageWeightedSum_Doc()
{
  static const char *docstring[] = {
    "vtkImageWeightedSum -  adds any number of images, weighting\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "All weights are normalized so they will sum to 1. Images must have\nthe same extents. Output is\n\nThanks:\n\nThe original author of this class is Lauren O'Donnell (MIT) for\nSlicer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageWeightedSum(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageWeightedSumNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageWeightedSum", o) != 0)
    {
    Py_DECREF(o);
    }

}

