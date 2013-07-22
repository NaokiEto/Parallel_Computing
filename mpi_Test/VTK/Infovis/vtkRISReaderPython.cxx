// python wrapper for vtkRISReader
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
#include "vtkRISReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRISReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRISReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRISReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRISReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkRISReader_Doc();


static PyObject *
PyvtkRISReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

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
      tempr = op->vtkRISReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRISReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

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
      tempr = op->vtkRISReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRISReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  vtkRISReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRISReader::NewInstance();
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
PyvtkRISReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRISReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRISReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRISReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkRISReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRISReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkRISReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRISReader_GetDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDelimiter();
      }
    else
      {
      tempr = op->vtkRISReader::GetDelimiter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRISReader_SetDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDelimiter(temp0);
      }
    else
      {
      op->vtkRISReader::SetDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRISReader_GetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxRecords();
      }
    else
      {
      tempr = op->vtkRISReader::GetMaxRecords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRISReader_SetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRISReader *op = static_cast<vtkRISReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaxRecords(temp0);
      }
    else
      {
      op->vtkRISReader::SetMaxRecords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRISReader_Methods[] = {
  {(char*)"GetClassName", PyvtkRISReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRISReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRISReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRISReader\nC++: vtkRISReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRISReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRISReader\nC++: vtkRISReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkRISReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/get the file to load\n"},
  {(char*)"SetFileName", PyvtkRISReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/get the file to load\n"},
  {(char*)"GetDelimiter", PyvtkRISReader_GetDelimiter, 1,
   (char*)"V.GetDelimiter() -> string\nC++: char *GetDelimiter()\n\nSet/get the delimiter to be used for concatenating field data\n(default: \";\")\n"},
  {(char*)"SetDelimiter", PyvtkRISReader_SetDelimiter, 1,
   (char*)"V.SetDelimiter(string)\nC++: void SetDelimiter(char *)\n\nSet/get the delimiter to be used for concatenating field data\n(default: \";\")\n"},
  {(char*)"GetMaxRecords", PyvtkRISReader_GetMaxRecords, 1,
   (char*)"V.GetMaxRecords() -> int\nC++: int GetMaxRecords()\n\nSet/get the maximum number of records to read from the file (zero\n= unlimited)\n"},
  {(char*)"SetMaxRecords", PyvtkRISReader_SetMaxRecords, 1,
   (char*)"V.SetMaxRecords(int)\nC++: void SetMaxRecords(int a)\n\nSet/get the maximum number of records to read from the file (zero\n= unlimited)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRISReader_StaticNew()
{
  return vtkRISReader::New();
}

PyObject *PyVTKClass_vtkRISReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRISReader_StaticNew,
    PyvtkRISReader_Methods,
    "vtkRISReader", modulename,
    NULL, NULL,
    PyvtkRISReader_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRISReader_Doc()
{
  static const char *docstring[] = {
    "vtkRISReader - reader for RIS files\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "RIS is a tagged format for expressing bibliographic citations.  Data\nis structured as a collection of records with each record composed of\none-to-many fields.  See\n\nhttp://en.wikipedia.org/wiki/RIS_(file_format)\nhttp://www.refman.com/support/risformat_intro.asp\nhttp://www.adeptscience.co.uk/kb/article/A626\n\nfor details.  vtkRISReader will convert an RIS file into a vtkTable,\nwith the set of table ",
    "columns determined dynamically from the\ncontents of the file.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRISReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRISReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRISReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

