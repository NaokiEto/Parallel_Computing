// python wrapper for vtkArrayToTable
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
#include "vtkArrayToTable.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkArrayToTable(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkArrayToTable(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkArrayToTableNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkArrayToTableNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTableAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTableAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTableAlgorithmNew
#endif

static const char **PyvtkArrayToTable_Doc();


static PyObject *
PyvtkArrayToTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayToTable *op = static_cast<vtkArrayToTable *>(vp);

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
      tempr = op->vtkArrayToTable::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayToTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayToTable *op = static_cast<vtkArrayToTable *>(vp);

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
      tempr = op->vtkArrayToTable::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkArrayToTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayToTable *op = static_cast<vtkArrayToTable *>(vp);

  vtkArrayToTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkArrayToTable::NewInstance();
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
PyvtkArrayToTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkArrayToTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkArrayToTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkArrayToTable_Methods[] = {
  {(char*)"GetClassName", PyvtkArrayToTable_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkArrayToTable_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkArrayToTable_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkArrayToTable\nC++: vtkArrayToTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkArrayToTable_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkArrayToTable\nC++: vtkArrayToTable *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkArrayToTable_StaticNew()
{
  return vtkArrayToTable::New();
}

PyObject *PyVTKClass_vtkArrayToTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkArrayToTable_StaticNew,
    PyvtkArrayToTable_Methods,
    "vtkArrayToTable", modulename,
    NULL, NULL,
    PyvtkArrayToTable_Doc(),
    PyVTKClass_vtkTableAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkArrayToTable_Doc()
{
  static const char *docstring[] = {
    "vtkArrayToTable - Converts one- and two-dimensional vtkArrayData\n\n",
    "Superclass: vtkTableAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkArrayToTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkArrayToTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkArrayToTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

