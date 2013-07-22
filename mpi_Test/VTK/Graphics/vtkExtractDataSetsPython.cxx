// python wrapper for vtkExtractDataSets
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
#include "vtkExtractDataSets.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractDataSets(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractDataSets(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractDataSetsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractDataSetsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew
#endif

static const char **PyvtkExtractDataSets_Doc();


static PyObject *
PyvtkExtractDataSets_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataSets *op = static_cast<vtkExtractDataSets *>(vp);

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
      tempr = op->vtkExtractDataSets::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataSets_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataSets *op = static_cast<vtkExtractDataSets *>(vp);

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
      tempr = op->vtkExtractDataSets::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataSets_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataSets *op = static_cast<vtkExtractDataSets *>(vp);

  vtkExtractDataSets *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractDataSets::NewInstance();
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
PyvtkExtractDataSets_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractDataSets *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractDataSets::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataSets_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataSets *op = static_cast<vtkExtractDataSets *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddDataSet(temp0, temp1);
      }
    else
      {
      op->vtkExtractDataSets::AddDataSet(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractDataSets_ClearDataSetList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearDataSetList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractDataSets *op = static_cast<vtkExtractDataSets *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearDataSetList();
      }
    else
      {
      op->vtkExtractDataSets::ClearDataSetList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractDataSets_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractDataSets_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractDataSets_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractDataSets_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractDataSets\nC++: vtkExtractDataSets *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractDataSets_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractDataSets\nC++: vtkExtractDataSets *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddDataSet", PyvtkExtractDataSets_AddDataSet, 1,
   (char*)"V.AddDataSet(int, int)\nC++: void AddDataSet(unsigned int level, unsigned int idx)\n\nAdd a dataset to be extracted.\n"},
  {(char*)"ClearDataSetList", PyvtkExtractDataSets_ClearDataSetList, 1,
   (char*)"V.ClearDataSetList()\nC++: void ClearDataSetList()\n\nRemove all entries from the list of datasets to be extracted.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractDataSets_StaticNew()
{
  return vtkExtractDataSets::New();
}

PyObject *PyVTKClass_vtkExtractDataSetsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractDataSets_StaticNew,
    PyvtkExtractDataSets_Methods,
    "vtkExtractDataSets", modulename,
    NULL, NULL,
    PyvtkExtractDataSets_Doc(),
    PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractDataSets_Doc()
{
  static const char *docstring[] = {
    "vtkExtractDataSets - extracts a number of datasets.\n\n",
    "Superclass: vtkHierarchicalBoxDataSetAlgorithm\n\n",
    "vtkExtractDataSets accepts a vtkHierarchicalBoxDataSet as input and\nextracts different datasets from different levels. The output is\nvtkHierarchicalBoxDataSet with same structure as the input with only\nthe selected datasets passed through.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractDataSets(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractDataSetsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractDataSets", o) != 0)
    {
    Py_DECREF(o);
    }

}

