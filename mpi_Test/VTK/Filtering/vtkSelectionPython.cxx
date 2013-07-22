// python wrapper for vtkSelection
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
#include "vtkSelection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSelection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSelection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSelectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSelectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataObjectNew
extern "C" { PyObject *PyVTKClass_vtkDataObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataObjectNew
#endif

static const char **PyvtkSelection_Doc();


static PyObject *
PyvtkSelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

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
      tempr = op->vtkSelection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

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
      tempr = op->vtkSelection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSelection::NewInstance();
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
PyvtkSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSelection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSelection::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataObjectType();
      }
    else
      {
      tempr = op->vtkSelection::GetDataObjectType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfNodes();
      }
    else
      {
      tempr = op->vtkSelection::GetNumberOfNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_GetNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int temp0;
  vtkSelectionNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNode(temp0);
      }
    else
      {
      tempr = op->vtkSelection::GetNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_AddNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->AddNode(temp0);
      }
    else
      {
      op->vtkSelection::AddNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_RemoveNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RemoveNode(temp0);
      }
    else
      {
      op->vtkSelection::RemoveNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelection_RemoveNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->RemoveNode(temp0);
      }
    else
      {
      op->vtkSelection::RemoveNode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSelection_RemoveNode_Methods[] = {
  {NULL, PyvtkSelection_RemoveNode_s1, 1,
   (char*)"@I"},
  {NULL, PyvtkSelection_RemoveNode_s2, 1,
   (char*)"@O *vtkSelectionNode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSelection_RemoveNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_RemoveNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveNode");
  return NULL;
}



static PyObject *
PyvtkSelection_RemoveAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllNodes();
      }
    else
      {
      op->vtkSelection::RemoveAllNodes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

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
      op->vtkSelection::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

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
      op->vtkSelection::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_Union_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->Union(temp0);
      }
    else
      {
      op->vtkSelection::Union(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelection_Union_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->Union(temp0);
      }
    else
      {
      op->vtkSelection::Union(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSelection_Union_Methods[] = {
  {NULL, PyvtkSelection_Union_s1, 1,
   (char*)"@O *vtkSelection"},
  {NULL, PyvtkSelection_Union_s2, 1,
   (char*)"@O *vtkSelectionNode"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSelection_Union(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_Union_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Union");
  return NULL;
}



static PyObject *
PyvtkSelection_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkSelection::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_Dump(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dump");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelection *op = static_cast<vtkSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Dump();
      }
    else
      {
      op->vtkSelection::Dump();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelection_GetData_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = NULL;
  vtkSelection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    tempr = vtkSelection::GetData(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelection_GetData_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = NULL;
  int temp1 = 0;
  vtkSelection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    tempr = vtkSelection::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSelection_GetData_Methods[] = {
  {NULL, PyvtkSelection_GetData_s1, 1,
   (char*)"O *vtkInformation"},
  {NULL, PyvtkSelection_GetData_s2, 1,
   (char*)"O|i *vtkInformationVector"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkSelection_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelection_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 2:
      return PyvtkSelection_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return NULL;
}


static PyMethodDef PyvtkSelection_Methods[] = {
  {(char*)"GetClassName", PyvtkSelection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSelection\nC++: vtkSelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelection\nC++: vtkSelection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSelection_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"GetDataObjectType", PyvtkSelection_GetDataObjectType, 1,
   (char*)"V.GetDataObjectType() -> int\nC++: virtual int GetDataObjectType()\n\nReturns VTK_SELECTION enumeration value.\n"},
  {(char*)"GetNumberOfNodes", PyvtkSelection_GetNumberOfNodes, 1,
   (char*)"V.GetNumberOfNodes() -> int\nC++: unsigned int GetNumberOfNodes()\n\nReturns the number of nodes in this selection. Each node contains\ninformation about part of the selection.\n"},
  {(char*)"GetNode", PyvtkSelection_GetNode, 1,
   (char*)"V.GetNode(int) -> vtkSelectionNode\nC++: virtual vtkSelectionNode *GetNode(unsigned int idx)\n\nReturns a node given it's index. Performs bound checking and will\nreturn 0 if out-of-bounds.\n"},
  {(char*)"AddNode", PyvtkSelection_AddNode, 1,
   (char*)"V.AddNode(vtkSelectionNode)\nC++: virtual void AddNode(vtkSelectionNode *)\n\nAdds a selection node.\n"},
  {(char*)"RemoveNode", PyvtkSelection_RemoveNode, 1,
   (char*)"V.RemoveNode(int)\nC++: virtual void RemoveNode(unsigned int idx)\nV.RemoveNode(vtkSelectionNode)\nC++: virtual void RemoveNode(vtkSelectionNode *)\n\nRemoves a selection node.\n"},
  {(char*)"RemoveAllNodes", PyvtkSelection_RemoveAllNodes, 1,
   (char*)"V.RemoveAllNodes()\nC++: virtual void RemoveAllNodes()\n\nRemoves a selection node.\n"},
  {(char*)"DeepCopy", PyvtkSelection_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkDataObject)\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nCopy selection nodes of the input.\n"},
  {(char*)"ShallowCopy", PyvtkSelection_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkDataObject)\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nCopy selection nodes of the input. This is a shallow copy:\nselection lists and pointers in the properties are passed by\nreference.\n"},
  {(char*)"Union", PyvtkSelection_Union, 1,
   (char*)"V.Union(vtkSelection)\nC++: virtual void Union(vtkSelection *selection)\nV.Union(vtkSelectionNode)\nC++: virtual void Union(vtkSelectionNode *node)\n\nUnion this selection with the specified selection. Attempts to\nreuse selection nodes in this selection if properties match\nexactly. Otherwise, creates new selection nodes.\n"},
  {(char*)"GetMTime", PyvtkSelection_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime taking into account changes to the properties\n"},
  {(char*)"Dump", PyvtkSelection_Dump, 1,
   (char*)"V.Dump()\nC++: virtual void Dump()\n\nDumps the contents of the selection, giving basic information\nonly.\n"},
  {(char*)"GetData", PyvtkSelection_GetData, 1,
   (char*)"V.GetData(vtkInformation) -> vtkSelection\nC++: static vtkSelection *GetData(vtkInformation *info)\nV.GetData(vtkInformationVector, int) -> vtkSelection\nC++: static vtkSelection *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve a vtkSelection stored inside an invormation object.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelection_StaticNew()
{
  return vtkSelection::New();
}

PyObject *PyVTKClass_vtkSelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelection_StaticNew,
    PyvtkSelection_Methods,
    "vtkSelection", modulename,
    NULL, NULL,
    PyvtkSelection_Doc(),
    PyVTKClass_vtkDataObjectNew(modulename));
  return cls;
}

const char **PyvtkSelection_Doc()
{
  static const char *docstring[] = {
    "vtkSelection - A node in a selection tree. Used to store selection\nresults.\n\n",
    "Superclass: vtkDataObject\n\n",
    "See Also:\n\nvtkSelectionNode\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

