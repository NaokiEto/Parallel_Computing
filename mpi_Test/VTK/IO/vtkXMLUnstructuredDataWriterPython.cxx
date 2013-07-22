// python wrapper for vtkXMLUnstructuredDataWriter
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
#include "vtkXMLUnstructuredDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLUnstructuredDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLUnstructuredDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLUnstructuredDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLUnstructuredDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLWriterNew
#endif

static const char **PyvtkXMLUnstructuredDataWriter_Doc();


static PyObject *
PyvtkXMLUnstructuredDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

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
      tempr = op->vtkXMLUnstructuredDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

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
      tempr = op->vtkXMLUnstructuredDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  vtkXMLUnstructuredDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLUnstructuredDataWriter::NewInstance();
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
PyvtkXMLUnstructuredDataWriter_SetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

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
      op->vtkXMLUnstructuredDataWriter::SetNumberOfPieces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

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
      tempr = op->vtkXMLUnstructuredDataWriter::GetNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_SetWritePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWritePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWritePiece(temp0);
      }
    else
      {
      op->vtkXMLUnstructuredDataWriter::SetWritePiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_GetWritePiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWritePiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWritePiece();
      }
    else
      {
      tempr = op->vtkXMLUnstructuredDataWriter::GetWritePiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_SetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

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
      op->vtkXMLUnstructuredDataWriter::SetGhostLevel(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataWriter_GetGhostLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataWriter *op = static_cast<vtkXMLUnstructuredDataWriter *>(vp);

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
      tempr = op->vtkXMLUnstructuredDataWriter::GetGhostLevel();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLUnstructuredDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLUnstructuredDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLUnstructuredDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLUnstructuredDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLUnstructuredDataWriter\nC++: vtkXMLUnstructuredDataWriter *NewInstance()\n\n"},
  {(char*)"SetNumberOfPieces", PyvtkXMLUnstructuredDataWriter_SetNumberOfPieces, 1,
   (char*)"V.SetNumberOfPieces(int)\nC++: void SetNumberOfPieces(int a)\n\nGet/Set the number of pieces used to stream the image through the\npipeline while writing to the file.\n"},
  {(char*)"GetNumberOfPieces", PyvtkXMLUnstructuredDataWriter_GetNumberOfPieces, 1,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet/Set the number of pieces used to stream the image through the\npipeline while writing to the file.\n"},
  {(char*)"SetWritePiece", PyvtkXMLUnstructuredDataWriter_SetWritePiece, 1,
   (char*)"V.SetWritePiece(int)\nC++: void SetWritePiece(int a)\n\nGet/Set the piece to write to the file.  If this is negative or\nequal to the NumberOfPieces, all pieces will be written.\n"},
  {(char*)"GetWritePiece", PyvtkXMLUnstructuredDataWriter_GetWritePiece, 1,
   (char*)"V.GetWritePiece() -> int\nC++: int GetWritePiece()\n\nGet/Set the piece to write to the file.  If this is negative or\nequal to the NumberOfPieces, all pieces will be written.\n"},
  {(char*)"SetGhostLevel", PyvtkXMLUnstructuredDataWriter_SetGhostLevel, 1,
   (char*)"V.SetGhostLevel(int)\nC++: void SetGhostLevel(int a)\n\nGet/Set the ghost level used to pad each piece.\n"},
  {(char*)"GetGhostLevel", PyvtkXMLUnstructuredDataWriter_GetGhostLevel, 1,
   (char*)"V.GetGhostLevel() -> int\nC++: int GetGhostLevel()\n\nGet/Set the ghost level used to pad each piece.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLUnstructuredDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLUnstructuredDataWriter_Methods,
    "vtkXMLUnstructuredDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLUnstructuredDataWriter_Doc(),
    PyVTKClass_vtkXMLWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLUnstructuredDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLUnstructuredDataWriter - Superclass for VTK XML unstructured\ndata writers.\n\n",
    "Superclass: vtkXMLWriter\n\n",
    "vtkXMLUnstructuredDataWriter provides VTK XML writing functionality\nthat is common among all the unstructured data formats.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLUnstructuredDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLUnstructuredDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLUnstructuredDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

