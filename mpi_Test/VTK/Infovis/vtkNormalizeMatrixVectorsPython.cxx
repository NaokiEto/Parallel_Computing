// python wrapper for vtkNormalizeMatrixVectors
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
#include "vtkNormalizeMatrixVectors.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkNormalizeMatrixVectors(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkNormalizeMatrixVectors(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkNormalizeMatrixVectorsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkNormalizeMatrixVectorsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkNormalizeMatrixVectors_Doc();


static PyObject *
PyvtkNormalizeMatrixVectors_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

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
      tempr = op->vtkNormalizeMatrixVectors::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

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
      tempr = op->vtkNormalizeMatrixVectors::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  vtkNormalizeMatrixVectors *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkNormalizeMatrixVectors::NewInstance();
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
PyvtkNormalizeMatrixVectors_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkNormalizeMatrixVectors *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkNormalizeMatrixVectors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_GetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVectorDimension();
      }
    else
      {
      tempr = op->vtkNormalizeMatrixVectors::GetVectorDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_SetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetVectorDimension(temp0);
      }
    else
      {
      op->vtkNormalizeMatrixVectors::SetVectorDimension(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkNormalizeMatrixVectors_Methods[] = {
  {(char*)"GetClassName", PyvtkNormalizeMatrixVectors_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkNormalizeMatrixVectors_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkNormalizeMatrixVectors_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkNormalizeMatrixVectors\nC++: vtkNormalizeMatrixVectors *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkNormalizeMatrixVectors_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkNormalizeMatrixVectors\nC++: vtkNormalizeMatrixVectors *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVectorDimension", PyvtkNormalizeMatrixVectors_GetVectorDimension, 1,
   (char*)"V.GetVectorDimension() -> int\nC++: int GetVectorDimension()\n\nControls whether to normalize row-vectors or column-vectors.  0 =\nrows, 1 = columns.\n"},
  {(char*)"SetVectorDimension", PyvtkNormalizeMatrixVectors_SetVectorDimension, 1,
   (char*)"V.SetVectorDimension(int)\nC++: void SetVectorDimension(int a)\n\nControls whether to normalize row-vectors or column-vectors.  0 =\nrows, 1 = columns.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkNormalizeMatrixVectors_StaticNew()
{
  return vtkNormalizeMatrixVectors::New();
}

PyObject *PyVTKClass_vtkNormalizeMatrixVectorsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkNormalizeMatrixVectors_StaticNew,
    PyvtkNormalizeMatrixVectors_Methods,
    "vtkNormalizeMatrixVectors", modulename,
    NULL, NULL,
    PyvtkNormalizeMatrixVectors_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkNormalizeMatrixVectors_Doc()
{
  static const char *docstring[] = {
    "vtkNormalizeMatrixVectors - given a sparse input matrix, produces\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkNormalizeMatrixVectors(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkNormalizeMatrixVectorsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkNormalizeMatrixVectors", o) != 0)
    {
    Py_DECREF(o);
    }

}

