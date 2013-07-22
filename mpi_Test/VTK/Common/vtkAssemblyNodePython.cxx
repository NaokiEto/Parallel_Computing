// python wrapper for vtkAssemblyNode
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
#include "vtkAssemblyNode.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAssemblyNode(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAssemblyNode(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAssemblyNodeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAssemblyNodeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkAssemblyNode_Doc();


static PyObject *
PyvtkAssemblyNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

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
      tempr = op->vtkAssemblyNode::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

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
      tempr = op->vtkAssemblyNode::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkAssemblyNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAssemblyNode::NewInstance();
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
PyvtkAssemblyNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAssemblyNode *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAssemblyNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_SetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->SetViewProp(temp0);
      }
    else
      {
      op->vtkAssemblyNode::SetViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkProp *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewProp();
      }
    else
      {
      tempr = op->vtkAssemblyNode::GetViewProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkMatrix4x4 *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
    {
    if (ap.IsBound())
      {
      op->SetMatrix(temp0);
      }
    else
      {
      op->vtkAssemblyNode::SetMatrix(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkMatrix4x4 *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMatrix();
      }
    else
      {
      tempr = op->vtkAssemblyNode::GetMatrix();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAssemblyNode_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

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
      tempr = op->vtkAssemblyNode::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkAssemblyNode_SetProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->SetProp(temp0);
      }
    else
      {
      op->vtkAssemblyNode::SetProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}
#endif


#if !defined(VTK_LEGACY_REMOVE)
static PyObject *
PyvtkAssemblyNode_GetProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssemblyNode *op = static_cast<vtkAssemblyNode *>(vp);

  vtkProp *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProp();
      }
    else
      {
      tempr = op->vtkAssemblyNode::GetProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}
#endif

static PyMethodDef PyvtkAssemblyNode_Methods[] = {
  {(char*)"GetClassName", PyvtkAssemblyNode_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAssemblyNode_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAssemblyNode_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAssemblyNode\nC++: vtkAssemblyNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAssemblyNode_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAssemblyNode\nC++: vtkAssemblyNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetViewProp", PyvtkAssemblyNode_SetViewProp, 1,
   (char*)"V.SetViewProp(vtkProp)\nC++: virtual void SetViewProp(vtkProp *prop)\n\nSet/Get the prop that this assembly node refers to.\n"},
  {(char*)"GetViewProp", PyvtkAssemblyNode_GetViewProp, 1,
   (char*)"V.GetViewProp() -> vtkProp\nC++: vtkProp *GetViewProp()\n\nSet/Get the prop that this assembly node refers to.\n"},
  {(char*)"SetMatrix", PyvtkAssemblyNode_SetMatrix, 1,
   (char*)"V.SetMatrix(vtkMatrix4x4)\nC++: void SetMatrix(vtkMatrix4x4 *matrix)\n\nSpecify a transformation matrix associated with the prop. Note:\nif the prop is not a type of vtkProp3D, then the transformation\nmatrix is ignored (and expected to be NULL). Also, internal to\nthis object the matrix is copied because the matrix is used for\ncomputation by vtkAssemblyPath.\n"},
  {(char*)"GetMatrix", PyvtkAssemblyNode_GetMatrix, 1,
   (char*)"V.GetMatrix() -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetMatrix()\n\nSpecify a transformation matrix associated with the prop. Note:\nif the prop is not a type of vtkProp3D, then the transformation\nmatrix is ignored (and expected to be NULL). Also, internal to\nthis object the matrix is copied because the matrix is used for\ncomputation by vtkAssemblyPath.\n"},
  {(char*)"GetMTime", PyvtkAssemblyNode_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: virtual unsigned long GetMTime()\n\nOverride the standard GetMTime() to check for the modified times\nof the prop and matrix.\n"},
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"SetProp", PyvtkAssemblyNode_SetProp, 1,
   (char*)"V.SetProp(vtkProp)\nC++: virtual void SetProp(vtkProp *prop)\n\n@deprecated Replaced by vtkAssemblyNode::SetViewProp() as of VTK\n5.0.\n"},
#endif
#if !defined(VTK_LEGACY_REMOVE)
  {(char*)"GetProp", PyvtkAssemblyNode_GetProp, 1,
   (char*)"V.GetProp() -> vtkProp\nC++: virtual vtkProp *GetProp()\n\n@deprecated Replaced by vtkAssemblyNode::GetViewProp() as of VTK\n5.0.\n"},
#endif
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAssemblyNode_StaticNew()
{
  return vtkAssemblyNode::New();
}

PyObject *PyVTKClass_vtkAssemblyNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAssemblyNode_StaticNew,
    PyvtkAssemblyNode_Methods,
    "vtkAssemblyNode", modulename,
    NULL, NULL,
    PyvtkAssemblyNode_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkAssemblyNode_Doc()
{
  static const char *docstring[] = {
    "vtkAssemblyNode - represent a node in an assembly\n\n",
    "Superclass: vtkObject\n\n",
    "vtkAssemblyNode represents a node in an assembly. It is used by\nvtkAssemblyPath to create hierarchical assemblies of props. The props\ncan be either 2D or 3D.\n\nAn assembly node refers to a vtkProp, and possibly a vtkMatrix4x4.\nNodes are used by vtkAssemblyPath to build fully evaluated path\n(matrices are concatenated through the path) that is used by picking\nand other operations involving assemblies",
    ".\n\nCaveats:\n\nThe assembly node is guaranteed to contain a reference to an instance\nof vtkMatrix4x4 if the prop referred to by the node is of type\nvtkProp3D (or subclass). The matrix is evaluated through the assembly\npath, so the assembly node's matrix is a function of its location in\nthe vtkAssemblyPath.\n\nvtkAssemblyNode does not reference count its association with\nvtkProp. Therefore, do not crea",
    "te an assembly node, associate a prop\nwith it, delete the prop, and then try to dereference the prop. The\nprogram will break! (Reason: vtkAssemblyPath (which uses\nvtkAssemblyNode) create self-referencing loops that destroy reference\ncounting.)\n\nSee Also:\n\nvtkAssemblyPath vtkProp vtkPicker vtkMatrix4x4\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAssemblyNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAssemblyNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAssemblyNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

