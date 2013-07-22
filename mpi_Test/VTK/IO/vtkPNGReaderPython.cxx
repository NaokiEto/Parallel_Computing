// python wrapper for vtkPNGReader
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
#include "vtkPNGReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPNGReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPNGReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPNGReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPNGReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageReader2New
extern "C" { PyObject *PyVTKClass_vtkImageReader2New(const char *); }
#define DECLARED_PyVTKClass_vtkImageReader2New
#endif

static const char **PyvtkPNGReader_Doc();


static PyObject *
PyvtkPNGReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

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
      tempr = op->vtkPNGReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNGReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

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
      tempr = op->vtkPNGReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNGReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  vtkPNGReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPNGReader::NewInstance();
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
PyvtkPNGReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPNGReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPNGReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNGReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

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
      tempr = op->vtkPNGReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNGReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

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
      tempr = op->vtkPNGReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNGReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

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
      tempr = op->vtkPNGReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPNGReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPNGReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPNGReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPNGReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPNGReader\nC++: vtkPNGReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPNGReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPNGReader\nC++: vtkPNGReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkPNGReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *fname)\n\nIs the given file a PNG file?\n"},
  {(char*)"GetFileExtensions", PyvtkPNGReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {(char*)"GetDescriptiveName", PyvtkPNGReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPNGReader_StaticNew()
{
  return vtkPNGReader::New();
}

PyObject *PyVTKClass_vtkPNGReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPNGReader_StaticNew,
    PyvtkPNGReader_Methods,
    "vtkPNGReader", modulename,
    NULL, NULL,
    PyvtkPNGReader_Doc(),
    PyVTKClass_vtkImageReader2New(modulename));
  return cls;
}

const char **PyvtkPNGReader_Doc()
{
  static const char *docstring[] = {
    "vtkPNGReader - read PNG files\n\n",
    "Superclass: vtkImageReader2\n\n",
    "vtkPNGReader is a source object that reads PNG files. It should be\nable to read most any PNG file\n\nSee Also:\n\nvtkPNGWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPNGReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPNGReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPNGReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

