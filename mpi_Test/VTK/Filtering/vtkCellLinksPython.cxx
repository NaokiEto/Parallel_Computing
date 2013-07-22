// python wrapper for vtkCellLinks
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
#include "vtkCellLinks.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCellLinks(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCellLinks(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCellLinksNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCellLinksNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCellLinks_Doc();


static PyObject *
PyvtkCellLinks_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

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
      tempr = op->vtkCellLinks::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

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
      tempr = op->vtkCellLinks::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkCellLinks *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCellLinks::NewInstance();
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
PyvtkCellLinks_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCellLinks *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCellLinks::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  vtkIdType temp1 = 1000;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      op->Allocate(temp0, temp1);
      }
    else
      {
      op->vtkCellLinks::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_GetNcells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNcells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  unsigned short tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNcells(temp0);
      }
    else
      {
      tempr = op->vtkCellLinks::GetNcells(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_BuildLinks_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
    {
    if (ap.IsBound())
      {
      op->BuildLinks(temp0);
      }
    else
      {
      op->vtkCellLinks::BuildLinks(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCellLinks_BuildLinks_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkDataSet *temp0 = NULL;
  vtkCellArray *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkCellArray"))
    {
    if (ap.IsBound())
      {
      op->BuildLinks(temp0, temp1);
      }
    else
      {
      op->vtkCellLinks::BuildLinks(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCellLinks_BuildLinks(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkCellLinks_BuildLinks_s1(self, args);
    case 2:
      return PyvtkCellLinks_BuildLinks_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "BuildLinks");
  return NULL;
}



static PyObject *
PyvtkCellLinks_InsertNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  int temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextPoint(temp0);
      }
    else
      {
      tempr = op->vtkCellLinks::InsertNextPoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_InsertNextCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->InsertNextCellReference(temp0, temp1);
      }
    else
      {
      op->vtkCellLinks::InsertNextCellReference(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_DeletePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeletePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeletePoint(temp0);
      }
    else
      {
      op->vtkCellLinks::DeletePoint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_RemoveCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->RemoveCellReference(temp0, temp1);
      }
    else
      {
      op->vtkCellLinks::RemoveCellReference(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_AddCellReference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellReference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->AddCellReference(temp0, temp1);
      }
    else
      {
      op->vtkCellLinks::AddCellReference(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_ResizeCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkIdType temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->ResizeCellList(temp0, temp1);
      }
    else
      {
      op->vtkCellLinks::ResizeCellList(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkCellLinks::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkCellLinks::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActualMemorySize();
      }
    else
      {
      tempr = op->vtkCellLinks::GetActualMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCellLinks_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellLinks *op = static_cast<vtkCellLinks *>(vp);

  vtkCellLinks *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellLinks"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkCellLinks::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCellLinks_Methods[] = {
  {(char*)"GetClassName", PyvtkCellLinks_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCellLinks_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCellLinks_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCellLinks\nC++: vtkCellLinks *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCellLinks_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCellLinks\nC++: vtkCellLinks *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Allocate", PyvtkCellLinks_Allocate, 1,
   (char*)"V.Allocate(int, int)\nC++: void Allocate(vtkIdType numLinks, vtkIdType ext=1000)\n\nAllocate the specified number of links (i.e., number of points)\nthat will be built.\n"},
  {(char*)"GetNcells", PyvtkCellLinks_GetNcells, 1,
   (char*)"V.GetNcells(int) -> int\nC++: unsigned short GetNcells(vtkIdType ptId)\n\nGet the number of cells using the point specified by ptId.\n"},
  {(char*)"BuildLinks", PyvtkCellLinks_BuildLinks, 1,
   (char*)"V.BuildLinks(vtkDataSet)\nC++: void BuildLinks(vtkDataSet *data)\nV.BuildLinks(vtkDataSet, vtkCellArray)\nC++: void BuildLinks(vtkDataSet *data, vtkCellArray *Connectivity)\n\nBuild the link list array.\n"},
  {(char*)"InsertNextPoint", PyvtkCellLinks_InsertNextPoint, 1,
   (char*)"V.InsertNextPoint(int) -> int\nC++: vtkIdType InsertNextPoint(int numLinks)\n\nInsert a new point into the cell-links data structure. The size\nparameter is the initial size of the list.\n"},
  {(char*)"InsertNextCellReference", PyvtkCellLinks_InsertNextCellReference, 1,
   (char*)"V.InsertNextCellReference(int, int)\nC++: void InsertNextCellReference(vtkIdType ptId,\n    vtkIdType cellId)\n\nInsert a cell id into the list of cells (at the end) using the\ncell id provided. (Make sure to extend the link list (if\nnecessary) using the method ResizeCellList().)\n"},
  {(char*)"DeletePoint", PyvtkCellLinks_DeletePoint, 1,
   (char*)"V.DeletePoint(int)\nC++: void DeletePoint(vtkIdType ptId)\n\nDelete point (and storage) by destroying links to using cells.\n"},
  {(char*)"RemoveCellReference", PyvtkCellLinks_RemoveCellReference, 1,
   (char*)"V.RemoveCellReference(int, int)\nC++: void RemoveCellReference(vtkIdType cellId, vtkIdType ptId)\n\nDelete the reference to the cell (cellId) from the point (ptId).\nThis removes the reference to the cellId from the cell list, but\ndoes not resize the list (recover memory with ResizeCellList(),\nif necessary).\n"},
  {(char*)"AddCellReference", PyvtkCellLinks_AddCellReference, 1,
   (char*)"V.AddCellReference(int, int)\nC++: void AddCellReference(vtkIdType cellId, vtkIdType ptId)\n\nAdd the reference to the cell (cellId) from the point (ptId).\nThis adds a reference to the cellId from the cell list, but does\nnot resize the list (extend memory with ResizeCellList(), if\nnecessary).\n"},
  {(char*)"ResizeCellList", PyvtkCellLinks_ResizeCellList, 1,
   (char*)"V.ResizeCellList(int, int)\nC++: void ResizeCellList(vtkIdType ptId, int size)\n\nChange the length of a point's link list (i.e., list of cells\nusing a point) by the size specified.\n"},
  {(char*)"Squeeze", PyvtkCellLinks_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\nReclaim any unused memory.\n"},
  {(char*)"Reset", PyvtkCellLinks_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset to a state of no entries without freeing the memory.\n"},
  {(char*)"GetActualMemorySize", PyvtkCellLinks_GetActualMemorySize, 1,
   (char*)"V.GetActualMemorySize() -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kilobytes consumed by this cell links array.\nUsed to support streaming and reading/writing data. The value\nreturned is guaranteed to be greater than or equal to the memory\nrequired to actually represent the data represented by this\nobject. The information returned is valid only after the pipeline\nhas been updated.\n"},
  {(char*)"DeepCopy", PyvtkCellLinks_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkCellLinks)\nC++: void DeepCopy(vtkCellLinks *src)\n\nStandard DeepCopy method.  Since this object contains no\nreference to other objects, there is no ShallowCopy.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCellLinks_StaticNew()
{
  return vtkCellLinks::New();
}

PyObject *PyVTKClass_vtkCellLinksNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCellLinks_StaticNew,
    PyvtkCellLinks_Methods,
    "vtkCellLinks", modulename,
    NULL, NULL,
    PyvtkCellLinks_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCellLinks_Doc()
{
  static const char *docstring[] = {
    "vtkCellLinks - object represents upward pointers from points to list\nof cells using each point\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCellLinks is a supplemental object to vtkCellArray and\nvtkCellTypes, enabling access from points to the cells using the\npoints. vtkCellLinks is a list of Links, each link represents a\ndynamic list of cell id's using the point. The information provided\nby this object can be used to determine neighbors and construct other\nlocal topological information.\n\nSee Also:\n\nvtkCellArray vtkCellTypes\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCellLinks(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCellLinksNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCellLinks", o) != 0)
    {
    Py_DECREF(o);
    }

}

