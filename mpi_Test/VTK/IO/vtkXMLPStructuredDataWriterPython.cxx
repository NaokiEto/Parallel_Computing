// python wrapper for vtkXMLPStructuredDataWriter
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
#include "vtkXMLPStructuredDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPStructuredDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPStructuredDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPStructuredDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPDataWriterNew
#endif

static const char **PyvtkXMLPStructuredDataWriter_Doc();


static PyObject *
PyvtkXMLPStructuredDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataWriter *op = static_cast<vtkXMLPStructuredDataWriter *>(vp);

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
      tempr = op->vtkXMLPStructuredDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataWriter *op = static_cast<vtkXMLPStructuredDataWriter *>(vp);

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
      tempr = op->vtkXMLPStructuredDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredDataWriter *op = static_cast<vtkXMLPStructuredDataWriter *>(vp);

  vtkXMLPStructuredDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPStructuredDataWriter::NewInstance();
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

static PyMethodDef PyvtkXMLPStructuredDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPStructuredDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPStructuredDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPStructuredDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPStructuredDataWriter\nC++: vtkXMLPStructuredDataWriter *NewInstance()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLPStructuredDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLPStructuredDataWriter_Methods,
    "vtkXMLPStructuredDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPStructuredDataWriter_Doc(),
    PyVTKClass_vtkXMLPDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPStructuredDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPStructuredDataWriter - Superclass for PVTK XML structured data\nwriters.\n\n",
    "Superclass: vtkXMLPDataWriter\n\n",
    "vtkXMLPStructuredDataWriter provides PVTK XML writing functionality\nthat is common among all the parallel structured data formats.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPStructuredDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPStructuredDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPStructuredDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

