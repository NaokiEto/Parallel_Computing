// python wrapper for vtkProp3DButtonRepresentation
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
#include "vtkProp3DButtonRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProp3DButtonRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProp3DButtonRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProp3DButtonRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProp3DButtonRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkButtonRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkButtonRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkButtonRepresentationNew
#endif

static const char **PyvtkProp3DButtonRepresentation_Doc();


static PyObject *
PyvtkProp3DButtonRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

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
      tempr = op->vtkProp3DButtonRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

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
      tempr = op->vtkProp3DButtonRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  vtkProp3DButtonRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProp3DButtonRepresentation::NewInstance();
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
PyvtkProp3DButtonRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProp3DButtonRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProp3DButtonRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_SetButtonProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int temp0;
  vtkProp3D *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkProp3D"))
    {
    if (ap.IsBound())
      {
      op->SetButtonProp(temp0, temp1);
      }
    else
      {
      op->vtkProp3DButtonRepresentation::SetButtonProp(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_GetButtonProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int temp0;
  vtkProp3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetButtonProp(temp0);
      }
    else
      {
      tempr = op->vtkProp3DButtonRepresentation::GetButtonProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_SetFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFollowCamera(temp0);
      }
    else
      {
      op->vtkProp3DButtonRepresentation::SetFollowCamera(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_GetFollowCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFollowCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFollowCamera();
      }
    else
      {
      tempr = op->vtkProp3DButtonRepresentation::GetFollowCamera();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_FollowCameraOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCameraOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FollowCameraOn();
      }
    else
      {
      op->vtkProp3DButtonRepresentation::FollowCameraOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_FollowCameraOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FollowCameraOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->FollowCameraOff();
      }
    else
      {
      op->vtkProp3DButtonRepresentation::FollowCameraOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_SetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetState(temp0);
      }
    else
      {
      op->vtkProp3DButtonRepresentation::SetState(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

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
      tempr = op->vtkProp3DButtonRepresentation::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkProp3DButtonRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_PlaceWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

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
      op->vtkProp3DButtonRepresentation::PlaceWidget(temp0);
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
PyvtkProp3DButtonRepresentation_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->ShallowCopy(temp0);
      }
    else
      {
      op->vtkProp3DButtonRepresentation::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

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
      op->vtkProp3DButtonRepresentation::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

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
      op->vtkProp3DButtonRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

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
      tempr = op->vtkProp3DButtonRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_RenderVolumetricGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderVolumetricGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderVolumetricGeometry(temp0);
      }
    else
      {
      tempr = op->vtkProp3DButtonRepresentation::RenderVolumetricGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderTranslucentPolygonalGeometry(temp0);
      }
    else
      {
      tempr = op->vtkProp3DButtonRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProp3DButtonRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProp3DButtonRepresentation *op = static_cast<vtkProp3DButtonRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTranslucentPolygonalGeometry();
      }
    else
      {
      tempr = op->vtkProp3DButtonRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProp3DButtonRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkProp3DButtonRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of the class.\n"},
  {(char*)"IsA", PyvtkProp3DButtonRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of the class.\n"},
  {(char*)"NewInstance", PyvtkProp3DButtonRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProp3DButtonRepresentation\nC++: vtkProp3DButtonRepresentation *NewInstance()\n\nStandard methods for instances of the class.\n"},
  {(char*)"SafeDownCast", PyvtkProp3DButtonRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProp3DButtonRepresentation\nC++: vtkProp3DButtonRepresentation *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of the class.\n"},
  {(char*)"SetButtonProp", PyvtkProp3DButtonRepresentation_SetButtonProp, 1,
   (char*)"V.SetButtonProp(int, vtkProp3D)\nC++: void SetButtonProp(int i, vtkProp3D *prop)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be (0 <= i < NumberOfStates).\n"},
  {(char*)"GetButtonProp", PyvtkProp3DButtonRepresentation_GetButtonProp, 1,
   (char*)"V.GetButtonProp(int) -> vtkProp3D\nC++: vtkProp3D *GetButtonProp(int i)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be (0 <= i < NumberOfStates).\n"},
  {(char*)"SetFollowCamera", PyvtkProp3DButtonRepresentation_SetFollowCamera, 1,
   (char*)"V.SetFollowCamera(int)\nC++: void SetFollowCamera(int a)\n\nSpecify whether the button should always face the camera. If\nenabled, the button reorients itself towards the camera as the\ncamera moves.\n"},
  {(char*)"GetFollowCamera", PyvtkProp3DButtonRepresentation_GetFollowCamera, 1,
   (char*)"V.GetFollowCamera() -> int\nC++: int GetFollowCamera()\n\nSpecify whether the button should always face the camera. If\nenabled, the button reorients itself towards the camera as the\ncamera moves.\n"},
  {(char*)"FollowCameraOn", PyvtkProp3DButtonRepresentation_FollowCameraOn, 1,
   (char*)"V.FollowCameraOn()\nC++: void FollowCameraOn()\n\nSpecify whether the button should always face the camera. If\nenabled, the button reorients itself towards the camera as the\ncamera moves.\n"},
  {(char*)"FollowCameraOff", PyvtkProp3DButtonRepresentation_FollowCameraOff, 1,
   (char*)"V.FollowCameraOff()\nC++: void FollowCameraOff()\n\nSpecify whether the button should always face the camera. If\nenabled, the button reorients itself towards the camera as the\ncamera moves.\n"},
  {(char*)"SetState", PyvtkProp3DButtonRepresentation_SetState, 1,
   (char*)"V.SetState(int)\nC++: virtual void SetState(int state)\n\nExtend the vtkButtonRepresentation::SetState() method.\n"},
  {(char*)"ComputeInteractionState", PyvtkProp3DButtonRepresentation_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"BuildRepresentation", PyvtkProp3DButtonRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"PlaceWidget", PyvtkProp3DButtonRepresentation_PlaceWidget, 1,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\n\nThis method positions (translates and scales the props) into the\nbounding box specified. Note all the button props are scaled.\n"},
  {(char*)"ShallowCopy", PyvtkProp3DButtonRepresentation_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"GetActors", PyvtkProp3DButtonRepresentation_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *pc)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkProp3DButtonRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkProp3DButtonRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"RenderVolumetricGeometry", PyvtkProp3DButtonRepresentation_RenderVolumetricGeometry, 1,
   (char*)"V.RenderVolumetricGeometry(vtkViewport) -> int\nC++: virtual int RenderVolumetricGeometry(vtkViewport *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkProp3DButtonRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkProp3DButtonRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProp3DButtonRepresentation_StaticNew()
{
  return vtkProp3DButtonRepresentation::New();
}

PyObject *PyVTKClass_vtkProp3DButtonRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProp3DButtonRepresentation_StaticNew,
    PyvtkProp3DButtonRepresentation_Methods,
    "vtkProp3DButtonRepresentation", modulename,
    NULL, NULL,
    PyvtkProp3DButtonRepresentation_Doc(),
    PyVTKClass_vtkButtonRepresentationNew(modulename));
  return cls;
}

const char **PyvtkProp3DButtonRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkProp3DButtonRepresentation - defines a representation for a\nvtkButtonWidget\n\n",
    "Superclass: vtkButtonRepresentation\n\n",
    "This class implements one type of vtkButtonRepresentation. Each\nbutton state can be represented with a separate instance of\nvtkProp3D. Thus buttons can be represented with vtkActor,\nvtkImageActor, volumes (e.g., vtkVolume) and/or any other vtkProp3D.\nAlso, the class invokes events when highlighting occurs (i.e.,\nhovering, selecting) so that appropriate action can be taken to\nhighlight the button (",
    "if desired).\n\nTo use this representation, always begin by specifying the number of\nbutton states.  Then provide, for each state, an instance of\nvtkProp3D.\n\nThis widget representation uses the conventional placement method.\nThe button is placed inside the bounding box defined by PlaceWidget\nby translating and scaling the vtkProp3D to fit (each vtkProp3D is\ntransformed). Therefore, you must define t",
    "he number of button states\nand each state (i.e., vtkProp3D) prior to calling vtkPlaceWidget.\n\nSee Also:\n\nvtkButtonWidget vtkButtonRepresentation vtkButtonSource\nvtkEllipticalButtonSource vtkRectangularButtonSource\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProp3DButtonRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProp3DButtonRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProp3DButtonRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

