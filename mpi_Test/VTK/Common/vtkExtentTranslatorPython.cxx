// python wrapper for vtkExtentTranslator
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
#include "vtkExtentTranslator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtentTranslator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtentTranslator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExtentTranslator_Doc();


static PyObject *
PyvtkExtentTranslator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      tempr = op->vtkExtentTranslator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      tempr = op->vtkExtentTranslator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  vtkExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtentTranslator::NewInstance();
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
PyvtkExtentTranslator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtentTranslator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtentTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtentTranslator::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetWholeExtent(temp0);
      }
    else
      {
      op->vtkExtentTranslator::SetWholeExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtentTranslator_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkExtentTranslator_SetWholeExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return NULL;
}



static PyObject *
PyvtkExtentTranslator_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWholeExtent();
      }
    else
      {
      tempr = op->vtkExtentTranslator::GetWholeExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkExtentTranslator::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetExtent(temp0);
      }
    else
      {
      op->vtkExtentTranslator::SetExtent(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkExtentTranslator_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkExtentTranslator_SetExtent_s1(self, args);
    case 1:
      return PyvtkExtentTranslator_SetExtent_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return NULL;
}



static PyObject *
PyvtkExtentTranslator_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtent();
      }
    else
      {
      tempr = op->vtkExtentTranslator::GetExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPiece(temp0);
      }
    else
      {
      op->vtkExtentTranslator::SetPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPiece();
      }
    else
      {
      tempr = op->vtkExtentTranslator::GetPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      op->vtkExtentTranslator::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPieces();
      }
    else
      {
      tempr = op->vtkExtentTranslator::GetNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGhostLevel(temp0);
      }
    else
      {
      op->vtkExtentTranslator::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGhostLevel();
      }
    else
      {
      tempr = op->vtkExtentTranslator::GetGhostLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_PieceToExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      tempr = op->vtkExtentTranslator::PieceToExtent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_PieceToExtentByPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PieceToExtentByPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

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
      tempr = op->vtkExtentTranslator::PieceToExtentByPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToBlock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSplitModeToBlock();
      }
    else
      {
      op->vtkExtentTranslator::SetSplitModeToBlock();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToXSlab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToXSlab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSplitModeToXSlab();
      }
    else
      {
      op->vtkExtentTranslator::SetSplitModeToXSlab();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToYSlab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToYSlab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSplitModeToYSlab();
      }
    else
      {
      op->vtkExtentTranslator::SetSplitModeToYSlab();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_SetSplitModeToZSlab(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplitModeToZSlab");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSplitModeToZSlab();
      }
    else
      {
      op->vtkExtentTranslator::SetSplitModeToZSlab();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtentTranslator_GetSplitMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplitMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtentTranslator *op = static_cast<vtkExtentTranslator *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSplitMode();
      }
    else
      {
      tempr = op->vtkExtentTranslator::GetSplitMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkExtentTranslator_Methods[] = {
  {(char*)"GetClassName", PyvtkExtentTranslator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtentTranslator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtentTranslator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtentTranslator\nC++: vtkExtentTranslator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtentTranslator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtentTranslator\nC++: vtkExtentTranslator *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetWholeExtent", PyvtkExtentTranslator_SetWholeExtent, 1,
   (char*)"V.SetWholeExtent(int, int, int, int, int, int)\nC++: void SetWholeExtent(int, int, int, int, int, int)\nV.SetWholeExtent((int, int, int, int, int, int))\nC++: void SetWholeExtent(int a[6])\n\n"},
  {(char*)"GetWholeExtent", PyvtkExtentTranslator_GetWholeExtent, 1,
   (char*)"V.GetWholeExtent() -> (int, int, int, int, int, int)\nC++: int *GetWholeExtent()\n\n"},
  {(char*)"SetExtent", PyvtkExtentTranslator_SetExtent, 1,
   (char*)"V.SetExtent(int, int, int, int, int, int)\nC++: void SetExtent(int, int, int, int, int, int)\nV.SetExtent((int, int, int, int, int, int))\nC++: void SetExtent(int a[6])\n\n"},
  {(char*)"GetExtent", PyvtkExtentTranslator_GetExtent, 1,
   (char*)"V.GetExtent() -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {(char*)"SetPiece", PyvtkExtentTranslator_SetPiece, 1,
   (char*)"V.SetPiece(int)\nC++: void SetPiece(int a)\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"GetPiece", PyvtkExtentTranslator_GetPiece, 1,
   (char*)"V.GetPiece() -> int\nC++: int GetPiece()\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"SetNumberOfPieces", PyvtkExtentTranslator_SetNumberOfPieces, 1,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"GetNumberOfPieces", PyvtkExtentTranslator_GetNumberOfPieces, 1,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"SetGhostLevel", PyvtkExtentTranslator_SetGhostLevel, 1,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"GetGhostLevel", PyvtkExtentTranslator_GetGhostLevel, 1,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nSet the Piece/NumPieces. Set the WholeExtent and then call\nPieceToExtent. The result can be obtained from the Extent ivar.\n"},
  {(char*)"PieceToExtent", PyvtkExtentTranslator_PieceToExtent, 1,
   (char*)"V.PieceToExtent() -> int\nC++: virtual int PieceToExtent()\n\nThese are the main methods that should be called. These methods\nare responsible for converting a piece to an extent. The\nsignatures without arguments are only thread safe when each\nthread accesses a different instance. The signatures with\narguments are fully thread safe.\n"},
  {(char*)"PieceToExtentByPoints", PyvtkExtentTranslator_PieceToExtentByPoints, 1,
   (char*)"V.PieceToExtentByPoints() -> int\nC++: virtual int PieceToExtentByPoints()\n\nThese are the main methods that should be called. These methods\nare responsible for converting a piece to an extent. The\nsignatures without arguments are only thread safe when each\nthread accesses a different instance. The signatures with\narguments are fully thread safe.\n"},
  {(char*)"SetSplitModeToBlock", PyvtkExtentTranslator_SetSplitModeToBlock, 1,
   (char*)"V.SetSplitModeToBlock()\nC++: void SetSplitModeToBlock()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {(char*)"SetSplitModeToXSlab", PyvtkExtentTranslator_SetSplitModeToXSlab, 1,
   (char*)"V.SetSplitModeToXSlab()\nC++: void SetSplitModeToXSlab()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {(char*)"SetSplitModeToYSlab", PyvtkExtentTranslator_SetSplitModeToYSlab, 1,
   (char*)"V.SetSplitModeToYSlab()\nC++: void SetSplitModeToYSlab()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {(char*)"SetSplitModeToZSlab", PyvtkExtentTranslator_SetSplitModeToZSlab, 1,
   (char*)"V.SetSplitModeToZSlab()\nC++: void SetSplitModeToZSlab()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {(char*)"GetSplitMode", PyvtkExtentTranslator_GetSplitMode, 1,
   (char*)"V.GetSplitMode() -> int\nC++: int GetSplitMode()\n\nHow should the streamer break up extents. Block mode tries to\nbreak an extent up into cube blocks.  It always chooses the\nlargest axis to split. Slab mode first breaks up the Z axis.  If\nit gets to one slice, then it starts breaking up other axes.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtentTranslator_StaticNew()
{
  return vtkExtentTranslator::New();
}

PyObject *PyVTKClass_vtkExtentTranslatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtentTranslator_StaticNew,
    PyvtkExtentTranslator_Methods,
    "vtkExtentTranslator", modulename,
    NULL, NULL,
    PyvtkExtentTranslator_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkExtentTranslator_Doc()
{
  static const char *docstring[] = {
    "vtkExtentTranslator - Generates a structured extent from unstructured.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkExtentTranslator generates a structured extent from an\nunstructured extent.  It uses a recursive scheme that splits the\nlargest axis.  A hard coded extent can be used for a starting point.\n\nCaveats:\n\nThis object is still under development.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtentTranslator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtentTranslatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtentTranslator", o) != 0)
    {
    Py_DECREF(o);
    }

}

