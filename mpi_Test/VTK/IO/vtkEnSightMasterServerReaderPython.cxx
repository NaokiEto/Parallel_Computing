// python wrapper for vtkEnSightMasterServerReader
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
#include "vtkEnSightMasterServerReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEnSightMasterServerReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEnSightMasterServerReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEnSightMasterServerReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEnSightMasterServerReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
#endif

static const char **PyvtkEnSightMasterServerReader_Doc();


static PyObject *
PyvtkEnSightMasterServerReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

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
      tempr = op->vtkEnSightMasterServerReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

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
      tempr = op->vtkEnSightMasterServerReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  vtkEnSightMasterServerReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEnSightMasterServerReader::NewInstance();
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
PyvtkEnSightMasterServerReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkEnSightMasterServerReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkEnSightMasterServerReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_DetermineFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetermineFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->DetermineFileName(temp0);
      }
    else
      {
      tempr = op->vtkEnSightMasterServerReader::DetermineFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_GetPieceCaseFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceCaseFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPieceCaseFileName();
      }
    else
      {
      tempr = op->vtkEnSightMasterServerReader::GetPieceCaseFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_SetCurrentPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentPiece(temp0);
      }
    else
      {
      op->vtkEnSightMasterServerReader::SetCurrentPiece(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_GetCurrentPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentPiece();
      }
    else
      {
      tempr = op->vtkEnSightMasterServerReader::GetCurrentPiece();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightMasterServerReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightMasterServerReader *op = static_cast<vtkEnSightMasterServerReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CanReadFile(temp0);
      }
    else
      {
      tempr = op->vtkEnSightMasterServerReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkEnSightMasterServerReader_Methods[] = {
  {(char*)"GetClassName", PyvtkEnSightMasterServerReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnSightMasterServerReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnSightMasterServerReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEnSightMasterServerReader\nC++: vtkEnSightMasterServerReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkEnSightMasterServerReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkEnSightMasterServerReader\nC++: vtkEnSightMasterServerReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"DetermineFileName", PyvtkEnSightMasterServerReader_DetermineFileName, 1,
   (char*)"V.DetermineFileName(int) -> int\nC++: int DetermineFileName(int piece)\n\nDetermine which file should be read for piece\n"},
  {(char*)"GetPieceCaseFileName", PyvtkEnSightMasterServerReader_GetPieceCaseFileName, 1,
   (char*)"V.GetPieceCaseFileName() -> string\nC++: char *GetPieceCaseFileName()\n\nGet the file name that will be read.\n"},
  {(char*)"SetCurrentPiece", PyvtkEnSightMasterServerReader_SetCurrentPiece, 1,
   (char*)"V.SetCurrentPiece(int)\nC++: void SetCurrentPiece(int a)\n\nSet or get the current piece.\n"},
  {(char*)"GetCurrentPiece", PyvtkEnSightMasterServerReader_GetCurrentPiece, 1,
   (char*)"V.GetCurrentPiece() -> int\nC++: int GetCurrentPiece()\n\nSet or get the current piece.\n"},
  {(char*)"CanReadFile", PyvtkEnSightMasterServerReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkEnSightMasterServerReader_StaticNew()
{
  return vtkEnSightMasterServerReader::New();
}

PyObject *PyVTKClass_vtkEnSightMasterServerReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkEnSightMasterServerReader_StaticNew,
    PyvtkEnSightMasterServerReader_Methods,
    "vtkEnSightMasterServerReader", modulename,
    NULL, NULL,
    PyvtkEnSightMasterServerReader_Doc(),
    PyVTKClass_vtkGenericEnSightReaderNew(modulename));
  return cls;
}

const char **PyvtkEnSightMasterServerReader_Doc()
{
  static const char *docstring[] = {
    "vtkEnSightMasterServerReader - reader for compund EnSight files\n\n",
    "Superclass: vtkGenericEnSightReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnSightMasterServerReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnSightMasterServerReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnSightMasterServerReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

