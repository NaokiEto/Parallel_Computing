// python wrapper for vtkMNIObjectReader
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
#include "vtkMNIObjectReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMNIObjectReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMNIObjectReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMNIObjectReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMNIObjectReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMNIObjectReader_Doc();


static PyObject *
PyvtkMNIObjectReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectReader *op = static_cast<vtkMNIObjectReader *>(vp);

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
      tempr = op->vtkMNIObjectReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectReader *op = static_cast<vtkMNIObjectReader *>(vp);

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
      tempr = op->vtkMNIObjectReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectReader *op = static_cast<vtkMNIObjectReader *>(vp);

  vtkMNIObjectReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMNIObjectReader::NewInstance();
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
PyvtkMNIObjectReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMNIObjectReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMNIObjectReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectReader *op = static_cast<vtkMNIObjectReader *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkMNIObjectReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectReader *op = static_cast<vtkMNIObjectReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkMNIObjectReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectReader *op = static_cast<vtkMNIObjectReader *>(vp);

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
      tempr = op->vtkMNIObjectReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectReader *op = static_cast<vtkMNIObjectReader *>(vp);

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
      tempr = op->vtkMNIObjectReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectReader *op = static_cast<vtkMNIObjectReader *>(vp);

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
      tempr = op->vtkMNIObjectReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNIObjectReader_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNIObjectReader *op = static_cast<vtkMNIObjectReader *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperty();
      }
    else
      {
      tempr = op->vtkMNIObjectReader::GetProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMNIObjectReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMNIObjectReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMNIObjectReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMNIObjectReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMNIObjectReader\nC++: vtkMNIObjectReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMNIObjectReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMNIObjectReader\nC++: vtkMNIObjectReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMNIObjectReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet the file name.\n"},
  {(char*)"GetFileName", PyvtkMNIObjectReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet the file name.\n"},
  {(char*)"GetFileExtensions", PyvtkMNIObjectReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the entension for this file format.\n"},
  {(char*)"GetDescriptiveName", PyvtkMNIObjectReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {(char*)"CanReadFile", PyvtkMNIObjectReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the specified file can be read.\n"},
  {(char*)"GetProperty", PyvtkMNIObjectReader_GetProperty, 1,
   (char*)"V.GetProperty() -> vtkProperty\nC++: virtual vtkProperty *GetProperty()\n\nGet the property associated with the object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMNIObjectReader_StaticNew()
{
  return vtkMNIObjectReader::New();
}

PyObject *PyVTKClass_vtkMNIObjectReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMNIObjectReader_StaticNew,
    PyvtkMNIObjectReader_Methods,
    "vtkMNIObjectReader", modulename,
    NULL, NULL,
    PyvtkMNIObjectReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMNIObjectReader_Doc()
{
  static const char *docstring[] = {
    "vtkMNIObjectReader - A reader for MNI surface mesh files.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "The MNI .obj file format is used to store geometrical data.  This\nfile format was developed at the McConnell Brain Imaging Centre at\nthe Montreal Neurological Institute and is used by their software.\nOnly polygon and line files are supported by this reader, but for\nthose formats, all data elements are read including normals, colors,\nand surface properties.  ASCII and binary file types are supporte",
    "d.\n\nSee Also:\n\nvtkMINCImageReader vtkMNIObjectWriter vtkMNITransformReader\n\nThanks:\n\nThanks to David Gobbi for writing this class and Atamai Inc. for\ncontributing it to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMNIObjectReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMNIObjectReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMNIObjectReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

