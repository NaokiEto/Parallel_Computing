// python wrapper for vtkXMLPolyDataWriter
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
#include "vtkXMLPolyDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPolyDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPolyDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPolyDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPolyDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLUnstructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLUnstructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLUnstructuredDataWriterNew
#endif

static const char **PyvtkXMLPolyDataWriter_Doc();


static PyObject *
PyvtkXMLPolyDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataWriter *op = static_cast<vtkXMLPolyDataWriter *>(vp);

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
      tempr = op->vtkXMLPolyDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPolyDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataWriter *op = static_cast<vtkXMLPolyDataWriter *>(vp);

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
      tempr = op->vtkXMLPolyDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPolyDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataWriter *op = static_cast<vtkXMLPolyDataWriter *>(vp);

  vtkXMLPolyDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPolyDataWriter::NewInstance();
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
PyvtkXMLPolyDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPolyDataWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPolyDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPolyDataWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataWriter *op = static_cast<vtkXMLPolyDataWriter *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkXMLPolyDataWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPolyDataWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataWriter *op = static_cast<vtkXMLPolyDataWriter *>(vp);

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
      tempr = op->vtkXMLPolyDataWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPolyDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPolyDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPolyDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPolyDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPolyDataWriter\nC++: vtkXMLPolyDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPolyDataWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPolyDataWriter\nC++: vtkXMLPolyDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLPolyDataWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLPolyDataWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPolyDataWriter_StaticNew()
{
  return vtkXMLPolyDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLPolyDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPolyDataWriter_StaticNew,
    PyvtkXMLPolyDataWriter_Methods,
    "vtkXMLPolyDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPolyDataWriter_Doc(),
    PyVTKClass_vtkXMLUnstructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPolyDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPolyDataWriter - Write VTK XML PolyData files.\n\n",
    "Superclass: vtkXMLUnstructuredDataWriter\n\n",
    "vtkXMLPolyDataWriter writes the VTK XML PolyData file format.  One\npolygonal data input can be written into one file in any number of\nstreamed pieces (if supported by the rest of the pipeline).  The\nstandard extension for this writer's file format is \"vtp\".  This\nwriter is also used to write a single piece of the parallel file\nformat.\n\nSee Also:\n\nvtkXMLPPolyDataWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPolyDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPolyDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPolyDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

