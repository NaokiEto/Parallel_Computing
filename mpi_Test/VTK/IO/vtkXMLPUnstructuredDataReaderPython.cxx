// python wrapper for vtkXMLPUnstructuredDataReader
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
#include "vtkXMLPUnstructuredDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPUnstructuredDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPUnstructuredDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPUnstructuredDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPUnstructuredDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLPDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPDataReaderNew
#endif

static const char **PyvtkXMLPUnstructuredDataReader_Doc();


static PyObject *
PyvtkXMLPUnstructuredDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataReader *op = static_cast<vtkXMLPUnstructuredDataReader *>(vp);

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
      tempr = op->vtkXMLPUnstructuredDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataReader *op = static_cast<vtkXMLPUnstructuredDataReader *>(vp);

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
      tempr = op->vtkXMLPUnstructuredDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataReader *op = static_cast<vtkXMLPUnstructuredDataReader *>(vp);

  vtkXMLPUnstructuredDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPUnstructuredDataReader::NewInstance();
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
PyvtkXMLPUnstructuredDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataReader *op = static_cast<vtkXMLPUnstructuredDataReader *>(vp);

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
      op->vtkXMLPUnstructuredDataReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPUnstructuredDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPUnstructuredDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPUnstructuredDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPUnstructuredDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPUnstructuredDataReader\nC++: vtkXMLPUnstructuredDataReader *NewInstance()\n\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLPUnstructuredDataReader_CopyOutputInformation, 1,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLPUnstructuredDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLPUnstructuredDataReader_Methods,
    "vtkXMLPUnstructuredDataReader", modulename,
    NULL, NULL,
    PyvtkXMLPUnstructuredDataReader_Doc(),
    PyVTKClass_vtkXMLPDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPUnstructuredDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPUnstructuredDataReader - Superclass for parallel unstructured\ndata XML readers.\n\n",
    "Superclass: vtkXMLPDataReader\n\n",
    "vtkXMLPUnstructuredDataReader provides functionality common to all\nparallel unstructured data format readers.\n\nSee Also:\n\nvtkXMLPPolyDataReader vtkXMLPUnstructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPUnstructuredDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPUnstructuredDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPUnstructuredDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

