// python wrapper for vtkParallelCoordinatesView
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
#include "vtkParallelCoordinatesView.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParallelCoordinatesView(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParallelCoordinatesView(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParallelCoordinatesViewNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParallelCoordinatesViewNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkRenderViewNew
extern "C" { PyObject *PyVTKClass_vtkRenderViewNew(const char *); }
#define DECLARED_PyVTKClass_vtkRenderViewNew
#endif

static const char **PyvtkParallelCoordinatesView_Doc();


static PyObject *
PyvtkParallelCoordinatesView_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

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
      tempr = op->vtkParallelCoordinatesView::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

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
      tempr = op->vtkParallelCoordinatesView::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  vtkParallelCoordinatesView *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesView::NewInstance();
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
PyvtkParallelCoordinatesView_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParallelCoordinatesView *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParallelCoordinatesView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBrushMode(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesView::SetBrushMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushModeToLasso(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushModeToLasso");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBrushModeToLasso();
      }
    else
      {
      op->vtkParallelCoordinatesView::SetBrushModeToLasso();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushModeToAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushModeToAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBrushModeToAngle();
      }
    else
      {
      op->vtkParallelCoordinatesView::SetBrushModeToAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushModeToFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushModeToFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBrushModeToFunction();
      }
    else
      {
      op->vtkParallelCoordinatesView::SetBrushModeToFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushModeToAxisThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushModeToAxisThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBrushModeToAxisThreshold();
      }
    else
      {
      op->vtkParallelCoordinatesView::SetBrushModeToAxisThreshold();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetBrushMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrushMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBrushMode();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesView::GetBrushMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushOperator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushOperator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBrushOperator(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesView::SetBrushOperator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushOperatorToAdd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushOperatorToAdd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBrushOperatorToAdd();
      }
    else
      {
      op->vtkParallelCoordinatesView::SetBrushOperatorToAdd();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushOperatorToSubtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushOperatorToSubtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBrushOperatorToSubtract();
      }
    else
      {
      op->vtkParallelCoordinatesView::SetBrushOperatorToSubtract();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushOperatorToIntersect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushOperatorToIntersect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBrushOperatorToIntersect();
      }
    else
      {
      op->vtkParallelCoordinatesView::SetBrushOperatorToIntersect();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushOperatorToReplace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushOperatorToReplace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetBrushOperatorToReplace();
      }
    else
      {
      op->vtkParallelCoordinatesView::SetBrushOperatorToReplace();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetBrushOperator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrushOperator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBrushOperator();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesView::GetBrushOperator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetInspectMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInspectMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInspectMode(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesView::SetInspectMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetInspectModeToManipulateAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInspectModeToManipulateAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInspectModeToManipulateAxes();
      }
    else
      {
      op->vtkParallelCoordinatesView::SetInspectModeToManipulateAxes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetInpsectModeToSelectData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInpsectModeToSelectData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetInpsectModeToSelectData();
      }
    else
      {
      op->vtkParallelCoordinatesView::SetInpsectModeToSelectData();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetInspectMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInspectMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInspectMode();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesView::GetInspectMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetMaximumNumberOfBrushPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfBrushPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMaximumNumberOfBrushPoints(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesView::SetMaximumNumberOfBrushPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetMaximumNumberOfBrushPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBrushPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaximumNumberOfBrushPoints();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesView::GetMaximumNumberOfBrushPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetCurrentBrushClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentBrushClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCurrentBrushClass(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesView::SetCurrentBrushClass(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetCurrentBrushClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentBrushClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCurrentBrushClass();
      }
    else
      {
      tempr = op->vtkParallelCoordinatesView::GetCurrentBrushClass();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  vtkViewTheme *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
    {
    if (ap.IsBound())
      {
      op->ApplyViewTheme(temp0);
      }
    else
      {
      op->vtkParallelCoordinatesView::ApplyViewTheme(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesView_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelCoordinatesView_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParallelCoordinatesView_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParallelCoordinatesView_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParallelCoordinatesView\nC++: vtkParallelCoordinatesView *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParallelCoordinatesView_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelCoordinatesView\nC++: vtkParallelCoordinatesView *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetBrushMode", PyvtkParallelCoordinatesView_SetBrushMode, 1,
   (char*)"V.SetBrushMode(int)\nC++: void SetBrushMode(int)\n\n"},
  {(char*)"SetBrushModeToLasso", PyvtkParallelCoordinatesView_SetBrushModeToLasso, 1,
   (char*)"V.SetBrushModeToLasso()\nC++: void SetBrushModeToLasso()\n\n"},
  {(char*)"SetBrushModeToAngle", PyvtkParallelCoordinatesView_SetBrushModeToAngle, 1,
   (char*)"V.SetBrushModeToAngle()\nC++: void SetBrushModeToAngle()\n\n"},
  {(char*)"SetBrushModeToFunction", PyvtkParallelCoordinatesView_SetBrushModeToFunction, 1,
   (char*)"V.SetBrushModeToFunction()\nC++: void SetBrushModeToFunction()\n\n"},
  {(char*)"SetBrushModeToAxisThreshold", PyvtkParallelCoordinatesView_SetBrushModeToAxisThreshold, 1,
   (char*)"V.SetBrushModeToAxisThreshold()\nC++: void SetBrushModeToAxisThreshold()\n\n"},
  {(char*)"GetBrushMode", PyvtkParallelCoordinatesView_GetBrushMode, 1,
   (char*)"V.GetBrushMode() -> int\nC++: int GetBrushMode()\n\n"},
  {(char*)"SetBrushOperator", PyvtkParallelCoordinatesView_SetBrushOperator, 1,
   (char*)"V.SetBrushOperator(int)\nC++: void SetBrushOperator(int)\n\n"},
  {(char*)"SetBrushOperatorToAdd", PyvtkParallelCoordinatesView_SetBrushOperatorToAdd, 1,
   (char*)"V.SetBrushOperatorToAdd()\nC++: void SetBrushOperatorToAdd()\n\n"},
  {(char*)"SetBrushOperatorToSubtract", PyvtkParallelCoordinatesView_SetBrushOperatorToSubtract, 1,
   (char*)"V.SetBrushOperatorToSubtract()\nC++: void SetBrushOperatorToSubtract()\n\n"},
  {(char*)"SetBrushOperatorToIntersect", PyvtkParallelCoordinatesView_SetBrushOperatorToIntersect, 1,
   (char*)"V.SetBrushOperatorToIntersect()\nC++: void SetBrushOperatorToIntersect()\n\n"},
  {(char*)"SetBrushOperatorToReplace", PyvtkParallelCoordinatesView_SetBrushOperatorToReplace, 1,
   (char*)"V.SetBrushOperatorToReplace()\nC++: void SetBrushOperatorToReplace()\n\n"},
  {(char*)"GetBrushOperator", PyvtkParallelCoordinatesView_GetBrushOperator, 1,
   (char*)"V.GetBrushOperator() -> int\nC++: int GetBrushOperator()\n\n"},
  {(char*)"SetInspectMode", PyvtkParallelCoordinatesView_SetInspectMode, 1,
   (char*)"V.SetInspectMode(int)\nC++: void SetInspectMode(int)\n\n"},
  {(char*)"SetInspectModeToManipulateAxes", PyvtkParallelCoordinatesView_SetInspectModeToManipulateAxes, 1,
   (char*)"V.SetInspectModeToManipulateAxes()\nC++: void SetInspectModeToManipulateAxes()\n\n"},
  {(char*)"SetInpsectModeToSelectData", PyvtkParallelCoordinatesView_SetInpsectModeToSelectData, 1,
   (char*)"V.SetInpsectModeToSelectData()\nC++: void SetInpsectModeToSelectData()\n\n"},
  {(char*)"GetInspectMode", PyvtkParallelCoordinatesView_GetInspectMode, 1,
   (char*)"V.GetInspectMode() -> int\nC++: int GetInspectMode()\n\n"},
  {(char*)"SetMaximumNumberOfBrushPoints", PyvtkParallelCoordinatesView_SetMaximumNumberOfBrushPoints, 1,
   (char*)"V.SetMaximumNumberOfBrushPoints(int)\nC++: void SetMaximumNumberOfBrushPoints(int)\n\n"},
  {(char*)"GetMaximumNumberOfBrushPoints", PyvtkParallelCoordinatesView_GetMaximumNumberOfBrushPoints, 1,
   (char*)"V.GetMaximumNumberOfBrushPoints() -> int\nC++: int GetMaximumNumberOfBrushPoints()\n\n"},
  {(char*)"SetCurrentBrushClass", PyvtkParallelCoordinatesView_SetCurrentBrushClass, 1,
   (char*)"V.SetCurrentBrushClass(int)\nC++: void SetCurrentBrushClass(int a)\n\n"},
  {(char*)"GetCurrentBrushClass", PyvtkParallelCoordinatesView_GetCurrentBrushClass, 1,
   (char*)"V.GetCurrentBrushClass() -> int\nC++: int GetCurrentBrushClass()\n\n"},
  {(char*)"ApplyViewTheme", PyvtkParallelCoordinatesView_ApplyViewTheme, 1,
   (char*)"V.ApplyViewTheme(vtkViewTheme)\nC++: virtual void ApplyViewTheme(vtkViewTheme *theme)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelCoordinatesView_StaticNew()
{
  return vtkParallelCoordinatesView::New();
}

PyObject *PyVTKClass_vtkParallelCoordinatesViewNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelCoordinatesView_StaticNew,
    PyvtkParallelCoordinatesView_Methods,
    "vtkParallelCoordinatesView", modulename,
    NULL, NULL,
    PyvtkParallelCoordinatesView_Doc(),
    PyVTKClass_vtkRenderViewNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"VTK_BRUSH_LASSO", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VTK_BRUSH_ANGLE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VTK_BRUSH_FUNCTION", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"VTK_BRUSH_AXISTHRESHOLD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"VTK_BRUSH_MODECOUNT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"VTK_BRUSHOPERATOR_ADD", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VTK_BRUSHOPERATOR_SUBTRACT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VTK_BRUSHOPERATOR_INTERSECT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"VTK_BRUSHOPERATOR_REPLACE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"VTK_BRUSHOPERATOR_MODECOUNT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"VTK_INSPECT_MANIPULATE_AXES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VTK_INSPECT_SELECT_DATA", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"VTK_INSPECT_MODECOUNT", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkParallelCoordinatesView_Doc()
{
  static const char *docstring[] = {
    "vtkParallelCoordinatesView - view to be used with\nvtkParallelCoordinatesRepresentation\n\n",
    "Superclass: vtkRenderView\n\n",
    "This class manages interaction with the\nvtkParallelCoordinatesRepresentation.  There are two inspection\nmodes: axis manipulation and line selection.  In axis manipulation\nmode, PC axes can be dragged and reordered with the LMB, axis ranges\ncan be increased/decreased by dragging up/down with the LMB, and RMB\ncontrols zoom and pan.\n\nIn line selection mode, there are three subclasses of selections:\nl",
    "asso, angle, and function selection.  Lasso selection lets the user\nbrush a line and select all PC lines that pass nearby.  Angle\nselection lets the user draw a representative line between axes and\nselect all lines that have similar orientation.  Function selection\nlets the user draw two  representative lines between a pair of axes\nand select all lines that match the linear interpolation of those\n",
    "lines.\n\nThere are several self-explanatory operators for combining\nselections: ADD, SUBTRACT REPLACE, and INTERSECT.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelCoordinatesView(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelCoordinatesViewNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelCoordinatesView", o) != 0)
    {
    Py_DECREF(o);
    }

}

