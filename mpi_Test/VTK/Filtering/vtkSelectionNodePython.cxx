// python wrapper for vtkSelectionNode
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
#include "vtkSelectionNode.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSelectionNode(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSelectionNode(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSelectionNodeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSelectionNodeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSelectionNode_Doc();


static PyObject *
PyvtkSelectionNode_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

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
      tempr = op->vtkSelectionNode::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

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
      tempr = op->vtkSelectionNode::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSelectionNode::NewInstance();
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
PyvtkSelectionNode_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSelectionNode *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSelectionNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Initialize();
      }
    else
      {
      op->vtkSelectionNode::Initialize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkAbstractArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionList(temp0);
      }
    else
      {
      op->vtkSelectionNode::SetSelectionList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkAbstractArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionList();
      }
    else
      {
      tempr = op->vtkSelectionNode::GetSelectionList();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetSelectionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkDataSetAttributes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
    {
    if (ap.IsBound())
      {
      op->SetSelectionData(temp0);
      }
    else
      {
      op->vtkSelectionNode::SetSelectionData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetSelectionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkDataSetAttributes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionData();
      }
    else
      {
      tempr = op->vtkSelectionNode::GetSelectionData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkInformation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperties();
      }
    else
      {
      tempr = op->vtkSelectionNode::GetProperties();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->DeepCopy(temp0);
      }
    else
      {
      op->vtkSelectionNode::DeepCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkSelectionNode::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

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
      tempr = op->vtkSelectionNode::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONTENT_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTENT_TYPE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::CONTENT_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetContentType(temp0);
      }
    else
      {
      op->vtkSelectionNode::SetContentType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetContentType();
      }
    else
      {
      tempr = op->vtkSelectionNode::GetContentType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_FIELD_TYPE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_TYPE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::FIELD_TYPE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldType(temp0);
      }
    else
      {
      op->vtkSelectionNode::SetFieldType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldType();
      }
    else
      {
      tempr = op->vtkSelectionNode::GetFieldType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetSelectedProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedProp(temp0);
      }
    else
      {
      op->vtkSelectionNode::SetSelectedProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetSelectedProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkProp *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedProp();
      }
    else
      {
      tempr = op->vtkSelectionNode::GetSelectedProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_EPSILON(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EPSILON");

  vtkInformationDoubleKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::EPSILON();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONTAINING_CELLS(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTAINING_CELLS");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::CONTAINING_CELLS();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_COMPONENT_NUMBER(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPONENT_NUMBER");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::COMPONENT_NUMBER();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_INVERSE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INVERSE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::INVERSE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_PIXEL_COUNT(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PIXEL_COUNT");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::PIXEL_COUNT();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SOURCE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SOURCE");

  vtkInformationObjectBaseKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::SOURCE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_SOURCE_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SOURCE_ID");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::SOURCE_ID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROP(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PROP");

  vtkInformationObjectBaseKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::PROP();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROP_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PROP_ID");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::PROP_ID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROCESS_ID(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "PROCESS_ID");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::PROCESS_ID();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_COMPOSITE_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPOSITE_INDEX");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::COMPOSITE_INDEX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_HIERARCHICAL_LEVEL(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HIERARCHICAL_LEVEL");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::HIERARCHICAL_LEVEL();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_HIERARCHICAL_INDEX(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "HIERARCHICAL_INDEX");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::HIERARCHICAL_INDEX();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_INDEXED_VERTICES(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "INDEXED_VERTICES");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkSelectionNode::INDEXED_VERTICES();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_UnionSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnionSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
    {
    if (ap.IsBound())
      {
      op->UnionSelectionList(temp0);
      }
    else
      {
      op->vtkSelectionNode::UnionSelectionList(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionNode_EqualProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EqualProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = NULL;
  bool temp1 = true;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
    {
    if (ap.IsBound())
      {
      tempr = op->EqualProperties(temp0, temp1);
      }
    else
      {
      tempr = op->vtkSelectionNode::EqualProperties(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectionNode_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectionNode_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectionNode_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectionNode_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSelectionNode\nC++: vtkSelectionNode *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectionNode_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectionNode\nC++: vtkSelectionNode *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSelectionNode_Initialize, 1,
   (char*)"V.Initialize()\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {(char*)"SetSelectionList", PyvtkSelectionNode_SetSelectionList, 1,
   (char*)"V.SetSelectionList(vtkAbstractArray)\nC++: virtual void SetSelectionList(vtkAbstractArray *)\n\nSets the selection list.\n"},
  {(char*)"GetSelectionList", PyvtkSelectionNode_GetSelectionList, 1,
   (char*)"V.GetSelectionList() -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetSelectionList()\n\nSets the selection list.\n"},
  {(char*)"SetSelectionData", PyvtkSelectionNode_SetSelectionData, 1,
   (char*)"V.SetSelectionData(vtkDataSetAttributes)\nC++: virtual void SetSelectionData(vtkDataSetAttributes *data)\n\nSets the selection table.\n"},
  {(char*)"GetSelectionData", PyvtkSelectionNode_GetSelectionData, 1,
   (char*)"V.GetSelectionData() -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetSelectionData()\n\nSets the selection table.\n"},
  {(char*)"GetProperties", PyvtkSelectionNode_GetProperties, 1,
   (char*)"V.GetProperties() -> vtkInformation\nC++: vtkInformation *GetProperties()\n\nReturns the property map.\n"},
  {(char*)"DeepCopy", PyvtkSelectionNode_DeepCopy, 1,
   (char*)"V.DeepCopy(vtkSelectionNode)\nC++: virtual void DeepCopy(vtkSelectionNode *src)\n\nCopy properties, selection list and children of the input.\n"},
  {(char*)"ShallowCopy", PyvtkSelectionNode_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkSelectionNode)\nC++: virtual void ShallowCopy(vtkSelectionNode *src)\n\nCopy properties, selection list and children of the input. This\nis a shallow copy: selection lists and pointers in the properties\nare passed by reference.\n"},
  {(char*)"GetMTime", PyvtkSelectionNode_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nReturn the MTime taking into account changes to the properties\n"},
  {(char*)"CONTENT_TYPE", PyvtkSelectionNode_CONTENT_TYPE, 1,
   (char*)"V.CONTENT_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTENT_TYPE()\n\nGet the (primary) property that describes the content of a\nselection node's data. Other auxiliary description properties\nfollow. GLOBALIDS means that the selection list contains values\nfrom the vtkDataSetAttribute array of the same name. PEDIGREEIDS\nmeans that the selection list contains values from the\nvtkDataSetAttribute array of the same name. VALUES means the the\nselection list contains values from an arbitrary attribute array\n(ignores any globalids attribute) INDICES means that the\nselection list contains indexes into the cell or point arrays.\nFRUSTUM means the set of points and cells inside a frustum\nLOCATIONS means the set of points and cells near a set of\npositions THRESHOLDS means the points and cells with values\nwithin a set of ranges GetContentType() returns -1 if the content\ntype is not set.\n"},
  {(char*)"SetContentType", PyvtkSelectionNode_SetContentType, 1,
   (char*)"V.SetContentType(int)\nC++: virtual void SetContentType(int type)\n\nGet or set the content type of the selection. This is the same as\nsetting the CONTENT_TYPE() key on the property.\n"},
  {(char*)"GetContentType", PyvtkSelectionNode_GetContentType, 1,
   (char*)"V.GetContentType() -> int\nC++: virtual int GetContentType()\n\nGet or set the content type of the selection. This is the same as\nsetting the CONTENT_TYPE() key on the property.\n"},
  {(char*)"FIELD_TYPE", PyvtkSelectionNode_FIELD_TYPE, 1,
   (char*)"V.FIELD_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_TYPE()\n\nControls whether cell, point, or field data determine what is\ninside and out. The default is CELL. Vertex and edge types are\nalso available for graph classes. GetFieldType() returns -1 if\nthe field type is not set.\n"},
  {(char*)"SetFieldType", PyvtkSelectionNode_SetFieldType, 1,
   (char*)"V.SetFieldType(int)\nC++: virtual void SetFieldType(int type)\n\nGet or set the field type of the selection. This is the same as\nsetting the FIELD_TYPE() key on the property.\n"},
  {(char*)"GetFieldType", PyvtkSelectionNode_GetFieldType, 1,
   (char*)"V.GetFieldType() -> int\nC++: virtual int GetFieldType()\n\nGet or set the field type of the selection. This is the same as\nsetting the FIELD_TYPE() key on the property.\n"},
  {(char*)"SetSelectedProp", PyvtkSelectionNode_SetSelectedProp, 1,
   (char*)"V.SetSelectedProp(vtkProp)\nC++: virtual void SetSelectedProp(vtkProp *prop)\n\nGet or set the prop of the selection. This is the same as setting\nthe PROP() key on the property.\n"},
  {(char*)"GetSelectedProp", PyvtkSelectionNode_GetSelectedProp, 1,
   (char*)"V.GetSelectedProp() -> vtkProp\nC++: virtual vtkProp *GetSelectedProp()\n\nGet or set the prop of the selection. This is the same as setting\nthe PROP() key on the property.\n"},
  {(char*)"EPSILON", PyvtkSelectionNode_EPSILON, 1,
   (char*)"V.EPSILON() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *EPSILON()\n\nFor location selection of points, if distance is greater than\nthis reject.\n"},
  {(char*)"CONTAINING_CELLS", PyvtkSelectionNode_CONTAINING_CELLS, 1,
   (char*)"V.CONTAINING_CELLS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTAINING_CELLS()\n\nThis flag tells the extraction filter, when FIELD_TYPE==POINT,\nthat it should also extract the cells that contain any of the\nextracted points.\n"},
  {(char*)"COMPONENT_NUMBER", PyvtkSelectionNode_COMPONENT_NUMBER, 1,
   (char*)"V.COMPONENT_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COMPONENT_NUMBER()\n\nWhen ContentType==THRESHOLDS  or ContentType==VALUES i.e.\nthreshold and value based selections, it is possible pick the\ncomponent number using this key. If none is specified, the 0th\ncomponent is used. If any number less than 0 is specified, then\nthe magnitude is used.\n"},
  {(char*)"INVERSE", PyvtkSelectionNode_INVERSE, 1,
   (char*)"V.INVERSE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INVERSE()\n\nThis flag tells the extraction filter to exclude the selection.\n"},
  {(char*)"PIXEL_COUNT", PyvtkSelectionNode_PIXEL_COUNT, 1,
   (char*)"V.PIXEL_COUNT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PIXEL_COUNT()\n\nA helper for visible cell selector, this is the number of pixels\ncovered by the actor whose cells are listed in the selection.\n"},
  {(char*)"SOURCE", PyvtkSelectionNode_SOURCE, 1,
   (char*)"V.SOURCE() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *SOURCE()\n\nPointer to the data or algorithm the selection belongs to.\n"},
  {(char*)"SOURCE_ID", PyvtkSelectionNode_SOURCE_ID, 1,
   (char*)"V.SOURCE_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SOURCE_ID()\n\nID of the data or algorithm the selection belongs to. What ID\nmeans is application specific.\n"},
  {(char*)"PROP", PyvtkSelectionNode_PROP, 1,
   (char*)"V.PROP() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *PROP()\n\nPointer to the prop the selection belongs to.\n"},
  {(char*)"PROP_ID", PyvtkSelectionNode_PROP_ID, 1,
   (char*)"V.PROP_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PROP_ID()\n\nID of the prop the selection belongs to. What ID means is\napplication specific.\n"},
  {(char*)"PROCESS_ID", PyvtkSelectionNode_PROCESS_ID, 1,
   (char*)"V.PROCESS_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PROCESS_ID()\n\nProcess id the selection is on.\n"},
  {(char*)"COMPOSITE_INDEX", PyvtkSelectionNode_COMPOSITE_INDEX, 1,
   (char*)"V.COMPOSITE_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COMPOSITE_INDEX()\n\nUsed to identify a node in composite datasets.\n"},
  {(char*)"HIERARCHICAL_LEVEL", PyvtkSelectionNode_HIERARCHICAL_LEVEL, 1,
   (char*)"V.HIERARCHICAL_LEVEL() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIERARCHICAL_LEVEL()\n\nUsed to identify a dataset in a hiererchical box dataset.\n"},
  {(char*)"HIERARCHICAL_INDEX", PyvtkSelectionNode_HIERARCHICAL_INDEX, 1,
   (char*)"V.HIERARCHICAL_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIERARCHICAL_INDEX()\n\nUsed to identify a dataset in a hiererchical box dataset.\n"},
  {(char*)"INDEXED_VERTICES", PyvtkSelectionNode_INDEXED_VERTICES, 1,
   (char*)"V.INDEXED_VERTICES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INDEXED_VERTICES()\n\nThis key is used when making visible vertex selection. It means\nthat the cell ID selection has data about which vertices for each\ncell are visible.\n"},
  {(char*)"UnionSelectionList", PyvtkSelectionNode_UnionSelectionList, 1,
   (char*)"V.UnionSelectionList(vtkSelectionNode)\nC++: void UnionSelectionList(vtkSelectionNode *other)\n\nMerges the selection list between self and the other. Assumes\nthat both has identical properties.\n"},
  {(char*)"EqualProperties", PyvtkSelectionNode_EqualProperties, 1,
   (char*)"V.EqualProperties(vtkSelectionNode, bool) -> bool\nC++: bool EqualProperties(vtkSelectionNode *other,\n    bool fullcompare=true)\n\nCompares Properties of self and other to ensure that they are\nexactly same.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectionNode_StaticNew()
{
  return vtkSelectionNode::New();
}

PyObject *PyVTKClass_vtkSelectionNodeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectionNode_StaticNew,
    PyvtkSelectionNode_Methods,
    "vtkSelectionNode", modulename,
    NULL, NULL,
    PyvtkSelectionNode_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SELECTIONS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"GLOBALIDS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"PEDIGREEIDS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"VALUES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"INDICES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"FRUSTUM", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"LOCATIONS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"THRESHOLDS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"BLOCKS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"CELL", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"POINT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"FIELD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"VERTEX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"EDGE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"ROW", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkSelectionNode_Doc()
{
  static const char *docstring[] = {
    "vtkSelectionNode - A node in a selection tree. Used to store\nselection results.\n\n",
    "Superclass: vtkObject\n\n",
    "Caveats:\n\nNo SelectionList is created by default. It should be assigned.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectionNode(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectionNodeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectionNode", o) != 0)
    {
    Py_DECREF(o);
    }

}

