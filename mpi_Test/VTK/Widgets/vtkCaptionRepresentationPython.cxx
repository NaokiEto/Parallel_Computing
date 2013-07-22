// python wrapper for vtkCaptionRepresentation
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
#include "vtkCaptionRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCaptionRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCaptionRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCaptionRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCaptionRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkBorderRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkBorderRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderRepresentationNew
#endif

static const char **PyvtkCaptionRepresentation_Doc();


static PyObject *
PyvtkCaptionRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      tempr = op->vtkCaptionRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      tempr = op->vtkCaptionRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkCaptionRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCaptionRepresentation::NewInstance();
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
PyvtkCaptionRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCaptionRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCaptionRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_SetAnchorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnchorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      op->SetAnchorPosition(temp0);
      }
    else
      {
      op->vtkCaptionRepresentation::SetAnchorPosition(temp0);
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
PyvtkCaptionRepresentation_GetAnchorPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      op->GetAnchorPosition(temp0);
      }
    else
      {
      op->vtkCaptionRepresentation::GetAnchorPosition(temp0);
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
PyvtkCaptionRepresentation_SetCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkCaptionActor2D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCaptionActor2D"))
    {
    if (ap.IsBound())
      {
      op->SetCaptionActor2D(temp0);
      }
    else
      {
      op->vtkCaptionRepresentation::SetCaptionActor2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetCaptionActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCaptionActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkCaptionActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCaptionActor2D();
      }
    else
      {
      tempr = op->vtkCaptionRepresentation::GetCaptionActor2D();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_SetAnchorRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnchorRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkPointHandleRepresentation3D *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointHandleRepresentation3D"))
    {
    if (ap.IsBound())
      {
      op->SetAnchorRepresentation(temp0);
      }
    else
      {
      op->vtkCaptionRepresentation::SetAnchorRepresentation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetAnchorRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnchorRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkPointHandleRepresentation3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAnchorRepresentation();
      }
    else
      {
      tempr = op->vtkCaptionRepresentation::GetAnchorRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkCaptionRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  double temp0[2];
  double save0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->GetSize(temp0);
      }
    else
      {
      op->vtkCaptionRepresentation::GetSize(temp0);
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
PyvtkCaptionRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  vtkPropCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
    {
    if (ap.IsBound())
      {
      op->GetActors2D(temp0);
      }
    else
      {
      op->vtkCaptionRepresentation::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      op->vtkCaptionRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      tempr = op->vtkCaptionRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      tempr = op->vtkCaptionRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      tempr = op->vtkCaptionRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

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
      tempr = op->vtkCaptionRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_SetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFontFactor(temp0);
      }
    else
      {
      op->vtkCaptionRepresentation::SetFontFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetFontFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFontFactorMinValue();
      }
    else
      {
      tempr = op->vtkCaptionRepresentation::GetFontFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetFontFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFontFactorMaxValue();
      }
    else
      {
      tempr = op->vtkCaptionRepresentation::GetFontFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCaptionRepresentation_GetFontFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCaptionRepresentation *op = static_cast<vtkCaptionRepresentation *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFontFactor();
      }
    else
      {
      tempr = op->vtkCaptionRepresentation::GetFontFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCaptionRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkCaptionRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK class methods.\n"},
  {(char*)"IsA", PyvtkCaptionRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK class methods.\n"},
  {(char*)"NewInstance", PyvtkCaptionRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCaptionRepresentation\nC++: vtkCaptionRepresentation *NewInstance()\n\nStandard VTK class methods.\n"},
  {(char*)"SafeDownCast", PyvtkCaptionRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCaptionRepresentation\nC++: vtkCaptionRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK class methods.\n"},
  {(char*)"SetAnchorPosition", PyvtkCaptionRepresentation_SetAnchorPosition, 1,
   (char*)"V.SetAnchorPosition([float, float, float])\nC++: void SetAnchorPosition(double pos[3])\n\nSpecify the position of the anchor (i.e., the point that the\ncaption is anchored to). Note that the position should be\nspecified in world coordinates.\n"},
  {(char*)"GetAnchorPosition", PyvtkCaptionRepresentation_GetAnchorPosition, 1,
   (char*)"V.GetAnchorPosition([float, float, float])\nC++: void GetAnchorPosition(double pos[3])\n\nSpecify the position of the anchor (i.e., the point that the\ncaption is anchored to). Note that the position should be\nspecified in world coordinates.\n"},
  {(char*)"SetCaptionActor2D", PyvtkCaptionRepresentation_SetCaptionActor2D, 1,
   (char*)"V.SetCaptionActor2D(vtkCaptionActor2D)\nC++: void SetCaptionActor2D(vtkCaptionActor2D *captionActor)\n\nSpecify the vtkCaptionActor2D to manage. If not specified, then\none is automatically created.\n"},
  {(char*)"GetCaptionActor2D", PyvtkCaptionRepresentation_GetCaptionActor2D, 1,
   (char*)"V.GetCaptionActor2D() -> vtkCaptionActor2D\nC++: vtkCaptionActor2D *GetCaptionActor2D()\n\nSpecify the vtkCaptionActor2D to manage. If not specified, then\none is automatically created.\n"},
  {(char*)"SetAnchorRepresentation", PyvtkCaptionRepresentation_SetAnchorRepresentation, 1,
   (char*)"V.SetAnchorRepresentation(vtkPointHandleRepresentation3D)\nC++: void SetAnchorRepresentation(\n    vtkPointHandleRepresentation3D *)\n\nSet and get the instances of vtkPointHandleRepresention3D used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"GetAnchorRepresentation", PyvtkCaptionRepresentation_GetAnchorRepresentation, 1,
   (char*)"V.GetAnchorRepresentation() -> vtkPointHandleRepresentation3D\nC++: vtkPointHandleRepresentation3D *GetAnchorRepresentation()\n\nSet and get the instances of vtkPointHandleRepresention3D used to\nimplement this representation. Normally default representations\nare created, but you can specify the ones you want to use.\n"},
  {(char*)"BuildRepresentation", PyvtkCaptionRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSatisfy the superclasses API.\n"},
  {(char*)"GetSize", PyvtkCaptionRepresentation_GetSize, 1,
   (char*)"V.GetSize([float, float])\nC++: virtual void GetSize(double size[2])\n\nSatisfy the superclasses API.\n"},
  {(char*)"GetActors2D", PyvtkCaptionRepresentation_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkCaptionRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkCaptionRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkCaptionRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkCaptionRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkCaptionRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"SetFontFactor", PyvtkCaptionRepresentation_SetFontFactor, 1,
   (char*)"V.SetFontFactor(float)\nC++: void SetFontFactor(double)\n\nSet/Get the factor that controls the overall size of the fonts of\nthe caption when the text actor's ScaledText is OFF\n"},
  {(char*)"GetFontFactorMinValue", PyvtkCaptionRepresentation_GetFontFactorMinValue, 1,
   (char*)"V.GetFontFactorMinValue() -> float\nC++: double GetFontFactorMinValue()\n\nSet/Get the factor that controls the overall size of the fonts of\nthe caption when the text actor's ScaledText is OFF\n"},
  {(char*)"GetFontFactorMaxValue", PyvtkCaptionRepresentation_GetFontFactorMaxValue, 1,
   (char*)"V.GetFontFactorMaxValue() -> float\nC++: double GetFontFactorMaxValue()\n\nSet/Get the factor that controls the overall size of the fonts of\nthe caption when the text actor's ScaledText is OFF\n"},
  {(char*)"GetFontFactor", PyvtkCaptionRepresentation_GetFontFactor, 1,
   (char*)"V.GetFontFactor() -> float\nC++: double GetFontFactor()\n\nSet/Get the factor that controls the overall size of the fonts of\nthe caption when the text actor's ScaledText is OFF\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCaptionRepresentation_StaticNew()
{
  return vtkCaptionRepresentation::New();
}

PyObject *PyVTKClass_vtkCaptionRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCaptionRepresentation_StaticNew,
    PyvtkCaptionRepresentation_Methods,
    "vtkCaptionRepresentation", modulename,
    NULL, NULL,
    PyvtkCaptionRepresentation_Doc(),
    PyVTKClass_vtkBorderRepresentationNew(modulename));
  return cls;
}

const char **PyvtkCaptionRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkCaptionRepresentation - represents vtkCaptionWidget in the scene\n\n",
    "Superclass: vtkBorderRepresentation\n\n",
    "This class represents vtkCaptionWidget. A caption is defined by some\ntext with a leader (e.g., arrow) that points from the text to a point\nin the scene. The caption is defined by an instance of\nvtkCaptionActor2D. It uses the event bindings of its superclass\n(vtkBorderWidget) to control the placement of the text, and adds the\nability to move the attachment point around. In addition, when the\ncaptio",
    "n text is selected, the widget emits a ActivateEvent that\nobservers can watch for. This is useful for opening GUI dialogoues to\nadjust font characteristics, etc. (Please see the superclass for a\ndescription of event bindings.)\n\nNote that this widget extends the behavior of its superclass\nvtkBorderRepresentation.\n\nSee Also:\n\nvtkCaptionWidget vtkBorderWidget vtkBorderRepresentation\nvtkCaptionActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCaptionRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCaptionRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCaptionRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

