// python wrapper for vtkTableExtentTranslator
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
#include "vtkTableExtentTranslator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTableExtentTranslator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTableExtentTranslator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTableExtentTranslatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTableExtentTranslatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtentTranslatorNew
extern "C" { PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtentTranslatorNew
#endif

static const char **PyvtkTableExtentTranslator_Doc();


static PyObject *
PyvtkTableExtentTranslator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

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
      tempr = op->vtkTableExtentTranslator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

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
      tempr = op->vtkTableExtentTranslator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  vtkTableExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTableExtentTranslator::NewInstance();
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
PyvtkTableExtentTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTableExtentTranslator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTableExtentTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPieces(temp0);
      }
    else
      {
      op->vtkTableExtentTranslator::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetNumberOfPiecesInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPiecesInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPiecesInTable(temp0);
      }
    else
      {
      op->vtkTableExtentTranslator::SetNumberOfPiecesInTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_GetNumberOfPiecesInTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesInTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPiecesInTable();
      }
    else
      {
      tempr = op->vtkTableExtentTranslator::GetNumberOfPiecesInTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_PieceToExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->PieceToExtent();
      }
    else
      {
      tempr = op->vtkTableExtentTranslator::PieceToExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_PieceToExtentByPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentByPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->PieceToExtentByPoints();
      }
    else
      {
      tempr = op->vtkTableExtentTranslator::PieceToExtentByPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetMaximumGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumGhostLevel(temp0);
      }
    else
      {
      op->vtkTableExtentTranslator::SetMaximumGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_GetMaximumGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumGhostLevel();
      }
    else
      {
      tempr = op->vtkTableExtentTranslator::GetMaximumGhostLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_SetPieceAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPieceAvailable(temp0, temp1);
      }
    else
      {
      op->vtkTableExtentTranslator::SetPieceAvailable(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTableExtentTranslator_GetPieceAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableExtentTranslator *op = static_cast<vtkTableExtentTranslator *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPieceAvailable(temp0);
      }
    else
      {
      tempr = op->vtkTableExtentTranslator::GetPieceAvailable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTableExtentTranslator_Methods[] = {
  {(char*)"GetClassName", PyvtkTableExtentTranslator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTableExtentTranslator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTableExtentTranslator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTableExtentTranslator\nC++: vtkTableExtentTranslator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTableExtentTranslator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTableExtentTranslator\nC++: vtkTableExtentTranslator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfPieces", PyvtkTableExtentTranslator_SetNumberOfPieces, 1,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int pieces)\n\n"},
  {(char*)"SetNumberOfPiecesInTable", PyvtkTableExtentTranslator_SetNumberOfPiecesInTable, 1,
   (char*)"V.SetNumberOfPiecesInTable(int)\nC++: void SetNumberOfPiecesInTable(int pieces)\n\nSet the real number of pieces in the extent table.\n"},
  {(char*)"GetNumberOfPiecesInTable", PyvtkTableExtentTranslator_GetNumberOfPiecesInTable, 1,
   (char*)"V.GetNumberOfPiecesInTable() -> int\nC++: int GetNumberOfPiecesInTable()\n\nSet the real number of pieces in the extent table.\n"},
  {(char*)"PieceToExtent", PyvtkTableExtentTranslator_PieceToExtent, 1,
   (char*)"V.PieceToExtent() -> int\nC++: int PieceToExtent()\n\nCalled to translate the current piece into an extent.  This is\nnot thread safe.\n"},
  {(char*)"PieceToExtentByPoints", PyvtkTableExtentTranslator_PieceToExtentByPoints, 1,
   (char*)"V.PieceToExtentByPoints() -> int\nC++: int PieceToExtentByPoints()\n\nNot supported by this subclass of vtkExtentTranslator.\n"},
  {(char*)"SetMaximumGhostLevel", PyvtkTableExtentTranslator_SetMaximumGhostLevel, 1,
   (char*)"V.SetMaximumGhostLevel(int)\nC++: void SetMaximumGhostLevel(int a)\n\nSet the maximum ghost level that can be requested.  This can be\nused by a reader to make sure an extent request does not go\noutside the boundaries of the piece's file.\n"},
  {(char*)"GetMaximumGhostLevel", PyvtkTableExtentTranslator_GetMaximumGhostLevel, 1,
   (char*)"V.GetMaximumGhostLevel() -> int\nC++: int GetMaximumGhostLevel()\n\nSet the maximum ghost level that can be requested.  This can be\nused by a reader to make sure an extent request does not go\noutside the boundaries of the piece's file.\n"},
  {(char*)"SetPieceAvailable", PyvtkTableExtentTranslator_SetPieceAvailable, 1,
   (char*)"V.SetPieceAvailable(int, int)\nC++: virtual void SetPieceAvailable(int piece, int available)\n\nGet/Set whether the given piece is available.  Requesting a piece\nthat is not available will produce errors in the pipeline.\n"},
  {(char*)"GetPieceAvailable", PyvtkTableExtentTranslator_GetPieceAvailable, 1,
   (char*)"V.GetPieceAvailable(int) -> int\nC++: virtual int GetPieceAvailable(int piece)\n\nGet/Set whether the given piece is available.  Requesting a piece\nthat is not available will produce errors in the pipeline.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTableExtentTranslator_StaticNew()
{
  return vtkTableExtentTranslator::New();
}

PyObject *PyVTKClass_vtkTableExtentTranslatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTableExtentTranslator_StaticNew,
    PyvtkTableExtentTranslator_Methods,
    "vtkTableExtentTranslator", modulename,
    NULL, NULL,
    PyvtkTableExtentTranslator_Doc(),
    PyVTKClass_vtkExtentTranslatorNew(modulename));
  return cls;
}

const char **PyvtkTableExtentTranslator_Doc()
{
  static const char *docstring[] = {
    "vtkTableExtentTranslator - Extent translation through lookup table.\n\n",
    "Superclass: vtkExtentTranslator\n\n",
    "vtkTableExtentTranslator provides a vtkExtentTranslator that is\nprogrammed with a specific extent corresponding to each piece number.\n Readers can provide this to an application to allow the pipeline to\nexecute using the same piece breakdown that is provided in the input\nfile.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTableExtentTranslator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTableExtentTranslatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTableExtentTranslator", o) != 0)
    {
    Py_DECREF(o);
    }

}

