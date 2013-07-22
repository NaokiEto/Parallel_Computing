// python wrapper for vtkTransmitStructuredGridPiece
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
#include "vtkTransmitStructuredGridPiece.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTransmitStructuredGridPiece(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTransmitStructuredGridPiece(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTransmitStructuredGridPieceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTransmitStructuredGridPieceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkStructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkStructuredGridAlgorithmNew
#endif

static const char **PyvtkTransmitStructuredGridPiece_Doc();


static PyObject *
PyvtkTransmitStructuredGridPiece_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

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
      tempr = op->vtkTransmitStructuredGridPiece::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitStructuredGridPiece_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

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
      tempr = op->vtkTransmitStructuredGridPiece::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitStructuredGridPiece_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

  vtkTransmitStructuredGridPiece *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTransmitStructuredGridPiece::NewInstance();
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
PyvtkTransmitStructuredGridPiece_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTransmitStructuredGridPiece *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTransmitStructuredGridPiece::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitStructuredGridPiece_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

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
      op->vtkTransmitStructuredGridPiece::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitStructuredGridPiece_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

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
      tempr = op->vtkTransmitStructuredGridPiece::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitStructuredGridPiece_SetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

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
      op->vtkTransmitStructuredGridPiece::SetCreateGhostCells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitStructuredGridPiece_GetCreateGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

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
      tempr = op->vtkTransmitStructuredGridPiece::GetCreateGhostCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitStructuredGridPiece_CreateGhostCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateGhostCellsOn();
      }
    else
      {
      op->vtkTransmitStructuredGridPiece::CreateGhostCellsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTransmitStructuredGridPiece_CreateGhostCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateGhostCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransmitStructuredGridPiece *op = static_cast<vtkTransmitStructuredGridPiece *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CreateGhostCellsOff();
      }
    else
      {
      op->vtkTransmitStructuredGridPiece::CreateGhostCellsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTransmitStructuredGridPiece_Methods[] = {
  {(char*)"GetClassName", PyvtkTransmitStructuredGridPiece_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTransmitStructuredGridPiece_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTransmitStructuredGridPiece_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTransmitStructuredGridPiece\nC++: vtkTransmitStructuredGridPiece *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTransmitStructuredGridPiece_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTransmitStructuredGridPiece\nC++: vtkTransmitStructuredGridPiece *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkTransmitStructuredGridPiece_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"GetController", PyvtkTransmitStructuredGridPiece_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"SetCreateGhostCells", PyvtkTransmitStructuredGridPiece_SetCreateGhostCells, 1,
   (char*)"V.SetCreateGhostCells(int)\nC++: void SetCreateGhostCells(int a)\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"GetCreateGhostCells", PyvtkTransmitStructuredGridPiece_GetCreateGhostCells, 1,
   (char*)"V.GetCreateGhostCells() -> int\nC++: int GetCreateGhostCells()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"CreateGhostCellsOn", PyvtkTransmitStructuredGridPiece_CreateGhostCellsOn, 1,
   (char*)"V.CreateGhostCellsOn()\nC++: void CreateGhostCellsOn()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {(char*)"CreateGhostCellsOff", PyvtkTransmitStructuredGridPiece_CreateGhostCellsOff, 1,
   (char*)"V.CreateGhostCellsOff()\nC++: void CreateGhostCellsOff()\n\nTurn on/off creating ghost cells (on by default).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTransmitStructuredGridPiece_StaticNew()
{
  return vtkTransmitStructuredGridPiece::New();
}

PyObject *PyVTKClass_vtkTransmitStructuredGridPieceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTransmitStructuredGridPiece_StaticNew,
    PyvtkTransmitStructuredGridPiece_Methods,
    "vtkTransmitStructuredGridPiece", modulename,
    NULL, NULL,
    PyvtkTransmitStructuredGridPiece_Doc(),
    PyVTKClass_vtkStructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTransmitStructuredGridPiece_Doc()
{
  static const char *docstring[] = {
    "vtkTransmitStructuredGridPiece - For parallel processing, restrict \n\n",
    "Superclass: vtkStructuredGridAlgorithm\n\n",
    "This filter updates the appropriate piece by requesting the piece\nfrom process 0.  Process 0 always updates all of the data.  It is\nimportant that Execute get called on all processes, otherwise the\nfilter will deadlock.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTransmitStructuredGridPiece(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTransmitStructuredGridPieceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTransmitStructuredGridPiece", o) != 0)
    {
    Py_DECREF(o);
    }

}

