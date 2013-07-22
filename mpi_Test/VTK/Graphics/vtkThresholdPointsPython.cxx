// python wrapper for vtkThresholdPoints
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
#include "vtkThresholdPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkThresholdPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkThresholdPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkThresholdPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkThresholdPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkThresholdPoints_Doc();


static PyObject *
PyvtkThresholdPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdPoints *op = static_cast<vtkThresholdPoints *>(vp);

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
      tempr = op->vtkThresholdPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdPoints *op = static_cast<vtkThresholdPoints *>(vp);

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
      tempr = op->vtkThresholdPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdPoints *op = static_cast<vtkThresholdPoints *>(vp);

  vtkThresholdPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkThresholdPoints::NewInstance();
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
PyvtkThresholdPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkThresholdPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkThresholdPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdPoints_ThresholdByLower(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByLower");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdPoints *op = static_cast<vtkThresholdPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByLower(temp0);
      }
    else
      {
      op->vtkThresholdPoints::ThresholdByLower(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdPoints_ThresholdByUpper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdByUpper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdPoints *op = static_cast<vtkThresholdPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->ThresholdByUpper(temp0);
      }
    else
      {
      op->vtkThresholdPoints::ThresholdByUpper(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdPoints_ThresholdBetween(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdBetween");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdPoints *op = static_cast<vtkThresholdPoints *>(vp);

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
      op->vtkThresholdPoints::ThresholdBetween(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdPoints_SetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdPoints *op = static_cast<vtkThresholdPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUpperThreshold(temp0);
      }
    else
      {
      op->vtkThresholdPoints::SetUpperThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdPoints_GetUpperThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdPoints *op = static_cast<vtkThresholdPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUpperThreshold();
      }
    else
      {
      tempr = op->vtkThresholdPoints::GetUpperThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdPoints_SetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdPoints *op = static_cast<vtkThresholdPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLowerThreshold(temp0);
      }
    else
      {
      op->vtkThresholdPoints::SetLowerThreshold(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThresholdPoints_GetLowerThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThresholdPoints *op = static_cast<vtkThresholdPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLowerThreshold();
      }
    else
      {
      tempr = op->vtkThresholdPoints::GetLowerThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkThresholdPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkThresholdPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThresholdPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThresholdPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkThresholdPoints\nC++: vtkThresholdPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThresholdPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThresholdPoints\nC++: vtkThresholdPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ThresholdByLower", PyvtkThresholdPoints_ThresholdByLower, 1,
   (char*)"V.ThresholdByLower(float)\nC++: void ThresholdByLower(double lower)\n\nCriterion is cells whose scalars are less or equal to lower\nthreshold.\n"},
  {(char*)"ThresholdByUpper", PyvtkThresholdPoints_ThresholdByUpper, 1,
   (char*)"V.ThresholdByUpper(float)\nC++: void ThresholdByUpper(double upper)\n\nCriterion is cells whose scalars are greater or equal to upper\nthreshold.\n"},
  {(char*)"ThresholdBetween", PyvtkThresholdPoints_ThresholdBetween, 1,
   (char*)"V.ThresholdBetween(float, float)\nC++: void ThresholdBetween(double lower, double upper)\n\nCriterion is cells whose scalars are between lower and upper\nthresholds (inclusive of the end values).\n"},
  {(char*)"SetUpperThreshold", PyvtkThresholdPoints_SetUpperThreshold, 1,
   (char*)"V.SetUpperThreshold(float)\nC++: void SetUpperThreshold(double a)\n\nSet/Get the upper threshold.\n"},
  {(char*)"GetUpperThreshold", PyvtkThresholdPoints_GetUpperThreshold, 1,
   (char*)"V.GetUpperThreshold() -> float\nC++: double GetUpperThreshold()\n\nSet/Get the upper threshold.\n"},
  {(char*)"SetLowerThreshold", PyvtkThresholdPoints_SetLowerThreshold, 1,
   (char*)"V.SetLowerThreshold(float)\nC++: void SetLowerThreshold(double a)\n\nSet/Get the lower threshold.\n"},
  {(char*)"GetLowerThreshold", PyvtkThresholdPoints_GetLowerThreshold, 1,
   (char*)"V.GetLowerThreshold() -> float\nC++: double GetLowerThreshold()\n\nSet/Get the lower threshold.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThresholdPoints_StaticNew()
{
  return vtkThresholdPoints::New();
}

PyObject *PyVTKClass_vtkThresholdPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThresholdPoints_StaticNew,
    PyvtkThresholdPoints_Methods,
    "vtkThresholdPoints", modulename,
    NULL, NULL,
    PyvtkThresholdPoints_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkThresholdPoints_Doc()
{
  static const char *docstring[] = {
    "vtkThresholdPoints - extracts points whose scalar value satisfies\nthreshold criterion\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkThresholdPoints is a filter that extracts points from a dataset\nthat satisfy a threshold criterion. The criterion can take three\nforms:\n1) greater than a particular value; 2) less than a particular value;\n   or\n3) between a particular value. The output of the filter is polygonal\n   data.\n\nSee Also:\n\nvtkThreshold\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThresholdPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThresholdPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThresholdPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

