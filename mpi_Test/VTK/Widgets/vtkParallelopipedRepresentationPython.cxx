// python wrapper for vtkParallelopipedRepresentation
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
#include "vtkParallelopipedRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParallelopipedRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParallelopipedRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParallelopipedRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParallelopipedRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkWidgetRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkWidgetRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkWidgetRepresentationNew
#endif

static const char **PyvtkParallelopipedRepresentation_Doc();


static PyObject *
PyvtkParallelopipedRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

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
      tempr = op->vtkParallelopipedRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

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
      tempr = op->vtkParallelopipedRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkParallelopipedRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::NewInstance();
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
PyvtkParallelopipedRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParallelopipedRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParallelopipedRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double temp0[8][3];
  double save0[8][3];
  static int size0[2] = { 8, 3 };
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
    {
    ap.SaveArray(*temp0, *save0, size0[0]*size0[1]);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::PlaceWidget(temp0);
      }

    if (ap.ArrayHasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(0, *temp0, 2, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelopipedRepresentation_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::PlaceWidget(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelopipedRepresentation_PlaceWidget_Methods[] = {
  {NULL, PyvtkParallelopipedRepresentation_PlaceWidget_s1, 1,
   (char*)"@O *d[3]"},
  {NULL, PyvtkParallelopipedRepresentation_PlaceWidget_s2, 1,
   (char*)"@O *d"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkParallelopipedRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkParallelopipedRepresentation_PlaceWidget_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkParallelopipedRepresentation_SetInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInteractionState(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetInteractionState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkPlaneCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
    {
    if (ap.IsBound())
      {
      op->GetBoundingPlanes(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::GetBoundingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->GetPolyData(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::GetPolyData(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetHandleProperty(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetHandleProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetHoveredHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoveredHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetHoveredHandleProperty(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetHoveredHandleProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty"))
    {
    if (ap.IsBound())
      {
      op->SetSelectedHandleProperty(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetSelectedHandleProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandleProperty();
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::GetHandleProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetHoveredHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoveredHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHoveredHandleProperty();
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::GetHoveredHandleProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetSelectedHandleProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedHandleProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedHandleProperty();
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::GetSelectedHandleProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkHandleRepresentation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHandleRepresentation"))
    {
    if (ap.IsBound())
      {
      op->SetHandleRepresentation(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetHandleRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetHandleRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandleRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  vtkHandleRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHandleRepresentation(temp0);
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::GetHandleRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_HandlesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandlesOn();
      }
    else
      {
      op->vtkParallelopipedRepresentation::HandlesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_HandlesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HandlesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->HandlesOff();
      }
    else
      {
      op->vtkParallelopipedRepresentation::HandlesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFaceProperty();
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::GetFaceProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetSelectedFaceProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedFaceProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedFaceProperty();
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::GetSelectedFaceProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutlineProperty();
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::GetOutlineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetSelectedOutlineProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedOutlineProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkProperty *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectedOutlineProperty();
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::GetSelectedOutlineProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkParallelopipedRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOverlay(temp0);
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  int temp1;
  int temp2 = 0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->ComputeInteractionState(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_Translate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->Translate(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::Translate(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelopipedRepresentation_Translate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Translate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Translate(temp0, temp1);
      }
    else
      {
      op->vtkParallelopipedRepresentation::Translate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkParallelopipedRepresentation_Translate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkParallelopipedRepresentation_Translate_s1(self, args);
    case 2:
      return PyvtkParallelopipedRepresentation_Translate_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Translate");
  return NULL;
}



static PyObject *
PyvtkParallelopipedRepresentation_Scale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->Scale(temp0, temp1);
      }
    else
      {
      op->vtkParallelopipedRepresentation::Scale(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_PositionHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PositionHandles();
      }
    else
      {
      op->vtkParallelopipedRepresentation::PositionHandles();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_SetMinimumThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetMinimumThickness(temp0);
      }
    else
      {
      op->vtkParallelopipedRepresentation::SetMinimumThickness(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParallelopipedRepresentation_GetMinimumThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelopipedRepresentation *op = static_cast<vtkParallelopipedRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinimumThickness();
      }
    else
      {
      tempr = op->vtkParallelopipedRepresentation::GetMinimumThickness();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParallelopipedRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkParallelopipedRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkParallelopipedRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkParallelopipedRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParallelopipedRepresentation\nC++: vtkParallelopipedRepresentation *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkParallelopipedRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParallelopipedRepresentation\nC++: vtkParallelopipedRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"GetActors", PyvtkParallelopipedRepresentation_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *pc)\n\nMethods to satisfy the superclass.\n"},
  {(char*)"PlaceWidget", PyvtkParallelopipedRepresentation_PlaceWidget, 1,
   (char*)"V.PlaceWidget([[float, float, float], [float, float, float],\n    [float, float, float], [float, float, float], [float, float,\n    float], [float, float, float], [float, float, float], [float,\n    float, float]])\nC++: virtual void PlaceWidget(double corners[8][3])\nV.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nPlace the widget in the scene. You can use either of the two APIs\n:\n1) PlaceWidget( double bounds[6] ) Creates a cuboid conforming to\nthe said bounds.\n2) PlaceWidget( double corners[8][3] ) Creates a parallelopiped\n   with corners specified. The order in which corners are\n   specified must obey the following rule: Corner 0 - 1 - 2 - 3 -\n0  forms a face Corner 4 - 5 - 6 - 7 - 4  forms a face Corner 0 -\n4 - 5 - 1 - 0  forms a face Corner 1 - 5 - 6 - 2 - 1  forms a\n   face Corner 2 - 6 - 7 - 3 - 2  forms a face Corner 3 - 7 - 4 -\n0 - 3  forms a face\n"},
  {(char*)"SetInteractionState", PyvtkParallelopipedRepresentation_SetInteractionState, 1,
   (char*)"V.SetInteractionState(int)\nC++: void SetInteractionState(int a)\n\nThe interaction state may be set from a widget (e.g.,\nPointWidget) or other object. This controls how the interaction\nwith the widget proceeds.\n"},
  {(char*)"GetBoundingPlanes", PyvtkParallelopipedRepresentation_GetBoundingPlanes, 1,
   (char*)"V.GetBoundingPlanes(vtkPlaneCollection)\nC++: void GetBoundingPlanes(vtkPlaneCollection *pc)\n\nGet the bounding planes of the object. The first 6 planes will be\nbounding planes of the parallelopiped. If in chair mode, three\nadditional planes will be present. The last three planes will be\nthose of the chair. The normals of all the planes will point into\nthe object.\n"},
  {(char*)"GetPolyData", PyvtkParallelopipedRepresentation_GetPolyData, 1,
   (char*)"V.GetPolyData(vtkPolyData)\nC++: void GetPolyData(vtkPolyData *pd)\n\nThe parallelopiped polydata.\n"},
  {(char*)"GetBounds", PyvtkParallelopipedRepresentation_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\n\nThe parallelopiped polydata.\n"},
  {(char*)"SetHandleProperty", PyvtkParallelopipedRepresentation_SetHandleProperty, 1,
   (char*)"V.SetHandleProperty(vtkProperty)\nC++: virtual void SetHandleProperty(vtkProperty *)\n\nSet/Get the handle properties.\n"},
  {(char*)"SetHoveredHandleProperty", PyvtkParallelopipedRepresentation_SetHoveredHandleProperty, 1,
   (char*)"V.SetHoveredHandleProperty(vtkProperty)\nC++: virtual void SetHoveredHandleProperty(vtkProperty *)\n\nSet/Get the handle properties.\n"},
  {(char*)"SetSelectedHandleProperty", PyvtkParallelopipedRepresentation_SetSelectedHandleProperty, 1,
   (char*)"V.SetSelectedHandleProperty(vtkProperty)\nC++: virtual void SetSelectedHandleProperty(vtkProperty *)\n\nSet/Get the handle properties.\n"},
  {(char*)"GetHandleProperty", PyvtkParallelopipedRepresentation_GetHandleProperty, 1,
   (char*)"V.GetHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHandleProperty()\n\nSet/Get the handle properties.\n"},
  {(char*)"GetHoveredHandleProperty", PyvtkParallelopipedRepresentation_GetHoveredHandleProperty, 1,
   (char*)"V.GetHoveredHandleProperty() -> vtkProperty\nC++: vtkProperty *GetHoveredHandleProperty()\n\nSet/Get the handle properties.\n"},
  {(char*)"GetSelectedHandleProperty", PyvtkParallelopipedRepresentation_GetSelectedHandleProperty, 1,
   (char*)"V.GetSelectedHandleProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedHandleProperty()\n\nSet/Get the handle properties.\n"},
  {(char*)"SetHandleRepresentation", PyvtkParallelopipedRepresentation_SetHandleRepresentation, 1,
   (char*)"V.SetHandleRepresentation(vtkHandleRepresentation)\nC++: void SetHandleRepresentation(vtkHandleRepresentation *handle)\n\n"},
  {(char*)"GetHandleRepresentation", PyvtkParallelopipedRepresentation_GetHandleRepresentation, 1,
   (char*)"V.GetHandleRepresentation(int) -> vtkHandleRepresentation\nC++: vtkHandleRepresentation *GetHandleRepresentation(int index)\n\n"},
  {(char*)"HandlesOn", PyvtkParallelopipedRepresentation_HandlesOn, 1,
   (char*)"V.HandlesOn()\nC++: void HandlesOn()\n\nTurns the visibility of the handles on/off. Sometimes they may\nget in the way of visualization.\n"},
  {(char*)"HandlesOff", PyvtkParallelopipedRepresentation_HandlesOff, 1,
   (char*)"V.HandlesOff()\nC++: void HandlesOff()\n\nTurns the visibility of the handles on/off. Sometimes they may\nget in the way of visualization.\n"},
  {(char*)"GetFaceProperty", PyvtkParallelopipedRepresentation_GetFaceProperty, 1,
   (char*)"V.GetFaceProperty() -> vtkProperty\nC++: vtkProperty *GetFaceProperty()\n\nGet the face properties. When a face is being translated, the\nface gets highlighted with the SelectedFaceProperty.\n"},
  {(char*)"GetSelectedFaceProperty", PyvtkParallelopipedRepresentation_GetSelectedFaceProperty, 1,
   (char*)"V.GetSelectedFaceProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedFaceProperty()\n\nGet the face properties. When a face is being translated, the\nface gets highlighted with the SelectedFaceProperty.\n"},
  {(char*)"GetOutlineProperty", PyvtkParallelopipedRepresentation_GetOutlineProperty, 1,
   (char*)"V.GetOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetOutlineProperty()\n\nGet the outline properties. These are the properties with which\nthe parallelopiped wireframe is rendered.\n"},
  {(char*)"GetSelectedOutlineProperty", PyvtkParallelopipedRepresentation_GetSelectedOutlineProperty, 1,
   (char*)"V.GetSelectedOutlineProperty() -> vtkProperty\nC++: vtkProperty *GetSelectedOutlineProperty()\n\nGet the outline properties. These are the properties with which\nthe parallelopiped wireframe is rendered.\n"},
  {(char*)"BuildRepresentation", PyvtkParallelopipedRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nThis actually constructs the geometry of the widget from the\nvarious data parameters.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkParallelopipedRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOverlay", PyvtkParallelopipedRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkParallelopipedRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"ComputeInteractionState", PyvtkParallelopipedRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nGiven and x-y display coordinate, compute the interaction state\nof the widget.\n"},
  {(char*)"Translate", PyvtkParallelopipedRepresentation_Translate, 1,
   (char*)"V.Translate([float, float, float])\nC++: virtual void Translate(double translation[3])\nV.Translate(int, int)\nC++: virtual void Translate(int X, int Y)\n\n"},
  {(char*)"Scale", PyvtkParallelopipedRepresentation_Scale, 1,
   (char*)"V.Scale(int, int)\nC++: virtual void Scale(int X, int Y)\n\n"},
  {(char*)"PositionHandles", PyvtkParallelopipedRepresentation_PositionHandles, 1,
   (char*)"V.PositionHandles()\nC++: virtual void PositionHandles()\n\nSynchronize the parallelopiped handle positions with the\nPolygonal datastructure.\n"},
  {(char*)"SetMinimumThickness", PyvtkParallelopipedRepresentation_SetMinimumThickness, 1,
   (char*)"V.SetMinimumThickness(float)\nC++: void SetMinimumThickness(double a)\n\nMinimum thickness for the parallelopiped. User interactions\ncannot make any individual axis of the parallopiped thinner than\nthis value. Default is 0.05 expressed as a fraction of the\ndiagonal of the bounding box used in the PlaceWidget()\ninvocation.\n"},
  {(char*)"GetMinimumThickness", PyvtkParallelopipedRepresentation_GetMinimumThickness, 1,
   (char*)"V.GetMinimumThickness() -> float\nC++: double GetMinimumThickness()\n\nMinimum thickness for the parallelopiped. User interactions\ncannot make any individual axis of the parallopiped thinner than\nthis value. Default is 0.05 expressed as a fraction of the\ndiagonal of the bounding box used in the PlaceWidget()\ninvocation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParallelopipedRepresentation_StaticNew()
{
  return vtkParallelopipedRepresentation::New();
}

PyObject *PyVTKClass_vtkParallelopipedRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParallelopipedRepresentation_StaticNew,
    PyvtkParallelopipedRepresentation_Methods,
    "vtkParallelopipedRepresentation", modulename,
    NULL, NULL,
    PyvtkParallelopipedRepresentation_Doc(),
    PyVTKClass_vtkWidgetRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"Outside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"Inside", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"RequestResizeParallelopiped", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"RequestResizeParallelopipedAlongAnAxis", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"RequestChairMode", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"RequestTranslateParallelopiped", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"RequestScaleParallelopiped", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"RequestRotateParallelopiped", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"ResizingParallelopiped", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"ResizingParallelopipedAlongAnAxis", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(10);
    if (o && PyDict_SetItemString(d, (char *)"ChairMode", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"TranslatingParallelopiped", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(12);
    if (o && PyDict_SetItemString(d, (char *)"ScalingParallelopiped", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(13);
    if (o && PyDict_SetItemString(d, (char *)"RotatingParallelopiped", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkParallelopipedRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkParallelopipedRepresentation - Default representation for\nvtkParallelopipedWidget\n\n",
    "Superclass: vtkWidgetRepresentation\n\n",
    "This class provides the default geometrical representation for\nvtkParallelopipedWidget. As a result of interactions of the widget,\nthis representation can take on of the following shapes:\n\n1) A parallelopiped. (8 handles, 6 faces)\n\n2) Paralleopiped with a chair depression on any one handle. (A chair\nis a depression on one of the handles that carves inwards so as to\nallow the user to visualize cuts",
    " in the volume). (14 handles, 9\nfaces).\n\nSee Also:\n\nvtkParallelopipedWidget\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParallelopipedRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParallelopipedRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParallelopipedRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

