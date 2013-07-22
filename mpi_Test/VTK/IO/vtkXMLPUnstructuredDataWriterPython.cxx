// python wrapper for vtkXMLPUnstructuredDataWriter
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
#include "vtkXMLPUnstructuredDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPUnstructuredDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPUnstructuredDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPUnstructuredDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPUnstructuredDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPDataWriterNew
#endif

static const char **PyvtkXMLPUnstructuredDataWriter_Doc();


static PyObject *
PyvtkXMLPUnstructuredDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataWriter *op = static_cast<vtkXMLPUnstructuredDataWriter *>(vp);

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
      tempr = op->vtkXMLPUnstructuredDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataWriter *op = static_cast<vtkXMLPUnstructuredDataWriter *>(vp);

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
      tempr = op->vtkXMLPUnstructuredDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredDataWriter *op = static_cast<vtkXMLPUnstructuredDataWriter *>(vp);

  vtkXMLPUnstructuredDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPUnstructuredDataWriter::NewInstance();
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

static PyMethodDef PyvtkXMLPUnstructuredDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPUnstructuredDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPUnstructuredDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPUnstructuredDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPUnstructuredDataWriter\nC++: vtkXMLPUnstructuredDataWriter *NewInstance()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLPUnstructuredDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLPUnstructuredDataWriter_Methods,
    "vtkXMLPUnstructuredDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPUnstructuredDataWriter_Doc(),
    PyVTKClass_vtkXMLPDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPUnstructuredDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPUnstructuredDataWriter - Superclass for PVTK XML unstructured\ndata writers.\n\n",
    "Superclass: vtkXMLPDataWriter\n\n",
    "vtkXMLPUnstructuredDataWriter provides PVTK XML writing functionality\nthat is common among all the parallel unstructured data formats.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPUnstructuredDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPUnstructuredDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPUnstructuredDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

