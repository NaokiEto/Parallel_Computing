// python wrapper for vtkCoordinate
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
#include "vtkCoordinate.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCoordinate(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCoordinate(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCoordinateNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCoordinateNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCoordinate_Doc();


static PyObject *
PyvtkCoordinate_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

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
      tempr = op->vtkCoordinate::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

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
      tempr = op->vtkCoordinate::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCoordinate::NewInstance();
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
PyvtkCoordinate_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCoordinate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystem(temp0);
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystem(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoordinateSystem();
      }
    else
      {
      tempr = op->vtkCoordinate::GetCoordinateSystem();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToDisplay();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToNormalizedDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToNormalizedDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToNormalizedDisplay();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToNormalizedDisplay();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToViewport();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToNormalizedViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToNormalizedViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToNormalizedViewport();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToNormalizedViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToView();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToView();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetCoordinateSystemToWorld();
      }
    else
      {
      op->vtkCoordinate::SetCoordinateSystemToWorld();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetCoordinateSystemAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCoordinateSystemAsString();
      }
    else
      {
      tempr = op->vtkCoordinate::GetCoordinateSystemAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCoordinate::SetValue(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0);
      }
    else
      {
      op->vtkCoordinate::SetValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetValue(temp0, temp1);
      }
    else
      {
      op->vtkCoordinate::SetValue(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCoordinate_SetValue_s1(self, args);
    case 1:
      return PyvtkCoordinate_SetValue_s2(self, args);
    case 2:
      return PyvtkCoordinate_SetValue_s3(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return NULL;
}



static PyObject *
PyvtkCoordinate_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetValue();
      }
    else
      {
      tempr = op->vtkCoordinate::GetValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetReferenceCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkCoordinate *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCoordinate"))
    {
    if (ap.IsBound())
      {
      op->SetReferenceCoordinate(temp0);
      }
    else
      {
      op->vtkCoordinate::SetReferenceCoordinate(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetReferenceCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkCoordinate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReferenceCoordinate();
      }
    else
      {
      tempr = op->vtkCoordinate::GetReferenceCoordinate();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      op->SetViewport(temp0);
      }
    else
      {
      op->vtkCoordinate::SetViewport(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetViewport();
      }
    else
      {
      tempr = op->vtkCoordinate::GetViewport();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedWorldValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedWorldValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputedWorldValue(temp0);
      }
    else
      {
      tempr = op->vtkCoordinate::GetComputedWorldValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedViewportValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedViewportValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputedViewportValue(temp0);
      }
    else
      {
      tempr = op->vtkCoordinate::GetComputedViewportValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputedDisplayValue(temp0);
      }
    else
      {
      tempr = op->vtkCoordinate::GetComputedDisplayValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedLocalDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedLocalDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  int *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputedLocalDisplayValue(temp0);
      }
    else
      {
      tempr = op->vtkCoordinate::GetComputedLocalDisplayValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDoubleViewportValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDoubleViewportValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputedDoubleViewportValue(temp0);
      }
    else
      {
      tempr = op->vtkCoordinate::GetComputedDoubleViewportValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDoubleDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDoubleDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = NULL;
  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputedDoubleDisplayValue(temp0);
      }
    else
      {
      tempr = op->vtkCoordinate::GetComputedDoubleDisplayValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkCoordinate_Methods[] = {
  {(char*)"GetClassName", PyvtkCoordinate_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCoordinate_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCoordinate_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCoordinate\nC++: vtkCoordinate *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCoordinate_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCoordinate\nC++: vtkCoordinate *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCoordinateSystem", PyvtkCoordinate_SetCoordinateSystem, 1,
   (char*)"V.SetCoordinateSystem(int)\nC++: void SetCoordinateSystem(int a)\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"GetCoordinateSystem", PyvtkCoordinate_GetCoordinateSystem, 1,
   (char*)"V.GetCoordinateSystem() -> int\nC++: int GetCoordinateSystem()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToDisplay", PyvtkCoordinate_SetCoordinateSystemToDisplay, 1,
   (char*)"V.SetCoordinateSystemToDisplay()\nC++: void SetCoordinateSystemToDisplay()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToNormalizedDisplay", PyvtkCoordinate_SetCoordinateSystemToNormalizedDisplay, 1,
   (char*)"V.SetCoordinateSystemToNormalizedDisplay()\nC++: void SetCoordinateSystemToNormalizedDisplay()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToViewport", PyvtkCoordinate_SetCoordinateSystemToViewport, 1,
   (char*)"V.SetCoordinateSystemToViewport()\nC++: void SetCoordinateSystemToViewport()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToNormalizedViewport", PyvtkCoordinate_SetCoordinateSystemToNormalizedViewport, 1,
   (char*)"V.SetCoordinateSystemToNormalizedViewport()\nC++: void SetCoordinateSystemToNormalizedViewport()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToView", PyvtkCoordinate_SetCoordinateSystemToView, 1,
   (char*)"V.SetCoordinateSystemToView()\nC++: void SetCoordinateSystemToView()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"SetCoordinateSystemToWorld", PyvtkCoordinate_SetCoordinateSystemToWorld, 1,
   (char*)"V.SetCoordinateSystemToWorld()\nC++: void SetCoordinateSystemToWorld()\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {(char*)"GetCoordinateSystemAsString", PyvtkCoordinate_GetCoordinateSystemAsString, 1,
   (char*)"V.GetCoordinateSystemAsString() -> string\nC++: const char *GetCoordinateSystemAsString()\n\n"},
  {(char*)"SetValue", PyvtkCoordinate_SetValue, 1,
   (char*)"V.SetValue(float, float, float)\nC++: void SetValue(double, double, double)\nV.SetValue((float, float, float))\nC++: void SetValue(double a[3])\nV.SetValue(float, float)\nC++: void SetValue(double a, double b)\n\n"},
  {(char*)"GetValue", PyvtkCoordinate_GetValue, 1,
   (char*)"V.GetValue() -> (float, float, float)\nC++: double *GetValue()\n\n"},
  {(char*)"SetReferenceCoordinate", PyvtkCoordinate_SetReferenceCoordinate, 1,
   (char*)"V.SetReferenceCoordinate(vtkCoordinate)\nC++: virtual void SetReferenceCoordinate(vtkCoordinate *)\n\nIf this coordinate is relative to another coordinate, then\nspecify that coordinate as the ReferenceCoordinate. If this is\nNULL the coordinate is assumed to be absolute.\n"},
  {(char*)"GetReferenceCoordinate", PyvtkCoordinate_GetReferenceCoordinate, 1,
   (char*)"V.GetReferenceCoordinate() -> vtkCoordinate\nC++: vtkCoordinate *GetReferenceCoordinate()\n\nIf this coordinate is relative to another coordinate, then\nspecify that coordinate as the ReferenceCoordinate. If this is\nNULL the coordinate is assumed to be absolute.\n"},
  {(char*)"SetViewport", PyvtkCoordinate_SetViewport, 1,
   (char*)"V.SetViewport(vtkViewport)\nC++: void SetViewport(vtkViewport *viewport)\n\nIf you want this coordinate to be relative to a specific\nvtkViewport (vtkRenderer) then you can specify that here. NOTE:\nthis is a raw pointer, not a weak pointer not a reference counted\nobject to avoid reference cycle loop between rendering classes\nand filter classes.\n"},
  {(char*)"GetViewport", PyvtkCoordinate_GetViewport, 1,
   (char*)"V.GetViewport() -> vtkViewport\nC++: vtkViewport *GetViewport()\n\nIf you want this coordinate to be relative to a specific\nvtkViewport (vtkRenderer) then you can specify that here. NOTE:\nthis is a raw pointer, not a weak pointer not a reference counted\nobject to avoid reference cycle loop between rendering classes\nand filter classes.\n"},
  {(char*)"GetComputedWorldValue", PyvtkCoordinate_GetComputedWorldValue, 1,
   (char*)"V.GetComputedWorldValue(vtkViewport) -> (float, float, float)\nC++: double *GetComputedWorldValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {(char*)"GetComputedViewportValue", PyvtkCoordinate_GetComputedViewportValue, 1,
   (char*)"V.GetComputedViewportValue(vtkViewport) -> (int, int)\nC++: int *GetComputedViewportValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {(char*)"GetComputedDisplayValue", PyvtkCoordinate_GetComputedDisplayValue, 1,
   (char*)"V.GetComputedDisplayValue(vtkViewport) -> (int, int)\nC++: int *GetComputedDisplayValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {(char*)"GetComputedLocalDisplayValue", PyvtkCoordinate_GetComputedLocalDisplayValue, 1,
   (char*)"V.GetComputedLocalDisplayValue(vtkViewport) -> (int, int)\nC++: int *GetComputedLocalDisplayValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {(char*)"GetComputedDoubleViewportValue", PyvtkCoordinate_GetComputedDoubleViewportValue, 1,
   (char*)"V.GetComputedDoubleViewportValue(vtkViewport) -> (float, float)\nC++: double *GetComputedDoubleViewportValue(vtkViewport *)\n\n"},
  {(char*)"GetComputedDoubleDisplayValue", PyvtkCoordinate_GetComputedDoubleDisplayValue, 1,
   (char*)"V.GetComputedDoubleDisplayValue(vtkViewport) -> (float, float)\nC++: double *GetComputedDoubleDisplayValue(vtkViewport *)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCoordinate_StaticNew()
{
  return vtkCoordinate::New();
}

PyObject *PyVTKClass_vtkCoordinateNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCoordinate_StaticNew,
    PyvtkCoordinate_Methods,
    "vtkCoordinate", modulename,
    NULL, NULL,
    PyvtkCoordinate_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCoordinate_Doc()
{
  static const char *docstring[] = {
    "vtkCoordinate - perform coordinate transformation, and represent\nposition, in a variety of vtk coordinate systems\n\n",
    "Superclass: vtkObject\n\n",
    "vtkCoordinate represents position in a variety of coordinate systems,\nand converts position to other coordinate systems. It also supports\nrelative positioning, so you can create a cascade of vtkCoordinate\nobjects (no loops please!) that refer to each other. The typical\nusage of this object is to set the coordinate system in which to\nrepresent a position (e.g.,\nSetCoordinateSystemToNormalizedDispla",
    "y()), set the value of the\ncoordinate (e.g., SetValue()), and then invoke the appropriate method\nto convert to another coordinate system (e.g.,\nGetComputedWorldValue()).\n\nThe coordinate systems in vtk are as follows: <PRE>\n DISPLAY -             x-y pixel values in window\n NORMALIZED DISPLAY -  x-y (0,1) normalized values\n VIEWPORT -            x-y pixel values in viewport\n NORMALIZED VIEWPORT - x",
    "-y (0,1) normalized value in viewport\n VIEW -                x-y-z (-1,1) values in camera coordinates. (z\nis depth)\n WORLD -               x-y-z global coordinate values\n USERDEFINED -         x-y-z in User defined space </PRE>\n\nIf you cascade vtkCoordinate objects, you refer to another\nvtkCoordinate object which in turn can refer to others, and so on.\nThis allows you to create composite groups o",
    "f things like vtkActor2D\nthat are positioned relative to one another. Note that in cascaded\nsequences, each vtkCoordinate object may be specified in different\ncoordinate systems!\n\nSee Also:\n\nvtkActor2D vtkScalarBarActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCoordinate(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCoordinateNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCoordinate", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DISPLAY", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_NORMALIZED_DISPLAY", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VIEWPORT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_NORMALIZED_VIEWPORT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_VIEW", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_WORLD", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_USERDEFINED", o) != 0)
    {
    Py_DECREF(o);
    }

}

