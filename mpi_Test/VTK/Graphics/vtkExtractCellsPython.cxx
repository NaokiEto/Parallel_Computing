// python wrapper for vtkExtractCells
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
#include "vtkExtractCells.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExtractCells(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExtractCells(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExtractCellsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExtractCellsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkExtractCells_Doc();


static PyObject *
PyvtkExtractCells_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

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
      tempr = op->vtkExtractCells::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCells_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

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
      tempr = op->vtkExtractCells::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCells_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkExtractCells *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExtractCells::NewInstance();
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
PyvtkExtractCells_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExtractCells *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExtractCells::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCells_SetCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->SetCellList(temp0);
      }
    else
      {
      op->vtkExtractCells::SetCellList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCells_AddCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->AddCellList(temp0);
      }
    else
      {
      op->vtkExtractCells::AddCellList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExtractCells_AddCellRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCells *op = static_cast<vtkExtractCells *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddCellRange(temp0, temp1);
      }
    else
      {
      op->vtkExtractCells::AddCellRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExtractCells_Methods[] = {
  {(char*)"GetClassName", PyvtkExtractCells_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExtractCells_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExtractCells_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExtractCells\nC++: vtkExtractCells *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExtractCells_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExtractCells\nC++: vtkExtractCells *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCellList", PyvtkExtractCells_SetCellList, 1,
   (char*)"V.SetCellList(vtkIdList)\nC++: void SetCellList(vtkIdList *l)\n\nSet the list of cell IDs that the output vtkUnstructuredGrid will\nbe composed of.  Replaces any other cell ID list supplied so far.\n (Set to NULL to free memory used by cell list.)\n"},
  {(char*)"AddCellList", PyvtkExtractCells_AddCellList, 1,
   (char*)"V.AddCellList(vtkIdList)\nC++: void AddCellList(vtkIdList *l)\n\nAdd the supplied list of cell IDs to those that will be included\nin the output vtkUnstructuredGrid.\n"},
  {(char*)"AddCellRange", PyvtkExtractCells_AddCellRange, 1,
   (char*)"V.AddCellRange(int, int)\nC++: void AddCellRange(vtkIdType from, vtkIdType to)\n\nAdd this range of cell IDs to those that will be included in the\noutput vtkUnstructuredGrid.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExtractCells_StaticNew()
{
  return vtkExtractCells::New();
}

PyObject *PyVTKClass_vtkExtractCellsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExtractCells_StaticNew,
    PyvtkExtractCells_Methods,
    "vtkExtractCells", modulename,
    NULL, NULL,
    PyvtkExtractCells_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkExtractCells_Doc()
{
  static const char *docstring[] = {
    "vtkExtractCells - subset a vtkDataSet to create a vtkUnstructuredGrid\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "Given a vtkDataSet and a list of cell Ids, create a\nvtkUnstructuredGrid\n   composed of these cells.  If the cell list is empty when\nvtkExtractCells\n   executes, it will set up the ugrid, point and cell arrays, with no\npoints,\n   cells or data.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExtractCells(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExtractCellsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExtractCells", o) != 0)
    {
    Py_DECREF(o);
    }

}

