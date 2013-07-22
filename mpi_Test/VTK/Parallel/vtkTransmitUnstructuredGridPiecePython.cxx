// python wrapper for vtkTransmitUnstructuredGridPiece
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
#include "vtkTransmitUnstructuredGridPiece.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransmitUnstructuredGridPiece(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransmitUnstructuredGridPiece(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransmitUnstructuredGridPieceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransmitUnstructuredGridPieceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkTransmitUnstructuredGridPiece_Doc();


static PyObject *
PyvtkTransmitUnstructuredGridPiece_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

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
      tempr = op->vtkTransmitUnstructuredGridPiece::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

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
      tempr = op->vtkTransmitUnstructuredGridPiece::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  vtkTransmitUnstructuredGridPiece *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransmitUnstructuredGridPiece::NewInstance();
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
PyvtkTransmitUnstructuredGridPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransmitUnstructuredGridPiece *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransmitUnstructuredGridPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkTransmitUnstructuredGridPiece::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkTransmitUnstructuredGridPiece::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_SetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

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
      op->vtkTransmitUnstructuredGridPiece::SetCreateGhostCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_GetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

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
      tempr = op->vtkTransmitUnstructuredGridPiece::GetCreateGhostCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_CreateGhostCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateGhostCellsOn();
      }
    else
      {
      op->vtkTransmitUnstructuredGridPiece::CreateGhostCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitUnstructuredGridPiece_CreateGhostCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitUnstructuredGridPiece *op = static_cast<vtkTransmitUnstructuredGridPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateGhostCellsOff();
      }
    else
      {
      op->vtkTransmitUnstructuredGridPiece::CreateGhostCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransmitUnstructuredGridPiece_Methods[] = {
  {(char*)"GetClassName", PyvtkTransmitUnstructuredGridPiece_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransmitUnstructuredGridPiece_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransmitUnstructuredGridPiece_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransmitUnstructuredGridPiece\nC++: vtkTransmitUnstructuredGridPiece *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransmitUnstructuredGridPiece_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransmitUnstructuredGridPiece\nC++: vtkTransmitUnstructuredGridPiece *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkTransmitUnstructuredGridPiece_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"GetController", PyvtkTransmitUnstructuredGridPiece_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"SetCreateGhostCells", PyvtkTransmitUnstructuredGridPiece_SetCreateGhostCells, 1,
   (char*)"V.SetCreateGhostCells(int)\nC++: void SetCreateGhostCells(int a)\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"GetCreateGhostCells", PyvtkTransmitUnstructuredGridPiece_GetCreateGhostCells, 1,
   (char*)"V.GetCreateGhostCells() -> int\nC++: int GetCreateGhostCells()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"CreateGhostCellsOn", PyvtkTransmitUnstructuredGridPiece_CreateGhostCellsOn, 1,
   (char*)"V.CreateGhostCellsOn()\nC++: void CreateGhostCellsOn()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"CreateGhostCellsOff", PyvtkTransmitUnstructuredGridPiece_CreateGhostCellsOff, 1,
   (char*)"V.CreateGhostCellsOff()\nC++: void CreateGhostCellsOff()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransmitUnstructuredGridPiece_StaticNew()
{
  return vtkTransmitUnstructuredGridPiece::New();
}

PyObject *PyVTKClass_vtkTransmitUnstructuredGridPieceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransmitUnstructuredGridPiece_StaticNew,
    PyvtkTransmitUnstructuredGridPiece_Methods,
    "vtkTransmitUnstructuredGridPiece", modulename,
    NULL, NULL,
    PyvtkTransmitUnstructuredGridPiece_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransmitUnstructuredGridPiece_Doc()
{
  static const char *docstring[] = {
    "vtkTransmitUnstructuredGridPiece - Return specified piece, including\nspecified\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "This filter updates the appropriate piece by requesting the piece\nfrom process 0.  Process 0 always updates all of the data.  It is\nimportant that Execute get called on all processes, otherwise the\nfilter will deadlock.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransmitUnstructuredGridPiece(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransmitUnstructuredGridPieceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransmitUnstructuredGridPiece", o) != 0)
    {
    Py_DECREF(o);
    }

}

