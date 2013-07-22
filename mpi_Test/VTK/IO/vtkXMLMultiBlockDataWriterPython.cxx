// python wrapper for vtkXMLMultiBlockDataWriter
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
#include "vtkXMLMultiBlockDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLMultiBlockDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLMultiBlockDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLMultiBlockDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLMultiBlockDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLCompositeDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLCompositeDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLCompositeDataWriterNew
#endif

static const char **PyvtkXMLMultiBlockDataWriter_Doc();


static PyObject *
PyvtkXMLMultiBlockDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataWriter *op = static_cast<vtkXMLMultiBlockDataWriter *>(vp);

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
      tempr = op->vtkXMLMultiBlockDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataWriter *op = static_cast<vtkXMLMultiBlockDataWriter *>(vp);

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
      tempr = op->vtkXMLMultiBlockDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataWriter *op = static_cast<vtkXMLMultiBlockDataWriter *>(vp);

  vtkXMLMultiBlockDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLMultiBlockDataWriter::NewInstance();
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
PyvtkXMLMultiBlockDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLMultiBlockDataWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLMultiBlockDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMultiBlockDataWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiBlockDataWriter *op = static_cast<vtkXMLMultiBlockDataWriter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultFileExtension();
      }
    else
      {
      tempr = op->vtkXMLMultiBlockDataWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLMultiBlockDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLMultiBlockDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLMultiBlockDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLMultiBlockDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLMultiBlockDataWriter\nC++: vtkXMLMultiBlockDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLMultiBlockDataWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLMultiBlockDataWriter\nC++: vtkXMLMultiBlockDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLMultiBlockDataWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLMultiBlockDataWriter_StaticNew()
{
  return vtkXMLMultiBlockDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLMultiBlockDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLMultiBlockDataWriter_StaticNew,
    PyvtkXMLMultiBlockDataWriter_Methods,
    "vtkXMLMultiBlockDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLMultiBlockDataWriter_Doc(),
    PyVTKClass_vtkXMLCompositeDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLMultiBlockDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLMultiBlockDataWriter - writer for vtkMultiBlockDataSet.\n\n",
    "Superclass: vtkXMLCompositeDataWriter\n\n",
    "vtkXMLMultiBlockDataWriter is a vtkXMLCompositeDataWriter subclass to\nhandle vtkMultiBlockDataSet.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLMultiBlockDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLMultiBlockDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLMultiBlockDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

