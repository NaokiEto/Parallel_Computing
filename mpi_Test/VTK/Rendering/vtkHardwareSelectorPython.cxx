// python wrapper for vtkHardwareSelector
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
#include "vtkHardwareSelector.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHardwareSelector(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHardwareSelector(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHardwareSelectorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHardwareSelectorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkHardwareSelector_Doc();


static PyObject *
PyvtkHardwareSelector_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

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
      tempr = op->vtkHardwareSelector::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

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
      tempr = op->vtkHardwareSelector::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  vtkHardwareSelector *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHardwareSelector::NewInstance();
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
PyvtkHardwareSelector_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHardwareSelector *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHardwareSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  vtkRenderer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      op->SetRenderer(temp0);
      }
    else
      {
      op->vtkHardwareSelector::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  vtkRenderer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRenderer();
      }
    else
      {
      tempr = op->vtkHardwareSelector::GetRenderer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetArea_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->SetArea(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkHardwareSelector::SetArea(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_SetArea_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0[4];
  const int size0 = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetArea(temp0);
      }
    else
      {
      op->vtkHardwareSelector::SetArea(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_SetArea(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkHardwareSelector_SetArea_s1(self, args);
    case 1:
      return PyvtkHardwareSelector_SetArea_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetArea");
  return NULL;
}



static PyObject *
PyvtkHardwareSelector_GetArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int *tempr;
  int sizer = 4;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArea();
      }
    else
      {
      tempr = op->vtkHardwareSelector::GetArea();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFieldAssociation(temp0);
      }
    else
      {
      op->vtkHardwareSelector::SetFieldAssociation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFieldAssociation();
      }
    else
      {
      tempr = op->vtkHardwareSelector::GetFieldAssociation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_Select(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Select");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  vtkSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Select();
      }
    else
      {
      tempr = op->vtkHardwareSelector::Select();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_CaptureBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CaptureBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->CaptureBuffers();
      }
    else
      {
      tempr = op->vtkHardwareSelector::CaptureBuffers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_ClearBuffers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearBuffers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearBuffers();
      }
    else
      {
      op->vtkHardwareSelector::ClearBuffers();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_RenderCompositeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RenderCompositeIndex(temp0);
      }
    else
      {
      op->vtkHardwareSelector::RenderCompositeIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_RenderAttributeId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderAttributeId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->RenderAttributeId(temp0);
      }
    else
      {
      op->vtkHardwareSelector::RenderAttributeId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_BeginRenderProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BeginRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BeginRenderProp();
      }
    else
      {
      op->vtkHardwareSelector::BeginRenderProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_EndRenderProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndRenderProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndRenderProp();
      }
    else
      {
      op->vtkHardwareSelector::EndRenderProp();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_SetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProcessID(temp0);
      }
    else
      {
      op->vtkHardwareSelector::SetProcessID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessID();
      }
    else
      {
      tempr = op->vtkHardwareSelector::GetProcessID();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GetCurrentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentPass();
      }
    else
      {
      tempr = op->vtkHardwareSelector::GetCurrentPass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHardwareSelector_GenerateSelection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  vtkSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GenerateSelection();
      }
    else
      {
      tempr = op->vtkHardwareSelector::GenerateSelection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_GenerateSelection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0[4];
  unsigned int save0[4];
  const int size0 = 4;
  vtkSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->GenerateSelection(temp0);
      }
    else
      {
      tempr = op->vtkHardwareSelector::GenerateSelection(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_GenerateSelection_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  vtkSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->GenerateSelection(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkHardwareSelector::GenerateSelection(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHardwareSelector_GenerateSelection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkHardwareSelector_GenerateSelection_s1(self, args);
    case 1:
      return PyvtkHardwareSelector_GenerateSelection_s2(self, args);
    case 4:
      return PyvtkHardwareSelector_GenerateSelection_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GenerateSelection");
  return NULL;
}



static PyObject *
PyvtkHardwareSelector_GetPropFromID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropFromID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHardwareSelector *op = static_cast<vtkHardwareSelector *>(vp);

  int temp0;
  vtkProp *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPropFromID(temp0);
      }
    else
      {
      tempr = op->vtkHardwareSelector::GetPropFromID(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkHardwareSelector_Methods[] = {
  {(char*)"GetClassName", PyvtkHardwareSelector_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHardwareSelector_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHardwareSelector_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHardwareSelector\nC++: vtkHardwareSelector *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHardwareSelector_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHardwareSelector\nC++: vtkHardwareSelector *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetRenderer", PyvtkHardwareSelector_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: void SetRenderer(vtkRenderer *)\n\nGet/Set the renderer to perform the selection on.\n"},
  {(char*)"GetRenderer", PyvtkHardwareSelector_GetRenderer, 1,
   (char*)"V.GetRenderer() -> vtkRenderer\nC++: vtkRenderer *GetRenderer()\n\nGet/Set the renderer to perform the selection on.\n"},
  {(char*)"SetArea", PyvtkHardwareSelector_SetArea, 1,
   (char*)"V.SetArea(int, int, int, int)\nC++: void SetArea(unsigned int, unsigned int, unsigned int,\n    unsigned int)\nV.SetArea((int, int, int, int))\nC++: void SetArea(unsigned int a[4])\n\n"},
  {(char*)"GetArea", PyvtkHardwareSelector_GetArea, 1,
   (char*)"V.GetArea() -> (int, int, int, int)\nC++: unsigned int *GetArea()\n\n"},
  {(char*)"SetFieldAssociation", PyvtkHardwareSelector_SetFieldAssociation, 1,
   (char*)"V.SetFieldAssociation(int)\nC++: void SetFieldAssociation(int a)\n\nSet the field type to select. Valid values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nCurrently only FIELD_ASSOCIATION_POINTS and\nFIELD_ASSOCIATION_CELLS are supported.\n"},
  {(char*)"GetFieldAssociation", PyvtkHardwareSelector_GetFieldAssociation, 1,
   (char*)"V.GetFieldAssociation() -> int\nC++: int GetFieldAssociation()\n\nSet the field type to select. Valid values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nCurrently only FIELD_ASSOCIATION_POINTS and\nFIELD_ASSOCIATION_CELLS are supported.\n"},
  {(char*)"Select", PyvtkHardwareSelector_Select, 1,
   (char*)"V.Select() -> vtkSelection\nC++: vtkSelection *Select()\n\nPerform the selection. Returns  a new instance of vtkSelection\ncontaining the selection on success.\n"},
  {(char*)"CaptureBuffers", PyvtkHardwareSelector_CaptureBuffers, 1,
   (char*)"V.CaptureBuffers() -> bool\nC++: virtual bool CaptureBuffers()\n\nIt is possible to use the vtkHardwareSelector for a custom\npicking. (Look at vtkScenePicker). In that case instead of\nSelect() on can use CaptureBuffers() to render the selection\nbuffers and then get information about pixel locations suing\nGetPixelInformation(). Use ClearBuffers() to clear buffers after\none's done with the scene. The optional final parameter maxDist\nwill look for a cell within the specified number of pixels from\ndisplay_position.\n"},
  {(char*)"ClearBuffers", PyvtkHardwareSelector_ClearBuffers, 1,
   (char*)"V.ClearBuffers()\nC++: void ClearBuffers()\n\nIt is possible to use the vtkHardwareSelector for a custom\npicking. (Look at vtkScenePicker). In that case instead of\nSelect() on can use CaptureBuffers() to render the selection\nbuffers and then get information about pixel locations suing\nGetPixelInformation(). Use ClearBuffers() to clear buffers after\none's done with the scene. The optional final parameter maxDist\nwill look for a cell within the specified number of pixels from\ndisplay_position.\n"},
  {(char*)"RenderCompositeIndex", PyvtkHardwareSelector_RenderCompositeIndex, 1,
   (char*)"V.RenderCompositeIndex(int)\nC++: void RenderCompositeIndex(unsigned int index)\n\nCalled by any vtkMapper or vtkProp subclass to render a\ncomposite-index. Currently indices > 0xffffff are not supported.\n"},
  {(char*)"RenderAttributeId", PyvtkHardwareSelector_RenderAttributeId, 1,
   (char*)"V.RenderAttributeId(int)\nC++: void RenderAttributeId(vtkIdType attribid)\n\nCalled by any vtkMapper or vtkProp subclass to render an\nattribute's id.\n"},
  {(char*)"BeginRenderProp", PyvtkHardwareSelector_BeginRenderProp, 1,
   (char*)"V.BeginRenderProp()\nC++: void BeginRenderProp()\n\nCalled by the mapper (vtkHardwareSelectionPolyDataPainter) before\nand after rendering each prop.\n"},
  {(char*)"EndRenderProp", PyvtkHardwareSelector_EndRenderProp, 1,
   (char*)"V.EndRenderProp()\nC++: void EndRenderProp()\n\nCalled by the mapper (vtkHardwareSelectionPolyDataPainter) before\nand after rendering each prop.\n"},
  {(char*)"SetProcessID", PyvtkHardwareSelector_SetProcessID, 1,
   (char*)"V.SetProcessID(int)\nC++: void SetProcessID(int a)\n\nGet/Set the process id. If process id < 0 (default -1), then the\nPROCESS_PASS is not rendered.\n"},
  {(char*)"GetProcessID", PyvtkHardwareSelector_GetProcessID, 1,
   (char*)"V.GetProcessID() -> int\nC++: int GetProcessID()\n\nGet/Set the process id. If process id < 0 (default -1), then the\nPROCESS_PASS is not rendered.\n"},
  {(char*)"GetCurrentPass", PyvtkHardwareSelector_GetCurrentPass, 1,
   (char*)"V.GetCurrentPass() -> int\nC++: int GetCurrentPass()\n\nGet the current pass number.\n"},
  {(char*)"GenerateSelection", PyvtkHardwareSelector_GenerateSelection, 1,
   (char*)"V.GenerateSelection() -> vtkSelection\nC++: virtual vtkSelection *GenerateSelection()\nV.GenerateSelection([int, int, int, int]) -> vtkSelection\nC++: virtual vtkSelection *GenerateSelection(unsigned int r[4])\nV.GenerateSelection(int, int, int, int) -> vtkSelection\nC++: virtual vtkSelection *GenerateSelection(unsigned int x1,\n    unsigned int y1, unsigned int x2, unsigned int y2)\n\nGenerates the vtkSelection from pixel buffers. Requires that\nCaptureBuffers() has already been called. Optionally you may pass\na screen region (xmin, ymin, xmax, ymax) to generate a selection\nfrom. The region must be a subregion of the region specified by\nSetArea(), otherwise it will be clipped to that region.\n"},
  {(char*)"GetPropFromID", PyvtkHardwareSelector_GetPropFromID, 1,
   (char*)"V.GetPropFromID(int) -> vtkProp\nC++: vtkProp *GetPropFromID(int id)\n\nreturns the prop associated with a ID. This is valid only until\nReleasePixBuffers() gets called.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHardwareSelector_StaticNew()
{
  return vtkHardwareSelector::New();
}

PyObject *PyVTKClass_vtkHardwareSelectorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHardwareSelector_StaticNew,
    PyvtkHardwareSelector_Methods,
    "vtkHardwareSelector", modulename,
    NULL, NULL,
    PyvtkHardwareSelector_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"PROCESS_PASS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ACTOR_PASS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"COMPOSITE_INDEX_PASS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"ID_LOW24", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"ID_MID24", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"ID_HIGH16", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(vtkHardwareSelector::ID_HIGH16);
    if (o && PyDict_SetItemString(d, (char *)"MAX_KNOWN_PASS", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(vtkHardwareSelector::PROCESS_PASS);
    if (o && PyDict_SetItemString(d, (char *)"MIN_KNOWN_PASS", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkHardwareSelector_Doc()
{
  static const char *docstring[] = {
    "vtkHardwareSelector - manager for OpenGL-based selection.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkHardwareSelector is a helper that orchestrates color buffer based\nselection. This relies on OpenGL. vtkHardwareSelector can be used to\nselect visible cells or points within a given rectangle of the\nRenderWindow. To use it, call in order:\n\\li SetRenderer() - to select the renderer in which we\nwant to select the cells/points.\n\\li SetArea() - to set the rectangular region in the render window to\ns",
    "elect\nin.\n\\li SetFieldAssociation() -  to select the attribute to select i.e.\ncells/points etc.\n\\li Finally, call Select().\nSelect will cause the attached vtkRenderer to render in a special\ncolor mode, where each cell/point is given it own color so that later\ninspection of the Rendered Pixels can determine what cells are\nvisible. Select() returns a new vtkSelection instance with the\ncells/points s",
    "elected.\n\nLimitations: Antialiasing will break this class. If your graphics\ncard settings force their use this class will return invalid results.\n\nCurrently only cells from PolyDataMappers can be selected from. When\nvtkRenderer::Selector is non-null vtkPainterPolyDataMapper uses the\nvtkHardwareSelectionPolyDataPainter which make appropriate calls to\nBeginRenderProp(), EndRenderProp(), RenderAttrib",
    "uteId() to render\ncolors correctly. Until alternatives to\nvtkHardwareSelectionPolyDataPainter exist that can do a similar\ncoloration of other vtkDataSet types, only polygonal data can be\nselected. If you need to select other data types, consider using\nvtkDataSetMapper and turning on it's PassThroughCellIds feature, or\nusing vtkFrustumExtractor.\n\nOnly Opaque geometry in Actors is selected from. Ass",
    "emblies and\nLODMappers are not currently supported.\n\nDuring selection, visible datasets that can not be selected from are\ntemporarily hidden so as not to produce invalid indices from their\ncolors.\n\nSee Also:\n\nvtkIdentColoredPainter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHardwareSelector(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHardwareSelectorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHardwareSelector", o) != 0)
    {
    Py_DECREF(o);
    }

}

