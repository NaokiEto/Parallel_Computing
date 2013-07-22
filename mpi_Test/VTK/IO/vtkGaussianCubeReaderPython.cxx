// python wrapper for vtkGaussianCubeReader
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
#include "vtkGaussianCubeReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGaussianCubeReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGaussianCubeReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGaussianCubeReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGaussianCubeReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMoleculeReaderBaseNew
extern "C" { PyObject *PyVTKClass_vtkMoleculeReaderBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkMoleculeReaderBaseNew
#endif

static const char **PyvtkGaussianCubeReader_Doc();


static PyObject *
PyvtkGaussianCubeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

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
      tempr = op->vtkGaussianCubeReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

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
      tempr = op->vtkGaussianCubeReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  vtkGaussianCubeReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGaussianCubeReader::NewInstance();
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
PyvtkGaussianCubeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGaussianCubeReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGaussianCubeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  vtkTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkGaussianCubeReader::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

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
      op->vtkGaussianCubeReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

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
      tempr = op->vtkGaussianCubeReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGaussianCubeReader_GetGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianCubeReader *op = static_cast<vtkGaussianCubeReader *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGridOutput();
      }
    else
      {
      tempr = op->vtkGaussianCubeReader::GetGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGaussianCubeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkGaussianCubeReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGaussianCubeReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGaussianCubeReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGaussianCubeReader\nC++: vtkGaussianCubeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGaussianCubeReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGaussianCubeReader\nC++: vtkGaussianCubeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetTransform", PyvtkGaussianCubeReader_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkTransform\nC++: vtkTransform *GetTransform()\n\n"},
  {(char*)"SetFileName", PyvtkGaussianCubeReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\n"},
  {(char*)"GetFileName", PyvtkGaussianCubeReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"GetGridOutput", PyvtkGaussianCubeReader_GetGridOutput, 1,
   (char*)"V.GetGridOutput() -> vtkImageData\nC++: vtkImageData *GetGridOutput()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGaussianCubeReader_StaticNew()
{
  return vtkGaussianCubeReader::New();
}

PyObject *PyVTKClass_vtkGaussianCubeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGaussianCubeReader_StaticNew,
    PyvtkGaussianCubeReader_Methods,
    "vtkGaussianCubeReader", modulename,
    NULL, NULL,
    PyvtkGaussianCubeReader_Doc(),
    PyVTKClass_vtkMoleculeReaderBaseNew(modulename));
  return cls;
}

const char **PyvtkGaussianCubeReader_Doc()
{
  static const char *docstring[] = {
    "vtkGaussianCubeReader - read ASCII Gaussian Cube Data files\n\n",
    "Superclass: vtkMoleculeReaderBase\n\n",
    "vtkGaussianCubeReader is a source object that reads ASCII files\nfollowing the description in http://www.gaussian.com/00000430.htm The\nFileName must be specified.\n\nThanks:\n\nDr. Jean M. Favre who developed and contributed this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGaussianCubeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGaussianCubeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGaussianCubeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

