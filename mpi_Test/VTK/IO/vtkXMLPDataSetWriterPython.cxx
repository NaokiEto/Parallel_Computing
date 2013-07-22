// python wrapper for vtkXMLPDataSetWriter
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
#include "vtkXMLPDataSetWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPDataSetWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPDataSetWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPDataSetWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPDataSetWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPDataWriterNew
#endif

static const char **PyvtkXMLPDataSetWriter_Doc();


static PyObject *
PyvtkXMLPDataSetWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataSetWriter *op = static_cast<vtkXMLPDataSetWriter *>(vp);

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
      tempr = op->vtkXMLPDataSetWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataSetWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataSetWriter *op = static_cast<vtkXMLPDataSetWriter *>(vp);

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
      tempr = op->vtkXMLPDataSetWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataSetWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataSetWriter *op = static_cast<vtkXMLPDataSetWriter *>(vp);

  vtkXMLPDataSetWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPDataSetWriter::NewInstance();
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
PyvtkXMLPDataSetWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPDataSetWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPDataSetWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPDataSetWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPDataSetWriter *op = static_cast<vtkXMLPDataSetWriter *>(vp);

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
      tempr = op->vtkXMLPDataSetWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPDataSetWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPDataSetWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPDataSetWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPDataSetWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPDataSetWriter\nC++: vtkXMLPDataSetWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPDataSetWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPDataSetWriter\nC++: vtkXMLPDataSetWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLPDataSetWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataSet\nC++: vtkDataSet *GetInput()\n\nGet/Set the writer's input.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPDataSetWriter_StaticNew()
{
  return vtkXMLPDataSetWriter::New();
}

PyObject *PyVTKClass_vtkXMLPDataSetWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPDataSetWriter_StaticNew,
    PyvtkXMLPDataSetWriter_Methods,
    "vtkXMLPDataSetWriter", modulename,
    NULL, NULL,
    PyvtkXMLPDataSetWriter_Doc(),
    PyVTKClass_vtkXMLPDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPDataSetWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPDataSetWriter - Write any type of PVTK XML file.\n\n",
    "Superclass: vtkXMLPDataWriter\n\n",
    "vtkXMLPDataSetWriter is a wrapper around the PVTK XML file format\nwriters.  Given an input vtkDataSet, the correct writer is\nautomatically selected based on the type of input.\n\nSee Also:\n\nvtkXMLPImageDataWriter vtkXMLPStructuredGridWriter\nvtkXMLPRectilinearGridWriter vtkXMLPPolyDataWriter\nvtkXMLPUnstructuredGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPDataSetWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPDataSetWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPDataSetWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

