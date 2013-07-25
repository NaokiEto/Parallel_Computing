// python wrapper for vtkRTXMLPolyDataReader
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
#include "vtkRTXMLPolyDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRTXMLPolyDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRTXMLPolyDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRTXMLPolyDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRTXMLPolyDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLPolyDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLPolyDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLPolyDataReaderNew
#endif

static const char **PyvtkRTXMLPolyDataReader_Doc();


static PyObject *
PyvtkRTXMLPolyDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

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
      tempr = op->vtkRTXMLPolyDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

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
      tempr = op->vtkRTXMLPolyDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  vtkRTXMLPolyDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRTXMLPolyDataReader::NewInstance();
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
PyvtkRTXMLPolyDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRTXMLPolyDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRTXMLPolyDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_SetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLocation(temp0);
      }
    else
      {
      op->vtkRTXMLPolyDataReader::SetLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_GetDataLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataLocation();
      }
    else
      {
      tempr = op->vtkRTXMLPolyDataReader::GetDataLocation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_UpdateToNextFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateToNextFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateToNextFile();
      }
    else
      {
      op->vtkRTXMLPolyDataReader::UpdateToNextFile();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_NewDataAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewDataAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewDataAvailable();
      }
    else
      {
      tempr = op->vtkRTXMLPolyDataReader::NewDataAvailable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_ResetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ResetReader();
      }
    else
      {
      op->vtkRTXMLPolyDataReader::ResetReader();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_GetNextFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextFileName();
      }
    else
      {
      tempr = op->vtkRTXMLPolyDataReader::GetNextFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRTXMLPolyDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkRTXMLPolyDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRTXMLPolyDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRTXMLPolyDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRTXMLPolyDataReader\nC++: vtkRTXMLPolyDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRTXMLPolyDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRTXMLPolyDataReader\nC++: vtkRTXMLPolyDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLocation", PyvtkRTXMLPolyDataReader_SetLocation, 1,
   (char*)"V.SetLocation(string)\nC++: void SetLocation(const char *dataLocation)\n\n"},
  {(char*)"GetDataLocation", PyvtkRTXMLPolyDataReader_GetDataLocation, 1,
   (char*)"V.GetDataLocation() -> string\nC++: char *GetDataLocation()\n\n"},
  {(char*)"UpdateToNextFile", PyvtkRTXMLPolyDataReader_UpdateToNextFile, 1,
   (char*)"V.UpdateToNextFile()\nC++: virtual void UpdateToNextFile()\n\nReader will read in the next available data file The filename is\nthis->NextFileName maintained internally\n"},
  {(char*)"NewDataAvailable", PyvtkRTXMLPolyDataReader_NewDataAvailable, 1,
   (char*)"V.NewDataAvailable() -> int\nC++: virtual int NewDataAvailable()\n\ncheck if there is new data file available in the given\nDataLocation\n"},
  {(char*)"ResetReader", PyvtkRTXMLPolyDataReader_ResetReader, 1,
   (char*)"V.ResetReader()\nC++: virtual void ResetReader()\n\nResetReader check the data directory specified in\nthis->DataLocation, and reset the Internal data structure\nspecifically: this->Internal->ProcessedFileList for monitoring\nthe arriving new data files if SetDataLocation(char*) is set by\nthe user, this ResetReader() should also be invoked.\n"},
  {(char*)"GetNextFileName", PyvtkRTXMLPolyDataReader_GetNextFileName, 1,
   (char*)"V.GetNextFileName() -> string\nC++: const char *GetNextFileName()\n\nReturn the name of the next available data file assume\nNewDataAvailable() return VTK_OK\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRTXMLPolyDataReader_StaticNew()
{
  return vtkRTXMLPolyDataReader::New();
}

PyObject *PyVTKClass_vtkRTXMLPolyDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRTXMLPolyDataReader_StaticNew,
    PyvtkRTXMLPolyDataReader_Methods,
    "vtkRTXMLPolyDataReader", modulename,
    NULL, NULL,
    PyvtkRTXMLPolyDataReader_Doc(),
    PyVTKClass_vtkXMLPolyDataReaderNew(modulename));
  return cls;
}

const char **PyvtkRTXMLPolyDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkRTXMLPolyDataReader - Read RealTime VTK XML PolyData files.\n\n",
    "Superclass: vtkXMLPolyDataReader\n\n",
    "vtkRTXMLPolyDataReader reads the VTK XML PolyData file format in real\ntime.\n\nSee Also:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRTXMLPolyDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRTXMLPolyDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRTXMLPolyDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}
