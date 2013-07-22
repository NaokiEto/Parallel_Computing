// python wrapper for vtkSimpleElevationFilter
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
#include "vtkSimpleElevationFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSimpleElevationFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSimpleElevationFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSimpleElevationFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSimpleElevationFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkSimpleElevationFilter_Doc();


static PyObject *
PyvtkSimpleElevationFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleElevationFilter *op = static_cast<vtkSimpleElevationFilter *>(vp);

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
      tempr = op->vtkSimpleElevationFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleElevationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleElevationFilter *op = static_cast<vtkSimpleElevationFilter *>(vp);

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
      tempr = op->vtkSimpleElevationFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleElevationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleElevationFilter *op = static_cast<vtkSimpleElevationFilter *>(vp);

  vtkSimpleElevationFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSimpleElevationFilter::NewInstance();
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
PyvtkSimpleElevationFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSimpleElevationFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSimpleElevationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleElevationFilter_SetVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleElevationFilter *op = static_cast<vtkSimpleElevationFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetVector(temp0, temp1, temp2);
      }
    else
      {
      op->vtkSimpleElevationFilter::SetVector(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSimpleElevationFilter_SetVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleElevationFilter *op = static_cast<vtkSimpleElevationFilter *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetVector(temp0);
      }
    else
      {
      op->vtkSimpleElevationFilter::SetVector(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSimpleElevationFilter_SetVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSimpleElevationFilter_SetVector_s1(self, args);
    case 1:
      return PyvtkSimpleElevationFilter_SetVector_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetVector");
  return NULL;
}



static PyObject *
PyvtkSimpleElevationFilter_GetVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleElevationFilter *op = static_cast<vtkSimpleElevationFilter *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVector();
      }
    else
      {
      tempr = op->vtkSimpleElevationFilter::GetVector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkSimpleElevationFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkSimpleElevationFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSimpleElevationFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSimpleElevationFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSimpleElevationFilter\nC++: vtkSimpleElevationFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSimpleElevationFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimpleElevationFilter\nC++: vtkSimpleElevationFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetVector", PyvtkSimpleElevationFilter_SetVector, 1,
   (char*)"V.SetVector(float, float, float)\nC++: void SetVector(double, double, double)\nV.SetVector((float, float, float))\nC++: void SetVector(double a[3])\n\n"},
  {(char*)"GetVector", PyvtkSimpleElevationFilter_GetVector, 1,
   (char*)"V.GetVector() -> (float, float, float)\nC++: double *GetVector()\n\nDefine one end of the line (small scalar values).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSimpleElevationFilter_StaticNew()
{
  return vtkSimpleElevationFilter::New();
}

PyObject *PyVTKClass_vtkSimpleElevationFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSimpleElevationFilter_StaticNew,
    PyvtkSimpleElevationFilter_Methods,
    "vtkSimpleElevationFilter", modulename,
    NULL, NULL,
    PyvtkSimpleElevationFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSimpleElevationFilter_Doc()
{
  static const char *docstring[] = {
    "vtkSimpleElevationFilter - generate scalars along a specified\ndirection\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkSimpleElevationFilter is a filter to generate scalar values from a\ndataset.  The scalar values are generated by dotting a user-specified\nvector against a vector defined from the input dataset points to the\norigin.\n\nSee Also:\n\nvtkElevationFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimpleElevationFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimpleElevationFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleElevationFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

