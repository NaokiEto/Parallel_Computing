// python wrapper for vtkPieceRequestFilter
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
#include "vtkPieceRequestFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPieceRequestFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPieceRequestFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPieceRequestFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPieceRequestFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkPieceRequestFilter_Doc();


static PyObject *
PyvtkPieceRequestFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

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
      tempr = op->vtkPieceRequestFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

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
      tempr = op->vtkPieceRequestFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  vtkPieceRequestFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPieceRequestFilter::NewInstance();
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
PyvtkPieceRequestFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPieceRequestFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPieceRequestFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

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
      op->vtkPieceRequestFilter::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetNumberOfPiecesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

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
      tempr = op->vtkPieceRequestFilter::GetNumberOfPiecesMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetNumberOfPiecesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPiecesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

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
      tempr = op->vtkPieceRequestFilter::GetNumberOfPiecesMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

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
      tempr = op->vtkPieceRequestFilter::GetNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_SetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

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
      op->vtkPieceRequestFilter::SetPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetPieceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPieceMinValue();
      }
    else
      {
      tempr = op->vtkPieceRequestFilter::GetPieceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetPieceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPieceMaxValue();
      }
    else
      {
      tempr = op->vtkPieceRequestFilter::GetPieceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

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
      tempr = op->vtkPieceRequestFilter::GetPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPieceRequestFilter_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkPieceRequestFilter::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPieceRequestFilter_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkPieceRequestFilter::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPieceRequestFilter_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPieceRequestFilter_GetOutput_s1(self, args);
    case 1:
      return PyvtkPieceRequestFilter_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkPieceRequestFilter_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkPieceRequestFilter::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPieceRequestFilter_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPieceRequestFilter *op = static_cast<vtkPieceRequestFilter *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkPieceRequestFilter::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPieceRequestFilter_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPieceRequestFilter_SetInput_s1(self, args);
    case 2:
      return PyvtkPieceRequestFilter_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}


static PyMethodDef PyvtkPieceRequestFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkPieceRequestFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPieceRequestFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPieceRequestFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPieceRequestFilter\nC++: vtkPieceRequestFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPieceRequestFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPieceRequestFilter\nC++: vtkPieceRequestFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfPieces", PyvtkPieceRequestFilter_SetNumberOfPieces, 1,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int)\n\nThe total number of pieces.\n"},
  {(char*)"GetNumberOfPiecesMinValue", PyvtkPieceRequestFilter_GetNumberOfPiecesMinValue, 1,
   (char*)"V.GetNumberOfPiecesMinValue() -> int\nC++: int GetNumberOfPiecesMinValue()\n\nThe total number of pieces.\n"},
  {(char*)"GetNumberOfPiecesMaxValue", PyvtkPieceRequestFilter_GetNumberOfPiecesMaxValue, 1,
   (char*)"V.GetNumberOfPiecesMaxValue() -> int\nC++: int GetNumberOfPiecesMaxValue()\n\nThe total number of pieces.\n"},
  {(char*)"GetNumberOfPieces", PyvtkPieceRequestFilter_GetNumberOfPieces, 1,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nThe total number of pieces.\n"},
  {(char*)"SetPiece", PyvtkPieceRequestFilter_SetPiece, 1,
   (char*)"V.SetPiece(int)\nC++: void SetPiece(int)\n\nThe piece to extract.\n"},
  {(char*)"GetPieceMinValue", PyvtkPieceRequestFilter_GetPieceMinValue, 1,
   (char*)"V.GetPieceMinValue() -> int\nC++: int GetPieceMinValue()\n\nThe piece to extract.\n"},
  {(char*)"GetPieceMaxValue", PyvtkPieceRequestFilter_GetPieceMaxValue, 1,
   (char*)"V.GetPieceMaxValue() -> int\nC++: int GetPieceMaxValue()\n\nThe piece to extract.\n"},
  {(char*)"GetPiece", PyvtkPieceRequestFilter_GetPiece, 1,
   (char*)"V.GetPiece() -> int\nC++: int GetPiece()\n\nThe piece to extract.\n"},
  {(char*)"GetOutput", PyvtkPieceRequestFilter_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkDataObject\nC++: vtkDataObject *GetOutput()\nV.GetOutput(int) -> vtkDataObject\nC++: vtkDataObject *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetInput", PyvtkPieceRequestFilter_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int, vtkDataObject *)\n\nSet an input of this algorithm.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPieceRequestFilter_StaticNew()
{
  return vtkPieceRequestFilter::New();
}

PyObject *PyVTKClass_vtkPieceRequestFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPieceRequestFilter_StaticNew,
    PyvtkPieceRequestFilter_Methods,
    "vtkPieceRequestFilter", modulename,
    NULL, NULL,
    PyvtkPieceRequestFilter_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPieceRequestFilter_Doc()
{
  static const char *docstring[] = {
    "vtkPieceRequestFilter - Sets the piece request for upstream filters.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "Sends the piece and number of pieces to upstream filters; passes the\ninput to the output unmodified.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPieceRequestFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPieceRequestFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPieceRequestFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

