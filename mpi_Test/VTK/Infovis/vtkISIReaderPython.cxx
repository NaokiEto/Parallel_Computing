// python wrapper for vtkISIReader
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
#include "vtkISIReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkISIReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkISIReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkISIReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkISIReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkISIReader_Doc();


static PyObject *
PyvtkISIReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

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
      tempr = op->vtkISIReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

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
      tempr = op->vtkISIReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

  vtkISIReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkISIReader::NewInstance();
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
PyvtkISIReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkISIReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkISIReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

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
      tempr = op->vtkISIReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

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
      op->vtkISIReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_GetDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

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
      tempr = op->vtkISIReader::GetDelimiter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_SetDelimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

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
      op->vtkISIReader::SetDelimiter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_GetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

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
      tempr = op->vtkISIReader::GetMaxRecords();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkISIReader_SetMaxRecords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxRecords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkISIReader *op = static_cast<vtkISIReader *>(vp);

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
      op->vtkISIReader::SetMaxRecords(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkISIReader_Methods[] = {
  {(char*)"GetClassName", PyvtkISIReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkISIReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkISIReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkISIReader\nC++: vtkISIReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkISIReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkISIReader\nC++: vtkISIReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkISIReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet/get the file to load\n"},
  {(char*)"SetFileName", PyvtkISIReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet/get the file to load\n"},
  {(char*)"GetDelimiter", PyvtkISIReader_GetDelimiter, 1,
   (char*)"V.GetDelimiter() -> string\nC++: char *GetDelimiter()\n\nSet/get the delimiter to be used for concatenating field data\n(default: \";\")\n"},
  {(char*)"SetDelimiter", PyvtkISIReader_SetDelimiter, 1,
   (char*)"V.SetDelimiter(string)\nC++: void SetDelimiter(char *)\n\nSet/get the delimiter to be used for concatenating field data\n(default: \";\")\n"},
  {(char*)"GetMaxRecords", PyvtkISIReader_GetMaxRecords, 1,
   (char*)"V.GetMaxRecords() -> int\nC++: int GetMaxRecords()\n\nSet/get the maximum number of records to read from the file (zero\n= unlimited)\n"},
  {(char*)"SetMaxRecords", PyvtkISIReader_SetMaxRecords, 1,
   (char*)"V.SetMaxRecords(int)\nC++: void SetMaxRecords(int a)\n\nSet/get the maximum number of records to read from the file (zero\n= unlimited)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkISIReader_StaticNew()
{
  return vtkISIReader::New();
}

PyObject *PyVTKClass_vtkISIReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkISIReader_StaticNew,
    PyvtkISIReader_Methods,
    "vtkISIReader", modulename,
    NULL, NULL,
    PyvtkISIReader_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkISIReader_Doc()
{
  static const char *docstring[] = {
    "vtkISIReader - reader for ISI files\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "ISI is a tagged format for expressing bibliographic citations.  Data\nis structured as a collection of records with each record composed of\none-to-many fields.  See\n\nhttp://isibasic.com/help/helpprn.html#dialog_export_format\n\nfor details.  vtkISIReader will convert an ISI file into a vtkTable,\nwith the set of table columns determined dynamically from the\ncontents of the file.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkISIReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkISIReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkISIReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

