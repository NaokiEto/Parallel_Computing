// python wrapper for vtkHierarchicalDataExtractDataSets
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
#include "vtkHierarchicalDataExtractDataSets.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHierarchicalDataExtractDataSets(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHierarchicalDataExtractDataSets(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHierarchicalDataExtractDataSetsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHierarchicalDataExtractDataSetsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkExtractDataSetsNew
extern "C" { PyObject *PyVTKClass_vtkExtractDataSetsNew(const char *); }
#define DECLARED_PyVTKClass_vtkExtractDataSetsNew
#endif

static const char **PyvtkHierarchicalDataExtractDataSets_Doc();


static PyObject *
PyvtkHierarchicalDataExtractDataSets_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractDataSets *op = static_cast<vtkHierarchicalDataExtractDataSets *>(vp);

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
      tempr = op->vtkHierarchicalDataExtractDataSets::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataExtractDataSets_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractDataSets *op = static_cast<vtkHierarchicalDataExtractDataSets *>(vp);

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
      tempr = op->vtkHierarchicalDataExtractDataSets::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalDataExtractDataSets_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalDataExtractDataSets *op = static_cast<vtkHierarchicalDataExtractDataSets *>(vp);

  vtkHierarchicalDataExtractDataSets *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHierarchicalDataExtractDataSets::NewInstance();
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
PyvtkHierarchicalDataExtractDataSets_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHierarchicalDataExtractDataSets *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHierarchicalDataExtractDataSets::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHierarchicalDataExtractDataSets_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalDataExtractDataSets_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalDataExtractDataSets_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalDataExtractDataSets_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHierarchicalDataExtractDataSets\nC++: vtkHierarchicalDataExtractDataSets *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalDataExtractDataSets_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalDataExtractDataSets\nC++: vtkHierarchicalDataExtractDataSets *SafeDownCast(\n    vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalDataExtractDataSets_StaticNew()
{
  return vtkHierarchicalDataExtractDataSets::New();
}

PyObject *PyVTKClass_vtkHierarchicalDataExtractDataSetsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalDataExtractDataSets_StaticNew,
    PyvtkHierarchicalDataExtractDataSets_Methods,
    "vtkHierarchicalDataExtractDataSets", modulename,
    NULL, NULL,
    PyvtkHierarchicalDataExtractDataSets_Doc(),
    PyVTKClass_vtkExtractDataSetsNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalDataExtractDataSets_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalDataExtractDataSets - extract a number of datasets\n\n",
    "Superclass: vtkExtractDataSets\n\n",
    "Legacy class. Use vtkExtractDataSets instead.\n\nSee Also:\n\nvtkExtractDataSets\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalDataExtractDataSets(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalDataExtractDataSetsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalDataExtractDataSets", o) != 0)
    {
    Py_DECREF(o);
    }

}

