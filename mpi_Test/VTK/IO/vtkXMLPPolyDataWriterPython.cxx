// python wrapper for vtkXMLPPolyDataWriter
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
#include "vtkXMLPPolyDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPPolyDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPPolyDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPPolyDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPPolyDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPUnstructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPUnstructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPUnstructuredDataWriterNew
#endif

static const char **PyvtkXMLPPolyDataWriter_Doc();


static PyObject *
PyvtkXMLPPolyDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPPolyDataWriter *op = static_cast<vtkXMLPPolyDataWriter *>(vp);

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
      tempr = op->vtkXMLPPolyDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPPolyDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPPolyDataWriter *op = static_cast<vtkXMLPPolyDataWriter *>(vp);

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
      tempr = op->vtkXMLPPolyDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPPolyDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPPolyDataWriter *op = static_cast<vtkXMLPPolyDataWriter *>(vp);

  vtkXMLPPolyDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPPolyDataWriter::NewInstance();
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
PyvtkXMLPPolyDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPPolyDataWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPPolyDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPPolyDataWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPPolyDataWriter *op = static_cast<vtkXMLPPolyDataWriter *>(vp);

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
      tempr = op->vtkXMLPPolyDataWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPPolyDataWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPPolyDataWriter *op = static_cast<vtkXMLPPolyDataWriter *>(vp);

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
      tempr = op->vtkXMLPPolyDataWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPPolyDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPPolyDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPPolyDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPPolyDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPPolyDataWriter\nC++: vtkXMLPPolyDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPPolyDataWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPPolyDataWriter\nC++: vtkXMLPPolyDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLPPolyDataWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLPPolyDataWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPPolyDataWriter_StaticNew()
{
  return vtkXMLPPolyDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLPPolyDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPPolyDataWriter_StaticNew,
    PyvtkXMLPPolyDataWriter_Methods,
    "vtkXMLPPolyDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPPolyDataWriter_Doc(),
    PyVTKClass_vtkXMLPUnstructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPPolyDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPPolyDataWriter - Write PVTK XML PolyData files.\n\n",
    "Superclass: vtkXMLPUnstructuredDataWriter\n\n",
    "vtkXMLPPolyDataWriter writes the PVTK XML PolyData file format. One\npoly data input can be written into a parallel file format with any\nnumber of pieces spread across files.  The standard extension for\nthis writer's file format is \"pvtp\".  This writer uses\nvtkXMLPolyDataWriter to write the individual piece files.\n\nSee Also:\n\nvtkXMLPolyDataWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPPolyDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPPolyDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPPolyDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

