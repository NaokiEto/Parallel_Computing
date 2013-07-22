// python wrapper for vtkPDBReader
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
#include "vtkPDBReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPDBReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPDBReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPDBReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPDBReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkMoleculeReaderBaseNew
extern "C" { PyObject *PyVTKClass_vtkMoleculeReaderBaseNew(const char *); }
#define DECLARED_PyVTKClass_vtkMoleculeReaderBaseNew
#endif

static const char **PyvtkPDBReader_Doc();


static PyObject *
PyvtkPDBReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDBReader *op = static_cast<vtkPDBReader *>(vp);

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
      tempr = op->vtkPDBReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDBReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDBReader *op = static_cast<vtkPDBReader *>(vp);

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
      tempr = op->vtkPDBReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPDBReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDBReader *op = static_cast<vtkPDBReader *>(vp);

  vtkPDBReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPDBReader::NewInstance();
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
PyvtkPDBReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPDBReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPDBReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPDBReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPDBReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPDBReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPDBReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPDBReader\nC++: vtkPDBReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPDBReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPDBReader\nC++: vtkPDBReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPDBReader_StaticNew()
{
  return vtkPDBReader::New();
}

PyObject *PyVTKClass_vtkPDBReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPDBReader_StaticNew,
    PyvtkPDBReader_Methods,
    "vtkPDBReader", modulename,
    NULL, NULL,
    PyvtkPDBReader_Doc(),
    PyVTKClass_vtkMoleculeReaderBaseNew(modulename));
  return cls;
}

const char **PyvtkPDBReader_Doc()
{
  static const char *docstring[] = {
    "vtkPDBReader - read Molecular Data files\n\n",
    "Superclass: vtkMoleculeReaderBase\n\n",
    "vtkPDBReader is a source object that reads Molecule files The\nFileName must be specified\n\nThanks:\n\nDr. Jean M. Favre who developed and contributed this class\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPDBReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPDBReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPDBReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

