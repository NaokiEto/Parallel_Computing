// python wrapper for vtkXMLPDataWriter
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
#include "vtkXMLPDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLWriterNew
#endif

static const char **PyvtkXMLPDataWriter_Doc();


static PyObject *
PyvtkXMLPDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

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
      tempr = op->vtkXMLPDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

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
      tempr = op->vtkXMLPDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  vtkXMLPDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPDataWriter::NewInstance();
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
PyvtkXMLPDataWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

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
      op->vtkXMLPDataWriter::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

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
      tempr = op->vtkXMLPDataWriter::GetNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_SetStartPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetStartPiece(temp0);
      }
    else
      {
      op->vtkXMLPDataWriter::SetStartPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetStartPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStartPiece();
      }
    else
      {
      tempr = op->vtkXMLPDataWriter::GetStartPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_SetEndPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetEndPiece(temp0);
      }
    else
      {
      op->vtkXMLPDataWriter::SetEndPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetEndPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetEndPiece();
      }
    else
      {
      tempr = op->vtkXMLPDataWriter::GetEndPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

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
      op->vtkXMLPDataWriter::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

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
      tempr = op->vtkXMLPDataWriter::GetGhostLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_SetWriteSummaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteSummaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWriteSummaryFile(temp0);
      }
    else
      {
      op->vtkXMLPDataWriter::SetWriteSummaryFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_GetWriteSummaryFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteSummaryFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWriteSummaryFile();
      }
    else
      {
      tempr = op->vtkXMLPDataWriter::GetWriteSummaryFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_WriteSummaryFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteSummaryFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteSummaryFileOn();
      }
    else
      {
      op->vtkXMLPDataWriter::WriteSummaryFileOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataWriter_WriteSummaryFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteSummaryFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataWriter *op = static_cast<vtkXMLPDataWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WriteSummaryFileOff();
      }
    else
      {
      op->vtkXMLPDataWriter::WriteSummaryFileOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPDataWriter\nC++: vtkXMLPDataWriter *NewInstance()\n\n"},
  {(char*)"SetNumberOfPieces", PyvtkXMLPDataWriter_SetNumberOfPieces, 1,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nGet/Set the number of pieces that are being written in parallel.\n"},
  {(char*)"GetNumberOfPieces", PyvtkXMLPDataWriter_GetNumberOfPieces, 1,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet/Set the number of pieces that are being written in parallel.\n"},
  {(char*)"SetStartPiece", PyvtkXMLPDataWriter_SetStartPiece, 1,
   (char*)"V.SetStartPiece(int)\nC++: void SetStartPiece(int a)\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {(char*)"GetStartPiece", PyvtkXMLPDataWriter_GetStartPiece, 1,
   (char*)"V.GetStartPiece() -> int\nC++: int GetStartPiece()\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {(char*)"SetEndPiece", PyvtkXMLPDataWriter_SetEndPiece, 1,
   (char*)"V.SetEndPiece(int)\nC++: void SetEndPiece(int a)\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {(char*)"GetEndPiece", PyvtkXMLPDataWriter_GetEndPiece, 1,
   (char*)"V.GetEndPiece() -> int\nC++: int GetEndPiece()\n\nGet/Set the range of pieces assigned to this writer.\n"},
  {(char*)"SetGhostLevel", PyvtkXMLPDataWriter_SetGhostLevel, 1,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nGet/Set the ghost level used for this writer's piece.\n"},
  {(char*)"GetGhostLevel", PyvtkXMLPDataWriter_GetGhostLevel, 1,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nGet/Set the ghost level used for this writer's piece.\n"},
  {(char*)"SetWriteSummaryFile", PyvtkXMLPDataWriter_SetWriteSummaryFile, 1,
   (char*)"V.SetWriteSummaryFile(int)\nC++: virtual void SetWriteSummaryFile(int flag)\n\nGet/Set whether this instance of the writer should write the\nsummary file that refers to all of the pieces' individual files.\nDefault is yes only for piece 0 writer.\n"},
  {(char*)"GetWriteSummaryFile", PyvtkXMLPDataWriter_GetWriteSummaryFile, 1,
   (char*)"V.GetWriteSummaryFile() -> int\nC++: int GetWriteSummaryFile()\n\nGet/Set whether this instance of the writer should write the\nsummary file that refers to all of the pieces' individual files.\nDefault is yes only for piece 0 writer.\n"},
  {(char*)"WriteSummaryFileOn", PyvtkXMLPDataWriter_WriteSummaryFileOn, 1,
   (char*)"V.WriteSummaryFileOn()\nC++: void WriteSummaryFileOn()\n\nGet/Set whether this instance of the writer should write the\nsummary file that refers to all of the pieces' individual files.\nDefault is yes only for piece 0 writer.\n"},
  {(char*)"WriteSummaryFileOff", PyvtkXMLPDataWriter_WriteSummaryFileOff, 1,
   (char*)"V.WriteSummaryFileOff()\nC++: void WriteSummaryFileOff()\n\nGet/Set whether this instance of the writer should write the\nsummary file that refers to all of the pieces' individual files.\nDefault is yes only for piece 0 writer.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLPDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLPDataWriter_Methods,
    "vtkXMLPDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPDataWriter_Doc(),
    PyVTKClass_vtkXMLWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPDataWriter - Write data in a parallel XML format.\n\n",
    "Superclass: vtkXMLWriter\n\n",
    "vtkXMLPDataWriter is the superclass for all XML parallel data set\nwriters.  It provides functionality needed for writing parallel\nformats, such as the selection of which writer writes the summary\nfile and what range of pieces are assigned to each serial writer.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

