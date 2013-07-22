// python wrapper for vtkMNITransformReader
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
#include "vtkMNITransformReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMNITransformReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMNITransformReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMNITransformReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMNITransformReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkMNITransformReader_Doc();


static PyObject *
PyvtkMNITransformReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

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
      tempr = op->vtkMNITransformReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

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
      tempr = op->vtkMNITransformReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

  vtkMNITransformReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMNITransformReader::NewInstance();
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
PyvtkMNITransformReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMNITransformReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMNITransformReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

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
      op->vtkMNITransformReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

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
      tempr = op->vtkMNITransformReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

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
      tempr = op->vtkMNITransformReader::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

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
      tempr = op->vtkMNITransformReader::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

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
      tempr = op->vtkMNITransformReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_GetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfTransforms();
      }
    else
      {
      tempr = op->vtkMNITransformReader::GetNumberOfTransforms();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_GetNthTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

  int temp0;
  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNthTransform(temp0);
      }
    else
      {
      tempr = op->vtkMNITransformReader::GetNthTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkMNITransformReader::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformReader_GetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformReader *op = static_cast<vtkMNITransformReader *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComments();
      }
    else
      {
      tempr = op->vtkMNITransformReader::GetComments();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMNITransformReader_Methods[] = {
  {(char*)"GetClassName", PyvtkMNITransformReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMNITransformReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMNITransformReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMNITransformReader\nC++: vtkMNITransformReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMNITransformReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMNITransformReader\nC++: vtkMNITransformReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMNITransformReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet the file name.\n"},
  {(char*)"GetFileName", PyvtkMNITransformReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet the file name.\n"},
  {(char*)"GetFileExtensions", PyvtkMNITransformReader_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the entension for this file format.\n"},
  {(char*)"GetDescriptiveName", PyvtkMNITransformReader_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {(char*)"CanReadFile", PyvtkMNITransformReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the specified file can be read.\n"},
  {(char*)"GetNumberOfTransforms", PyvtkMNITransformReader_GetNumberOfTransforms, 1,
   (char*)"V.GetNumberOfTransforms() -> int\nC++: virtual int GetNumberOfTransforms()\n\nGet the number of transforms in the file.\n"},
  {(char*)"GetNthTransform", PyvtkMNITransformReader_GetNthTransform, 1,
   (char*)"V.GetNthTransform(int) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetNthTransform(int i)\n\nGet one of the transforms listed in the file.\n"},
  {(char*)"GetTransform", PyvtkMNITransformReader_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nGet the transform that results from concatenating all of the\ntransforms in the file.  This will return null if you have not\nspecified a file name.\n"},
  {(char*)"GetComments", PyvtkMNITransformReader_GetComments, 1,
   (char*)"V.GetComments() -> string\nC++: virtual const char *GetComments()\n\nGet any comments that are included in the file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMNITransformReader_StaticNew()
{
  return vtkMNITransformReader::New();
}

PyObject *PyVTKClass_vtkMNITransformReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMNITransformReader_StaticNew,
    PyvtkMNITransformReader_Methods,
    "vtkMNITransformReader", modulename,
    NULL, NULL,
    PyvtkMNITransformReader_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMNITransformReader_Doc()
{
  static const char *docstring[] = {
    "vtkMNITransformReader - A reader for MNI transformation files.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "The MNI .xfm file format is used to store geometrical\ntransformations.  Three kinds of transformations are supported by the\nfile format: affine, thin-plate spline, and grid transformations.\nThis file format was developed at the McConnell Brain Imaging Centre\nat the Montreal Neurological Institute and is used by their software.\n\nSee Also:\n\nvtkMINCImageReader vtkMNITransformWriter\n\nThanks:\n\nThanks t",
    "o David Gobbi for writing this class and Atamai Inc. for\ncontributing it to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMNITransformReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMNITransformReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMNITransformReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

