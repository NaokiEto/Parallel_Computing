// python wrapper for vtkDefaultPainter
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
#include "vtkDefaultPainter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDefaultPainter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDefaultPainter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDefaultPainterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDefaultPainterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPainterNew
extern "C" { PyObject *PyVTKClass_vtkPainterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPainterNew
#endif

static const char **PyvtkDefaultPainter_Doc();


static PyObject *
PyvtkDefaultPainter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

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
      tempr = op->vtkDefaultPainter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

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
      tempr = op->vtkDefaultPainter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkDefaultPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDefaultPainter::NewInstance();
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
PyvtkDefaultPainter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDefaultPainter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDefaultPainter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_SetScalarsToColorsPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarsToColorsPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkScalarsToColorsPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColorsPainter"))
    {
    if (ap.IsBound())
      {
      op->SetScalarsToColorsPainter(temp0);
      }
    else
      {
      op->vtkDefaultPainter::SetScalarsToColorsPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_GetScalarsToColorsPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarsToColorsPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkScalarsToColorsPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScalarsToColorsPainter();
      }
    else
      {
      tempr = op->vtkDefaultPainter::GetScalarsToColorsPainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_SetClipPlanesPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipPlanesPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkClipPlanesPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClipPlanesPainter"))
    {
    if (ap.IsBound())
      {
      op->SetClipPlanesPainter(temp0);
      }
    else
      {
      op->vtkDefaultPainter::SetClipPlanesPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_GetClipPlanesPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClipPlanesPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkClipPlanesPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClipPlanesPainter();
      }
    else
      {
      tempr = op->vtkDefaultPainter::GetClipPlanesPainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_SetDisplayListPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayListPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkDisplayListPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDisplayListPainter"))
    {
    if (ap.IsBound())
      {
      op->SetDisplayListPainter(temp0);
      }
    else
      {
      op->vtkDefaultPainter::SetDisplayListPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_GetDisplayListPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayListPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkDisplayListPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDisplayListPainter();
      }
    else
      {
      tempr = op->vtkDefaultPainter::GetDisplayListPainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_SetCompositePainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositePainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkCompositePainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositePainter"))
    {
    if (ap.IsBound())
      {
      op->SetCompositePainter(temp0);
      }
    else
      {
      op->vtkDefaultPainter::SetCompositePainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_GetCompositePainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositePainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkCompositePainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompositePainter();
      }
    else
      {
      tempr = op->vtkDefaultPainter::GetCompositePainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_SetCoincidentTopologyResolutionPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoincidentTopologyResolutionPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkCoincidentTopologyResolutionPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCoincidentTopologyResolutionPainter"))
    {
    if (ap.IsBound())
      {
      op->SetCoincidentTopologyResolutionPainter(temp0);
      }
    else
      {
      op->vtkDefaultPainter::SetCoincidentTopologyResolutionPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_GetCoincidentTopologyResolutionPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoincidentTopologyResolutionPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkCoincidentTopologyResolutionPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoincidentTopologyResolutionPainter();
      }
    else
      {
      tempr = op->vtkDefaultPainter::GetCoincidentTopologyResolutionPainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_SetLightingPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLightingPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkLightingPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLightingPainter"))
    {
    if (ap.IsBound())
      {
      op->SetLightingPainter(temp0);
      }
    else
      {
      op->vtkDefaultPainter::SetLightingPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_GetLightingPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLightingPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkLightingPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLightingPainter();
      }
    else
      {
      tempr = op->vtkDefaultPainter::GetLightingPainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_SetRepresentationPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentationPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkRepresentationPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRepresentationPainter"))
    {
    if (ap.IsBound())
      {
      op->SetRepresentationPainter(temp0);
      }
    else
      {
      op->vtkDefaultPainter::SetRepresentationPainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_GetRepresentationPainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentationPainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkRepresentationPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRepresentationPainter();
      }
    else
      {
      tempr = op->vtkDefaultPainter::GetRepresentationPainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_SetDelegatePainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegatePainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkPainter *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPainter"))
    {
    if (ap.IsBound())
      {
      op->SetDelegatePainter(temp0);
      }
    else
      {
      op->vtkDefaultPainter::SetDelegatePainter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_GetDelegatePainter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegatePainter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkPainter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDelegatePainter();
      }
    else
      {
      tempr = op->vtkDefaultPainter::GetDelegatePainter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

  vtkRenderer *temp0 = NULL;
  vtkActor *temp1 = NULL;
  unsigned long temp2;
  bool temp3 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      op->Render(temp0, temp1, temp2, temp3);
      }
    else
      {
      op->vtkDefaultPainter::Render(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

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
      op->vtkDefaultPainter::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDefaultPainter_UpdateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDefaultPainter *op = static_cast<vtkDefaultPainter *>(vp);

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
      op->UpdateBounds(temp0);
      }
    else
      {
      op->vtkDefaultPainter::UpdateBounds(temp0);
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

static PyMethodDef PyvtkDefaultPainter_Methods[] = {
  {(char*)"GetClassName", PyvtkDefaultPainter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDefaultPainter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDefaultPainter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDefaultPainter\nC++: vtkDefaultPainter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDefaultPainter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDefaultPainter\nC++: vtkDefaultPainter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetScalarsToColorsPainter", PyvtkDefaultPainter_SetScalarsToColorsPainter, 1,
   (char*)"V.SetScalarsToColorsPainter(vtkScalarsToColorsPainter)\nC++: void SetScalarsToColorsPainter(vtkScalarsToColorsPainter *)\n\nGet/Set the painter that maps scalars to colors.\n"},
  {(char*)"GetScalarsToColorsPainter", PyvtkDefaultPainter_GetScalarsToColorsPainter, 1,
   (char*)"V.GetScalarsToColorsPainter() -> vtkScalarsToColorsPainter\nC++: vtkScalarsToColorsPainter *GetScalarsToColorsPainter()\n\nGet/Set the painter that maps scalars to colors.\n"},
  {(char*)"SetClipPlanesPainter", PyvtkDefaultPainter_SetClipPlanesPainter, 1,
   (char*)"V.SetClipPlanesPainter(vtkClipPlanesPainter)\nC++: void SetClipPlanesPainter(vtkClipPlanesPainter *)\n\nGet/Set the painter that handles clipping.\n"},
  {(char*)"GetClipPlanesPainter", PyvtkDefaultPainter_GetClipPlanesPainter, 1,
   (char*)"V.GetClipPlanesPainter() -> vtkClipPlanesPainter\nC++: vtkClipPlanesPainter *GetClipPlanesPainter()\n\nGet/Set the painter that handles clipping.\n"},
  {(char*)"SetDisplayListPainter", PyvtkDefaultPainter_SetDisplayListPainter, 1,
   (char*)"V.SetDisplayListPainter(vtkDisplayListPainter)\nC++: void SetDisplayListPainter(vtkDisplayListPainter *)\n\nGet/Set the painter that builds display lists.\n"},
  {(char*)"GetDisplayListPainter", PyvtkDefaultPainter_GetDisplayListPainter, 1,
   (char*)"V.GetDisplayListPainter() -> vtkDisplayListPainter\nC++: vtkDisplayListPainter *GetDisplayListPainter()\n\nGet/Set the painter that builds display lists.\n"},
  {(char*)"SetCompositePainter", PyvtkDefaultPainter_SetCompositePainter, 1,
   (char*)"V.SetCompositePainter(vtkCompositePainter)\nC++: void SetCompositePainter(vtkCompositePainter *)\n\nGet/Set the painter used to handle composite datasets.\n"},
  {(char*)"GetCompositePainter", PyvtkDefaultPainter_GetCompositePainter, 1,
   (char*)"V.GetCompositePainter() -> vtkCompositePainter\nC++: vtkCompositePainter *GetCompositePainter()\n\nGet/Set the painter used to handle composite datasets.\n"},
  {(char*)"SetCoincidentTopologyResolutionPainter", PyvtkDefaultPainter_SetCoincidentTopologyResolutionPainter, 1,
   (char*)"V.SetCoincidentTopologyResolutionPainter(\n    vtkCoincidentTopologyResolutionPainter)\nC++: void SetCoincidentTopologyResolutionPainter(\n    vtkCoincidentTopologyResolutionPainter *)\n\nPainter used to resolve coincident topology.\n"},
  {(char*)"GetCoincidentTopologyResolutionPainter", PyvtkDefaultPainter_GetCoincidentTopologyResolutionPainter, 1,
   (char*)"V.GetCoincidentTopologyResolutionPainter()\n    -> vtkCoincidentTopologyResolutionPainter\nC++: vtkCoincidentTopologyResolutionPainter *GetCoincidentTopologyResolutionPainter(\n    )\n\nPainter used to resolve coincident topology.\n"},
  {(char*)"SetLightingPainter", PyvtkDefaultPainter_SetLightingPainter, 1,
   (char*)"V.SetLightingPainter(vtkLightingPainter)\nC++: void SetLightingPainter(vtkLightingPainter *)\n\nGet/Set the painter that controls lighting.\n"},
  {(char*)"GetLightingPainter", PyvtkDefaultPainter_GetLightingPainter, 1,
   (char*)"V.GetLightingPainter() -> vtkLightingPainter\nC++: vtkLightingPainter *GetLightingPainter()\n\nGet/Set the painter that controls lighting.\n"},
  {(char*)"SetRepresentationPainter", PyvtkDefaultPainter_SetRepresentationPainter, 1,
   (char*)"V.SetRepresentationPainter(vtkRepresentationPainter)\nC++: void SetRepresentationPainter(vtkRepresentationPainter *)\n\nPainter used to convert polydata to Wireframe/Points\nrepresentation.\n"},
  {(char*)"GetRepresentationPainter", PyvtkDefaultPainter_GetRepresentationPainter, 1,
   (char*)"V.GetRepresentationPainter() -> vtkRepresentationPainter\nC++: vtkRepresentationPainter *GetRepresentationPainter()\n\nPainter used to convert polydata to Wireframe/Points\nrepresentation.\n"},
  {(char*)"SetDelegatePainter", PyvtkDefaultPainter_SetDelegatePainter, 1,
   (char*)"V.SetDelegatePainter(vtkPainter)\nC++: virtual void SetDelegatePainter(vtkPainter *)\n\nSet/Get the painter to which this painter should propagare its\ndraw calls. These methods are overridden so that the delegate is\nset to the end of the Painter Chain.\n"},
  {(char*)"GetDelegatePainter", PyvtkDefaultPainter_GetDelegatePainter, 1,
   (char*)"V.GetDelegatePainter() -> vtkPainter\nC++: virtual vtkPainter *GetDelegatePainter()\n\nSet/Get the painter to which this painter should propagare its\ndraw calls. These methods are overridden so that the delegate is\nset to the end of the Painter Chain.\n"},
  {(char*)"Render", PyvtkDefaultPainter_Render, 1,
   (char*)"V.Render(vtkRenderer, vtkActor, int, bool)\nC++: virtual void Render(vtkRenderer *renderer, vtkActor *actor,\n    unsigned long typeflags, bool forceCompileOnly)\n\nOverridden to setup the chain of painter depending on the actor\nrepresentation. The chain is rebuilt if this->MTime has changed\nsince last BuildPainterChain(); Building of the chain does not\ndepend on input polydata, hence it does not check if the input\nhas changed at all.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkDefaultPainter_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: virtual void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\npainter. The parameter window could be used to determine which\ngraphic resources to release. The call is propagated to the\ndelegate painter, if any.\n"},
  {(char*)"UpdateBounds", PyvtkDefaultPainter_UpdateBounds, 1,
   (char*)"V.UpdateBounds([float, float, float, float, float, float])\nC++: void UpdateBounds(double bounds[6])\n\nExpand or shrink the estimated bounds based on the geometric\ntransformations applied in the painter. The bounds are left\nunchanged if the painter does not change the geometry.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDefaultPainter_StaticNew()
{
  return vtkDefaultPainter::New();
}

PyObject *PyVTKClass_vtkDefaultPainterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDefaultPainter_StaticNew,
    PyvtkDefaultPainter_Methods,
    "vtkDefaultPainter", modulename,
    NULL, NULL,
    PyvtkDefaultPainter_Doc(),
    PyVTKClass_vtkPainterNew(modulename));
  return cls;
}

const char **PyvtkDefaultPainter_Doc()
{
  static const char *docstring[] = {
    "vtkDefaultPainter - sets up a default chain of painters.\n\n",
    "Superclass: vtkPainter\n\n",
    "This painter does not do any actual rendering. Sets up a default\npipeline of painters to mimick the behaiour of old vtkPolyDataMapper.\nThe chain is as follows: input--> vtkScalarsToColorsPainter -->\nvtkClipPlanesPainter --> vtkDisplayListPainter -->\nvtkCompositePainter --> vtkCoincidentTopologyResolutionPainter -->\nvtkLightingPainter --> vtkRepresentationPainter --><Delegate of\nvtkDefaultPainter>.",
    " Typically, the delegate of the default painter be\none that is capable of r rendering graphics primitives or a\nvtkChooserPainter which can select appropriate painters to do the\nrendering.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDefaultPainter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDefaultPainterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDefaultPainter", o) != 0)
    {
    Py_DECREF(o);
    }

}
