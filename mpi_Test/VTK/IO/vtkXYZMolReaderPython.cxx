// python wrapper for vtkXYZMolReader
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
#include "vtkXYZMolReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXYZMolReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXYZMolReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXYZMolReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXYZMolReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMoleculeReaderBaseNew
extern "C" { PyObject *PyVTKClass_vtkMoleculeReaderBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkMoleculeReaderBaseNew
#endif

static const char **PyvtkXYZMolReader_Doc();


static PyObject *
PyvtkXYZMolReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

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
      tempr = op->vtkXYZMolReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYZMolReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

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
      tempr = op->vtkXYZMolReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYZMolReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

  vtkXYZMolReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXYZMolReader::NewInstance();
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
PyvtkXYZMolReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXYZMolReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXYZMolReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYZMolReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

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
      tempr = op->vtkXYZMolReader::CanReadFile(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYZMolReader_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTimeStep(temp0);
      }
    else
      {
      op->vtkXYZMolReader::SetTimeStep(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXYZMolReader_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTimeStep();
      }
    else
      {
      tempr = op->vtkXYZMolReader::GetTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXYZMolReader_GetMaxTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYZMolReader *op = static_cast<vtkXYZMolReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxTimeStep();
      }
    else
      {
      tempr = op->vtkXYZMolReader::GetMaxTimeStep();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXYZMolReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXYZMolReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXYZMolReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXYZMolReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXYZMolReader\nC++: vtkXYZMolReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXYZMolReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXYZMolReader\nC++: vtkXYZMolReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CanReadFile", PyvtkXYZMolReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: virtual int CanReadFile(const char *name)\n\nTest whether the file with the given name can be read by this\nreader.\n"},
  {(char*)"SetTimeStep", PyvtkXYZMolReader_SetTimeStep, 1,
   (char*)"V.SetTimeStep(int)\nC++: void SetTimeStep(int a)\n\nSet the current time step. It should be greater than 0 and\nsmaller than MaxTimeStep.\n"},
  {(char*)"GetTimeStep", PyvtkXYZMolReader_GetTimeStep, 1,
   (char*)"V.GetTimeStep() -> int\nC++: int GetTimeStep()\n\nSet the current time step. It should be greater than 0 and\nsmaller than MaxTimeStep.\n"},
  {(char*)"GetMaxTimeStep", PyvtkXYZMolReader_GetMaxTimeStep, 1,
   (char*)"V.GetMaxTimeStep() -> int\nC++: int GetMaxTimeStep()\n\nGet the maximum time step.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXYZMolReader_StaticNew()
{
  return vtkXYZMolReader::New();
}

PyObject *PyVTKClass_vtkXYZMolReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXYZMolReader_StaticNew,
    PyvtkXYZMolReader_Methods,
    "vtkXYZMolReader", modulename,
    NULL, NULL,
    PyvtkXYZMolReader_Doc(),
    PyVTKClass_vtkMoleculeReaderBaseNew(modulename));
  return cls;
}

const char **PyvtkXYZMolReader_Doc()
{
  static const char *docstring[] = {
    "vtkXYZMolReader - read Molecular Data files\n\n",
    "Superclass: vtkMoleculeReaderBase\n\n",
    "vtkXYZMolReader is a source object that reads Molecule files The\nFileName must be specified\n\nThanks:\n\nDr. Jean M. Favre who developed and contributed this class\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXYZMolReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXYZMolReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXYZMolReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

