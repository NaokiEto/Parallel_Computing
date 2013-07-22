// python wrapper for vtkTransmitRectilinearGridPiece
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
#include "vtkTransmitRectilinearGridPiece.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransmitRectilinearGridPiece(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransmitRectilinearGridPiece(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransmitRectilinearGridPieceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransmitRectilinearGridPieceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRectilinearGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkRectilinearGridAlgorithmNew
#endif

static const char **PyvtkTransmitRectilinearGridPiece_Doc();


static PyObject *
PyvtkTransmitRectilinearGridPiece_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitRectilinearGridPiece *op = static_cast<vtkTransmitRectilinearGridPiece *>(vp);

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
      tempr = op->vtkTransmitRectilinearGridPiece::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitRectilinearGridPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitRectilinearGridPiece *op = static_cast<vtkTransmitRectilinearGridPiece *>(vp);

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
      tempr = op->vtkTransmitRectilinearGridPiece::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitRectilinearGridPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitRectilinearGridPiece *op = static_cast<vtkTransmitRectilinearGridPiece *>(vp);

  vtkTransmitRectilinearGridPiece *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransmitRectilinearGridPiece::NewInstance();
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
PyvtkTransmitRectilinearGridPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransmitRectilinearGridPiece *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransmitRectilinearGridPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitRectilinearGridPiece_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitRectilinearGridPiece *op = static_cast<vtkTransmitRectilinearGridPiece *>(vp);

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
      op->vtkTransmitRectilinearGridPiece::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitRectilinearGridPiece_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitRectilinearGridPiece *op = static_cast<vtkTransmitRectilinearGridPiece *>(vp);

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
      tempr = op->vtkTransmitRectilinearGridPiece::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitRectilinearGridPiece_SetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitRectilinearGridPiece *op = static_cast<vtkTransmitRectilinearGridPiece *>(vp);

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
      op->vtkTransmitRectilinearGridPiece::SetCreateGhostCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitRectilinearGridPiece_GetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitRectilinearGridPiece *op = static_cast<vtkTransmitRectilinearGridPiece *>(vp);

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
      tempr = op->vtkTransmitRectilinearGridPiece::GetCreateGhostCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitRectilinearGridPiece_CreateGhostCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitRectilinearGridPiece *op = static_cast<vtkTransmitRectilinearGridPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateGhostCellsOn();
      }
    else
      {
      op->vtkTransmitRectilinearGridPiece::CreateGhostCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitRectilinearGridPiece_CreateGhostCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitRectilinearGridPiece *op = static_cast<vtkTransmitRectilinearGridPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateGhostCellsOff();
      }
    else
      {
      op->vtkTransmitRectilinearGridPiece::CreateGhostCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransmitRectilinearGridPiece_Methods[] = {
  {(char*)"GetClassName", PyvtkTransmitRectilinearGridPiece_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransmitRectilinearGridPiece_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransmitRectilinearGridPiece_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransmitRectilinearGridPiece\nC++: vtkTransmitRectilinearGridPiece *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransmitRectilinearGridPiece_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransmitRectilinearGridPiece\nC++: vtkTransmitRectilinearGridPiece *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkTransmitRectilinearGridPiece_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"GetController", PyvtkTransmitRectilinearGridPiece_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"SetCreateGhostCells", PyvtkTransmitRectilinearGridPiece_SetCreateGhostCells, 1,
   (char*)"V.SetCreateGhostCells(int)\nC++: void SetCreateGhostCells(int a)\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"GetCreateGhostCells", PyvtkTransmitRectilinearGridPiece_GetCreateGhostCells, 1,
   (char*)"V.GetCreateGhostCells() -> int\nC++: int GetCreateGhostCells()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"CreateGhostCellsOn", PyvtkTransmitRectilinearGridPiece_CreateGhostCellsOn, 1,
   (char*)"V.CreateGhostCellsOn()\nC++: void CreateGhostCellsOn()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"CreateGhostCellsOff", PyvtkTransmitRectilinearGridPiece_CreateGhostCellsOff, 1,
   (char*)"V.CreateGhostCellsOff()\nC++: void CreateGhostCellsOff()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransmitRectilinearGridPiece_StaticNew()
{
  return vtkTransmitRectilinearGridPiece::New();
}

PyObject *PyVTKClass_vtkTransmitRectilinearGridPieceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransmitRectilinearGridPiece_StaticNew,
    PyvtkTransmitRectilinearGridPiece_Methods,
    "vtkTransmitRectilinearGridPiece", modulename,
    NULL, NULL,
    PyvtkTransmitRectilinearGridPiece_Doc(),
    PyVTKClass_vtkRectilinearGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransmitRectilinearGridPiece_Doc()
{
  static const char *docstring[] = {
    "vtkTransmitRectilinearGridPiece - For parallel processing, restrict \n\n",
    "Superclass: vtkRectilinearGridAlgorithm\n\n",
    "This filter updates the appropriate piece by requesting the piece\nfrom process 0.  Process 0 always updates all of the data.  It is\nimportant that Execute get called on all processes, otherwise the\nfilter will deadlock.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransmitRectilinearGridPiece(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransmitRectilinearGridPieceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransmitRectilinearGridPiece", o) != 0)
    {
    Py_DECREF(o);
    }

}

