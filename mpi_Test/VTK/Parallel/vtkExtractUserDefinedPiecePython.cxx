// python wrapper for vtkExtractUserDefinedPiece
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
#include "vtkExtractUserDefinedPiece.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractUserDefinedPiece(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractUserDefinedPiece(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractUserDefinedPieceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractUserDefinedPieceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractUnstructuredGridPieceNew
extern "C" { PyObject *PyVTKClass_vtkExtractUnstructuredGridPieceNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractUnstructuredGridPieceNew
#endif

static const char **PyvtkExtractUserDefinedPiece_Doc();


static PyObject *
PyvtkExtractUserDefinedPiece_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUserDefinedPiece *op = static_cast<vtkExtractUserDefinedPiece *>(vp);

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
      tempr = op->vtkExtractUserDefinedPiece::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUserDefinedPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUserDefinedPiece *op = static_cast<vtkExtractUserDefinedPiece *>(vp);

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
      tempr = op->vtkExtractUserDefinedPiece::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUserDefinedPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUserDefinedPiece *op = static_cast<vtkExtractUserDefinedPiece *>(vp);

  vtkExtractUserDefinedPiece *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractUserDefinedPiece::NewInstance();
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
PyvtkExtractUserDefinedPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractUserDefinedPiece *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractUserDefinedPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUserDefinedPiece_SetConstantData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstantData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUserDefinedPiece *op = static_cast<vtkExtractUserDefinedPiece *>(vp);

  void  *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetConstantData(temp0, temp1);
      }
    else
      {
      op->vtkExtractUserDefinedPiece::SetConstantData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractUserDefinedPiece_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractUserDefinedPiece_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractUserDefinedPiece_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractUserDefinedPiece_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractUserDefinedPiece\nC++: vtkExtractUserDefinedPiece *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractUserDefinedPiece_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractUserDefinedPiece\nC++: vtkExtractUserDefinedPiece *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetConstantData", PyvtkExtractUserDefinedPiece_SetConstantData, 1,
   (char*)"V.SetConstantData(, int)\nC++: void SetConstantData(void *data, int len)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractUserDefinedPiece_StaticNew()
{
  return vtkExtractUserDefinedPiece::New();
}

PyObject *PyVTKClass_vtkExtractUserDefinedPieceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractUserDefinedPiece_StaticNew,
    PyvtkExtractUserDefinedPiece_Methods,
    "vtkExtractUserDefinedPiece", modulename,
    NULL, NULL,
    PyvtkExtractUserDefinedPiece_Doc(),
    PyVTKClass_vtkExtractUnstructuredGridPieceNew(modulename));
  return cls;
}

const char **PyvtkExtractUserDefinedPiece_Doc()
{
  static const char *docstring[] = {
    "vtkExtractUserDefinedPiece - Return user specified piece with ghost\ncells\n\n",
    "Superclass: vtkExtractUnstructuredGridPiece\n\n",
    "Provided a function that determines which cells are zero-level cells\n(\"the piece\"), this class outputs the piece with the requested number\nof ghost levels.  The only difference between this class and the\nclass it is derived from is that the zero-level cells are specified\nby a function you provide, instead of determined by dividing up the\ncells based on cell Id.\n\nSee Also:\n\nvtkExtractUnstructuredGr",
    "idPiece\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractUserDefinedPiece(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractUserDefinedPieceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractUserDefinedPiece", o) != 0)
    {
    Py_DECREF(o);
    }

}

