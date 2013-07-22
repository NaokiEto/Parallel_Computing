// python wrapper for vtkXMLPRectilinearGridWriter
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
#include "vtkXMLPRectilinearGridWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPRectilinearGridWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPRectilinearGridWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPRectilinearGridWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPRectilinearGridWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPStructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPStructuredDataWriterNew
#endif

static const char **PyvtkXMLPRectilinearGridWriter_Doc();


static PyObject *
PyvtkXMLPRectilinearGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPRectilinearGridWriter *op = static_cast<vtkXMLPRectilinearGridWriter *>(vp);

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
      tempr = op->vtkXMLPRectilinearGridWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPRectilinearGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPRectilinearGridWriter *op = static_cast<vtkXMLPRectilinearGridWriter *>(vp);

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
      tempr = op->vtkXMLPRectilinearGridWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPRectilinearGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPRectilinearGridWriter *op = static_cast<vtkXMLPRectilinearGridWriter *>(vp);

  vtkXMLPRectilinearGridWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPRectilinearGridWriter::NewInstance();
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
PyvtkXMLPRectilinearGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPRectilinearGridWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPRectilinearGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPRectilinearGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPRectilinearGridWriter *op = static_cast<vtkXMLPRectilinearGridWriter *>(vp);

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
      tempr = op->vtkXMLPRectilinearGridWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPRectilinearGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPRectilinearGridWriter *op = static_cast<vtkXMLPRectilinearGridWriter *>(vp);

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
      tempr = op->vtkXMLPRectilinearGridWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPRectilinearGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPRectilinearGridWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPRectilinearGridWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPRectilinearGridWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPRectilinearGridWriter\nC++: vtkXMLPRectilinearGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPRectilinearGridWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPRectilinearGridWriter\nC++: vtkXMLPRectilinearGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLPRectilinearGridWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLPRectilinearGridWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPRectilinearGridWriter_StaticNew()
{
  return vtkXMLPRectilinearGridWriter::New();
}

PyObject *PyVTKClass_vtkXMLPRectilinearGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPRectilinearGridWriter_StaticNew,
    PyvtkXMLPRectilinearGridWriter_Methods,
    "vtkXMLPRectilinearGridWriter", modulename,
    NULL, NULL,
    PyvtkXMLPRectilinearGridWriter_Doc(),
    PyVTKClass_vtkXMLPStructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPRectilinearGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPRectilinearGridWriter - Write PVTK XML RectilinearGrid files.\n\n",
    "Superclass: vtkXMLPStructuredDataWriter\n\n",
    "vtkXMLPRectilinearGridWriter writes the PVTK XML RectilinearGrid file\nformat.  One rectilinear grid input can be written into a parallel\nfile format with any number of pieces spread across files. The\nstandard extension for this writer's file format is \"pvtr\". This\nwriter uses vtkXMLRectilinearGridWriter to write the individual piece\nfiles.\n\nSee Also:\n\nvtkXMLRectilinearGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPRectilinearGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPRectilinearGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPRectilinearGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

