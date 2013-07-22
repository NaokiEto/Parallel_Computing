// python wrapper for vtkDicer
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
#include "vtkDicer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDicer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDicer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDicerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDicerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkDicer_Doc();


static PyObject *
PyvtkDicer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

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
      tempr = op->vtkDicer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

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
      tempr = op->vtkDicer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  vtkDicer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDicer::NewInstance();
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
PyvtkDicer_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldData(temp0);
      }
    else
      {
      op->vtkDicer::SetFieldData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldData();
      }
    else
      {
      tempr = op->vtkDicer::GetFieldData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_FieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FieldDataOn();
      }
    else
      {
      op->vtkDicer::FieldDataOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_FieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FieldDataOff();
      }
    else
      {
      op->vtkDicer::FieldDataOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDiceMode(temp0);
      }
    else
      {
      op->vtkDicer::SetDiceMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetDiceModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiceModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiceModeMinValue();
      }
    else
      {
      tempr = op->vtkDicer::GetDiceModeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetDiceModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiceModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiceModeMaxValue();
      }
    else
      {
      tempr = op->vtkDicer::GetDiceModeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetDiceMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiceMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDiceMode();
      }
    else
      {
      tempr = op->vtkDicer::GetDiceMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceModeToNumberOfPointsPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceModeToNumberOfPointsPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDiceModeToNumberOfPointsPerPiece();
      }
    else
      {
      op->vtkDicer::SetDiceModeToNumberOfPointsPerPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceModeToSpecifiedNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceModeToSpecifiedNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDiceModeToSpecifiedNumberOfPieces();
      }
    else
      {
      op->vtkDicer::SetDiceModeToSpecifiedNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetDiceModeToMemoryLimitPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiceModeToMemoryLimitPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDiceModeToMemoryLimitPerPiece();
      }
    else
      {
      op->vtkDicer::SetDiceModeToMemoryLimitPerPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfActualPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfActualPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfActualPieces();
      }
    else
      {
      tempr = op->vtkDicer::GetNumberOfActualPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetNumberOfPointsPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPointsPerPiece(temp0);
      }
    else
      {
      op->vtkDicer::SetNumberOfPointsPerPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPointsPerPieceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerPieceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointsPerPieceMinValue();
      }
    else
      {
      tempr = op->vtkDicer::GetNumberOfPointsPerPieceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPointsPerPieceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerPieceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointsPerPieceMaxValue();
      }
    else
      {
      tempr = op->vtkDicer::GetNumberOfPointsPerPieceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPointsPerPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointsPerPiece();
      }
    else
      {
      tempr = op->vtkDicer::GetNumberOfPointsPerPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

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
      op->vtkDicer::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPiecesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPiecesMinValue();
      }
    else
      {
      tempr = op->vtkDicer::GetNumberOfPiecesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPiecesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPiecesMaxValue();
      }
    else
      {
      tempr = op->vtkDicer::GetNumberOfPiecesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

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
      tempr = op->vtkDicer::GetNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_SetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  unsigned long temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMemoryLimit(temp0);
      }
    else
      {
      op->vtkDicer::SetMemoryLimit(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetMemoryLimitMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimitMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMemoryLimitMinValue();
      }
    else
      {
      tempr = op->vtkDicer::GetMemoryLimitMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetMemoryLimitMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimitMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMemoryLimitMaxValue();
      }
    else
      {
      tempr = op->vtkDicer::GetMemoryLimitMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDicer_GetMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDicer *op = static_cast<vtkDicer *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMemoryLimit();
      }
    else
      {
      tempr = op->vtkDicer::GetMemoryLimit();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDicer_Methods[] = {
  {(char*)"GetClassName", PyvtkDicer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDicer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDicer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDicer\nC++: vtkDicer *NewInstance()\n\n"},
  {(char*)"SetFieldData", PyvtkDicer_SetFieldData, 1,
   (char*)"V.SetFieldData(int)\nC++: void SetFieldData(int a)\n\nSet/Get the flag which controls whether to generate point scalar\ndata or point field data. If this flag is off, scalar data is\ngenerated.  Otherwise, field data is generated. Note that the\ngenerated the data are integer numbers indicating which piece a\nparticular point belongs to.\n"},
  {(char*)"GetFieldData", PyvtkDicer_GetFieldData, 1,
   (char*)"V.GetFieldData() -> int\nC++: int GetFieldData()\n\nSet/Get the flag which controls whether to generate point scalar\ndata or point field data. If this flag is off, scalar data is\ngenerated.  Otherwise, field data is generated. Note that the\ngenerated the data are integer numbers indicating which piece a\nparticular point belongs to.\n"},
  {(char*)"FieldDataOn", PyvtkDicer_FieldDataOn, 1,
   (char*)"V.FieldDataOn()\nC++: void FieldDataOn()\n\nSet/Get the flag which controls whether to generate point scalar\ndata or point field data. If this flag is off, scalar data is\ngenerated.  Otherwise, field data is generated. Note that the\ngenerated the data are integer numbers indicating which piece a\nparticular point belongs to.\n"},
  {(char*)"FieldDataOff", PyvtkDicer_FieldDataOff, 1,
   (char*)"V.FieldDataOff()\nC++: void FieldDataOff()\n\nSet/Get the flag which controls whether to generate point scalar\ndata or point field data. If this flag is off, scalar data is\ngenerated.  Otherwise, field data is generated. Note that the\ngenerated the data are integer numbers indicating which piece a\nparticular point belongs to.\n"},
  {(char*)"SetDiceMode", PyvtkDicer_SetDiceMode, 1,
   (char*)"V.SetDiceMode(int)\nC++: void SetDiceMode(int)\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"GetDiceModeMinValue", PyvtkDicer_GetDiceModeMinValue, 1,
   (char*)"V.GetDiceModeMinValue() -> int\nC++: int GetDiceModeMinValue()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"GetDiceModeMaxValue", PyvtkDicer_GetDiceModeMaxValue, 1,
   (char*)"V.GetDiceModeMaxValue() -> int\nC++: int GetDiceModeMaxValue()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"GetDiceMode", PyvtkDicer_GetDiceMode, 1,
   (char*)"V.GetDiceMode() -> int\nC++: int GetDiceMode()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"SetDiceModeToNumberOfPointsPerPiece", PyvtkDicer_SetDiceModeToNumberOfPointsPerPiece, 1,
   (char*)"V.SetDiceModeToNumberOfPointsPerPiece()\nC++: void SetDiceModeToNumberOfPointsPerPiece()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"SetDiceModeToSpecifiedNumberOfPieces", PyvtkDicer_SetDiceModeToSpecifiedNumberOfPieces, 1,
   (char*)"V.SetDiceModeToSpecifiedNumberOfPieces()\nC++: void SetDiceModeToSpecifiedNumberOfPieces()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"SetDiceModeToMemoryLimitPerPiece", PyvtkDicer_SetDiceModeToMemoryLimitPerPiece, 1,
   (char*)"V.SetDiceModeToMemoryLimitPerPiece()\nC++: void SetDiceModeToMemoryLimitPerPiece()\n\nSpecify the method to determine how many pieces the data should\nbe broken into. By default, the number of points per piece is\nused.\n"},
  {(char*)"GetNumberOfActualPieces", PyvtkDicer_GetNumberOfActualPieces, 1,
   (char*)"V.GetNumberOfActualPieces() -> int\nC++: int GetNumberOfActualPieces()\n\nUse the following method after the filter has updated to\ndetermine the actual number of pieces the data was separated\ninto.\n"},
  {(char*)"SetNumberOfPointsPerPiece", PyvtkDicer_SetNumberOfPointsPerPiece, 1,
   (char*)"V.SetNumberOfPointsPerPiece(int)\nC++: void SetNumberOfPointsPerPiece(int)\n\nControl piece size based on the maximum number of points per\npiece. (This ivar has effect only when the DiceMode is set to\nSetDiceModeToNumberOfPoints().)\n"},
  {(char*)"GetNumberOfPointsPerPieceMinValue", PyvtkDicer_GetNumberOfPointsPerPieceMinValue, 1,
   (char*)"V.GetNumberOfPointsPerPieceMinValue() -> int\nC++: int GetNumberOfPointsPerPieceMinValue()\n\nControl piece size based on the maximum number of points per\npiece. (This ivar has effect only when the DiceMode is set to\nSetDiceModeToNumberOfPoints().)\n"},
  {(char*)"GetNumberOfPointsPerPieceMaxValue", PyvtkDicer_GetNumberOfPointsPerPieceMaxValue, 1,
   (char*)"V.GetNumberOfPointsPerPieceMaxValue() -> int\nC++: int GetNumberOfPointsPerPieceMaxValue()\n\nControl piece size based on the maximum number of points per\npiece. (This ivar has effect only when the DiceMode is set to\nSetDiceModeToNumberOfPoints().)\n"},
  {(char*)"GetNumberOfPointsPerPiece", PyvtkDicer_GetNumberOfPointsPerPiece, 1,
   (char*)"V.GetNumberOfPointsPerPiece() -> int\nC++: int GetNumberOfPointsPerPiece()\n\nControl piece size based on the maximum number of points per\npiece. (This ivar has effect only when the DiceMode is set to\nSetDiceModeToNumberOfPoints().)\n"},
  {(char*)"SetNumberOfPieces", PyvtkDicer_SetNumberOfPieces, 1,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int)\n\nSet/Get the number of pieces the object is to be separated into.\n(This ivar has effect only when the DiceMode is set to\nSetDiceModeToSpecifiedNumber()). Note that the ivar\nNumberOfPieces is a target - depending on the particulars of the\ndata, more or less number of pieces than the target value may be\ncreated.\n"},
  {(char*)"GetNumberOfPiecesMinValue", PyvtkDicer_GetNumberOfPiecesMinValue, 1,
   (char*)"V.GetNumberOfPiecesMinValue() -> int\nC++: int GetNumberOfPiecesMinValue()\n\nSet/Get the number of pieces the object is to be separated into.\n(This ivar has effect only when the DiceMode is set to\nSetDiceModeToSpecifiedNumber()). Note that the ivar\nNumberOfPieces is a target - depending on the particulars of the\ndata, more or less number of pieces than the target value may be\ncreated.\n"},
  {(char*)"GetNumberOfPiecesMaxValue", PyvtkDicer_GetNumberOfPiecesMaxValue, 1,
   (char*)"V.GetNumberOfPiecesMaxValue() -> int\nC++: int GetNumberOfPiecesMaxValue()\n\nSet/Get the number of pieces the object is to be separated into.\n(This ivar has effect only when the DiceMode is set to\nSetDiceModeToSpecifiedNumber()). Note that the ivar\nNumberOfPieces is a target - depending on the particulars of the\ndata, more or less number of pieces than the target value may be\ncreated.\n"},
  {(char*)"GetNumberOfPieces", PyvtkDicer_GetNumberOfPieces, 1,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nSet/Get the number of pieces the object is to be separated into.\n(This ivar has effect only when the DiceMode is set to\nSetDiceModeToSpecifiedNumber()). Note that the ivar\nNumberOfPieces is a target - depending on the particulars of the\ndata, more or less number of pieces than the target value may be\ncreated.\n"},
  {(char*)"SetMemoryLimit", PyvtkDicer_SetMemoryLimit, 1,
   (char*)"V.SetMemoryLimit(int)\nC++: void SetMemoryLimit(unsigned long)\n\nControl piece size based on a memory limit.  (This ivar has\neffect only when the DiceMode is set to\nSetDiceModeToMemoryLimit()). The memory limit should be set in\nkilobytes.\n"},
  {(char*)"GetMemoryLimitMinValue", PyvtkDicer_GetMemoryLimitMinValue, 1,
   (char*)"V.GetMemoryLimitMinValue() -> int\nC++: unsigned long GetMemoryLimitMinValue()\n\nControl piece size based on a memory limit.  (This ivar has\neffect only when the DiceMode is set to\nSetDiceModeToMemoryLimit()). The memory limit should be set in\nkilobytes.\n"},
  {(char*)"GetMemoryLimitMaxValue", PyvtkDicer_GetMemoryLimitMaxValue, 1,
   (char*)"V.GetMemoryLimitMaxValue() -> int\nC++: unsigned long GetMemoryLimitMaxValue()\n\nControl piece size based on a memory limit.  (This ivar has\neffect only when the DiceMode is set to\nSetDiceModeToMemoryLimit()). The memory limit should be set in\nkilobytes.\n"},
  {(char*)"GetMemoryLimit", PyvtkDicer_GetMemoryLimit, 1,
   (char*)"V.GetMemoryLimit() -> int\nC++: unsigned long GetMemoryLimit()\n\nControl piece size based on a memory limit.  (This ivar has\neffect only when the DiceMode is set to\nSetDiceModeToMemoryLimit()). The memory limit should be set in\nkilobytes.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkDicerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkDicer_Methods,
    "vtkDicer", modulename,
    NULL, NULL,
    PyvtkDicer_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDicer_Doc()
{
  static const char *docstring[] = {
    "vtkDicer - abstract superclass to divide dataset into pieces\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "Subclasses of vtkDicer divides the input dataset into separate\npieces.  These pieces can then be operated on by other filters (e.g.,\nvtkThreshold). One application is to break very large polygonal\nmodels into pieces and performing viewing and occlusion culling on\nthe pieces. Multiple pieces can also be streamed through the\nvisualization pipeline.\n\nTo use this filter, you must specify the execution",
    " mode of the\nfilter; i.e., set the way that the piece size is controlled (do this\nby setting the DiceMode ivar). The filter does not change the\ngeometry or topology of the input dataset, rather it generates\ninteger numbers that indicate which piece a particular point belongs\nto (i.e., it modifies the point and cell attribute data). The integer\nnumber can be placed into the output scalar data, or t",
    "he output field\ndata.\n\nCaveats:\n\nThe number of pieces generated may not equal the specified number of\npieces. Use the method GetNumberOfActualPieces() after filter\nexecution to get the actual number of pieces generated.\n\nSee Also:\n\nvtkOBBDicer vtkConnectedDicer vtkSpatialDicer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDicer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDicerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDicer", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DICE_MODE_NUMBER_OF_POINTS", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DICE_MODE_SPECIFIED_NUMBER", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DICE_MODE_MEMORY_LIMIT", o) != 0)
    {
    Py_DECREF(o);
    }

}

