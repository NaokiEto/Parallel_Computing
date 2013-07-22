// python wrapper for vtkXMLUnstructuredGridWriter
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
#include "vtkXMLUnstructuredGridWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLUnstructuredGridWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLUnstructuredGridWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLUnstructuredGridWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLUnstructuredGridWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLUnstructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLUnstructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLUnstructuredDataWriterNew
#endif

static const char **PyvtkXMLUnstructuredGridWriter_Doc();


static PyObject *
PyvtkXMLUnstructuredGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridWriter *op = static_cast<vtkXMLUnstructuredGridWriter *>(vp);

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
      tempr = op->vtkXMLUnstructuredGridWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridWriter *op = static_cast<vtkXMLUnstructuredGridWriter *>(vp);

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
      tempr = op->vtkXMLUnstructuredGridWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridWriter *op = static_cast<vtkXMLUnstructuredGridWriter *>(vp);

  vtkXMLUnstructuredGridWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLUnstructuredGridWriter::NewInstance();
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
PyvtkXMLUnstructuredGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLUnstructuredGridWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLUnstructuredGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridWriter *op = static_cast<vtkXMLUnstructuredGridWriter *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkXMLUnstructuredGridWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredGridWriter *op = static_cast<vtkXMLUnstructuredGridWriter *>(vp);

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
      tempr = op->vtkXMLUnstructuredGridWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLUnstructuredGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLUnstructuredGridWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLUnstructuredGridWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLUnstructuredGridWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLUnstructuredGridWriter\nC++: vtkXMLUnstructuredGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLUnstructuredGridWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLUnstructuredGridWriter\nC++: vtkXMLUnstructuredGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLUnstructuredGridWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLUnstructuredGridWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLUnstructuredGridWriter_StaticNew()
{
  return vtkXMLUnstructuredGridWriter::New();
}

PyObject *PyVTKClass_vtkXMLUnstructuredGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLUnstructuredGridWriter_StaticNew,
    PyvtkXMLUnstructuredGridWriter_Methods,
    "vtkXMLUnstructuredGridWriter", modulename,
    NULL, NULL,
    PyvtkXMLUnstructuredGridWriter_Doc(),
    PyVTKClass_vtkXMLUnstructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLUnstructuredGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLUnstructuredGridWriter - Write VTK XML UnstructuredGrid files.\n\n",
    "Superclass: vtkXMLUnstructuredDataWriter\n\n",
    "vtkXMLUnstructuredGridWriter writes the VTK XML UnstructuredGrid file\nformat.  One unstructured grid input can be written into one file in\nany number of streamed pieces (if supported by the rest of the\npipeline).  The standard extension for this writer's file format is\n\"vtu\".  This writer is also used to write a single piece of the\nparallel file format.\n\nSee Also:\n\nvtkXMLPUnstructuredGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLUnstructuredGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLUnstructuredGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLUnstructuredGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

