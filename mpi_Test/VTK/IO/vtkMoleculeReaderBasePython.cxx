// python wrapper for vtkMoleculeReaderBase
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
#include "vtkMoleculeReaderBase.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMoleculeReaderBase(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMoleculeReaderBase(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMoleculeReaderBaseNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMoleculeReaderBaseNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMoleculeReaderBase_Doc();


static PyObject *
PyvtkMoleculeReaderBase_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

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
      tempr = op->vtkMoleculeReaderBase::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

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
      tempr = op->vtkMoleculeReaderBase::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  vtkMoleculeReaderBase *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMoleculeReaderBase::NewInstance();
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
PyvtkMoleculeReaderBase_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

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
      op->vtkMoleculeReaderBase::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

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
      tempr = op->vtkMoleculeReaderBase::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_SetBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBScale(temp0);
      }
    else
      {
      op->vtkMoleculeReaderBase::SetBScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBScale();
      }
    else
      {
      tempr = op->vtkMoleculeReaderBase::GetBScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_SetHBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHBScale(temp0);
      }
    else
      {
      op->vtkMoleculeReaderBase::SetHBScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetHBScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHBScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHBScale();
      }
    else
      {
      tempr = op->vtkMoleculeReaderBase::GetHBScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMoleculeReaderBase_GetNumberOfAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeReaderBase *op = static_cast<vtkMoleculeReaderBase *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfAtoms();
      }
    else
      {
      tempr = op->vtkMoleculeReaderBase::GetNumberOfAtoms();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMoleculeReaderBase_Methods[] = {
  {(char*)"GetClassName", PyvtkMoleculeReaderBase_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMoleculeReaderBase_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMoleculeReaderBase_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMoleculeReaderBase\nC++: vtkMoleculeReaderBase *NewInstance()\n\n"},
  {(char*)"SetFileName", PyvtkMoleculeReaderBase_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\n"},
  {(char*)"GetFileName", PyvtkMoleculeReaderBase_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"SetBScale", PyvtkMoleculeReaderBase_SetBScale, 1,
   (char*)"V.SetBScale(float)\nC++: void SetBScale(double a)\n\n"},
  {(char*)"GetBScale", PyvtkMoleculeReaderBase_GetBScale, 1,
   (char*)"V.GetBScale() -> float\nC++: double GetBScale()\n\n"},
  {(char*)"SetHBScale", PyvtkMoleculeReaderBase_SetHBScale, 1,
   (char*)"V.SetHBScale(float)\nC++: void SetHBScale(double a)\n\n"},
  {(char*)"GetHBScale", PyvtkMoleculeReaderBase_GetHBScale, 1,
   (char*)"V.GetHBScale() -> float\nC++: double GetHBScale()\n\n"},
  {(char*)"GetNumberOfAtoms", PyvtkMoleculeReaderBase_GetNumberOfAtoms, 1,
   (char*)"V.GetNumberOfAtoms() -> int\nC++: int GetNumberOfAtoms()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkMoleculeReaderBaseNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkMoleculeReaderBase_Methods,
    "vtkMoleculeReaderBase", modulename,
    NULL, NULL,
    PyvtkMoleculeReaderBase_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMoleculeReaderBase_Doc()
{
  static const char *docstring[] = {
    "vtkMoleculeReaderBase - read Molecular Data files\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMoleculeReaderBase is a source object that reads Molecule files\nThe FileName must be specified\n\nThanks:\n\nDr. Jean M. Favre who developed and contributed this class\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMoleculeReaderBase(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMoleculeReaderBaseNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMoleculeReaderBase", o) != 0)
    {
    Py_DECREF(o);
    }

}

