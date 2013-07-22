// python wrapper for vtkAngleRepresentation2D
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
#include "vtkAngleRepresentation2D.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAngleRepresentation2D(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAngleRepresentation2D(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAngleRepresentation2DNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAngleRepresentation2DNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAngleRepresentationNew
extern "C" { PyObject *PyVTKClass_vtkAngleRepresentationNew(const char *); }
#define DECLARED_PyVTKClass_vtkAngleRepresentationNew
#endif

static const char **PyvtkAngleRepresentation2D_Doc();


static PyObject *
PyvtkAngleRepresentation2D_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      tempr = op->vtkAngleRepresentation2D::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      tempr = op->vtkAngleRepresentation2D::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  vtkAngleRepresentation2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAngleRepresentation2D::NewInstance();
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
PyvtkAngleRepresentation2D_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAngleRepresentation2D *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAngleRepresentation2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngle();
      }
    else
      {
      tempr = op->vtkAngleRepresentation2D::GetAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_GetPoint1WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetPoint1WorldPosition(temp0);
      }
    else
      {
      op->vtkAngleRepresentation2D::GetPoint1WorldPosition(temp0);
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
PyvtkAngleRepresentation2D_GetCenterWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetCenterWorldPosition(temp0);
      }
    else
      {
      op->vtkAngleRepresentation2D::GetCenterWorldPosition(temp0);
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
PyvtkAngleRepresentation2D_GetPoint2WorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2WorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetPoint2WorldPosition(temp0);
      }
    else
      {
      op->vtkAngleRepresentation2D::GetPoint2WorldPosition(temp0);
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
PyvtkAngleRepresentation2D_SetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->SetPoint1DisplayPosition(temp0);
      }
    else
      {
      op->vtkAngleRepresentation2D::SetPoint1DisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_SetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->SetCenterDisplayPosition(temp0);
      }
    else
      {
      op->vtkAngleRepresentation2D::SetCenterDisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_SetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->SetPoint2DisplayPosition(temp0);
      }
    else
      {
      op->vtkAngleRepresentation2D::SetPoint2DisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_GetPoint1DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetPoint1DisplayPosition(temp0);
      }
    else
      {
      op->vtkAngleRepresentation2D::GetPoint1DisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_GetCenterDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetCenterDisplayPosition(temp0);
      }
    else
      {
      op->vtkAngleRepresentation2D::GetCenterDisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_GetPoint2DisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2DisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->GetPoint2DisplayPosition(temp0);
      }
    else
      {
      op->vtkAngleRepresentation2D::GetPoint2DisplayPosition(temp0);
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
PyvtkAngleRepresentation2D_GetRay1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  vtkLeaderActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRay1();
      }
    else
      {
      tempr = op->vtkAngleRepresentation2D::GetRay1();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_GetRay2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRay2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  vtkLeaderActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRay2();
      }
    else
      {
      tempr = op->vtkAngleRepresentation2D::GetRay2();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_GetArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  vtkLeaderActor2D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetArc();
      }
    else
      {
      tempr = op->vtkAngleRepresentation2D::GetArc();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->BuildRepresentation();
      }
    else
      {
      op->vtkAngleRepresentation2D::BuildRepresentation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      op->vtkAngleRepresentation2D::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAngleRepresentation2D_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAngleRepresentation2D *op = static_cast<vtkAngleRepresentation2D *>(vp);

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
      tempr = op->vtkAngleRepresentation2D::RenderOverlay(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkAngleRepresentation2D_Methods[] = {
  {(char*)"GetClassName", PyvtkAngleRepresentation2D_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard VTK methods.\n"},
  {(char*)"IsA", PyvtkAngleRepresentation2D_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard VTK methods.\n"},
  {(char*)"NewInstance", PyvtkAngleRepresentation2D_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAngleRepresentation2D\nC++: vtkAngleRepresentation2D *NewInstance()\n\nStandard VTK methods.\n"},
  {(char*)"SafeDownCast", PyvtkAngleRepresentation2D_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAngleRepresentation2D\nC++: vtkAngleRepresentation2D *SafeDownCast(vtkObject* o)\n\nStandard VTK methods.\n"},
  {(char*)"GetAngle", PyvtkAngleRepresentation2D_GetAngle, 1,
   (char*)"V.GetAngle() -> float\nC++: virtual double GetAngle()\n\nSatisfy the superclasses API.\n"},
  {(char*)"GetPoint1WorldPosition", PyvtkAngleRepresentation2D_GetPoint1WorldPosition, 1,
   (char*)"V.GetPoint1WorldPosition([float, float, float])\nC++: virtual void GetPoint1WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetCenterWorldPosition", PyvtkAngleRepresentation2D_GetCenterWorldPosition, 1,
   (char*)"V.GetCenterWorldPosition([float, float, float])\nC++: virtual void GetCenterWorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2WorldPosition", PyvtkAngleRepresentation2D_GetPoint2WorldPosition, 1,
   (char*)"V.GetPoint2WorldPosition([float, float, float])\nC++: virtual void GetPoint2WorldPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint1DisplayPosition", PyvtkAngleRepresentation2D_SetPoint1DisplayPosition, 1,
   (char*)"V.SetPoint1DisplayPosition([float, float, float])\nC++: virtual void SetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetCenterDisplayPosition", PyvtkAngleRepresentation2D_SetCenterDisplayPosition, 1,
   (char*)"V.SetCenterDisplayPosition([float, float, float])\nC++: virtual void SetCenterDisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"SetPoint2DisplayPosition", PyvtkAngleRepresentation2D_SetPoint2DisplayPosition, 1,
   (char*)"V.SetPoint2DisplayPosition([float, float, float])\nC++: virtual void SetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint1DisplayPosition", PyvtkAngleRepresentation2D_GetPoint1DisplayPosition, 1,
   (char*)"V.GetPoint1DisplayPosition([float, float, float])\nC++: virtual void GetPoint1DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetCenterDisplayPosition", PyvtkAngleRepresentation2D_GetCenterDisplayPosition, 1,
   (char*)"V.GetCenterDisplayPosition([float, float, float])\nC++: virtual void GetCenterDisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetPoint2DisplayPosition", PyvtkAngleRepresentation2D_GetPoint2DisplayPosition, 1,
   (char*)"V.GetPoint2DisplayPosition([float, float, float])\nC++: virtual void GetPoint2DisplayPosition(double pos[3])\n\nMethods to Set/Get the coordinates of the two points defining\nthis representation. Note that methods are available for both\ndisplay and world coordinates.\n"},
  {(char*)"GetRay1", PyvtkAngleRepresentation2D_GetRay1, 1,
   (char*)"V.GetRay1() -> vtkLeaderActor2D\nC++: vtkLeaderActor2D *GetRay1()\n\nSet/Get the three leaders used to create this representation. By\nobtaining these leaders the user can set the appropriate\nproperties, etc.\n"},
  {(char*)"GetRay2", PyvtkAngleRepresentation2D_GetRay2, 1,
   (char*)"V.GetRay2() -> vtkLeaderActor2D\nC++: vtkLeaderActor2D *GetRay2()\n\nSet/Get the three leaders used to create this representation. By\nobtaining these leaders the user can set the appropriate\nproperties, etc.\n"},
  {(char*)"GetArc", PyvtkAngleRepresentation2D_GetArc, 1,
   (char*)"V.GetArc() -> vtkLeaderActor2D\nC++: vtkLeaderActor2D *GetArc()\n\nSet/Get the three leaders used to create this representation. By\nobtaining these leaders the user can set the appropriate\nproperties, etc.\n"},
  {(char*)"BuildRepresentation", PyvtkAngleRepresentation2D_BuildRepresentation, 1,
   (char*)"V.BuildRepresentation()\nC++: void BuildRepresentation()\n\nMethod defined by vtkWidgetRepresentation superclass and needed\nhere.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkAngleRepresentation2D_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *w)\n\nMethods required by vtkProp superclass.\n"},
  {(char*)"RenderOverlay", PyvtkAngleRepresentation2D_RenderOverlay, 1,
   (char*)"V.RenderOverlay(vtkViewport) -> int\nC++: virtual int RenderOverlay(vtkViewport *viewport)\n\nMethods required by vtkProp superclass.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAngleRepresentation2D_StaticNew()
{
  return vtkAngleRepresentation2D::New();
}

PyObject *PyVTKClass_vtkAngleRepresentation2DNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAngleRepresentation2D_StaticNew,
    PyvtkAngleRepresentation2D_Methods,
    "vtkAngleRepresentation2D", modulename,
    NULL, NULL,
    PyvtkAngleRepresentation2D_Doc(),
    PyVTKClass_vtkAngleRepresentationNew(modulename));
  return cls;
}

const char **PyvtkAngleRepresentation2D_Doc()
{
  static const char *docstring[] = {
    "vtkAngleRepresentation2D - represent the vtkAngleWidget\n\n",
    "Superclass: vtkAngleRepresentation\n\n",
    "The vtkAngleRepresentation2D is a representation for the\nvtkAngleWidget. This representation consists of two rays and three\nvtkHandleRepresentations to place and manipulate the three points\ndefining the angle representation. (Note: the three points are\nreferred to as Point1, Center, and Point2, at the two end points\n(Point1 and Point2) and Center (around which the angle is measured).\nThis particul",
    "ar implementation is a 2D representation, meaning that\nit draws in the overlay plane.\n\nSee Also:\n\nvtkAngleWidget vtkHandleRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAngleRepresentation2D(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAngleRepresentation2DNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAngleRepresentation2D", o) != 0)
    {
    Py_DECREF(o);
    }

}

