// python wrapper for vtkBSPCuts
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
#include "vtkBSPCuts.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBSPCuts(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBSPCuts(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBSPCutsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBSPCutsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkBSPCuts_Doc();


static PyObject *
PyvtkBSPCuts_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

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
      tempr = op->vtkBSPCuts::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

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
      tempr = op->vtkBSPCuts::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkBSPCuts *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBSPCuts::NewInstance();
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
PyvtkBSPCuts_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBSPCuts *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBSPCuts::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_CreateCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkKdNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
    {
    if (ap.IsBound())
      {
      op->CreateCuts(temp0);
      }
    else
      {
      op->vtkBSPCuts::CreateCuts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_GetKdNodeTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdNodeTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkKdNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKdNodeTree();
      }
    else
      {
      tempr = op->vtkBSPCuts::GetKdNodeTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_GetNumberOfCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCuts();
      }
    else
      {
      tempr = op->vtkBSPCuts::GetNumberOfCuts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_Equals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Equals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkBSPCuts *temp0 = NULL;
  double temp1 = 0.0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkBSPCuts") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->Equals(temp0, temp1);
      }
    else
      {
      tempr = op->vtkBSPCuts::Equals(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_PrintTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintTree();
      }
    else
      {
      op->vtkBSPCuts::PrintTree();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_PrintArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintArrays();
      }
    else
      {
      op->vtkBSPCuts::PrintArrays();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkBSPCuts *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkBSPCuts::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkBSPCuts_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkBSPCuts *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkBSPCuts::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBSPCuts_GetData_Methods[] = {
  {NULL, PyvtkBSPCuts_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkBSPCuts_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBSPCuts_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBSPCuts_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkBSPCuts_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}



static PyObject *
PyvtkBSPCuts_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkBSPCuts::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkBSPCuts::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPCuts_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPCuts *op = static_cast<vtkBSPCuts *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkBSPCuts::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBSPCuts_Methods[] = {
  {(char*)"GetClassName", PyvtkBSPCuts_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBSPCuts_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBSPCuts_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBSPCuts\nC++: vtkBSPCuts *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBSPCuts_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBSPCuts\nC++: vtkBSPCuts *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"CreateCuts", PyvtkBSPCuts_CreateCuts, 1,
   (char*)"V.CreateCuts(vtkKdNode)\nC++: void CreateCuts(vtkKdNode *kd)\n\nInitialize the cuts from a tree of vtkKdNode's\n"},
  {(char*)"GetKdNodeTree", PyvtkBSPCuts_GetKdNodeTree, 1,
   (char*)"V.GetKdNodeTree() -> vtkKdNode\nC++: vtkKdNode *GetKdNodeTree()\n\nReturn a tree of vtkKdNode's representing the cuts specified\n  in this object.  This is our copy, don't delete it.\n"},
  {(char*)"GetNumberOfCuts", PyvtkBSPCuts_GetNumberOfCuts, 1,
   (char*)"V.GetNumberOfCuts() -> int\nC++: int GetNumberOfCuts()\n\nGet the number of cuts in the partitioning, which also the size\nof\n  the arrays in the array representation of the partitioning.\n"},
  {(char*)"Equals", PyvtkBSPCuts_Equals, 1,
   (char*)"V.Equals(vtkBSPCuts, float) -> int\nC++: int Equals(vtkBSPCuts *other, double tolerance=0.0)\n\nCompare these cuts with those of the other tree.  Returns true if\nthe two trees are the same.\n"},
  {(char*)"PrintTree", PyvtkBSPCuts_PrintTree, 1,
   (char*)"V.PrintTree()\nC++: void PrintTree()\n\n"},
  {(char*)"PrintArrays", PyvtkBSPCuts_PrintArrays, 1,
   (char*)"V.PrintArrays()\nC++: void PrintArrays()\n\n"},
  {(char*)"GetData", PyvtkBSPCuts_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkBSPCuts\nC++: static vtkBSPCuts *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkBSPCuts\nC++: static vtkBSPCuts *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {(char*)"Initialize", PyvtkBSPCuts_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"ShallowCopy", PyvtkBSPCuts_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nShallow copy.  These copy the data, but not any of the pipeline\nconnections.\n"},
  {(char*)"DeepCopy", PyvtkBSPCuts_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nShallow copy.  These copy the data, but not any of the pipeline\nconnections.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBSPCuts_StaticNew()
{
  return vtkBSPCuts::New();
}

PyObject *PyVTKClass_vtkBSPCutsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBSPCuts_StaticNew,
    PyvtkBSPCuts_Methods,
    "vtkBSPCuts", modulename,
    NULL, NULL,
    PyvtkBSPCuts_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkBSPCuts_Doc()
{
  static const char *docstring[] = {
    "vtkBSPCuts - This class represents an axis-aligned Binary Spatial \n\n",
    "Superclass: vtkDataObject\n\n",
    "This class converts between the vtkKdTree\n   representation of a tree of vtkKdNodes (used by\nvtkDistributedDataFilter)\n   and a compact array representation that might be provided by a\n   graph partitioning library like Zoltan.  Such a representation\n   could be used in message passing.\n\nSee Also:\n\n\n     vtkKdTree vtkKdNode vtkDistributedDataFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBSPCuts(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBSPCutsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBSPCuts", o) != 0)
    {
    Py_DECREF(o);
    }

}

