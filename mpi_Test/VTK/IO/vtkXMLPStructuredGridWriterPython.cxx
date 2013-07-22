// python wrapper for vtkXMLPStructuredGridWriter
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
#include "vtkXMLPStructuredGridWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPStructuredGridWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPStructuredGridWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPStructuredGridWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredGridWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPStructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPStructuredDataWriterNew
#endif

static const char **PyvtkXMLPStructuredGridWriter_Doc();


static PyObject *
PyvtkXMLPStructuredGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridWriter *op = static_cast<vtkXMLPStructuredGridWriter *>(vp);

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
      tempr = op->vtkXMLPStructuredGridWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridWriter *op = static_cast<vtkXMLPStructuredGridWriter *>(vp);

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
      tempr = op->vtkXMLPStructuredGridWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridWriter *op = static_cast<vtkXMLPStructuredGridWriter *>(vp);

  vtkXMLPStructuredGridWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPStructuredGridWriter::NewInstance();
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
PyvtkXMLPStructuredGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPStructuredGridWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPStructuredGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPStructuredGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPStructuredGridWriter *op = static_cast<vtkXMLPStructuredGridWriter *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkXMLPStructuredGridWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPStructuredGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPStructuredGridWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPStructuredGridWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPStructuredGridWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPStructuredGridWriter\nC++: vtkXMLPStructuredGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPStructuredGridWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPStructuredGridWriter\nC++: vtkXMLPStructuredGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLPStructuredGridWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetInput()\n\nGet/Set the writer's input.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPStructuredGridWriter_StaticNew()
{
  return vtkXMLPStructuredGridWriter::New();
}

PyObject *PyVTKClass_vtkXMLPStructuredGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPStructuredGridWriter_StaticNew,
    PyvtkXMLPStructuredGridWriter_Methods,
    "vtkXMLPStructuredGridWriter", modulename,
    NULL, NULL,
    PyvtkXMLPStructuredGridWriter_Doc(),
    PyVTKClass_vtkXMLPStructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPStructuredGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPStructuredGridWriter - Write PVTK XML StructuredGrid files.\n\n",
    "Superclass: vtkXMLPStructuredDataWriter\n\n",
    "vtkXMLPStructuredGridWriter writes the PVTK XML StructuredGrid file\nformat.  One structured grid input can be written into a parallel\nfile format with any number of pieces spread across files. The\nstandard extension for this writer's file format is \"pvts\". This\nwriter uses vtkXMLStructuredGridWriter to write the individual piece\nfiles.\n\nSee Also:\n\nvtkXMLStructuredGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPStructuredGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPStructuredGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPStructuredGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

