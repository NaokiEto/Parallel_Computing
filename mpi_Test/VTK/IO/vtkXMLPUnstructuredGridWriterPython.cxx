// python wrapper for vtkXMLPUnstructuredGridWriter
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
#include "vtkXMLPUnstructuredGridWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPUnstructuredGridWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPUnstructuredGridWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPUnstructuredGridWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPUnstructuredGridWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPUnstructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPUnstructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPUnstructuredDataWriterNew
#endif

static const char **PyvtkXMLPUnstructuredGridWriter_Doc();


static PyObject *
PyvtkXMLPUnstructuredGridWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridWriter *op = static_cast<vtkXMLPUnstructuredGridWriter *>(vp);

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
      tempr = op->vtkXMLPUnstructuredGridWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridWriter *op = static_cast<vtkXMLPUnstructuredGridWriter *>(vp);

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
      tempr = op->vtkXMLPUnstructuredGridWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridWriter *op = static_cast<vtkXMLPUnstructuredGridWriter *>(vp);

  vtkXMLPUnstructuredGridWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPUnstructuredGridWriter::NewInstance();
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
PyvtkXMLPUnstructuredGridWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPUnstructuredGridWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPUnstructuredGridWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridWriter *op = static_cast<vtkXMLPUnstructuredGridWriter *>(vp);

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
      tempr = op->vtkXMLPUnstructuredGridWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPUnstructuredGridWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPUnstructuredGridWriter *op = static_cast<vtkXMLPUnstructuredGridWriter *>(vp);

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
      tempr = op->vtkXMLPUnstructuredGridWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPUnstructuredGridWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPUnstructuredGridWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPUnstructuredGridWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPUnstructuredGridWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPUnstructuredGridWriter\nC++: vtkXMLPUnstructuredGridWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPUnstructuredGridWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPUnstructuredGridWriter\nC++: vtkXMLPUnstructuredGridWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLPUnstructuredGridWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLPUnstructuredGridWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPUnstructuredGridWriter_StaticNew()
{
  return vtkXMLPUnstructuredGridWriter::New();
}

PyObject *PyVTKClass_vtkXMLPUnstructuredGridWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPUnstructuredGridWriter_StaticNew,
    PyvtkXMLPUnstructuredGridWriter_Methods,
    "vtkXMLPUnstructuredGridWriter", modulename,
    NULL, NULL,
    PyvtkXMLPUnstructuredGridWriter_Doc(),
    PyVTKClass_vtkXMLPUnstructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPUnstructuredGridWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPUnstructuredGridWriter - Write PVTK XML UnstructuredGrid files.\n\n",
    "Superclass: vtkXMLPUnstructuredDataWriter\n\n",
    "vtkXMLPUnstructuredGridWriter writes the PVTK XML UnstructuredGrid\nfile format.  One unstructured grid input can be written into a\nparallel file format with any number of pieces spread across files.\nThe standard extension for this writer's file format is \"pvtu\". This\nwriter uses vtkXMLUnstructuredGridWriter to write the individual\npiece files.\n\nSee Also:\n\nvtkXMLUnstructuredGridWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPUnstructuredGridWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPUnstructuredGridWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPUnstructuredGridWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

