// python wrapper for vtkGenericEdgeTable
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
#include "vtkGenericEdgeTable.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericEdgeTable(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericEdgeTable(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericEdgeTableNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericEdgeTableNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGenericEdgeTable_Doc();


static PyObject *
PyvtkGenericEdgeTable_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

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
      tempr = op->vtkGenericEdgeTable::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

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
      tempr = op->vtkGenericEdgeTable::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkGenericEdgeTable *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericEdgeTable::NewInstance();
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
PyvtkGenericEdgeTable_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericEdgeTable *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericEdgeTable::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_InsertEdge_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3;
  vtkIdType temp4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      op->InsertEdge(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      op->vtkGenericEdgeTable::InsertEdge(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(4, temp4);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericEdgeTable_InsertEdge_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  int temp3 = 1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
    {
    if (ap.IsBound())
      {
      op->InsertEdge(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkGenericEdgeTable::InsertEdge(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGenericEdgeTable_InsertEdge(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 5:
      return PyvtkGenericEdgeTable_InsertEdge_s1(self, args);
    case 3:
    case 4:
      return PyvtkGenericEdgeTable_InsertEdge_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "InsertEdge");
  return NULL;
}



static PyObject *
PyvtkGenericEdgeTable_RemoveEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveEdge(temp0, temp1);
      }
    else
      {
      tempr = op->vtkGenericEdgeTable::RemoveEdge(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_CheckEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->CheckEdge(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkGenericEdgeTable::CheckEdge(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      ap.SetArgValue(2, temp2);
      }
    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_IncrementEdgeReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementEdgeReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  vtkIdType temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->IncrementEdgeReferenceCount(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkGenericEdgeTable::IncrementEdgeReferenceCount(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_CheckEdgeReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckEdgeReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->CheckEdgeReferenceCount(temp0, temp1);
      }
    else
      {
      tempr = op->vtkGenericEdgeTable::CheckEdgeReferenceCount(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkGenericEdgeTable::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfComponents();
      }
    else
      {
      tempr = op->vtkGenericEdgeTable::GetNumberOfComponents();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfComponents(temp0);
      }
    else
      {
      op->vtkGenericEdgeTable::SetNumberOfComponents(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_CheckPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CheckPoint(temp0);
      }
    else
      {
      tempr = op->vtkGenericEdgeTable::CheckPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InsertPoint(temp0, temp1);
      }
    else
      {
      op->vtkGenericEdgeTable::InsertPoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_RemovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemovePoint(temp0);
      }
    else
      {
      op->vtkGenericEdgeTable::RemovePoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_IncrementPointReferenceCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncrementPointReferenceCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->IncrementPointReferenceCount(temp0);
      }
    else
      {
      op->vtkGenericEdgeTable::IncrementPointReferenceCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_DumpTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DumpTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DumpTable();
      }
    else
      {
      op->vtkGenericEdgeTable::DumpTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGenericEdgeTable_LoadFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericEdgeTable *op = static_cast<vtkGenericEdgeTable *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->LoadFactor();
      }
    else
      {
      op->vtkGenericEdgeTable::LoadFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericEdgeTable_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericEdgeTable_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK type and print macros.\n"},
  {(char*)"IsA", PyvtkGenericEdgeTable_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK type and print macros.\n"},
  {(char*)"NewInstance", PyvtkGenericEdgeTable_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericEdgeTable\nC++: vtkGenericEdgeTable *NewInstance()\n\nStandard VTK type and print macros.\n"},
  {(char*)"SafeDownCast", PyvtkGenericEdgeTable_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericEdgeTable\nC++: vtkGenericEdgeTable *SafeDownCast(vtkObject* o)\n\nStandard VTK type and print macros.\n"},
  {(char*)"InsertEdge", PyvtkGenericEdgeTable_InsertEdge, 1,
   (char*)"V.InsertEdge(int, int, int, int, int)\nC++: void InsertEdge(vtkIdType e1, vtkIdType e2, vtkIdType cellId,\n     int ref, vtkIdType &ptId)\nV.InsertEdge(int, int, int, int)\nC++: void InsertEdge(vtkIdType e1, vtkIdType e2, vtkIdType cellId,\n     int ref=1)\n\nSplit the edge with the indicated point id.\n"},
  {(char*)"RemoveEdge", PyvtkGenericEdgeTable_RemoveEdge, 1,
   (char*)"V.RemoveEdge(int, int) -> int\nC++: int RemoveEdge(vtkIdType e1, vtkIdType e2)\n\nMethod to remove an edge from the table. The method returns the\ncurrent reference count.\n"},
  {(char*)"CheckEdge", PyvtkGenericEdgeTable_CheckEdge, 1,
   (char*)"V.CheckEdge(int, int, int) -> int\nC++: int CheckEdge(vtkIdType e1, vtkIdType e2, vtkIdType &ptId)\n\nMethod to determine whether an edge is in the table (0 or 1), or\nnot (-1). It returns whether the edge was split (1) or not (0),\nand the point id exists.\n"},
  {(char*)"IncrementEdgeReferenceCount", PyvtkGenericEdgeTable_IncrementEdgeReferenceCount, 1,
   (char*)"V.IncrementEdgeReferenceCount(int, int, int) -> int\nC++: int IncrementEdgeReferenceCount(vtkIdType e1, vtkIdType e2,\n    vtkIdType cellId)\n\nMethod that increments the referencecount and returns it.\n"},
  {(char*)"CheckEdgeReferenceCount", PyvtkGenericEdgeTable_CheckEdgeReferenceCount, 1,
   (char*)"V.CheckEdgeReferenceCount(int, int) -> int\nC++: int CheckEdgeReferenceCount(vtkIdType e1, vtkIdType e2)\n\nReturn the edge reference count.\n"},
  {(char*)"Initialize", PyvtkGenericEdgeTable_Initialize, 1,
   (char*)"V.Initialize(int)\nC++: void Initialize(vtkIdType start)\n\nTo specify the starting point id. It will initialize LastPointId\nThis is very sensitive the start point should be cautiously\nchosen\n"},
  {(char*)"GetNumberOfComponents", PyvtkGenericEdgeTable_GetNumberOfComponents, 1,
   (char*)"V.GetNumberOfComponents() -> int\nC++: int GetNumberOfComponents()\n\nReturn the total number of components for the point-centered\nattributes.\n\\post positive_result: result>0\n"},
  {(char*)"SetNumberOfComponents", PyvtkGenericEdgeTable_SetNumberOfComponents, 1,
   (char*)"V.SetNumberOfComponents(int)\nC++: void SetNumberOfComponents(int count)\n\nSet the total number of components for the point-centered\nattributes.\n\\pre positive_count: count>0\n"},
  {(char*)"CheckPoint", PyvtkGenericEdgeTable_CheckPoint, 1,
   (char*)"V.CheckPoint(int) -> int\nC++: int CheckPoint(vtkIdType ptId)\n\nCheck if a point is already in the point table.\n"},
  {(char*)"InsertPoint", PyvtkGenericEdgeTable_InsertPoint, 1,
   (char*)"V.InsertPoint(int, [float, float, float])\nC++: void InsertPoint(vtkIdType ptId, double point[3])\n\nInsert point associated with an edge.\n"},
  {(char*)"RemovePoint", PyvtkGenericEdgeTable_RemovePoint, 1,
   (char*)"V.RemovePoint(int)\nC++: void RemovePoint(vtkIdType ptId)\n\nRemove a point from the point table.\n"},
  {(char*)"IncrementPointReferenceCount", PyvtkGenericEdgeTable_IncrementPointReferenceCount, 1,
   (char*)"V.IncrementPointReferenceCount(int)\nC++: void IncrementPointReferenceCount(vtkIdType ptId)\n\nIncrement the reference count for the indicated point.\n"},
  {(char*)"DumpTable", PyvtkGenericEdgeTable_DumpTable, 1,
   (char*)"V.DumpTable()\nC++: void DumpTable()\n\nFor debugging purposes. It is particularly useful to dump the\ntable and check that nothing is left after a complete iteration.\nLoadFactor should ideally be very low to be able to have a\nconstant time access\n"},
  {(char*)"LoadFactor", PyvtkGenericEdgeTable_LoadFactor, 1,
   (char*)"V.LoadFactor()\nC++: void LoadFactor()\n\nFor debugging purposes. It is particularly useful to dump the\ntable and check that nothing is left after a complete iteration.\nLoadFactor should ideally be very low to be able to have a\nconstant time access\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericEdgeTable_StaticNew()
{
  return vtkGenericEdgeTable::New();
}

PyObject *PyVTKClass_vtkGenericEdgeTableNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericEdgeTable_StaticNew,
    PyvtkGenericEdgeTable_Methods,
    "vtkGenericEdgeTable", modulename,
    NULL, NULL,
    PyvtkGenericEdgeTable_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGenericEdgeTable_Doc()
{
  static const char *docstring[] = {
    "vtkGenericEdgeTable - keep track of edges (defined by pair of integer\nid's)\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGenericEdgeTable is used to indicate the existance of and hold\ninformation about edges. Similar to vtkEdgeTable, this class is more\nsophisticated in that it uses reference counting to keep track of\nwhen information about an edge should be deleted.\n\nvtkGenericEdgeTable is a helper class used in the adaptor framework. \nIt is used during the tessellation process to hold information about\nthe error",
    " metric on each edge. This avoids recomputing the error\nmetric each time the same edge is visited.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericEdgeTable(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericEdgeTableNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericEdgeTable", o) != 0)
    {
    Py_DECREF(o);
    }

}
