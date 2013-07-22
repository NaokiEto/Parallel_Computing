// python wrapper for vtkIdList
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
#include "vtkIdList.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkIdList(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkIdList(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkIdListNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkIdListNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkIdList_Doc();


static PyObject *
PyvtkIdList_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkIdList::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  int temp1 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->Allocate(temp0, temp1);
      }
    else
      {
      tempr = op->vtkIdList::Allocate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

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
      tempr = op->vtkIdList::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

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
      tempr = op->vtkIdList::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdList *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkIdList::NewInstance();
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
PyvtkIdList_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkIdList *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkIdList::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_GetNumberOfIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfIds();
      }
    else
      {
      tempr = op->vtkIdList::GetNumberOfIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetId(temp0);
      }
    else
      {
      tempr = op->vtkIdList::GetId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_SetNumberOfIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfIds(temp0);
      }
    else
      {
      op->vtkIdList::SetNumberOfIds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_SetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetId(temp0, temp1);
      }
    else
      {
      op->vtkIdList::SetId(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_InsertId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  vtkIdType temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->InsertId(temp0, temp1);
      }
    else
      {
      op->vtkIdList::InsertId(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_InsertNextId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertNextId(temp0);
      }
    else
      {
      tempr = op->vtkIdList::InsertNextId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_InsertUniqueId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniqueId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->InsertUniqueId(temp0);
      }
    else
      {
      tempr = op->vtkIdList::InsertUniqueId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Reset();
      }
    else
      {
      op->vtkIdList::Reset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Squeeze();
      }
    else
      {
      op->vtkIdList::Squeeze();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkIdList::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_DeleteId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->DeleteId(temp0);
      }
    else
      {
      op->vtkIdList::DeleteId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_IsId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdType temp0;
  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsId(temp0);
      }
    else
      {
      tempr = op->vtkIdList::IsId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIdList_IntersectWith_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWith");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->IntersectWith(temp0);
      }
    else
      {
      op->vtkIdList::IntersectWith(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkIdList_IntersectWith_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWith");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdList *op = static_cast<vtkIdList *>(vp);

  vtkIdList *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, "vtkIdList"))
    {
    if (ap.IsBound())
      {
      op->IntersectWith(*temp0);
      }
    else
      {
      op->vtkIdList::IntersectWith(*temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkIdList_IntersectWith_Methods[] = {
  {NULL, PyvtkIdList_IntersectWith_s1, 1,
   (char*)"@O *vtkIdList"},
  {NULL, PyvtkIdList_IntersectWith_s2, 1,
   (char*)"@O &vtkIdList"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkIdList_IntersectWith(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkIdList_IntersectWith_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWith");
  return NULL;
}


static PyMethodDef PyvtkIdList_Methods[] = {
  {(char*)"Initialize", PyvtkIdList_Initialize, 1,
   (char*)"V.Initialize()\nC++: void Initialize()\n\n"},
  {(char*)"Allocate", PyvtkIdList_Allocate, 1,
   (char*)"V.Allocate(int, int) -> int\nC++: int Allocate(const vtkIdType sz, const int strategy=0)\n\n"},
  {(char*)"GetClassName", PyvtkIdList_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIdList_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIdList_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkIdList\nC++: vtkIdList *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIdList_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIdList\nC++: vtkIdList *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetNumberOfIds", PyvtkIdList_GetNumberOfIds, 1,
   (char*)"V.GetNumberOfIds() -> int\nC++: vtkIdType GetNumberOfIds()\n\nReturn the number of id's in the list.\n"},
  {(char*)"GetId", PyvtkIdList_GetId, 1,
   (char*)"V.GetId(int) -> int\nC++: vtkIdType GetId(const vtkIdType i)\n\nReturn the id at location i.\n"},
  {(char*)"SetNumberOfIds", PyvtkIdList_SetNumberOfIds, 1,
   (char*)"V.SetNumberOfIds(int)\nC++: void SetNumberOfIds(const vtkIdType number)\n\nSpecify the number of ids for this object to hold. Does an\nallocation as well as setting the number of ids.\n"},
  {(char*)"SetId", PyvtkIdList_SetId, 1,
   (char*)"V.SetId(int, int)\nC++: void SetId(const vtkIdType i, const vtkIdType vtkid)\n\nSet the id at location i. Doesn't do range checking so it's a bit\nfaster than InsertId. Make sure you use SetNumberOfIds() to\nallocate memory prior to using SetId().\n"},
  {(char*)"InsertId", PyvtkIdList_InsertId, 1,
   (char*)"V.InsertId(int, int)\nC++: void InsertId(const vtkIdType i, const vtkIdType vtkid)\n\nSet the id at location i. Does range checking and allocates\nmemory as necessary.\n"},
  {(char*)"InsertNextId", PyvtkIdList_InsertNextId, 1,
   (char*)"V.InsertNextId(int) -> int\nC++: vtkIdType InsertNextId(const vtkIdType vtkid)\n\nAdd the id specified to the end of the list. Range checking is\nperformed.\n"},
  {(char*)"InsertUniqueId", PyvtkIdList_InsertUniqueId, 1,
   (char*)"V.InsertUniqueId(int) -> int\nC++: vtkIdType InsertUniqueId(const vtkIdType vtkid)\n\nIf id is not already in list, insert it and return location in\nlist. Otherwise return just location in list.\n"},
  {(char*)"Reset", PyvtkIdList_Reset, 1,
   (char*)"V.Reset()\nC++: void Reset()\n\nReset to an empty state.\n"},
  {(char*)"Squeeze", PyvtkIdList_Squeeze, 1,
   (char*)"V.Squeeze()\nC++: void Squeeze()\n\nFree any unused memory.\n"},
  {(char*)"DeepCopy", PyvtkIdList_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkIdList)\nC++: void DeepCopy(vtkIdList *ids)\n\nCopy an id list by explicitly copying the internal array.\n"},
  {(char*)"DeleteId", PyvtkIdList_DeleteId, 1,
   (char*)"V.DeleteId(int)\nC++: void DeleteId(vtkIdType vtkid)\n\nDelete specified id from list. Will remove all occurrences of id\nin list.\n"},
  {(char*)"IsId", PyvtkIdList_IsId, 1,
   (char*)"V.IsId(int) -> int\nC++: vtkIdType IsId(vtkIdType vtkid)\n\nReturn -1 if id specified is not contained in the list; otherwise\nreturn the position in the list.\n"},
  {(char*)"IntersectWith", PyvtkIdList_IntersectWith, 1,
   (char*)"V.IntersectWith(vtkIdList)\nC++: void IntersectWith(vtkIdList *otherIds)\nV.IntersectWith(vtkIdList)\nC++: void IntersectWith(vtkIdList &otherIds)\n\nIntersect this list with another vtkIdList. Updates current list\naccording to result of intersection operation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIdList_StaticNew()
{
  return vtkIdList::New();
}

PyObject *PyVTKClass_vtkIdListNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIdList_StaticNew,
    PyvtkIdList_Methods,
    "vtkIdList", modulename,
    NULL, NULL,
    PyvtkIdList_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkIdList_Doc()
{
  static const char *docstring[] = {
    "vtkIdList - list of point or cell ids\n\n",
    "Superclass: vtkObject\n\n",
    "vtkIdList is used to represent and pass data id's between objects.\nvtkIdList may represent any type of integer id, but usually\nrepresents point and cell ids.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIdList(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIdListNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIdList", o) != 0)
    {
    Py_DECREF(o);
    }

}

