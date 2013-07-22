// python wrapper for vtkXMLPDataReader
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
#include "vtkXMLPDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLReaderNew
#endif

static const char **PyvtkXMLPDataReader_Doc();


static PyObject *
PyvtkXMLPDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataReader *op = static_cast<vtkXMLPDataReader *>(vp);

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
      tempr = op->vtkXMLPDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataReader *op = static_cast<vtkXMLPDataReader *>(vp);

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
      tempr = op->vtkXMLPDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataReader *op = static_cast<vtkXMLPDataReader *>(vp);

  vtkXMLPDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPDataReader::NewInstance();
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
PyvtkXMLPDataReader_GetNumberOfPieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataReader *op = static_cast<vtkXMLPDataReader *>(vp);

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
      tempr = op->vtkXMLPDataReader::GetNumberOfPieces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataReader *op = static_cast<vtkXMLPDataReader *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyOutputInformation(temp0, temp1);
      }
    else
      {
      op->vtkXMLPDataReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPDataReader\nC++: vtkXMLPDataReader *NewInstance()\n\n"},
  {(char*)"GetNumberOfPieces", PyvtkXMLPDataReader_GetNumberOfPieces, 1,
   (char*)"V.GetNumberOfPieces() -> int\nC++: int GetNumberOfPieces()\n\nGet the number of pieces from the summary file being read.\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLPDataReader_CopyOutputInformation, 1,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLPDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLPDataReader_Methods,
    "vtkXMLPDataReader", modulename,
    NULL, NULL,
    PyvtkXMLPDataReader_Doc(),
    PyVTKClass_vtkXMLReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPDataReader - Superclass for PVTK XML file readers.\n\n",
    "Superclass: vtkXMLReader\n\n",
    "vtkXMLPDataReader provides functionality common to all PVTK XML file\nreaders.  Concrete subclasses call upon this functionality when\nneeded.\n\nSee Also:\n\nvtkXMLDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

