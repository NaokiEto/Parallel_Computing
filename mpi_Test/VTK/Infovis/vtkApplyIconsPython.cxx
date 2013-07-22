// python wrapper for vtkApplyIcons
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
#include "vtkVariant.h"
#include "vtkApplyIcons.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkApplyIcons(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkApplyIcons(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkApplyIconsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkApplyIconsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPassInputTypeAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPassInputTypeAlgorithmNew
#endif

static const char **PyvtkApplyIcons_Doc();


static PyObject *
PyvtkApplyIcons_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

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
      tempr = op->vtkApplyIcons::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

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
      tempr = op->vtkApplyIcons::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  vtkApplyIcons *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkApplyIcons::NewInstance();
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
PyvtkApplyIcons_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkApplyIcons *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkApplyIcons::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetIconType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  vtkVariant *temp0 = NULL;
  PyObject *pobj0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetIconType(*temp0, temp1);
      }
    else
      {
      op->vtkApplyIcons::SetIconType(*temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkApplyIcons_SetIconType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  double temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetIconType(temp0, temp1);
      }
    else
      {
      op->vtkApplyIcons::SetIconType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkApplyIcons_SetIconType_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  char *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetIconType(temp0, temp1);
      }
    else
      {
      op->vtkApplyIcons::SetIconType(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkApplyIcons_SetIconType_Methods[] = {
  {NULL, PyvtkApplyIcons_SetIconType_s1, 1,
   (char*)"@Oi vtkVariant"},
  {NULL, PyvtkApplyIcons_SetIconType_s2, 1,
   (char*)"@di"},
  {NULL, PyvtkApplyIcons_SetIconType_s3, 1,
   (char*)"@zi"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkApplyIcons_SetIconType(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkApplyIcons_SetIconType_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetIconType");
  return NULL;
}



static PyObject *
PyvtkApplyIcons_ClearAllIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearAllIconTypes();
      }
    else
      {
      op->vtkApplyIcons::ClearAllIconTypes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetUseLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseLookupTable(temp0);
      }
    else
      {
      op->vtkApplyIcons::SetUseLookupTable(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetUseLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseLookupTable();
      }
    else
      {
      tempr = op->vtkApplyIcons::GetUseLookupTable();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_UseLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLookupTableOn();
      }
    else
      {
      op->vtkApplyIcons::UseLookupTableOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_UseLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UseLookupTableOff();
      }
    else
      {
      op->vtkApplyIcons::UseLookupTableOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetDefaultIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDefaultIcon(temp0);
      }
    else
      {
      op->vtkApplyIcons::SetDefaultIcon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetDefaultIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultIcon();
      }
    else
      {
      tempr = op->vtkApplyIcons::GetDefaultIcon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectedIcon(temp0);
      }
    else
      {
      op->vtkApplyIcons::SetSelectedIcon(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedIcon();
      }
    else
      {
      tempr = op->vtkApplyIcons::GetSelectedIcon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetIconOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetIconOutputArrayName(temp0);
      }
    else
      {
      op->vtkApplyIcons::SetIconOutputArrayName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetIconOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetIconOutputArrayName();
      }
    else
      {
      tempr = op->vtkApplyIcons::GetIconOutputArrayName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionMode(temp0);
      }
    else
      {
      op->vtkApplyIcons::SetSelectionMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectionMode();
      }
    else
      {
      tempr = op->vtkApplyIcons::GetSelectionMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectionModeToSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionModeToSelectedIcon();
      }
    else
      {
      op->vtkApplyIcons::SetSelectionModeToSelectedIcon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectionModeToSelectedOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToSelectedOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionModeToSelectedOffset();
      }
    else
      {
      op->vtkApplyIcons::SetSelectionModeToSelectedOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectionModeToAnnotationIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToAnnotationIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionModeToAnnotationIcon();
      }
    else
      {
      op->vtkApplyIcons::SetSelectionModeToAnnotationIcon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectionModeToIgnoreSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToIgnoreSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetSelectionModeToIgnoreSelection();
      }
    else
      {
      op->vtkApplyIcons::SetSelectionModeToIgnoreSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAttributeType(temp0);
      }
    else
      {
      op->vtkApplyIcons::SetAttributeType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAttributeType();
      }
    else
      {
      tempr = op->vtkApplyIcons::GetAttributeType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkApplyIcons_Methods[] = {
  {(char*)"GetClassName", PyvtkApplyIcons_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkApplyIcons_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkApplyIcons_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkApplyIcons\nC++: vtkApplyIcons *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkApplyIcons_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkApplyIcons\nC++: vtkApplyIcons *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetIconType", PyvtkApplyIcons_SetIconType, 1,
   (char*)"V.SetIconType(vtkVariant, int)\nC++: void SetIconType(vtkVariant v, int icon)\nV.SetIconType(float, int)\nC++: void SetIconType(double v, int icon)\nV.SetIconType(string, int)\nC++: void SetIconType(const char *v, int icon)\n\nEdits the lookup table to use for point icons. This is only used\nif input array 0 is set and UsePointLookupTable is on.\n"},
  {(char*)"ClearAllIconTypes", PyvtkApplyIcons_ClearAllIconTypes, 1,
   (char*)"V.ClearAllIconTypes()\nC++: void ClearAllIconTypes()\n\nEdits the lookup table to use for point icons. This is only used\nif input array 0 is set and UsePointLookupTable is on.\n"},
  {(char*)"SetUseLookupTable", PyvtkApplyIcons_SetUseLookupTable, 1,
   (char*)"V.SetUseLookupTable(bool)\nC++: void SetUseLookupTable(bool a)\n\nIf on, uses the point lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"GetUseLookupTable", PyvtkApplyIcons_GetUseLookupTable, 1,
   (char*)"V.GetUseLookupTable() -> bool\nC++: bool GetUseLookupTable()\n\nIf on, uses the point lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"UseLookupTableOn", PyvtkApplyIcons_UseLookupTableOn, 1,
   (char*)"V.UseLookupTableOn()\nC++: void UseLookupTableOn()\n\nIf on, uses the point lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"UseLookupTableOff", PyvtkApplyIcons_UseLookupTableOff, 1,
   (char*)"V.UseLookupTableOff()\nC++: void UseLookupTableOff()\n\nIf on, uses the point lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {(char*)"SetDefaultIcon", PyvtkApplyIcons_SetDefaultIcon, 1,
   (char*)"V.SetDefaultIcon(int)\nC++: void SetDefaultIcon(int a)\n\nThe default point icon for all unannotated, unselected elements\nof the data. This is used if UsePointLookupTable is off.\n"},
  {(char*)"GetDefaultIcon", PyvtkApplyIcons_GetDefaultIcon, 1,
   (char*)"V.GetDefaultIcon() -> int\nC++: int GetDefaultIcon()\n\nThe default point icon for all unannotated, unselected elements\nof the data. This is used if UsePointLookupTable is off.\n"},
  {(char*)"SetSelectedIcon", PyvtkApplyIcons_SetSelectedIcon, 1,
   (char*)"V.SetSelectedIcon(int)\nC++: void SetSelectedIcon(int a)\n\nThe point icon for all selected elements of the data. This is\nused if the annotation input has a current selection.\n"},
  {(char*)"GetSelectedIcon", PyvtkApplyIcons_GetSelectedIcon, 1,
   (char*)"V.GetSelectedIcon() -> int\nC++: int GetSelectedIcon()\n\nThe point icon for all selected elements of the data. This is\nused if the annotation input has a current selection.\n"},
  {(char*)"SetIconOutputArrayName", PyvtkApplyIcons_SetIconOutputArrayName, 1,
   (char*)"V.SetIconOutputArrayName(string)\nC++: void SetIconOutputArrayName(char *)\n\nThe output array name for the point icon index array. Default is \"vtkApplyIcons\nicon\".\n"},
  {(char*)"GetIconOutputArrayName", PyvtkApplyIcons_GetIconOutputArrayName, 1,
   (char*)"V.GetIconOutputArrayName() -> string\nC++: char *GetIconOutputArrayName()\n\nThe output array name for the point icon index array. Default is \"vtkApplyIcons\nicon\".\n"},
  {(char*)"SetSelectionMode", PyvtkApplyIcons_SetSelectionMode, 1,
   (char*)"V.SetSelectionMode(int)\nC++: void SetSelectionMode(int a)\n\nChanges the behavior of the icon to use for selected items. \nSELECTED_ICON uses SelectedIcon as the icon for all selected\nelements. SELECTED_OFFSET uses SelectedIcon as an offset to add\nto all selected elements. ANNOTATION_ICON uses the ICON_INDEX()\nproperty of the current annotation. IGNORE_SELECTION does not\nchange the icon based on the current selection.  The default is\nIGNORE_SELECTION.\n"},
  {(char*)"GetSelectionMode", PyvtkApplyIcons_GetSelectionMode, 1,
   (char*)"V.GetSelectionMode() -> int\nC++: int GetSelectionMode()\n\nChanges the behavior of the icon to use for selected items. \nSELECTED_ICON uses SelectedIcon as the icon for all selected\nelements. SELECTED_OFFSET uses SelectedIcon as an offset to add\nto all selected elements. ANNOTATION_ICON uses the ICON_INDEX()\nproperty of the current annotation. IGNORE_SELECTION does not\nchange the icon based on the current selection.  The default is\nIGNORE_SELECTION.\n"},
  {(char*)"SetSelectionModeToSelectedIcon", PyvtkApplyIcons_SetSelectionModeToSelectedIcon, 1,
   (char*)"V.SetSelectionModeToSelectedIcon()\nC++: virtual void SetSelectionModeToSelectedIcon()\n\nChanges the behavior of the icon to use for selected items. \nSELECTED_ICON uses SelectedIcon as the icon for all selected\nelements. SELECTED_OFFSET uses SelectedIcon as an offset to add\nto all selected elements. ANNOTATION_ICON uses the ICON_INDEX()\nproperty of the current annotation. IGNORE_SELECTION does not\nchange the icon based on the current selection.  The default is\nIGNORE_SELECTION.\n"},
  {(char*)"SetSelectionModeToSelectedOffset", PyvtkApplyIcons_SetSelectionModeToSelectedOffset, 1,
   (char*)"V.SetSelectionModeToSelectedOffset()\nC++: virtual void SetSelectionModeToSelectedOffset()\n\nChanges the behavior of the icon to use for selected items. \nSELECTED_ICON uses SelectedIcon as the icon for all selected\nelements. SELECTED_OFFSET uses SelectedIcon as an offset to add\nto all selected elements. ANNOTATION_ICON uses the ICON_INDEX()\nproperty of the current annotation. IGNORE_SELECTION does not\nchange the icon based on the current selection.  The default is\nIGNORE_SELECTION.\n"},
  {(char*)"SetSelectionModeToAnnotationIcon", PyvtkApplyIcons_SetSelectionModeToAnnotationIcon, 1,
   (char*)"V.SetSelectionModeToAnnotationIcon()\nC++: virtual void SetSelectionModeToAnnotationIcon()\n\nChanges the behavior of the icon to use for selected items. \nSELECTED_ICON uses SelectedIcon as the icon for all selected\nelements. SELECTED_OFFSET uses SelectedIcon as an offset to add\nto all selected elements. ANNOTATION_ICON uses the ICON_INDEX()\nproperty of the current annotation. IGNORE_SELECTION does not\nchange the icon based on the current selection.  The default is\nIGNORE_SELECTION.\n"},
  {(char*)"SetSelectionModeToIgnoreSelection", PyvtkApplyIcons_SetSelectionModeToIgnoreSelection, 1,
   (char*)"V.SetSelectionModeToIgnoreSelection()\nC++: virtual void SetSelectionModeToIgnoreSelection()\n\nChanges the behavior of the icon to use for selected items. \nSELECTED_ICON uses SelectedIcon as the icon for all selected\nelements. SELECTED_OFFSET uses SelectedIcon as an offset to add\nto all selected elements. ANNOTATION_ICON uses the ICON_INDEX()\nproperty of the current annotation. IGNORE_SELECTION does not\nchange the icon based on the current selection.  The default is\nIGNORE_SELECTION.\n"},
  {(char*)"SetAttributeType", PyvtkApplyIcons_SetAttributeType, 1,
   (char*)"V.SetAttributeType(int)\nC++: void SetAttributeType(int a)\n\nThe attribute type to append the icon array to, used only if the\ninput array is not specified or does not exist. This is set to\none of the AttributeTypes enum in vtkDataObject (e.g. POINT,\nCELL, VERTEX EDGE, FIELD).\n"},
  {(char*)"GetAttributeType", PyvtkApplyIcons_GetAttributeType, 1,
   (char*)"V.GetAttributeType() -> int\nC++: int GetAttributeType()\n\nThe attribute type to append the icon array to, used only if the\ninput array is not specified or does not exist. This is set to\none of the AttributeTypes enum in vtkDataObject (e.g. POINT,\nCELL, VERTEX EDGE, FIELD).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkApplyIcons_StaticNew()
{
  return vtkApplyIcons::New();
}

PyObject *PyVTKClass_vtkApplyIconsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkApplyIcons_StaticNew,
    PyvtkApplyIcons_Methods,
    "vtkApplyIcons", modulename,
    NULL, NULL,
    PyvtkApplyIcons_Doc(),
    PyVTKClass_vtkPassInputTypeAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SELECTED_ICON", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"SELECTED_OFFSET", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ANNOTATION_ICON", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"IGNORE_SELECTION", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkApplyIcons_Doc()
{
  static const char *docstring[] = {
    "vtkApplyIcons - apply icons to a data set.\n\n",
    "Superclass: vtkPassInputTypeAlgorithm\n\n",
    "vtkApplyIcons performs a iconing of the dataset using default icons,\nlookup tables, annotations, and/or a selection. The output is a\nvtkIntArray containing the icon index for each element in the\ndataset. The first input is the dataset to be iconed, which may be a\nvtkTable, vtkGraph subclass, or vtkDataSet subclass.\n\nThe second (optional) input is a vtkAnnotationLayers object, which\nstores a list o",
    "f annotation layers, with each layer holding a list of\nvtkAnnotation objects. The annotation specifies a subset of data\nalong with other properties, including icon. For annotations with\nicon properties, this algorithm will use the icon index of annotated\nelements, using a \"top one wins\" strategy.\n\nThe third (optional) input is a vtkSelection object, meant for\nspecifying the current selection. You ",
    "can control the icon of the\nselection, or whether there is a set of selected icons at a\nparticular offset in the icon sheet.\n\nThe algorithm takes an input array, specified with\nSetInputArrayToProcess(0, 0, 0,\nvtkDataObject::FIELD_ASSOCIATION_POINTS, name) This sets data arrays\nto use to icon the data with the associated lookup table. For\nvtkGraph and vtkTable inputs, you would use\nFIELD_ASSOCIATIO",
    "N_VERTICES, FIELD_ASSOCIATION_EDGES, or\nFIELD_ASSOCIATION_ROWS as appropriate. The icon array will be added\nto the same set of attributes that the input array came from. If\nthere is no input array, the icon array will be applied to the\nattributes associated with the AttributeType parameter.\n\nIcons are assigned with the following priorities:  If an item is part\nof the selection, it is glyphed with ",
    "that icon. Otherwise, if the\nitem is part of an annotation, it is glyphed\n     with the icon of the final (top) annotation in the set of\nlayers. Otherwise, if a lookup table is used, it is glyphed using the\n     lookup table icon for the data value of the element. Otherwise\nit will be glyphed with the default icon. \n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkApplyIcons(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkApplyIconsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkApplyIcons", o) != 0)
    {
    Py_DECREF(o);
    }

}

