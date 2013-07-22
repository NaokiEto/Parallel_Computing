// python wrapper for vtkGESignaReader
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
#include "vtkGESignaReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGESignaReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGESignaReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGESignaReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGESignaReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMedicalImageReader2New
extern "C" { PyObject *PyVTKClass_vtkMedicalImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkMedicalImageReader2New
#endif

static const char **PyvtkGESignaReader_Doc();


static PyObject *
PyvtkGESignaReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

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
      tempr = op->vtkGESignaReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGESignaReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

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
      tempr = op->vtkGESignaReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGESignaReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

  vtkGESignaReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGESignaReader::NewInstance();
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
PyvtkGESignaReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGESignaReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGESignaReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGESignaReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CanReadFile(temp0);
      }
    else
      {
      tempr = op->vtkGESignaReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGESignaReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileExtensions();
      }
    else
      {
      tempr = op->vtkGESignaReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGESignaReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGESignaReader *op = static_cast<vtkGESignaReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDescriptiveName();
      }
    else
      {
      tempr = op->vtkGESignaReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGESignaReader_Methods[] = {
  {(char*)"GetClassName", PyvtkGESignaReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGESignaReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGESignaReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGESignaReader\nC++: vtkGESignaReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGESignaReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGESignaReader\nC++: vtkGESignaReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkGESignaReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nIs the given file a GESigna file?\n"},
  {(char*)"GetFileExtensions", PyvtkGESignaReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nValid extentsions\n"},
  {(char*)"GetDescriptiveName", PyvtkGESignaReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nA descriptive name for this format\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGESignaReader_StaticNew()
{
  return vtkGESignaReader::New();
}

PyObject *PyVTKClass_vtkGESignaReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGESignaReader_StaticNew,
    PyvtkGESignaReader_Methods,
    "vtkGESignaReader", modulename,
    NULL, NULL,
    PyvtkGESignaReader_Doc(),
    PyVTKClass_vtkMedicalImageReader2New(modulename));
  return cls;
}

const char **PyvtkGESignaReader_Doc()
{
  static const char *docstring[] = {
    "vtkGESignaReader - read GE Signa ximg files\n\n",
    "Superclass: vtkMedicalImageReader2\n\n",
    "vtkGESignaReader is a source object that reads some GE Signa ximg\nfiles It does support reading in pixel spacing, slice spacing and it\ncomputes an origin for the image in millimeters. It always produces\ngreyscale unsigned short data and it supports reading in rectangular,\npacked, compressed, and packed&compressed. It does not read in slice\norientation, or position right now. To use it you just nee",
    "d to\nspecify a filename or a file prefix and pattern.\n\nSee Also:\n\nvtkImageReader2\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGESignaReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGESignaReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGESignaReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

