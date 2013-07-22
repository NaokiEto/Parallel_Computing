// python wrapper for vtkLogLookupTable
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
#include "vtkLogLookupTable.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLogLookupTable(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLogLookupTable(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLogLookupTableNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLogLookupTableNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLookupTableNew
extern "C" { PyObject *PyVTKClass_vtkLookupTableNew(const char *); }
#define DECLARED_PyVTKClass_vtkLookupTableNew
#endif

static const char **PyvtkLogLookupTable_Doc();


static PyObject *
PyvtkLogLookupTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogLookupTable *op = static_cast<vtkLogLookupTable *>(vp);

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
      tempr = op->vtkLogLookupTable::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogLookupTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogLookupTable *op = static_cast<vtkLogLookupTable *>(vp);

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
      tempr = op->vtkLogLookupTable::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLogLookupTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLogLookupTable *op = static_cast<vtkLogLookupTable *>(vp);

  vtkLogLookupTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLogLookupTable::NewInstance();
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
PyvtkLogLookupTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLogLookupTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLogLookupTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLogLookupTable_Methods[] = {
  {(char*)"GetClassName", PyvtkLogLookupTable_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLogLookupTable_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLogLookupTable_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLogLookupTable\nC++: vtkLogLookupTable *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLogLookupTable_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLogLookupTable\nC++: vtkLogLookupTable *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLogLookupTable_StaticNew()
{
  return vtkLogLookupTable::New();
}

PyObject *PyVTKClass_vtkLogLookupTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLogLookupTable_StaticNew,
    PyvtkLogLookupTable_Methods,
    "vtkLogLookupTable", modulename,
    NULL, NULL,
    PyvtkLogLookupTable_Doc(),
    PyVTKClass_vtkLookupTableNew(modulename));
  return cls;
}

const char **PyvtkLogLookupTable_Doc()
{
  static const char *docstring[] = {
    "vtkLogLookupTable - map scalars into colors using log (base 10) scale\n\n",
    "Superclass: vtkLookupTable\n\n",
    "This class is an empty shell.  Use vtkLookupTable with\nSetScaleToLog10() instead.\n\nSee Also:\n\nvtkLookupTable\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLogLookupTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLogLookupTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLogLookupTable", o) != 0)
    {
    Py_DECREF(o);
    }

}

