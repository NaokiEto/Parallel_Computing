// python wrapper for vtkXMLPStructuredDataReader
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
#include "vtkXMLPStructuredDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPStructuredDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPStructuredDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPStructuredDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLPDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPDataReaderNew
#endif

static const char **PyvtkXMLPStructuredDataReader_Doc();


static PyObject *
PyvtkXMLPStructuredDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataReader *op = static_cast<vtkXMLPStructuredDataReader *>(vp);

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
      tempr = op->vtkXMLPStructuredDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataReader *op = static_cast<vtkXMLPStructuredDataReader *>(vp);

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
      tempr = op->vtkXMLPStructuredDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataReader *op = static_cast<vtkXMLPStructuredDataReader *>(vp);

  vtkXMLPStructuredDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPStructuredDataReader::NewInstance();
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
PyvtkXMLPStructuredDataReader_GetExtentTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataReader *op = static_cast<vtkXMLPStructuredDataReader *>(vp);

  vtkExtentTranslator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetExtentTranslator();
      }
    else
      {
      tempr = op->vtkXMLPStructuredDataReader::GetExtentTranslator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataReader *op = static_cast<vtkXMLPStructuredDataReader *>(vp);

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
      op->vtkXMLPStructuredDataReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPStructuredDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPStructuredDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPStructuredDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPStructuredDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPStructuredDataReader\nC++: vtkXMLPStructuredDataReader *NewInstance()\n\n"},
  {(char*)"GetExtentTranslator", PyvtkXMLPStructuredDataReader_GetExtentTranslator, 1,
   (char*)"V.GetExtentTranslator() -> vtkExtentTranslator\nC++: virtual vtkExtentTranslator *GetExtentTranslator()\n\nGet an extent translator that will create pieces matching the\ninput file's piece breakdown.  This can be used further down the\npipeline to prevent reading from outside this process's piece.\nThe translator is only valid after an UpdateInformation has been\ncalled.\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLPStructuredDataReader_CopyOutputInformation, 1,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLPStructuredDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLPStructuredDataReader_Methods,
    "vtkXMLPStructuredDataReader", modulename,
    NULL, NULL,
    PyvtkXMLPStructuredDataReader_Doc(),
    PyVTKClass_vtkXMLPDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPStructuredDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPStructuredDataReader - Superclass for parallel structured data\nXML readers.\n\n",
    "Superclass: vtkXMLPDataReader\n\n",
    "vtkXMLPStructuredDataReader provides functionality common to all\nparallel structured data format readers.\n\nSee Also:\n\nvtkXMLPImageDataReader vtkXMLPStructuredGridReader\nvtkXMLPRectilinearGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPStructuredDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPStructuredDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPStructuredDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

