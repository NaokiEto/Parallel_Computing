// python wrapper for vtkXMLImageDataReader
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
#include "vtkXMLImageDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLImageDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLImageDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLImageDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLImageDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLStructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLStructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLStructuredDataReaderNew
#endif

static const char **PyvtkXMLImageDataReader_Doc();


static PyObject *
PyvtkXMLImageDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataReader *op = static_cast<vtkXMLImageDataReader *>(vp);

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
      tempr = op->vtkXMLImageDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLImageDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataReader *op = static_cast<vtkXMLImageDataReader *>(vp);

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
      tempr = op->vtkXMLImageDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLImageDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataReader *op = static_cast<vtkXMLImageDataReader *>(vp);

  vtkXMLImageDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLImageDataReader::NewInstance();
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
PyvtkXMLImageDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLImageDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLImageDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLImageDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataReader *op = static_cast<vtkXMLImageDataReader *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkXMLImageDataReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLImageDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataReader *op = static_cast<vtkXMLImageDataReader *>(vp);

  int temp0;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkXMLImageDataReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLImageDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLImageDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLImageDataReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkXMLImageDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLImageDataReader *op = static_cast<vtkXMLImageDataReader *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyOutputInformation(temp0, temp1);
      }
    else
      {
      op->vtkXMLImageDataReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLImageDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLImageDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLImageDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLImageDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLImageDataReader\nC++: vtkXMLImageDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLImageDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLImageDataReader\nC++: vtkXMLImageDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLImageDataReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\nV.GetOutput(int) -> vtkImageData\nC++: vtkImageData *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLImageDataReader_CopyOutputInformation, 1,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\nFor the specified port, copy the information this reader sets up\nin SetupOutputInformation to outInfo\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLImageDataReader_StaticNew()
{
  return vtkXMLImageDataReader::New();
}

PyObject *PyVTKClass_vtkXMLImageDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLImageDataReader_StaticNew,
    PyvtkXMLImageDataReader_Methods,
    "vtkXMLImageDataReader", modulename,
    NULL, NULL,
    PyvtkXMLImageDataReader_Doc(),
    PyVTKClass_vtkXMLStructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLImageDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLImageDataReader - Read VTK XML ImageData files.\n\n",
    "Superclass: vtkXMLStructuredDataReader\n\n",
    "vtkXMLImageDataReader reads the VTK XML ImageData file format.  One\nimage data file can be read to produce one output.  Streaming is\nsupported.  The standard extension for this reader's file format is\n\"vti\".  This reader is also used to read a single piece of the\nparallel file format.\n\nSee Also:\n\nvtkXMLPImageDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLImageDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLImageDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLImageDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

