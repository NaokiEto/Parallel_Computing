// python wrapper for vtkTransposeMatrix
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
#include "vtkTransposeMatrix.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransposeMatrix(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransposeMatrix(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransposeMatrixNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransposeMatrixNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkArrayDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkArrayDataAlgorithmNew
#endif

static const char **PyvtkTransposeMatrix_Doc();


static PyObject *
PyvtkTransposeMatrix_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeMatrix *op = static_cast<vtkTransposeMatrix *>(vp);

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
      tempr = op->vtkTransposeMatrix::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeMatrix_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeMatrix *op = static_cast<vtkTransposeMatrix *>(vp);

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
      tempr = op->vtkTransposeMatrix::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransposeMatrix_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransposeMatrix *op = static_cast<vtkTransposeMatrix *>(vp);

  vtkTransposeMatrix *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransposeMatrix::NewInstance();
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
PyvtkTransposeMatrix_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransposeMatrix *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransposeMatrix::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTransposeMatrix_Methods[] = {
  {(char*)"GetClassName", PyvtkTransposeMatrix_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransposeMatrix_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransposeMatrix_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransposeMatrix\nC++: vtkTransposeMatrix *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransposeMatrix_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransposeMatrix\nC++: vtkTransposeMatrix *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransposeMatrix_StaticNew()
{
  return vtkTransposeMatrix::New();
}

PyObject *PyVTKClass_vtkTransposeMatrixNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransposeMatrix_StaticNew,
    PyvtkTransposeMatrix_Methods,
    "vtkTransposeMatrix", modulename,
    NULL, NULL,
    PyvtkTransposeMatrix_Doc(),
    PyVTKClass_vtkArrayDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransposeMatrix_Doc()
{
  static const char *docstring[] = {
    "vtkTransposeMatrix - Computes the transpose of an input matrix.\n\n",
    "Superclass: vtkArrayDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransposeMatrix(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransposeMatrixNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransposeMatrix", o) != 0)
    {
    Py_DECREF(o);
    }

}

