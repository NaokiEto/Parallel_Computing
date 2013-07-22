// python wrapper for vtkXMLRectilinearGridWriter
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
#include "vtkXMLRectilinearGridWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLRectilinearGridWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLRectilinearGridWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLRectilinearGridWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLRectilinearGridWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLStructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLStructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLStructuredDataWriterNew
#endif

static const char **PyvtkXMLRectilinearGridWriter_Doc();


static PyObject *
PyvtkXMLRectilinearGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

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
      tempr = op->vtkXMLRectilinearGridWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

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
      tempr = op->vtkXMLRectilinearGridWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  vtkXMLRectilinearGridWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLRectilinearGridWriter::NewInstance();
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
PyvtkXMLRectilinearGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLRectilinearGridWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLRectilinearGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkXMLRectilinearGridWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLRectilinearGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLRectilinearGridWriter *op = static_cast<vtkXMLRectilinearGridWriter *>(vp);

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
      tempr = op->vtkXMLRectilinearGridWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLRectilinearGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLRectilinearGridWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLRectilinearGridWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLRectilinearGridWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLRectilinearGridWriter\nC++: vtkXMLRectilinearGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLRectilinearGridWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLRectilinearGridWriter\nC++: vtkXMLRectilinearGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLRectilinearGridWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLRectilinearGridWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLRectilinearGridWriter_StaticNew()
{
  return vtkXMLRectilinearGridWriter::New();
}

PyObject *PyVTKClass_vtkXMLRectilinearGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLRectilinearGridWriter_StaticNew,
    PyvtkXMLRectilinearGridWriter_Methods,
    "vtkXMLRectilinearGridWriter", modulename,
    NULL, NULL,
    PyvtkXMLRectilinearGridWriter_Doc(),
    PyVTKClass_vtkXMLStructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLRectilinearGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLRectilinearGridWriter - Write VTK XML RectilinearGrid files.\n\n",
    "Superclass: vtkXMLStructuredDataWriter\n\n",
    "vtkXMLRectilinearGridWriter writes the VTK XML RectilinearGrid file\nformat.  One rectilinear grid input can be written into one file in\nany number of streamed pieces.  The standard extension for this\nwriter's file format is \"vtr\".  This writer is also used to write a\nsingle piece of the parallel file format.\n\nSee Also:\n\nvtkXMLPRectilinearGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLRectilinearGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLRectilinearGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLRectilinearGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

