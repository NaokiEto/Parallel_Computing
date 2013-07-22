// python wrapper for vtkExtractUnstructuredGridPiece
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
#include "vtkExtractUnstructuredGridPiece.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractUnstructuredGridPiece(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractUnstructuredGridPiece(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractUnstructuredGridPieceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractUnstructuredGridPieceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkExtractUnstructuredGridPiece_Doc();


static PyObject *
PyvtkExtractUnstructuredGridPiece_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGridPiece *op = static_cast<vtkExtractUnstructuredGridPiece *>(vp);

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
      tempr = op->vtkExtractUnstructuredGridPiece::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGridPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGridPiece *op = static_cast<vtkExtractUnstructuredGridPiece *>(vp);

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
      tempr = op->vtkExtractUnstructuredGridPiece::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGridPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGridPiece *op = static_cast<vtkExtractUnstructuredGridPiece *>(vp);

  vtkExtractUnstructuredGridPiece *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractUnstructuredGridPiece::NewInstance();
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
PyvtkExtractUnstructuredGridPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractUnstructuredGridPiece *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractUnstructuredGridPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGridPiece_SetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGridPiece *op = static_cast<vtkExtractUnstructuredGridPiece *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCreateGhostCells(temp0);
      }
    else
      {
      op->vtkExtractUnstructuredGridPiece::SetCreateGhostCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGridPiece_GetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGridPiece *op = static_cast<vtkExtractUnstructuredGridPiece *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCreateGhostCells();
      }
    else
      {
      tempr = op->vtkExtractUnstructuredGridPiece::GetCreateGhostCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGridPiece_CreateGhostCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGridPiece *op = static_cast<vtkExtractUnstructuredGridPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateGhostCellsOn();
      }
    else
      {
      op->vtkExtractUnstructuredGridPiece::CreateGhostCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractUnstructuredGridPiece_CreateGhostCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractUnstructuredGridPiece *op = static_cast<vtkExtractUnstructuredGridPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateGhostCellsOff();
      }
    else
      {
      op->vtkExtractUnstructuredGridPiece::CreateGhostCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractUnstructuredGridPiece_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractUnstructuredGridPiece_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractUnstructuredGridPiece_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractUnstructuredGridPiece_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractUnstructuredGridPiece\nC++: vtkExtractUnstructuredGridPiece *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractUnstructuredGridPiece_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractUnstructuredGridPiece\nC++: vtkExtractUnstructuredGridPiece *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCreateGhostCells", PyvtkExtractUnstructuredGridPiece_SetCreateGhostCells, 1,
   (char*)"V.SetCreateGhostCells(int)\nC++: void SetCreateGhostCells(int a)\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"GetCreateGhostCells", PyvtkExtractUnstructuredGridPiece_GetCreateGhostCells, 1,
   (char*)"V.GetCreateGhostCells() -> int\nC++: int GetCreateGhostCells()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"CreateGhostCellsOn", PyvtkExtractUnstructuredGridPiece_CreateGhostCellsOn, 1,
   (char*)"V.CreateGhostCellsOn()\nC++: void CreateGhostCellsOn()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"CreateGhostCellsOff", PyvtkExtractUnstructuredGridPiece_CreateGhostCellsOff, 1,
   (char*)"V.CreateGhostCellsOff()\nC++: void CreateGhostCellsOff()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractUnstructuredGridPiece_StaticNew()
{
  return vtkExtractUnstructuredGridPiece::New();
}

PyObject *PyVTKClass_vtkExtractUnstructuredGridPieceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractUnstructuredGridPiece_StaticNew,
    PyvtkExtractUnstructuredGridPiece_Methods,
    "vtkExtractUnstructuredGridPiece", modulename,
    NULL, NULL,
    PyvtkExtractUnstructuredGridPiece_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractUnstructuredGridPiece_Doc()
{
  static const char *docstring[] = {
    "vtkExtractUnstructuredGridPiece - Return specified piece, including\nspecified\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractUnstructuredGridPiece(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractUnstructuredGridPieceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractUnstructuredGridPiece", o) != 0)
    {
    Py_DECREF(o);
    }

}

