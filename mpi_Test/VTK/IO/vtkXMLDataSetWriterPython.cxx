// python wrapper for vtkXMLDataSetWriter
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
#include "vtkXMLDataSetWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLDataSetWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLDataSetWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLDataSetWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLDataSetWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLWriterNew
#endif

static const char **PyvtkXMLDataSetWriter_Doc();


static PyObject *
PyvtkXMLDataSetWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataSetWriter *op = static_cast<vtkXMLDataSetWriter *>(vp);

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
      tempr = op->vtkXMLDataSetWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataSetWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataSetWriter *op = static_cast<vtkXMLDataSetWriter *>(vp);

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
      tempr = op->vtkXMLDataSetWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataSetWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataSetWriter *op = static_cast<vtkXMLDataSetWriter *>(vp);

  vtkXMLDataSetWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLDataSetWriter::NewInstance();
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
PyvtkXMLDataSetWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLDataSetWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLDataSetWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataSetWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataSetWriter *op = static_cast<vtkXMLDataSetWriter *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkXMLDataSetWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLDataSetWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLDataSetWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLDataSetWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLDataSetWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLDataSetWriter\nC++: vtkXMLDataSetWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLDataSetWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLDataSetWriter\nC++: vtkXMLDataSetWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLDataSetWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nGet/Set the writer's input.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLDataSetWriter_StaticNew()
{
  return vtkXMLDataSetWriter::New();
}

PyObject *PyVTKClass_vtkXMLDataSetWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLDataSetWriter_StaticNew,
    PyvtkXMLDataSetWriter_Methods,
    "vtkXMLDataSetWriter", modulename,
    NULL, NULL,
    PyvtkXMLDataSetWriter_Doc(),
    PyVTKClass_vtkXMLWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLDataSetWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLDataSetWriter - Write any type of VTK XML file.\n\n",
    "Superclass: vtkXMLWriter\n\n",
    "vtkXMLDataSetWriter is a wrapper around the VTK XML file format\nwriters.  Given an input vtkDataSet, the correct writer is\nautomatically selected based on the type of input.\n\nSee Also:\n\nvtkXMLImageDataWriter vtkXMLStructuredGridWriter\nvtkXMLRectilinearGridWriter vtkXMLPolyDataWriter\nvtkXMLUnstructuredGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLDataSetWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLDataSetWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLDataSetWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

