// python wrapper for vtkXMLPImageDataWriter
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
#include "vtkXMLPImageDataWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPImageDataWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPImageDataWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPImageDataWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPImageDataWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPStructuredDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPStructuredDataWriterNew
#endif

static const char **PyvtkXMLPImageDataWriter_Doc();


static PyObject *
PyvtkXMLPImageDataWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataWriter *op = static_cast<vtkXMLPImageDataWriter *>(vp);

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
      tempr = op->vtkXMLPImageDataWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPImageDataWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataWriter *op = static_cast<vtkXMLPImageDataWriter *>(vp);

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
      tempr = op->vtkXMLPImageDataWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPImageDataWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataWriter *op = static_cast<vtkXMLPImageDataWriter *>(vp);

  vtkXMLPImageDataWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPImageDataWriter::NewInstance();
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
PyvtkXMLPImageDataWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPImageDataWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPImageDataWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPImageDataWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataWriter *op = static_cast<vtkXMLPImageDataWriter *>(vp);

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
      tempr = op->vtkXMLPImageDataWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPImageDataWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataWriter *op = static_cast<vtkXMLPImageDataWriter *>(vp);

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
      tempr = op->vtkXMLPImageDataWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPImageDataWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPImageDataWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPImageDataWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPImageDataWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPImageDataWriter\nC++: vtkXMLPImageDataWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPImageDataWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPImageDataWriter\nC++: vtkXMLPImageDataWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLPImageDataWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkImageData\nC++: vtkImageData *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLPImageDataWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPImageDataWriter_StaticNew()
{
  return vtkXMLPImageDataWriter::New();
}

PyObject *PyVTKClass_vtkXMLPImageDataWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPImageDataWriter_StaticNew,
    PyvtkXMLPImageDataWriter_Methods,
    "vtkXMLPImageDataWriter", modulename,
    NULL, NULL,
    PyvtkXMLPImageDataWriter_Doc(),
    PyVTKClass_vtkXMLPStructuredDataWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLPImageDataWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPImageDataWriter - Write PVTK XML ImageData files.\n\n",
    "Superclass: vtkXMLPStructuredDataWriter\n\n",
    "vtkXMLPImageDataWriter writes the PVTK XML ImageData file format. One\nimage data input can be written into a parallel file format with any\nnumber of pieces spread across files.  The standard extension for\nthis writer's file format is \"pvti\".  This writer uses\nvtkXMLImageDataWriter to write the individual piece files.\n\nSee Also:\n\nvtkXMLImageDataWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPImageDataWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPImageDataWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPImageDataWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

