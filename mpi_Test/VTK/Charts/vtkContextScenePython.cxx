// python wrapper for vtkContextScene
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
#include "vtkContextScene.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkContextScene(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkContextScene(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkContextSceneNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkContextSceneNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkContextScene_Doc();


static PyObject *
PyvtkContextScene_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

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
      tempr = op->vtkContextScene::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

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
      tempr = op->vtkContextScene::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkContextScene *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkContextScene::NewInstance();
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
PyvtkContextScene_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkContextScene *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkContextScene::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkContext2D *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
    {
    if (ap.IsBound())
      {
      tempr = op->Paint(temp0);
      }
    else
      {
      tempr = op->vtkContextScene::Paint(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_AddItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAbstractContextItem *temp0 = NULL;
  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
    {
    if (ap.IsBound())
      {
      tempr = op->AddItem(temp0);
      }
    else
      {
      tempr = op->vtkContextScene::AddItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_RemoveItem_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAbstractContextItem *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractContextItem"))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveItem(temp0);
      }
    else
      {
      tempr = op->vtkContextScene::RemoveItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkContextScene_RemoveItem_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  unsigned int temp0;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveItem(temp0);
      }
    else
      {
      tempr = op->vtkContextScene::RemoveItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContextScene_RemoveItem_Methods[] = {
  {NULL, PyvtkContextScene_RemoveItem_s1, 1,
   (char*)"@O *vtkAbstractContextItem"},
  {NULL, PyvtkContextScene_RemoveItem_s2, 1,
   (char*)"@I"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkContextScene_RemoveItem(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkContextScene_RemoveItem_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "RemoveItem");
  return NULL;
}



static PyObject *
PyvtkContextScene_GetItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  unsigned int temp0;
  vtkAbstractContextItem *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetItem(temp0);
      }
    else
      {
      tempr = op->vtkContextScene::GetItem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetNumberOfItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  unsigned int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfItems();
      }
    else
      {
      tempr = op->vtkContextScene::GetNumberOfItems();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_ClearItems(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearItems");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ClearItems();
      }
    else
      {
      op->vtkContextScene::ClearItems();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAnnotationLink *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
    {
    if (ap.IsBound())
      {
      op->SetAnnotationLink(temp0);
      }
    else
      {
      op->vtkContextScene::SetAnnotationLink(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAnnotationLink *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnnotationLink();
      }
    else
      {
      tempr = op->vtkContextScene::GetAnnotationLink();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetGeometry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(temp0, temp1);
      }
    else
      {
      op->vtkContextScene::SetGeometry(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContextScene_SetGeometry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetGeometry(temp0);
      }
    else
      {
      op->vtkContextScene::SetGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkContextScene_SetGeometry(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkContextScene_SetGeometry_s1(self, args);
    case 1:
      return PyvtkContextScene_SetGeometry_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetGeometry");
  return NULL;
}



static PyObject *
PyvtkContextScene_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGeometry();
      }
    else
      {
      tempr = op->vtkContextScene::GetGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetUseBufferId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBufferId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUseBufferId(temp0);
      }
    else
      {
      op->vtkContextScene::SetUseBufferId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetUseBufferId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBufferId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUseBufferId();
      }
    else
      {
      tempr = op->vtkContextScene::GetUseBufferId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetViewWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewWidth();
      }
    else
      {
      tempr = op->vtkContextScene::GetViewWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetViewHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewHeight();
      }
    else
      {
      tempr = op->vtkContextScene::GetViewHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetSceneWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSceneWidth();
      }
    else
      {
      tempr = op->vtkContextScene::GetSceneWidth();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetSceneHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSceneHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSceneHeight();
      }
    else
      {
      tempr = op->vtkContextScene::GetSceneHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetScaleTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleTiles(temp0);
      }
    else
      {
      op->vtkContextScene::SetScaleTiles(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetScaleTiles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleTiles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleTiles();
      }
    else
      {
      tempr = op->vtkContextScene::GetScaleTiles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_ScaleTilesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleTilesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleTilesOn();
      }
    else
      {
      op->vtkContextScene::ScaleTilesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_ScaleTilesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScaleTilesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ScaleTilesOff();
      }
    else
      {
      op->vtkContextScene::ScaleTilesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

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
      op->vtkContextScene::SetRenderer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDirty(temp0);
      }
    else
      {
      op->vtkContextScene::SetDirty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetDirty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDirty();
      }
    else
      {
      tempr = op->vtkContextScene::GetDirty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources();
      }
    else
      {
      op->vtkContextScene::ReleaseGraphicsResources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetBufferId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkAbstractContextBufferId *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBufferId();
      }
    else
      {
      tempr = op->vtkContextScene::GetBufferId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkTransform2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform2D"))
    {
    if (ap.IsBound())
      {
      op->SetTransform(temp0);
      }
    else
      {
      op->vtkContextScene::SetTransform(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  vtkTransform2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTransform();
      }
    else
      {
      tempr = op->vtkContextScene::GetTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkContextScene_HasTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextScene *op = static_cast<vtkContextScene *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTransform();
      }
    else
      {
      tempr = op->vtkContextScene::HasTransform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkContextScene_Methods[] = {
  {(char*)"GetClassName", PyvtkContextScene_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkContextScene_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkContextScene_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkContextScene\nC++: vtkContextScene *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkContextScene_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkContextScene\nC++: vtkContextScene *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Paint", PyvtkContextScene_Paint, 1,
   (char*)"V.Paint(vtkContext2D) -> bool\nC++: virtual bool Paint(vtkContext2D *painter)\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {(char*)"AddItem", PyvtkContextScene_AddItem, 1,
   (char*)"V.AddItem(vtkAbstractContextItem) -> int\nC++: unsigned int AddItem(vtkAbstractContextItem *item)\n\nAdd child items to this item. Increments reference count of item.\n\\return the index of the child item.\n"},
  {(char*)"RemoveItem", PyvtkContextScene_RemoveItem, 1,
   (char*)"V.RemoveItem(vtkAbstractContextItem) -> bool\nC++: bool RemoveItem(vtkAbstractContextItem *item)\nV.RemoveItem(int) -> bool\nC++: bool RemoveItem(unsigned int index)\n\nRemove child item from this item. Decrements reference count of\nitem.\n\\param item the item to be removed.\n\\return true on success, false otherwise.\n"},
  {(char*)"GetItem", PyvtkContextScene_GetItem, 1,
   (char*)"V.GetItem(int) -> vtkAbstractContextItem\nC++: vtkAbstractContextItem *GetItem(unsigned int index)\n\nGet the item at the specified index.\n\\return the item at the specified index (null if index is\n    invalid).\n"},
  {(char*)"GetNumberOfItems", PyvtkContextScene_GetNumberOfItems, 1,
   (char*)"V.GetNumberOfItems() -> int\nC++: unsigned int GetNumberOfItems()\n\nGet the number of child items.\n"},
  {(char*)"ClearItems", PyvtkContextScene_ClearItems, 1,
   (char*)"V.ClearItems()\nC++: void ClearItems()\n\nRemove all child items from this item.\n"},
  {(char*)"SetAnnotationLink", PyvtkContextScene_SetAnnotationLink, 1,
   (char*)"V.SetAnnotationLink(vtkAnnotationLink)\nC++: virtual void SetAnnotationLink(vtkAnnotationLink *link)\n\nSet the vtkAnnotationLink for the chart.\n"},
  {(char*)"GetAnnotationLink", PyvtkContextScene_GetAnnotationLink, 1,
   (char*)"V.GetAnnotationLink() -> vtkAnnotationLink\nC++: vtkAnnotationLink *GetAnnotationLink()\n\nGet the vtkAnnotationLink for the chart.\n"},
  {(char*)"SetGeometry", PyvtkContextScene_SetGeometry, 1,
   (char*)"V.SetGeometry(int, int)\nC++: void SetGeometry(int, int)\nV.SetGeometry((int, int))\nC++: void SetGeometry(int a[2])\n\n"},
  {(char*)"GetGeometry", PyvtkContextScene_GetGeometry, 1,
   (char*)"V.GetGeometry() -> (int, int)\nC++: int *GetGeometry()\n\n"},
  {(char*)"SetUseBufferId", PyvtkContextScene_SetUseBufferId, 1,
   (char*)"V.SetUseBufferId(bool)\nC++: void SetUseBufferId(bool a)\n\nSet whether the scene should use the color buffer. Default is\ntrue.\n"},
  {(char*)"GetUseBufferId", PyvtkContextScene_GetUseBufferId, 1,
   (char*)"V.GetUseBufferId() -> bool\nC++: bool GetUseBufferId()\n\nGet whether the scene is using the color buffer. Default is true.\n"},
  {(char*)"GetViewWidth", PyvtkContextScene_GetViewWidth, 1,
   (char*)"V.GetViewWidth() -> int\nC++: virtual int GetViewWidth()\n\nGet the width of the view\n"},
  {(char*)"GetViewHeight", PyvtkContextScene_GetViewHeight, 1,
   (char*)"V.GetViewHeight() -> int\nC++: virtual int GetViewHeight()\n\nGet the height of the view\n"},
  {(char*)"GetSceneWidth", PyvtkContextScene_GetSceneWidth, 1,
   (char*)"V.GetSceneWidth() -> int\nC++: int GetSceneWidth()\n\nGet the width of the scene.\n"},
  {(char*)"GetSceneHeight", PyvtkContextScene_GetSceneHeight, 1,
   (char*)"V.GetSceneHeight() -> int\nC++: int GetSceneHeight()\n\nGet the height of the scene.\n"},
  {(char*)"SetScaleTiles", PyvtkContextScene_SetScaleTiles, 1,
   (char*)"V.SetScaleTiles(bool)\nC++: void SetScaleTiles(bool a)\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {(char*)"GetScaleTiles", PyvtkContextScene_GetScaleTiles, 1,
   (char*)"V.GetScaleTiles() -> bool\nC++: bool GetScaleTiles()\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {(char*)"ScaleTilesOn", PyvtkContextScene_ScaleTilesOn, 1,
   (char*)"V.ScaleTilesOn()\nC++: void ScaleTilesOn()\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {(char*)"ScaleTilesOff", PyvtkContextScene_ScaleTilesOff, 1,
   (char*)"V.ScaleTilesOff()\nC++: void ScaleTilesOff()\n\nWhether to scale the scene transform when tiling, for example\nwhen using vtkWindowToImageFilter to take a large screenshot. The\ndefault is true.\n"},
  {(char*)"SetRenderer", PyvtkContextScene_SetRenderer, 1,
   (char*)"V.SetRenderer(vtkRenderer)\nC++: virtual void SetRenderer(vtkRenderer *renderer)\n\nThis should not be necessary as the context view should take care\nof rendering.\n"},
  {(char*)"SetDirty", PyvtkContextScene_SetDirty, 1,
   (char*)"V.SetDirty(bool)\nC++: void SetDirty(bool isDirty)\n\nInform the scene that something changed that requires a repaint\nof the scene. This should only be used by the vtkContextItem\nderived objects in a scene in their event handlers.\n"},
  {(char*)"GetDirty", PyvtkContextScene_GetDirty, 1,
   (char*)"V.GetDirty() -> bool\nC++: bool GetDirty()\n\nInform the scene that something changed that requires a repaint\nof the scene. This should only be used by the vtkContextItem\nderived objects in a scene in their event handlers.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkContextScene_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources()\nC++: void ReleaseGraphicsResources()\n\nRelease graphics resources hold by the scene.\n"},
  {(char*)"GetBufferId", PyvtkContextScene_GetBufferId, 1,
   (char*)"V.GetBufferId() -> vtkAbstractContextBufferId\nC++: vtkAbstractContextBufferId *GetBufferId()\n\nReturn buffer id. Not part of the end-user API. Can be used by\ncontext items to initialize their own colorbuffer id (when a\ncontext item is a container).\n"},
  {(char*)"SetTransform", PyvtkContextScene_SetTransform, 1,
   (char*)"V.SetTransform(vtkTransform2D)\nC++: virtual void SetTransform(vtkTransform2D *transform)\n\nSet the transform for the scene.\n"},
  {(char*)"GetTransform", PyvtkContextScene_GetTransform, 1,
   (char*)"V.GetTransform() -> vtkTransform2D\nC++: vtkTransform2D *GetTransform()\n\nGet the transform for the scene.\n"},
  {(char*)"HasTransform", PyvtkContextScene_HasTransform, 1,
   (char*)"V.HasTransform() -> bool\nC++: bool HasTransform()\n\nCheck whether the scene has a transform.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkContextScene_StaticNew()
{
  return vtkContextScene::New();
}

PyObject *PyVTKClass_vtkContextSceneNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkContextScene_StaticNew,
    PyvtkContextScene_Methods,
    "vtkContextScene", modulename,
    NULL, NULL,
    PyvtkContextScene_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkContextScene_Doc()
{
  static const char *docstring[] = {
    "vtkContextScene - Provides a 2D scene for vtkContextItem objects.\n\n",
    "Superclass: vtkObject\n\n",
    "Provides a 2D scene that vtkContextItem objects can be added to.\nManages the items, ensures that they are rendered at the right times\nand passes on mouse events.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkContextScene(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkContextSceneNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkContextScene", o) != 0)
    {
    Py_DECREF(o);
    }

}

