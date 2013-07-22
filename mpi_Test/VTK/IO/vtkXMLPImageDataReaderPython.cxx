// python wrapper for vtkXMLPImageDataReader
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
#include "vtkXMLPImageDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPImageDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPImageDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPImageDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPImageDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPStructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLPStructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPStructuredDataReaderNew
#endif

static const char **PyvtkXMLPImageDataReader_Doc();


static PyObject *
PyvtkXMLPImageDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataReader *op = static_cast<vtkXMLPImageDataReader *>(vp);

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
      tempr = op->vtkXMLPImageDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPImageDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataReader *op = static_cast<vtkXMLPImageDataReader *>(vp);

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
      tempr = op->vtkXMLPImageDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPImageDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataReader *op = static_cast<vtkXMLPImageDataReader *>(vp);

  vtkXMLPImageDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPImageDataReader::NewInstance();
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
PyvtkXMLPImageDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPImageDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPImageDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPImageDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataReader *op = static_cast<vtkXMLPImageDataReader *>(vp);

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
      tempr = op->vtkXMLPImageDataReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPImageDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataReader *op = static_cast<vtkXMLPImageDataReader *>(vp);

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
      tempr = op->vtkXMLPImageDataReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPImageDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLPImageDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPImageDataReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkXMLPImageDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPImageDataReader *op = static_cast<vtkXMLPImageDataReader *>(vp);

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
      op->vtkXMLPImageDataReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPImageDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPImageDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPImageDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPImageDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPImageDataReader\nC++: vtkXMLPImageDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPImageDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPImageDataReader\nC++: vtkXMLPImageDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLPImageDataReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\nV.GetOutput(int) -> vtkImageData\nC++: vtkImageData *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLPImageDataReader_CopyOutputInformation, 1,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPImageDataReader_StaticNew()
{
  return vtkXMLPImageDataReader::New();
}

PyObject *PyVTKClass_vtkXMLPImageDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPImageDataReader_StaticNew,
    PyvtkXMLPImageDataReader_Methods,
    "vtkXMLPImageDataReader", modulename,
    NULL, NULL,
    PyvtkXMLPImageDataReader_Doc(),
    PyVTKClass_vtkXMLPStructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPImageDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPImageDataReader - Read PVTK XML ImageData files.\n\n",
    "Superclass: vtkXMLPStructuredDataReader\n\n",
    "vtkXMLPImageDataReader reads the PVTK XML ImageData file format. This\nreads the parallel format's summary file and then uses\nvtkXMLImageDataReader to read data from the individual ImageData\npiece files.  Streaming is supported.  The standard extension for\nthis reader's file format is \"pvti\".\n\nSee Also:\n\nvtkXMLImageDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPImageDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPImageDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPImageDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

