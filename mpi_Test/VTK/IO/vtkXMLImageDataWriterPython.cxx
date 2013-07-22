// python wrapper for vtkXMLImageDataWriter
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
#include "vtkXMLImageDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLImageDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLImageDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLImageDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLImageDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLStructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLStructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLStructuredDataWriterNew
#endif

static const char **PyvtkXMLImageDataWriter_Doc();


static PyObject *
PyvtkXMLImageDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataWriter *op = static_cast<vtkXMLImageDataWriter *>(vp);

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
      tempr = op->vtkXMLImageDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLImageDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataWriter *op = static_cast<vtkXMLImageDataWriter *>(vp);

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
      tempr = op->vtkXMLImageDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLImageDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataWriter *op = static_cast<vtkXMLImageDataWriter *>(vp);

  vtkXMLImageDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLImageDataWriter::NewInstance();
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
PyvtkXMLImageDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLImageDataWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLImageDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLImageDataWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataWriter *op = static_cast<vtkXMLImageDataWriter *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkXMLImageDataWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLImageDataWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataWriter *op = static_cast<vtkXMLImageDataWriter *>(vp);

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
      tempr = op->vtkXMLImageDataWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLImageDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLImageDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLImageDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLImageDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLImageDataWriter\nC++: vtkXMLImageDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLImageDataWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLImageDataWriter\nC++: vtkXMLImageDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLImageDataWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLImageDataWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLImageDataWriter_StaticNew()
{
  return vtkXMLImageDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLImageDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLImageDataWriter_StaticNew,
    PyvtkXMLImageDataWriter_Methods,
    "vtkXMLImageDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLImageDataWriter_Doc(),
    PyVTKClass_vtkXMLStructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLImageDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLImageDataWriter - Write VTK XML ImageData files.\n\n",
    "Superclass: vtkXMLStructuredDataWriter\n\n",
    "vtkXMLImageDataWriter writes the VTK XML ImageData file format. One\nimage data input can be written into one file in any number of\nstreamed pieces.  The standard extension for this writer's file\nformat is \"vti\".  This writer is also used to write a single piece of\nthe parallel file format.\n\nSee Also:\n\nvtkXMLPImageDataWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLImageDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLImageDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLImageDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

