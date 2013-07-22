// python wrapper for vtkJPEGReader
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
#include "vtkJPEGReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkJPEGReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkJPEGReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkJPEGReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkJPEGReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageReader2New
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageReader2New
#endif

static const char **PyvtkJPEGReader_Doc();


static PyObject *
PyvtkJPEGReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGReader *op = static_cast<vtkJPEGReader *>(vp);

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
      tempr = op->vtkJPEGReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGReader *op = static_cast<vtkJPEGReader *>(vp);

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
      tempr = op->vtkJPEGReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGReader *op = static_cast<vtkJPEGReader *>(vp);

  vtkJPEGReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkJPEGReader::NewInstance();
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
PyvtkJPEGReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkJPEGReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkJPEGReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGReader *op = static_cast<vtkJPEGReader *>(vp);

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
      tempr = op->vtkJPEGReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGReader *op = static_cast<vtkJPEGReader *>(vp);

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
      tempr = op->vtkJPEGReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkJPEGReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJPEGReader *op = static_cast<vtkJPEGReader *>(vp);

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
      tempr = op->vtkJPEGReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkJPEGReader_Methods[] = {
  {(char*)"GetClassName", PyvtkJPEGReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkJPEGReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkJPEGReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkJPEGReader\nC++: vtkJPEGReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkJPEGReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkJPEGReader\nC++: vtkJPEGReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkJPEGReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: int CanReadFile(const char *fname)\n\nIs the given file a JPEG file?\n"},
  {(char*)"GetFileExtensions", PyvtkJPEGReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {(char*)"GetDescriptiveName", PyvtkJPEGReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkJPEGReader_StaticNew()
{
  return vtkJPEGReader::New();
}

PyObject *PyVTKClass_vtkJPEGReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkJPEGReader_StaticNew,
    PyvtkJPEGReader_Methods,
    "vtkJPEGReader", modulename,
    NULL, NULL,
    PyvtkJPEGReader_Doc(),
    PyVTKClass_vtkImageReader2New(modulename));
  return cls;
}

const char **PyvtkJPEGReader_Doc()
{
  static const char *docstring[] = {
    "vtkJPEGReader - read JPEG files\n\n",
    "Superclass: vtkImageReader2\n\n",
    "vtkJPEGReader is a source object that reads JPEG files. It should be\nable to read most any JPEG file\n\nSee Also:\n\nvtkJPEGWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkJPEGReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkJPEGReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkJPEGReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

