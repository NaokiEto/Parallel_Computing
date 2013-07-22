// python wrapper for vtkTextRepresentation
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
#include "vtkTextRepresentation.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTextRepresentation(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTextRepresentation(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTextRepresentationNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTextRepresentationNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkBorderRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkBorderRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkBorderRepresentationNew
#endif

static const char **PyvtkTextRepresentation_Doc();


static PyObject *
PyvtkTextRepresentation_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      tempr = op->vtkTextRepresentation::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      tempr = op->vtkTextRepresentation::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkTextRepresentation *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTextRepresentation::NewInstance();
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
PyvtkTextRepresentation_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTextRepresentation *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTextRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkTextActor *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextActor"))
    {
    if (ap.IsBound())
      {
      op->SetTextActor(temp0);
      }
    else
      {
      op->vtkTextRepresentation::SetTextActor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetTextActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkTextActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTextActor();
      }
    else
      {
      tempr = op->vtkTextRepresentation::GetTextActor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetText(temp0);
      }
    else
      {
      op->vtkTextRepresentation::SetText(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetText(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetText");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetText();
      }
    else
      {
      tempr = op->vtkTextRepresentation::GetText();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkTextRepresentation::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      op->vtkTextRepresentation::GetSize(temp0);
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
PyvtkTextRepresentation_GetActors2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      op->vtkTextRepresentation::GetActors2D(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      op->vtkTextRepresentation::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      tempr = op->vtkTextRepresentation::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      tempr = op->vtkTextRepresentation::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      tempr = op->vtkTextRepresentation::RenderTranslucentPolygonalGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      tempr = op->vtkTextRepresentation::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetWindowLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindowLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWindowLocation(temp0);
      }
    else
      {
      op->vtkTextRepresentation::SetWindowLocation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_GetWindowLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWindowLocation();
      }
    else
      {
      tempr = op->vtkTextRepresentation::GetWindowLocation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetPosition(temp0, temp1);
      }
    else
      {
      op->vtkTextRepresentation::SetPosition(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkTextRepresentation_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

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
      op->SetPosition(temp0);
      }
    else
      {
      op->vtkTextRepresentation::SetPosition(temp0);
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
PyvtkTextRepresentation_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkTextRepresentation_SetPosition_s1(self, args);
    case 1:
      return PyvtkTextRepresentation_SetPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return NULL;
}



static PyObject *
PyvtkTextRepresentation_ExecuteTextPropertyModifiedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteTextPropertyModifiedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkObject *temp0 = NULL;
  unsigned long temp1;
  void  *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ExecuteTextPropertyModifiedEvent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextRepresentation::ExecuteTextPropertyModifiedEvent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTextRepresentation_ExecuteTextActorModifiedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteTextActorModifiedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRepresentation *op = static_cast<vtkTextRepresentation *>(vp);

  vtkObject *temp0 = NULL;
  unsigned long temp1;
  void  *temp2 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->ExecuteTextActorModifiedEvent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkTextRepresentation::ExecuteTextActorModifiedEvent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkTextRepresentation_Methods[] = {
  {(char*)"GetClassName", PyvtkTextRepresentation_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkTextRepresentation_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkTextRepresentation_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTextRepresentation\nC++: vtkTextRepresentation *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkTextRepresentation_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTextRepresentation\nC++: vtkTextRepresentation *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"SetTextActor", PyvtkTextRepresentation_SetTextActor, 1,
   (char*)"V.SetTextActor(vtkTextActor)\nC++: void SetTextActor(vtkTextActor *textActor)\n\nSpecify the vtkTextActor to manage. If not specified, then one is\nautomatically created.\n"},
  {(char*)"GetTextActor", PyvtkTextRepresentation_GetTextActor, 1,
   (char*)"V.GetTextActor() -> vtkTextActor\nC++: vtkTextActor *GetTextActor()\n\nSpecify the vtkTextActor to manage. If not specified, then one is\nautomatically created.\n"},
  {(char*)"SetText", PyvtkTextRepresentation_SetText, 1,
   (char*)"V.SetText(string)\nC++: void SetText(const char *text)\n\nGet/Set the text string display by this representation.\n"},
  {(char*)"GetText", PyvtkTextRepresentation_GetText, 1,
   (char*)"V.GetText() -> string\nC++: const char *GetText()\n\nGet/Set the text string display by this representation.\n"},
  {(char*)"BuildRepresentation", PyvtkTextRepresentation_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: virtual void BuildRepresentation()\n\nSatisfy the superclasses API.\n"},
  {(char*)"GetSize", PyvtkTextRepresentation_GetSize, 1,
   (char*)"V.GetSize([float, float])\nC++: virtual void GetSize(double size[2])\n\nSatisfy the superclasses API.\n"},
  {(char*)"GetActors2D", PyvtkTextRepresentation_GetActors2D, 1,
   (char*)"V.GetActors2D(vtkPropCollection)\nC++: virtual void GetActors2D(vtkPropCollection *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkTextRepresentation_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOverlay", PyvtkTextRepresentation_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkTextRepresentation_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"RenderTranslucentPolygonalGeometry", PyvtkTextRepresentation_RenderTranslucentPolygonalGeometry, 1,
   (char*)"V.RenderTranslucentPolygonalGeometry(vtkViewport) -> int\nC++: virtual int RenderTranslucentPolygonalGeometry(vtkViewport *)\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkTextRepresentation_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nThese methods are necessary to make this representation behave as\na vtkProp.\n"},
  {(char*)"SetWindowLocation", PyvtkTextRepresentation_SetWindowLocation, 1,
   (char*)"V.SetWindowLocation(int)\nC++: virtual void SetWindowLocation(int enumLocation)\n\nSet the text position, by enumeration ( AnyLocation = 0,\nLowerLeftCorner, LowerRightCorner, LowerCenter, UpperLeftCorner,\nUpperRightCorner, UpperCenter) related to the render window\n"},
  {(char*)"GetWindowLocation", PyvtkTextRepresentation_GetWindowLocation, 1,
   (char*)"V.GetWindowLocation() -> int\nC++: int GetWindowLocation()\n\nSet the text position, by enumeration ( AnyLocation = 0,\nLowerLeftCorner, LowerRightCorner, LowerCenter, UpperLeftCorner,\nUpperRightCorner, UpperCenter) related to the render window\n"},
  {(char*)"SetPosition", PyvtkTextRepresentation_SetPosition, 1,
   (char*)"V.SetPosition(float, float)\nC++: virtual void SetPosition(double x, double y)\nV.SetPosition([float, float])\nC++: virtual void SetPosition(double pos[2])\n\nSet the text position, by overiding the same function of\nvtkBorderRepresentation so that the Modified() will be called.\n"},
  {(char*)"ExecuteTextPropertyModifiedEvent", PyvtkTextRepresentation_ExecuteTextPropertyModifiedEvent, 1,
   (char*)"V.ExecuteTextPropertyModifiedEvent(vtkObject, int, )\nC++: void ExecuteTextPropertyModifiedEvent(vtkObject *obj,\n    unsigned long enumEvent, void *p)\n\nInternal. Excecute events observed by internal observer\n"},
  {(char*)"ExecuteTextActorModifiedEvent", PyvtkTextRepresentation_ExecuteTextActorModifiedEvent, 1,
   (char*)"V.ExecuteTextActorModifiedEvent(vtkObject, int, )\nC++: void ExecuteTextActorModifiedEvent(vtkObject *obj,\n    unsigned long enumEvent, void *p)\n\nInternal. Excecute events observed by internal observer\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTextRepresentation_StaticNew()
{
  return vtkTextRepresentation::New();
}

PyObject *PyVTKClass_vtkTextRepresentationNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTextRepresentation_StaticNew,
    PyvtkTextRepresentation_Methods,
    "vtkTextRepresentation", modulename,
    NULL, NULL,
    PyvtkTextRepresentation_Doc(),
    PyVTKClass_vtkBorderRepresentationNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"AnyLocation", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"LowerLeftCorner", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"LowerRightCorner", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"LowerCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"UpperLeftCorner", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"UpperRightCorner", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"UpperCenter", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkTextRepresentation_Doc()
{
  static const char *docstring[] = {
    "vtkTextRepresentation - represent text for vtkTextWidget\n\n",
    "Superclass: vtkBorderRepresentation\n\n",
    "This class represents text for a vtkTextWidget.  This class provides\nsupport for interactively placing text on the 2D overlay plane. The\ntext is defined by an instance of vtkTextActor.\n\nSee Also:\n\nvtkTextRepresentation vtkBorderWidget vtkAbstractWidget\nvtkWidgetRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextRepresentation(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextRepresentationNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextRepresentation", o) != 0)
    {
    Py_DECREF(o);
    }

}

