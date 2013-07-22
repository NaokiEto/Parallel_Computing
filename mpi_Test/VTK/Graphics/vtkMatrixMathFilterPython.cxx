// python wrapper for vtkMatrixMathFilter
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
#include "vtkMatrixMathFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMatrixMathFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMatrixMathFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMatrixMathFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMatrixMathFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkMatrixMathFilter_Doc();


static PyObject *
PyvtkMatrixMathFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

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
      tempr = op->vtkMatrixMathFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

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
      tempr = op->vtkMatrixMathFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  vtkMatrixMathFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMatrixMathFilter::NewInstance();
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
PyvtkMatrixMathFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMatrixMathFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMatrixMathFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOperation(temp0);
      }
    else
      {
      op->vtkMatrixMathFilter::SetOperation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOperation();
      }
    else
      {
      tempr = op->vtkMatrixMathFilter::GetOperation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToDeterminant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToDeterminant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToDeterminant();
      }
    else
      {
      op->vtkMatrixMathFilter::SetOperationToDeterminant();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToEigenvalue();
      }
    else
      {
      op->vtkMatrixMathFilter::SetOperationToEigenvalue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToEigenvector();
      }
    else
      {
      op->vtkMatrixMathFilter::SetOperationToEigenvector();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToInverse();
      }
    else
      {
      op->vtkMatrixMathFilter::SetOperationToInverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMatrixMathFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkMatrixMathFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMatrixMathFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMatrixMathFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMatrixMathFilter\nC++: vtkMatrixMathFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMatrixMathFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMatrixMathFilter\nC++: vtkMatrixMathFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOperation", PyvtkMatrixMathFilter_SetOperation, 1,
   (char*)"V.SetOperation(int)\nC++: void SetOperation(int a)\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {(char*)"GetOperation", PyvtkMatrixMathFilter_GetOperation, 1,
   (char*)"V.GetOperation() -> int\nC++: int GetOperation()\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {(char*)"SetOperationToDeterminant", PyvtkMatrixMathFilter_SetOperationToDeterminant, 1,
   (char*)"V.SetOperationToDeterminant()\nC++: void SetOperationToDeterminant()\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {(char*)"SetOperationToEigenvalue", PyvtkMatrixMathFilter_SetOperationToEigenvalue, 1,
   (char*)"V.SetOperationToEigenvalue()\nC++: void SetOperationToEigenvalue()\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {(char*)"SetOperationToEigenvector", PyvtkMatrixMathFilter_SetOperationToEigenvector, 1,
   (char*)"V.SetOperationToEigenvector()\nC++: void SetOperationToEigenvector()\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {(char*)"SetOperationToInverse", PyvtkMatrixMathFilter_SetOperationToInverse, 1,
   (char*)"V.SetOperationToInverse()\nC++: void SetOperationToInverse()\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMatrixMathFilter_StaticNew()
{
  return vtkMatrixMathFilter::New();
}

PyObject *PyVTKClass_vtkMatrixMathFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMatrixMathFilter_StaticNew,
    PyvtkMatrixMathFilter_Methods,
    "vtkMatrixMathFilter", modulename,
    NULL, NULL,
    PyvtkMatrixMathFilter_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMatrixMathFilter_Doc()
{
  static const char *docstring[] = {
    "vtkMatrixMathFilter - Calculate functions of quality of the elements\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkMatrixMathFilter computes one or more functions of mathematical\nquality for the cells or points in a mesh. The per-cell or per-point\nquality is added to the mesh's cell data or point data, in an array\nwith names varied with different quality being queried. Note this\nfilter always assume the data associate with the cells or points are\n3 by 3 matrix.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMatrixMathFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMatrixMathFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMatrixMathFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

