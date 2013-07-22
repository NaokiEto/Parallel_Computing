// python wrapper for vtkTexturedButtonRepresentation2D
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
#include "vtkTexturedButtonRepresentation2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTexturedButtonRepresentation2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTexturedButtonRepresentation2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTexturedButtonRepresentation2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTexturedButtonRepresentation2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkButtonRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkButtonRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkButtonRepresentationNew
#endif

static const char **PyvtkTexturedButtonRepresentation2D_Doc();


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      tempr = op->vtkTexturedButtonRepresentation2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      tempr = op->vtkTexturedButtonRepresentation2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkTexturedButtonRepresentation2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTexturedButtonRepresentation2D::NewInstance();
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
PyvtkTexturedButtonRepresentation2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTexturedButtonRepresentation2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTexturedButtonRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetProperty(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::SetProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProperty();
      }
    else
      {
      tempr = op->vtkTexturedButtonRepresentation2D::GetProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetHoveringProperty(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::SetHoveringProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetHoveringProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoveringProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHoveringProperty();
      }
    else
      {
      tempr = op->vtkTexturedButtonRepresentation2D::GetHoveringProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProperty2D"))
    {
    if (ap.IsBound())
      {
      op->SetSelectingProperty(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::SetSelectingProperty(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetSelectingProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectingProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkProperty2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSelectingProperty();
      }
    else
      {
      tempr = op->vtkTexturedButtonRepresentation2D::GetSelectingProperty();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_SetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  int temp0;
  vtkImageData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetButtonTexture(temp0, temp1);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::SetButtonTexture(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetButtonTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButtonTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  int temp0;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetButtonTexture(temp0);
      }
    else
      {
      tempr = op->vtkTexturedButtonRepresentation2D::GetButtonTexture(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetBalloon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBalloon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  vtkBalloonRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBalloon();
      }
    else
      {
      tempr = op->vtkTexturedButtonRepresentation2D::GetBalloon();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_ComputeInteractionState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeInteractionState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      tempr = op->vtkTexturedButtonRepresentation2D::ComputeInteractionState(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_Highlight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Highlight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->Highlight(temp0);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::Highlight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_PlaceWidget_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::PlaceWidget(temp0);
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
PyvtkTexturedButtonRepresentation2D_PlaceWidget_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int temp1[2];
  int save1[2];
  const int size1 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->PlaceWidget(temp0, temp1);
      }
    else
      {
      op->vtkTexturedButtonRepresentation2D::PlaceWidget(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTexturedButtonRepresentation2D_PlaceWidget(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkTexturedButtonRepresentation2D_PlaceWidget_s1(self, args);
    case 2:
      return PyvtkTexturedButtonRepresentation2D_PlaceWidget_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "PlaceWidget");
  return NULL;
}



static PyObject *
PyvtkTexturedButtonRepresentation2D_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::ShallowCopy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::GetActors(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      op->vtkTexturedButtonRepresentation2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      tempr = op->vtkTexturedButtonRepresentation2D::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTexturedButtonRepresentation2D_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTexturedButtonRepresentation2D *op = static_cast<vtkTexturedButtonRepresentation2D *>(vp);

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
      tempr = op->vtkTexturedButtonRepresentation2D::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTexturedButtonRepresentation2D_Methods[] = {
  {(char*)"GetClassName", PyvtkTexturedButtonRepresentation2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for the class.\n"},
  {(char*)"IsA", PyvtkTexturedButtonRepresentation2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for the class.\n"},
  {(char*)"NewInstance", PyvtkTexturedButtonRepresentation2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTexturedButtonRepresentation2D\nC++: vtkTexturedButtonRepresentation2D *NewInstance()\n\nStandard methods for the class.\n"},
  {(char*)"SafeDownCast", PyvtkTexturedButtonRepresentation2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTexturedButtonRepresentation2D\nC++: vtkTexturedButtonRepresentation2D *SafeDownCast(vtkObject* o)\n\nStandard methods for the class.\n"},
  {(char*)"SetProperty", PyvtkTexturedButtonRepresentation2D_SetProperty, 1,
   (char*)"V.SetProperty(vtkProperty2D)\nC++: virtual void SetProperty(vtkProperty2D *p)\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {(char*)"GetProperty", PyvtkTexturedButtonRepresentation2D_GetProperty, 1,
   (char*)"V.GetProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetProperty()\n\nSpecify the property to use when the button is to appear \"normal\"\ni.e., the mouse pointer is not hovering or selecting the button.\n"},
  {(char*)"SetHoveringProperty", PyvtkTexturedButtonRepresentation2D_SetHoveringProperty, 1,
   (char*)"V.SetHoveringProperty(vtkProperty2D)\nC++: virtual void SetHoveringProperty(vtkProperty2D *p)\n\nSpecify the property to use when the hovering over the button.\n"},
  {(char*)"GetHoveringProperty", PyvtkTexturedButtonRepresentation2D_GetHoveringProperty, 1,
   (char*)"V.GetHoveringProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetHoveringProperty()\n\nSpecify the property to use when the hovering over the button.\n"},
  {(char*)"SetSelectingProperty", PyvtkTexturedButtonRepresentation2D_SetSelectingProperty, 1,
   (char*)"V.SetSelectingProperty(vtkProperty2D)\nC++: virtual void SetSelectingProperty(vtkProperty2D *p)\n\nSpecify the property to use when selecting the button.\n"},
  {(char*)"GetSelectingProperty", PyvtkTexturedButtonRepresentation2D_GetSelectingProperty, 1,
   (char*)"V.GetSelectingProperty() -> vtkProperty2D\nC++: vtkProperty2D *GetSelectingProperty()\n\nSpecify the property to use when selecting the button.\n"},
  {(char*)"SetButtonTexture", PyvtkTexturedButtonRepresentation2D_SetButtonTexture, 1,
   (char*)"V.SetButtonTexture(int, vtkImageData)\nC++: void SetButtonTexture(int i, vtkImageData *image)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be 0<=i<NumberOfStates.\n"},
  {(char*)"GetButtonTexture", PyvtkTexturedButtonRepresentation2D_GetButtonTexture, 1,
   (char*)"V.GetButtonTexture(int) -> vtkImageData\nC++: vtkImageData *GetButtonTexture(int i)\n\nAdd the ith texture corresponding to the ith button state. The\nparameter i should be 0<=i<NumberOfStates.\n"},
  {(char*)"GetBalloon", PyvtkTexturedButtonRepresentation2D_GetBalloon, 1,
   (char*)"V.GetBalloon() -> vtkBalloonRepresentation\nC++: vtkBalloonRepresentation *GetBalloon()\n\nGrab the underlying vtkBalloonRepresentation used to position and\ndisplay the button texture.\n"},
  {(char*)"ComputeInteractionState", PyvtkTexturedButtonRepresentation2D_ComputeInteractionState, 1,
   (char*)"V.ComputeInteractionState(int, int, int) -> int\nC++: virtual int ComputeInteractionState(int X, int Y,\n    int modify=0)\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"BuildRepresentation", PyvtkTexturedButtonRepresentation2D_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"Highlight", PyvtkTexturedButtonRepresentation2D_Highlight, 1,
   (char*)"V.Highlight(int)\nC++: virtual void Highlight(int state)\n\nProvide the necessary methods to satisfy the\nvtkWidgetRepresentation API.\n"},
  {(char*)"PlaceWidget", PyvtkTexturedButtonRepresentation2D_PlaceWidget, 1,
   (char*)"V.PlaceWidget([float, float, float, float, float, float])\nC++: virtual void PlaceWidget(double bounds[6])\nV.PlaceWidget([float, float, float], [int, int])\nC++: virtual void PlaceWidget(double anchor[3], int size[2])\n\nConventional PlaceWidget() method to satisfy the\nvtkWidgetRepresentation API. In this version, bounds[6] specifies\na rectangle in *display* coordinates in which to place the\nbutton. The values for bounds[4] and bounds[5] can be set to\nzero. Note that PlaceWidget() is typically called at the end of\nconfiguring the button representation.\n"},
  {(char*)"ShallowCopy", PyvtkTexturedButtonRepresentation2D_ShallowCopy, 1,
   (char*)"V.ShallowCopy(vtkProp)\nC++: virtual void ShallowCopy(vtkProp *prop)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"GetActors", PyvtkTexturedButtonRepresentation2D_GetActors, 1,
   (char*)"V.GetActors(vtkPropCollection)\nC++: virtual void GetActors(vtkPropCollection *pc)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkTexturedButtonRepresentation2D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"RenderOverlay", PyvtkTexturedButtonRepresentation2D_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkTexturedButtonRepresentation2D_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nProvide the necessary methods to satisfy the rendering API.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTexturedButtonRepresentation2D_StaticNew()
{
  return vtkTexturedButtonRepresentation2D::New();
}

PyObject *PyVTKClass_vtkTexturedButtonRepresentation2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTexturedButtonRepresentation2D_StaticNew,
    PyvtkTexturedButtonRepresentation2D_Methods,
    "vtkTexturedButtonRepresentation2D", modulename,
    NULL, NULL,
    PyvtkTexturedButtonRepresentation2D_Doc(),
    PyVTKClass_vtkButtonRepresentationNew(modulename));
  return cls;
}

const char **PyvtkTexturedButtonRepresentation2D_Doc()
{
  static const char *docstring[] = {
    "vtkTexturedButtonRepresentation2D - defines a representation for a\nvtkButtonWidget\n\n",
    "Superclass: vtkButtonRepresentation\n\n",
    "This class implements one type of vtkButtonRepresentation. It changes\nthe appearance of a user-provided polydata by assigning textures\naccording to the current button state. It also provides highlighting\n(when hovering and selecting the button) by fiddling with the actor's\nproperty. Since this is a 2D version, the button is rendered in the\noverlay plane. Typically it is positioned in display coord",
    "inates, but\nit can be anchored to a world position so it will appear to move as\nthe camera moves.\n\nTo use this representation, always begin by specifying the number of\nbutton states.  Then provide a polydata (the polydata should have\nassociated texture coordinates), and a list of textures cooresponding\nto the button states. Optionally, the HoveringProperty and\nSelectionProperty can be adjusted to ",
    "obtain the appropriate\nappearance.\n\nSee Also:\n\nvtkButtonWidget vtkButtonRepresentation\nvtkTexturedButtonRepresentation vtkProp3DButtonRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTexturedButtonRepresentation2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTexturedButtonRepresentation2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTexturedButtonRepresentation2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

