// python wrapper for vtkPNrrdReader
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
#include "vtkPNrrdReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPNrrdReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPNrrdReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPNrrdReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPNrrdReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMPIImageReaderNew
extern "C" { PyObject *PyVTKClass_vtkMPIImageReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkMPIImageReaderNew
#endif

static const char **PyvtkPNrrdReader_Doc();


static PyObject *
PyvtkPNrrdReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNrrdReader *op = static_cast<vtkPNrrdReader *>(vp);

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
      tempr = op->vtkPNrrdReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNrrdReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNrrdReader *op = static_cast<vtkPNrrdReader *>(vp);

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
      tempr = op->vtkPNrrdReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNrrdReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNrrdReader *op = static_cast<vtkPNrrdReader *>(vp);

  vtkPNrrdReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPNrrdReader::NewInstance();
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
PyvtkPNrrdReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPNrrdReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPNrrdReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNrrdReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNrrdReader *op = static_cast<vtkPNrrdReader *>(vp);

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
      tempr = op->vtkPNrrdReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPNrrdReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPNrrdReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPNrrdReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPNrrdReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPNrrdReader\nC++: vtkPNrrdReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPNrrdReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPNrrdReader\nC++: vtkPNrrdReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkPNrrdReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *filename)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPNrrdReader_StaticNew()
{
  return vtkPNrrdReader::New();
}

PyObject *PyVTKClass_vtkPNrrdReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPNrrdReader_StaticNew,
    PyvtkPNrrdReader_Methods,
    "vtkPNrrdReader", modulename,
    NULL, NULL,
    PyvtkPNrrdReader_Doc(),
    PyVTKClass_vtkMPIImageReaderNew(modulename));
  return cls;
}

const char **PyvtkPNrrdReader_Doc()
{
  static const char *docstring[] = {
    "vtkPNrrdReader - Read nrrd files efficiently from parallel file\nsystems (and reasonably well elsewhere).\n\n",
    "Superclass: vtkMPIImageReader\n\n",
    "vtkPNrrdReader is a subclass of vtkMPIImageReader that will read Nrrd\nformat header information of the image before reading the data.  This\nmeans that the reader will automatically set information like file\ndimensions.\n\nBugs:\n\nThere are several limitations on what type of nrrd files we can read.\n This reader only supports nrrd files in raw format.  Other encodings\nlike ascii and hex will result in",
    " errors.  When reading in detached\nheaders, this only supports reading one file that is detached.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPNrrdReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPNrrdReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPNrrdReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

