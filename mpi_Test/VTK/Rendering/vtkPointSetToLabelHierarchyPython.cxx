// python wrapper for vtkPointSetToLabelHierarchy
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
#include "vtkPointSetToLabelHierarchy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointSetToLabelHierarchy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointSetToLabelHierarchy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointSetToLabelHierarchyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointSetToLabelHierarchyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkLabelHierarchyAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkLabelHierarchyAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkLabelHierarchyAlgorithmNew
#endif

static const char **PyvtkPointSetToLabelHierarchy_Doc();


static PyObject *
PyvtkPointSetToLabelHierarchy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

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
      tempr = op->vtkPointSetToLabelHierarchy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

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
      tempr = op->vtkPointSetToLabelHierarchy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  vtkPointSetToLabelHierarchy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::NewInstance();
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
PyvtkPointSetToLabelHierarchy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPointSetToLabelHierarchy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPointSetToLabelHierarchy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTargetLabelCount(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetTargetLabelCount(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetTargetLabelCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetLabelCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTargetLabelCount();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::GetTargetLabelCount();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumDepth(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetMaximumDepth(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetMaximumDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumDepth();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::GetMaximumDepth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseUnicodeStrings(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetUseUnicodeStrings(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetUseUnicodeStrings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUnicodeStrings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseUnicodeStrings();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::GetUseUnicodeStrings();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOn();
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::UseUnicodeStringsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUnicodeStringsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseUnicodeStringsOff();
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::UseUnicodeStringsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLabelArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetLabelArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelArrayName();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::GetLabelArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSizeArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetSizeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSizeArrayName();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::GetSizeArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPriorityArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetPriorityArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetPriorityArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPriorityArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPriorityArrayName();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::GetPriorityArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetIconIndexArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconIndexArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIconIndexArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetIconIndexArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetIconIndexArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconIndexArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIconIndexArrayName();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::GetIconIndexArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetOrientationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOrientationArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetOrientationArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetOrientationArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOrientationArrayName();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::GetOrientationArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetBoundedSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundedSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBoundedSizeArrayName(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetBoundedSizeArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetBoundedSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundedSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoundedSizeArrayName();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::GetBoundedSizeArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_SetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  vtkTextProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
    {
    if (ap.IsBound())
      {
      op->SetTextProperty(temp0);
      }
    else
      {
      op->vtkPointSetToLabelHierarchy::SetTextProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetToLabelHierarchy_GetTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToLabelHierarchy *op = static_cast<vtkPointSetToLabelHierarchy *>(vp);

  vtkTextProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextProperty();
      }
    else
      {
      tempr = op->vtkPointSetToLabelHierarchy::GetTextProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSetToLabelHierarchy_Methods[] = {
  {(char*)"GetClassName", PyvtkPointSetToLabelHierarchy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointSetToLabelHierarchy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointSetToLabelHierarchy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointSetToLabelHierarchy\nC++: vtkPointSetToLabelHierarchy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointSetToLabelHierarchy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointSetToLabelHierarchy\nC++: vtkPointSetToLabelHierarchy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTargetLabelCount", PyvtkPointSetToLabelHierarchy_SetTargetLabelCount, 1,
   (char*)"V.SetTargetLabelCount(int)\nC++: void SetTargetLabelCount(int a)\n\nSet/get the \"ideal\" number of labels to associate with each node\nin the output hierarchy.\n"},
  {(char*)"GetTargetLabelCount", PyvtkPointSetToLabelHierarchy_GetTargetLabelCount, 1,
   (char*)"V.GetTargetLabelCount() -> int\nC++: int GetTargetLabelCount()\n\nSet/get the \"ideal\" number of labels to associate with each node\nin the output hierarchy.\n"},
  {(char*)"SetMaximumDepth", PyvtkPointSetToLabelHierarchy_SetMaximumDepth, 1,
   (char*)"V.SetMaximumDepth(int)\nC++: void SetMaximumDepth(int a)\n\nSet/get the maximum tree depth in the output hierarchy.\n"},
  {(char*)"GetMaximumDepth", PyvtkPointSetToLabelHierarchy_GetMaximumDepth, 1,
   (char*)"V.GetMaximumDepth() -> int\nC++: int GetMaximumDepth()\n\nSet/get the maximum tree depth in the output hierarchy.\n"},
  {(char*)"SetUseUnicodeStrings", PyvtkPointSetToLabelHierarchy_SetUseUnicodeStrings, 1,
   (char*)"V.SetUseUnicodeStrings(bool)\nC++: void SetUseUnicodeStrings(bool a)\n\nWhether to use unicode strings.\n"},
  {(char*)"GetUseUnicodeStrings", PyvtkPointSetToLabelHierarchy_GetUseUnicodeStrings, 1,
   (char*)"V.GetUseUnicodeStrings() -> bool\nC++: bool GetUseUnicodeStrings()\n\nWhether to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOn", PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOn, 1,
   (char*)"V.UseUnicodeStringsOn()\nC++: void UseUnicodeStringsOn()\n\nWhether to use unicode strings.\n"},
  {(char*)"UseUnicodeStringsOff", PyvtkPointSetToLabelHierarchy_UseUnicodeStringsOff, 1,
   (char*)"V.UseUnicodeStringsOff()\nC++: void UseUnicodeStringsOff()\n\nWhether to use unicode strings.\n"},
  {(char*)"SetLabelArrayName", PyvtkPointSetToLabelHierarchy_SetLabelArrayName, 1,
   (char*)"V.SetLabelArrayName(string)\nC++: virtual void SetLabelArrayName(const char *name)\n\nSet/get the label array name.\n"},
  {(char*)"GetLabelArrayName", PyvtkPointSetToLabelHierarchy_GetLabelArrayName, 1,
   (char*)"V.GetLabelArrayName() -> string\nC++: virtual const char *GetLabelArrayName()\n\nSet/get the label array name.\n"},
  {(char*)"SetSizeArrayName", PyvtkPointSetToLabelHierarchy_SetSizeArrayName, 1,
   (char*)"V.SetSizeArrayName(string)\nC++: virtual void SetSizeArrayName(const char *name)\n\nSet/get the priority array name.\n"},
  {(char*)"GetSizeArrayName", PyvtkPointSetToLabelHierarchy_GetSizeArrayName, 1,
   (char*)"V.GetSizeArrayName() -> string\nC++: virtual const char *GetSizeArrayName()\n\nSet/get the priority array name.\n"},
  {(char*)"SetPriorityArrayName", PyvtkPointSetToLabelHierarchy_SetPriorityArrayName, 1,
   (char*)"V.SetPriorityArrayName(string)\nC++: virtual void SetPriorityArrayName(const char *name)\n\nSet/get the priority array name.\n"},
  {(char*)"GetPriorityArrayName", PyvtkPointSetToLabelHierarchy_GetPriorityArrayName, 1,
   (char*)"V.GetPriorityArrayName() -> string\nC++: virtual const char *GetPriorityArrayName()\n\nSet/get the priority array name.\n"},
  {(char*)"SetIconIndexArrayName", PyvtkPointSetToLabelHierarchy_SetIconIndexArrayName, 1,
   (char*)"V.SetIconIndexArrayName(string)\nC++: virtual void SetIconIndexArrayName(const char *name)\n\nSet/get the icon index array name.\n"},
  {(char*)"GetIconIndexArrayName", PyvtkPointSetToLabelHierarchy_GetIconIndexArrayName, 1,
   (char*)"V.GetIconIndexArrayName() -> string\nC++: virtual const char *GetIconIndexArrayName()\n\nSet/get the icon index array name.\n"},
  {(char*)"SetOrientationArrayName", PyvtkPointSetToLabelHierarchy_SetOrientationArrayName, 1,
   (char*)"V.SetOrientationArrayName(string)\nC++: virtual void SetOrientationArrayName(const char *name)\n\nSet/get the text orientation array name.\n"},
  {(char*)"GetOrientationArrayName", PyvtkPointSetToLabelHierarchy_GetOrientationArrayName, 1,
   (char*)"V.GetOrientationArrayName() -> string\nC++: virtual const char *GetOrientationArrayName()\n\nSet/get the text orientation array name.\n"},
  {(char*)"SetBoundedSizeArrayName", PyvtkPointSetToLabelHierarchy_SetBoundedSizeArrayName, 1,
   (char*)"V.SetBoundedSizeArrayName(string)\nC++: virtual void SetBoundedSizeArrayName(const char *name)\n\nSet/get the maximum text width (in world coordinates) array name.\n"},
  {(char*)"GetBoundedSizeArrayName", PyvtkPointSetToLabelHierarchy_GetBoundedSizeArrayName, 1,
   (char*)"V.GetBoundedSizeArrayName() -> string\nC++: virtual const char *GetBoundedSizeArrayName()\n\nSet/get the maximum text width (in world coordinates) array name.\n"},
  {(char*)"SetTextProperty", PyvtkPointSetToLabelHierarchy_SetTextProperty, 1,
   (char*)"V.SetTextProperty(vtkTextProperty)\nC++: virtual void SetTextProperty(vtkTextProperty *tprop)\n\nSet/get the text property assigned to the hierarchy.\n"},
  {(char*)"GetTextProperty", PyvtkPointSetToLabelHierarchy_GetTextProperty, 1,
   (char*)"V.GetTextProperty() -> vtkTextProperty\nC++: vtkTextProperty *GetTextProperty()\n\nSet/get the text property assigned to the hierarchy.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointSetToLabelHierarchy_StaticNew()
{
  return vtkPointSetToLabelHierarchy::New();
}

PyObject *PyVTKClass_vtkPointSetToLabelHierarchyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointSetToLabelHierarchy_StaticNew,
    PyvtkPointSetToLabelHierarchy_Methods,
    "vtkPointSetToLabelHierarchy", modulename,
    NULL, NULL,
    PyvtkPointSetToLabelHierarchy_Doc(),
    PyVTKClass_vtkLabelHierarchyAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPointSetToLabelHierarchy_Doc()
{
  static const char *docstring[] = {
    "vtkPointSetToLabelHierarchy - build a label hierarchy for a graph or\npoint set.\n\n",
    "Superclass: vtkLabelHierarchyAlgorithm\n\n",
    "Every point in the input vtkPoints object is taken to be an anchor\npoint for a label. Statistics on the input points are used to\nsubdivide an octree referencing the points until the points each\noctree node contains have a variance close to the node size and a\nlimited population (< 100).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointSetToLabelHierarchy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointSetToLabelHierarchyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointSetToLabelHierarchy", o) != 0)
    {
    Py_DECREF(o);
    }

}

