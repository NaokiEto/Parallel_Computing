// python wrapper for vtkGeoImageNode
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
#include "vtkGeoImageNode.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoImageNode(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoImageNode(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoImageNodeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoImageNodeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGeoTreeNodeNew
extern "C" { PyObject *PyVTKClass_vtkGeoTreeNodeNew(const char *); }
#define DECLARED_PyVTKClass_vtkGeoTreeNodeNew
#endif

static const char **PyvtkGeoImageNode_Doc();


static PyObject *
PyvtkGeoImageNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

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
      tempr = op->vtkGeoImageNode::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

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
      tempr = op->vtkGeoImageNode::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  vtkGeoImageNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoImageNode::NewInstance();
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
PyvtkGeoImageNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoImageNode *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoImageNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_GetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  int temp0;
  vtkGeoImageNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetChild(temp0);
      }
    else
      {
      tempr = op->vtkGeoImageNode::GetChild(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  vtkGeoImageNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParent();
      }
    else
      {
      tempr = op->vtkGeoImageNode::GetParent();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_GetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImage();
      }
    else
      {
      tempr = op->vtkGeoImageNode::GetImage();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_SetImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetImage(temp0);
      }
    else
      {
      op->vtkGeoImageNode::SetImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_GetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  vtkTexture *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTexture();
      }
    else
      {
      tempr = op->vtkGeoImageNode::GetTexture();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  vtkTexture *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTexture"))
    {
    if (ap.IsBound())
      {
      op->SetTexture(temp0);
      }
    else
      {
      op->vtkGeoImageNode::SetTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_LoadAnImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadAnImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->LoadAnImage(temp0);
      }
    else
      {
      op->vtkGeoImageNode::LoadAnImage(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkGeoImageNode::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  vtkGeoTreeNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGeoTreeNode"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkGeoImageNode::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_HasData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasData();
      }
    else
      {
      tempr = op->vtkGeoImageNode::HasData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoImageNode_DeleteData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoImageNode *op = static_cast<vtkGeoImageNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->DeleteData();
      }
    else
      {
      op->vtkGeoImageNode::DeleteData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoImageNode_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoImageNode_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoImageNode_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoImageNode_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoImageNode\nC++: vtkGeoImageNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoImageNode_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoImageNode\nC++: vtkGeoImageNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetChild", PyvtkGeoImageNode_GetChild, 1,
   (char*)"V.GetChild(int) -> vtkGeoImageNode\nC++: vtkGeoImageNode *GetChild(int idx)\n\nEvery subclass implements these methods returning the specific\ntype. This is easier than templating.\n"},
  {(char*)"GetParent", PyvtkGeoImageNode_GetParent, 1,
   (char*)"V.GetParent() -> vtkGeoImageNode\nC++: vtkGeoImageNode *GetParent()\n\nEvery subclass implements these methods returning the specific\ntype. This is easier than templating.\n"},
  {(char*)"GetImage", PyvtkGeoImageNode_GetImage, 1,
   (char*)"V.GetImage() -> vtkImageData\nC++: vtkImageData *GetImage()\n\nGet the image tile.\n"},
  {(char*)"SetImage", PyvtkGeoImageNode_SetImage, 1,
   (char*)"V.SetImage(vtkImageData)\nC++: void SetImage(vtkImageData *image)\n\nGet the image tile.\n"},
  {(char*)"GetTexture", PyvtkGeoImageNode_GetTexture, 1,
   (char*)"V.GetTexture() -> vtkTexture\nC++: vtkTexture *GetTexture()\n\nGet the image tile.\n"},
  {(char*)"SetTexture", PyvtkGeoImageNode_SetTexture, 1,
   (char*)"V.SetTexture(vtkTexture)\nC++: void SetTexture(vtkTexture *texture)\n\nGet the image tile.\n"},
  {(char*)"LoadAnImage", PyvtkGeoImageNode_LoadAnImage, 1,
   (char*)"V.LoadAnImage(string)\nC++: void LoadAnImage(const char *prefix)\n\nThis loads the image from a tile database at the specified\nlocation.\n"},
  {(char*)"ShallowCopy", PyvtkGeoImageNode_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkGeoTreeNode)\nC++: virtual void ShallowCopy(vtkGeoTreeNode *src)\n\nShallow and Deep copy.\n"},
  {(char*)"DeepCopy", PyvtkGeoImageNode_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkGeoTreeNode)\nC++: virtual void DeepCopy(vtkGeoTreeNode *src)\n\nShallow and Deep copy.\n"},
  {(char*)"HasData", PyvtkGeoImageNode_HasData, 1,
   (char*)"V.HasData() -> bool\nC++: virtual bool HasData()\n\n"},
  {(char*)"DeleteData", PyvtkGeoImageNode_DeleteData, 1,
   (char*)"V.DeleteData()\nC++: virtual void DeleteData()\n\nDeletes the data associated with the node to make this an \"empty\"\nnode. This is performed when the node has been unused for a\ncertain amount of time.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoImageNode_StaticNew()
{
  return vtkGeoImageNode::New();
}

PyObject *PyVTKClass_vtkGeoImageNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoImageNode_StaticNew,
    PyvtkGeoImageNode_Methods,
    "vtkGeoImageNode", modulename,
    NULL, NULL,
    PyvtkGeoImageNode_Doc(),
    PyVTKClass_vtkGeoTreeNodeNew(modulename));
  return cls;
}

const char **PyvtkGeoImageNode_Doc()
{
  static const char *docstring[] = {
    "vtkGeoImageNode - A node in a multi-resolution image tree.\n\n",
    "Superclass: vtkGeoTreeNode\n\n",
    "vtkGeoImageNode contains an image tile in a multi-resolution image\ntree, along with metadata about that image's extents.\n\nSee Also:\n\nvtkGeoTreeNode vtkGeoTerrainNode\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoImageNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoImageNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoImageNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

