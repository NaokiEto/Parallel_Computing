// python wrapper for vtkXMLHierarchicalBoxDataWriter
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
#include "vtkXMLHierarchicalBoxDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLHierarchicalBoxDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLHierarchicalBoxDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLCompositeDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLCompositeDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLCompositeDataWriterNew
#endif

static const char **PyvtkXMLHierarchicalBoxDataWriter_Doc();


static PyObject *
PyvtkXMLHierarchicalBoxDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataWriter *op = static_cast<vtkXMLHierarchicalBoxDataWriter *>(vp);

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
      tempr = op->vtkXMLHierarchicalBoxDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataWriter *op = static_cast<vtkXMLHierarchicalBoxDataWriter *>(vp);

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
      tempr = op->vtkXMLHierarchicalBoxDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataWriter *op = static_cast<vtkXMLHierarchicalBoxDataWriter *>(vp);

  vtkXMLHierarchicalBoxDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLHierarchicalBoxDataWriter::NewInstance();
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
PyvtkXMLHierarchicalBoxDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLHierarchicalBoxDataWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLHierarchicalBoxDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataWriter *op = static_cast<vtkXMLHierarchicalBoxDataWriter *>(vp);

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
      tempr = op->vtkXMLHierarchicalBoxDataWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLHierarchicalBoxDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLHierarchicalBoxDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLHierarchicalBoxDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLHierarchicalBoxDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLHierarchicalBoxDataWriter\nC++: vtkXMLHierarchicalBoxDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLHierarchicalBoxDataWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLHierarchicalBoxDataWriter\nC++: vtkXMLHierarchicalBoxDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLHierarchicalBoxDataWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: virtual const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLHierarchicalBoxDataWriter_StaticNew()
{
  return vtkXMLHierarchicalBoxDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLHierarchicalBoxDataWriter_StaticNew,
    PyvtkXMLHierarchicalBoxDataWriter_Methods,
    "vtkXMLHierarchicalBoxDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLHierarchicalBoxDataWriter_Doc(),
    PyVTKClass_vtkXMLCompositeDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLHierarchicalBoxDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLHierarchicalBoxDataWriter - writer for\n\n",
    "Superclass: vtkXMLCompositeDataWriter\n\n",
    "vtkXMLHierarchicalBoxDataWriter is a vtkXMLCompositeDataWriter\nsubclass to handle vtkHierarchicalBoxDataSet.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLHierarchicalBoxDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLHierarchicalBoxDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLHierarchicalBoxDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

