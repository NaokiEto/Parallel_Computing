// python wrapper for vtkMNITransformWriter
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
#include "vtkMNITransformWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMNITransformWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMNITransformWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMNITransformWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMNITransformWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkMNITransformWriter_Doc();


static PyObject *
PyvtkMNITransformWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

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
      tempr = op->vtkMNITransformWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

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
      tempr = op->vtkMNITransformWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  vtkMNITransformWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMNITransformWriter::NewInstance();
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
PyvtkMNITransformWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMNITransformWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMNITransformWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

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
      op->vtkMNITransformWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

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
      tempr = op->vtkMNITransformWriter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

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
      tempr = op->vtkMNITransformWriter::GetFileExtensions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

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
      tempr = op->vtkMNITransformWriter::GetDescriptiveName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkMNITransformWriter::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

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
      tempr = op->vtkMNITransformWriter::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_AddTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  vtkAbstractTransform *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
    {
    if (ap.IsBound())
      {
      op->AddTransform(temp0);
      }
    else
      {
      op->vtkMNITransformWriter::AddTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

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
      tempr = op->vtkMNITransformWriter::GetNumberOfTransforms();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_SetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComments(temp0);
      }
    else
      {
      op->vtkMNITransformWriter::SetComments(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComments();
      }
    else
      {
      tempr = op->vtkMNITransformWriter::GetComments();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkMNITransformWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkMNITransformWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkMNITransformWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMNITransformWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMNITransformWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMNITransformWriter\nC++: vtkMNITransformWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMNITransformWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMNITransformWriter\nC++: vtkMNITransformWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkMNITransformWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSet the file name.\n"},
  {(char*)"GetFileName", PyvtkMNITransformWriter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSet the file name.\n"},
  {(char*)"GetFileExtensions", PyvtkMNITransformWriter_GetFileExtensions, 1,
   (char*)"V.GetFileExtensions() -> string\nC++: virtual const char *GetFileExtensions()\n\nGet the entension for this file format.\n"},
  {(char*)"GetDescriptiveName", PyvtkMNITransformWriter_GetDescriptiveName, 1,
   (char*)"V.GetDescriptiveName() -> string\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {(char*)"SetTransform", PyvtkMNITransformWriter_SetTransform, 1,
   (char*)"V.SetTransform(vtkAbstractTransform)\nC++: virtual void SetTransform(vtkAbstractTransform *transform)\n\nSet the transform.\n"},
  {(char*)"GetTransform", PyvtkMNITransformWriter_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\nSet the transform.\n"},
  {(char*)"AddTransform", PyvtkMNITransformWriter_AddTransform, 1,
   (char*)"V.AddTransform(vtkAbstractTransform)\nC++: virtual void AddTransform(vtkAbstractTransform *transform)\n\nAdd another transform to the file.  The next time that\nSetTransform is called, all added transforms will be removed.\n"},
  {(char*)"GetNumberOfTransforms", PyvtkMNITransformWriter_GetNumberOfTransforms, 1,
   (char*)"V.GetNumberOfTransforms() -> int\nC++: virtual int GetNumberOfTransforms()\n\nGet the number of transforms that will be written.\n"},
  {(char*)"SetComments", PyvtkMNITransformWriter_SetComments, 1,
   (char*)"V.SetComments(string)\nC++: void SetComments(char *)\n\nSet comments to be added to the file.\n"},
  {(char*)"GetComments", PyvtkMNITransformWriter_GetComments, 1,
   (char*)"V.GetComments() -> string\nC++: char *GetComments()\n\nSet comments to be added to the file.\n"},
  {(char*)"Write", PyvtkMNITransformWriter_Write, 1,
   (char*)"V.Write()\nC++: virtual void Write()\n\nWrite the file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMNITransformWriter_StaticNew()
{
  return vtkMNITransformWriter::New();
}

PyObject *PyVTKClass_vtkMNITransformWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMNITransformWriter_StaticNew,
    PyvtkMNITransformWriter_Methods,
    "vtkMNITransformWriter", modulename,
    NULL, NULL,
    PyvtkMNITransformWriter_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMNITransformWriter_Doc()
{
  static const char *docstring[] = {
    "vtkMNITransformWriter - A writer for MNI transformation files.\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "The MNI .xfm file format is used to store geometrical\ntransformations.  Three kinds of transformations are supported by the\nfile format: affine, thin-plate spline, and grid transformations.\nThis file format was developed at the McConnell Brain Imaging Centre\nat the Montreal Neurological Institute and is used by their software.\n\nSee Also:\n\nvtkMINCImageWriter vtkMNITransformReader\n\nThanks:\n\nThanks t",
    "o David Gobbi for writing this class and Atamai Inc. for\ncontributing it to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMNITransformWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMNITransformWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMNITransformWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

