// python wrapper for vtkAssemblyPath
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
#include "vtkAssemblyPath.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAssemblyPath(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAssemblyPath(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAssemblyPathNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAssemblyPathNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCollectionNew
extern "C" { PyObject *PyVTKClass_vtkCollectionNew(const char *); }
#define DECLARED_PyVTKClass_vtkCollectionNew
#endif

static const char **PyvtkAssemblyPath_Doc();


static PyObject *
PyvtkAssemblyPath_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

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
      tempr = op->vtkAssemblyPath::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

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
      tempr = op->vtkAssemblyPath::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  vtkAssemblyPath *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAssemblyPath::NewInstance();
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
PyvtkAssemblyPath_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAssemblyPath *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAssemblyPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_AddNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  vtkProp *temp0 = NULL;
  vtkMatrix4x4 *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkProp") &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->AddNode(temp0, temp1);
      }
    else
      {
      op->vtkAssemblyPath::AddNode(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetNextNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  vtkAssemblyNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNextNode();
      }
    else
      {
      tempr = op->vtkAssemblyPath::GetNextNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetFirstNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  vtkAssemblyNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFirstNode();
      }
    else
      {
      tempr = op->vtkAssemblyPath::GetFirstNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetLastNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  vtkAssemblyNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLastNode();
      }
    else
      {
      tempr = op->vtkAssemblyPath::GetLastNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_DeleteLastNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteLastNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteLastNode();
      }
    else
      {
      op->vtkAssemblyPath::DeleteLastNode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

  vtkAssemblyPath *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAssemblyPath"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkAssemblyPath::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyPath_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyPath *op = static_cast<vtkAssemblyPath *>(vp);

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
      tempr = op->vtkAssemblyPath::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAssemblyPath_Methods[] = {
  {(char*)"GetClassName", PyvtkAssemblyPath_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAssemblyPath_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAssemblyPath_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAssemblyPath\nC++: vtkAssemblyPath *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAssemblyPath_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAssemblyPath\nC++: vtkAssemblyPath *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AddNode", PyvtkAssemblyPath_AddNode, 1,
   (char*)"V.AddNode(vtkProp, vtkMatrix4x4)\nC++: void AddNode(vtkProp *p, vtkMatrix4x4 *m)\n\nConvenience method adds a prop and matrix together, creating an\nassembly node transparently. The matrix pointer m may be NULL.\nNote: that matrix is the one, if any, associated with the prop.\n"},
  {(char*)"GetNextNode", PyvtkAssemblyPath_GetNextNode, 1,
   (char*)"V.GetNextNode() -> vtkAssemblyNode\nC++: vtkAssemblyNode *GetNextNode()\n\nGet the next assembly node in the list. The node returned\ncontains a pointer to a prop and a 4x4 matrix. The matrix is\nevaluated based on the preceding assembly hierarchy (i.e., the\nmatrix is not necessarily as the same as the one that was added\nwith AddNode() because of the concatenation of matrices in the\nassembly hierarchy).\n"},
  {(char*)"GetFirstNode", PyvtkAssemblyPath_GetFirstNode, 1,
   (char*)"V.GetFirstNode() -> vtkAssemblyNode\nC++: vtkAssemblyNode *GetFirstNode()\n\nGet the first assembly node in the list. See the comments for\nGetNextNode() regarding the contents of the returned node. (Note:\nThis node corresponds to the vtkProp associated with the\nvtkRenderer.\n"},
  {(char*)"GetLastNode", PyvtkAssemblyPath_GetLastNode, 1,
   (char*)"V.GetLastNode() -> vtkAssemblyNode\nC++: vtkAssemblyNode *GetLastNode()\n\nGet the last assembly node in the list. See the comments for\nGetNextNode() regarding the contents of the returned node.\n"},
  {(char*)"DeleteLastNode", PyvtkAssemblyPath_DeleteLastNode, 1,
   (char*)"V.DeleteLastNode()\nC++: void DeleteLastNode()\n\nDelete the last assembly node in the list. This is like a stack\npop.\n"},
  {(char*)"ShallowCopy", PyvtkAssemblyPath_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkAssemblyPath)\nC++: void ShallowCopy(vtkAssemblyPath *path)\n\nPerform a shallow copy (reference counted) on the incoming path.\n"},
  {(char*)"GetMTime", PyvtkAssemblyPath_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverride the standard GetMTime() to check for the modified times\nof the nodes in this path.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAssemblyPath_StaticNew()
{
  return vtkAssemblyPath::New();
}

PyObject *PyVTKClass_vtkAssemblyPathNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAssemblyPath_StaticNew,
    PyvtkAssemblyPath_Methods,
    "vtkAssemblyPath", modulename,
    NULL, NULL,
    PyvtkAssemblyPath_Doc(),
    PyVTKClass_vtkCollectionNew(modulename));
  return cls;
}

const char **PyvtkAssemblyPath_Doc()
{
  static const char *docstring[] = {
    "vtkAssemblyPath - a list of nodes that form an assembly path\n\n",
    "Superclass: vtkCollection\n\n",
    "vtkAssemblyPath represents an ordered list of assembly nodes that\nrepresent a fully evaluated assembly path. This class is used\nprimarily for picking. Note that the use of this class is to add one\nor more assembly nodes to form the path. (An assembly node consists\nof an instance of vtkProp and vtkMatrix4x4, the matrix may be NULL.)\nAs each node is added, the matrices are concatenated to create a\nf",
    "inal, evaluated matrix.\n\nSee Also:\n\nvtkAssemblyNode vtkAssembly vtkActor vtkMatrix4x4 vtkProp\nvtkAbstractPicker\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAssemblyPath(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAssemblyPathNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAssemblyPath", o) != 0)
    {
    Py_DECREF(o);
    }

}

