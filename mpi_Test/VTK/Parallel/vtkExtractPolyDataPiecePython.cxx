// python wrapper for vtkExtractPolyDataPiece
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
#include "vtkExtractPolyDataPiece.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractPolyDataPiece(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractPolyDataPiece(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractPolyDataPieceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractPolyDataPieceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkExtractPolyDataPiece_Doc();


static PyObject *
PyvtkExtractPolyDataPiece_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataPiece *op = static_cast<vtkExtractPolyDataPiece *>(vp);

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
      tempr = op->vtkExtractPolyDataPiece::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataPiece *op = static_cast<vtkExtractPolyDataPiece *>(vp);

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
      tempr = op->vtkExtractPolyDataPiece::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataPiece *op = static_cast<vtkExtractPolyDataPiece *>(vp);

  vtkExtractPolyDataPiece *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractPolyDataPiece::NewInstance();
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
PyvtkExtractPolyDataPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractPolyDataPiece *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractPolyDataPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataPiece_SetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataPiece *op = static_cast<vtkExtractPolyDataPiece *>(vp);

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
      op->vtkExtractPolyDataPiece::SetCreateGhostCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataPiece_GetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataPiece *op = static_cast<vtkExtractPolyDataPiece *>(vp);

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
      tempr = op->vtkExtractPolyDataPiece::GetCreateGhostCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataPiece_CreateGhostCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataPiece *op = static_cast<vtkExtractPolyDataPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateGhostCellsOn();
      }
    else
      {
      op->vtkExtractPolyDataPiece::CreateGhostCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractPolyDataPiece_CreateGhostCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPolyDataPiece *op = static_cast<vtkExtractPolyDataPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateGhostCellsOff();
      }
    else
      {
      op->vtkExtractPolyDataPiece::CreateGhostCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractPolyDataPiece_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractPolyDataPiece_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractPolyDataPiece_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractPolyDataPiece_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractPolyDataPiece\nC++: vtkExtractPolyDataPiece *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractPolyDataPiece_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractPolyDataPiece\nC++: vtkExtractPolyDataPiece *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCreateGhostCells", PyvtkExtractPolyDataPiece_SetCreateGhostCells, 1,
   (char*)"V.SetCreateGhostCells(int)\nC++: void SetCreateGhostCells(int a)\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"GetCreateGhostCells", PyvtkExtractPolyDataPiece_GetCreateGhostCells, 1,
   (char*)"V.GetCreateGhostCells() -> int\nC++: int GetCreateGhostCells()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"CreateGhostCellsOn", PyvtkExtractPolyDataPiece_CreateGhostCellsOn, 1,
   (char*)"V.CreateGhostCellsOn()\nC++: void CreateGhostCellsOn()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"CreateGhostCellsOff", PyvtkExtractPolyDataPiece_CreateGhostCellsOff, 1,
   (char*)"V.CreateGhostCellsOff()\nC++: void CreateGhostCellsOff()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractPolyDataPiece_StaticNew()
{
  return vtkExtractPolyDataPiece::New();
}

PyObject *PyVTKClass_vtkExtractPolyDataPieceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractPolyDataPiece_StaticNew,
    PyvtkExtractPolyDataPiece_Methods,
    "vtkExtractPolyDataPiece", modulename,
    NULL, NULL,
    PyvtkExtractPolyDataPiece_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractPolyDataPiece_Doc()
{
  static const char *docstring[] = {
    "vtkExtractPolyDataPiece - Return specified piece, including specified\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractPolyDataPiece(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractPolyDataPieceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractPolyDataPiece", o) != 0)
    {
    Py_DECREF(o);
    }

}

