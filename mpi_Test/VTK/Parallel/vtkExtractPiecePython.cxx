// python wrapper for vtkExtractPiece
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
#include "vtkExtractPiece.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractPiece(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractPiece(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractPieceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractPieceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositeDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataSetAlgorithmNew
#endif

static const char **PyvtkExtractPiece_Doc();


static PyObject *
PyvtkExtractPiece_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPiece *op = static_cast<vtkExtractPiece *>(vp);

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
      tempr = op->vtkExtractPiece::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPiece *op = static_cast<vtkExtractPiece *>(vp);

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
      tempr = op->vtkExtractPiece::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPiece *op = static_cast<vtkExtractPiece *>(vp);

  vtkExtractPiece *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractPiece::NewInstance();
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
PyvtkExtractPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractPiece *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractPiece_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractPiece_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractPiece_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractPiece_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractPiece\nC++: vtkExtractPiece *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractPiece_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractPiece\nC++: vtkExtractPiece *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractPiece_StaticNew()
{
  return vtkExtractPiece::New();
}

PyObject *PyVTKClass_vtkExtractPieceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractPiece_StaticNew,
    PyvtkExtractPiece_Methods,
    "vtkExtractPiece", modulename,
    NULL, NULL,
    PyvtkExtractPiece_Doc(),
    PyVTKClass_vtkCompositeDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractPiece_Doc()
{
  static const char *docstring[] = {
    "vtkExtractPiece\n\n",
    "Superclass: vtkCompositeDataSetAlgorithm\n\n",
    "vtkExtractPiece returns the appropriate piece of each sub-dataset in\nthe vtkCompositeDataSet. This filter can handle sub-datasets of type\nvtkImageData, vtkPolyData, vtkRectilinearGrid, vtkStructuredGrid, and\nvtkUnstructuredGrid; it does not handle sub-grids of type\nvtkCompositeDataSet.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractPiece(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractPieceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractPiece", o) != 0)
    {
    Py_DECREF(o);
    }

}

