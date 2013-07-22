// python wrapper for vtkSelectEnclosedPoints
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
#include "vtkSelectEnclosedPoints.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSelectEnclosedPoints(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSelectEnclosedPoints(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSelectEnclosedPointsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSelectEnclosedPointsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataSetAlgorithmNew
#endif

static const char **PyvtkSelectEnclosedPoints_Doc();


static PyObject *
PyvtkSelectEnclosedPoints_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

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
      tempr = op->vtkSelectEnclosedPoints::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

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
      tempr = op->vtkSelectEnclosedPoints::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkSelectEnclosedPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::NewInstance();
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
PyvtkSelectEnclosedPoints_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSelectEnclosedPoints *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSelectEnclosedPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetSurface(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::SetSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetSurfaceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkAlgorithmOutput *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->SetSurfaceConnection(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::SetSurfaceConnection(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetSurface_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSurface();
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::GetSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelectEnclosedPoints_GetSurface_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkInformationVector *temp0 = NULL;
  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVector"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSurface(temp0);
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::GetSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelectEnclosedPoints_GetSurface(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSelectEnclosedPoints_GetSurface_s1(self, args);
    case 1:
      return PyvtkSelectEnclosedPoints_GetSurface_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetSurface");
  return NULL;
}



static PyObject *
PyvtkSelectEnclosedPoints_SetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInsideOut(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::SetInsideOut(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_InsideOutOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOn();
      }
    else
      {
      op->vtkSelectEnclosedPoints::InsideOutOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_InsideOutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideOutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->InsideOutOff();
      }
    else
      {
      op->vtkSelectEnclosedPoints::InsideOutOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInsideOut();
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::GetInsideOut();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetCheckSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCheckSurface(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::SetCheckSurface(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_CheckSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckSurfaceOn();
      }
    else
      {
      op->vtkSelectEnclosedPoints::CheckSurfaceOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_CheckSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CheckSurfaceOff();
      }
    else
      {
      op->vtkSelectEnclosedPoints::CheckSurfaceOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetCheckSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCheckSurface();
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::GetCheckSurface();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_IsInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkIdType temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsInside(temp0);
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::IsInside(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTolerance(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMinValue();
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::GetToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::GetToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTolerance();
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkSelectEnclosedPoints::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSelectEnclosedPoints_IsInsideSurface_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsideSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->IsInsideSurface(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::IsInsideSurface(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelectEnclosedPoints_IsInsideSurface_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsideSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->IsInsideSurface(temp0);
      }
    else
      {
      tempr = op->vtkSelectEnclosedPoints::IsInsideSurface(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelectEnclosedPoints_IsInsideSurface(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkSelectEnclosedPoints_IsInsideSurface_s1(self, args);
    case 1:
      return PyvtkSelectEnclosedPoints_IsInsideSurface_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "IsInsideSurface");
  return NULL;
}



static PyObject *
PyvtkSelectEnclosedPoints_Complete(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Complete");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectEnclosedPoints *op = static_cast<vtkSelectEnclosedPoints *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Complete();
      }
    else
      {
      op->vtkSelectEnclosedPoints::Complete();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSelectEnclosedPoints_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectEnclosedPoints_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectEnclosedPoints_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectEnclosedPoints_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSelectEnclosedPoints\nC++: vtkSelectEnclosedPoints *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectEnclosedPoints_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectEnclosedPoints\nC++: vtkSelectEnclosedPoints *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetSurface", PyvtkSelectEnclosedPoints_SetSurface, 1,
   (char*)"V.SetSurface(vtkPolyData)\nC++: void SetSurface(vtkPolyData *pd)\n\nSet the surface to be used to test for containment. Two methods\nare provided: one directly for vtkPolyData, and one for the\noutput of a filter.\n"},
  {(char*)"SetSurfaceConnection", PyvtkSelectEnclosedPoints_SetSurfaceConnection, 1,
   (char*)"V.SetSurfaceConnection(vtkAlgorithmOutput)\nC++: void SetSurfaceConnection(vtkAlgorithmOutput *algOutput)\n\nSet the surface to be used to test for containment. Two methods\nare provided: one directly for vtkPolyData, and one for the\noutput of a filter.\n"},
  {(char*)"GetSurface", PyvtkSelectEnclosedPoints_GetSurface, 1,
   (char*)"V.GetSurface() -> vtkPolyData\nC++: vtkPolyData *GetSurface()\nV.GetSurface(vtkInformationVector) -> vtkPolyData\nC++: vtkPolyData *GetSurface(vtkInformationVector *sourceInfo)\n\nReturn a pointer to the enclosing surface.\n"},
  {(char*)"SetInsideOut", PyvtkSelectEnclosedPoints_SetInsideOut, 1,
   (char*)"V.SetInsideOut(int)\nC++: void SetInsideOut(int a)\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {(char*)"InsideOutOn", PyvtkSelectEnclosedPoints_InsideOutOn, 1,
   (char*)"V.InsideOutOn()\nC++: void InsideOutOn()\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {(char*)"InsideOutOff", PyvtkSelectEnclosedPoints_InsideOutOff, 1,
   (char*)"V.InsideOutOff()\nC++: void InsideOutOff()\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {(char*)"GetInsideOut", PyvtkSelectEnclosedPoints_GetInsideOut, 1,
   (char*)"V.GetInsideOut() -> int\nC++: int GetInsideOut()\n\nBy default, points inside the surface are marked inside or sent\nto the output. If InsideOut is on, then the points outside the\nsurface are marked inside.\n"},
  {(char*)"SetCheckSurface", PyvtkSelectEnclosedPoints_SetCheckSurface, 1,
   (char*)"V.SetCheckSurface(int)\nC++: void SetCheckSurface(int a)\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {(char*)"CheckSurfaceOn", PyvtkSelectEnclosedPoints_CheckSurfaceOn, 1,
   (char*)"V.CheckSurfaceOn()\nC++: void CheckSurfaceOn()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {(char*)"CheckSurfaceOff", PyvtkSelectEnclosedPoints_CheckSurfaceOff, 1,
   (char*)"V.CheckSurfaceOff()\nC++: void CheckSurfaceOff()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {(char*)"GetCheckSurface", PyvtkSelectEnclosedPoints_GetCheckSurface, 1,
   (char*)"V.GetCheckSurface() -> int\nC++: int GetCheckSurface()\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {(char*)"IsInside", PyvtkSelectEnclosedPoints_IsInside, 1,
   (char*)"V.IsInside(int) -> int\nC++: int IsInside(vtkIdType inputPtId)\n\nQuery an input point id as to whether it is inside or outside.\nNote that the result requires that the filter execute first.\n"},
  {(char*)"SetTolerance", PyvtkSelectEnclosedPoints_SetTolerance, 1,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double)\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the bounding box of the enclosing\nsurface.\n"},
  {(char*)"GetToleranceMinValue", PyvtkSelectEnclosedPoints_GetToleranceMinValue, 1,
   (char*)"V.GetToleranceMinValue() -> float\nC++: double GetToleranceMinValue()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the bounding box of the enclosing\nsurface.\n"},
  {(char*)"GetToleranceMaxValue", PyvtkSelectEnclosedPoints_GetToleranceMaxValue, 1,
   (char*)"V.GetToleranceMaxValue() -> float\nC++: double GetToleranceMaxValue()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the bounding box of the enclosing\nsurface.\n"},
  {(char*)"GetTolerance", PyvtkSelectEnclosedPoints_GetTolerance, 1,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the bounding box of the enclosing\nsurface.\n"},
  {(char*)"Initialize", PyvtkSelectEnclosedPoints_Initialize, 1,
   (char*)"V.Initialize(vtkPolyData)\nC++: void Initialize(vtkPolyData *surface)\n\nThis is a backdoor that can be used to test many points for\ncontainment. First initialize the instance, then repeated calls\nto IsInsideSurface() can be used without rebuilding the search\nstructures. The complete method releases memory.\n"},
  {(char*)"IsInsideSurface", PyvtkSelectEnclosedPoints_IsInsideSurface, 1,
   (char*)"V.IsInsideSurface(float, float, float) -> int\nC++: int IsInsideSurface(double x, double y, double z)\nV.IsInsideSurface([float, float, float]) -> int\nC++: int IsInsideSurface(double x[3])\n\nThis is a backdoor that can be used to test many points for\ncontainment. First initialize the instance, then repeated calls\nto IsInsideSurface() can be used without rebuilding the search\nstructures. The complete method releases memory.\n"},
  {(char*)"Complete", PyvtkSelectEnclosedPoints_Complete, 1,
   (char*)"V.Complete()\nC++: void Complete()\n\nThis is a backdoor that can be used to test many points for\ncontainment. First initialize the instance, then repeated calls\nto IsInsideSurface() can be used without rebuilding the search\nstructures. The complete method releases memory.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectEnclosedPoints_StaticNew()
{
  return vtkSelectEnclosedPoints::New();
}

PyObject *PyVTKClass_vtkSelectEnclosedPointsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectEnclosedPoints_StaticNew,
    PyvtkSelectEnclosedPoints_Methods,
    "vtkSelectEnclosedPoints", modulename,
    NULL, NULL,
    PyvtkSelectEnclosedPoints_Doc(),
    PyVTKClass_vtkDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSelectEnclosedPoints_Doc()
{
  static const char *docstring[] = {
    "vtkSelectEnclosedPoints - mark points as to whether they are inside a\nclosed surface\n\n",
    "Superclass: vtkDataSetAlgorithm\n\n",
    "vtkSelectEnclosedPoints is a filter that evaluates all the input\npoints to determine whether they are in an enclosed surface. The\nfilter produces a (0,1) mask (in the form of a vtkDataArray) that\nindicates whether points are outside (mask value=0) or inside (mask\nvalue=1) a provided surface. (The name of the output vtkDataArray is\n\"SelectedPointsArray\".)\n\nAfter running the filter, it is possible t",
    "o query it as to whether a\npoint is inside/outside by invoking the IsInside(ptId) method.\n\nCaveats:\n\nThe filter assumes that the surface is closed and manifold. A boolean\nflag can be set to force the filter to first check whether this is\ntrue. If false, all points will be marked outside. Note that if this\ncheck is not performed and the surface is not closed, the results are\nundefined.\n\nThis filter",
    " produces and output data array, but does not modify the\ninput dataset. If you wish to extract cells or poinrs, various\nthreshold filters are available (i.e., threshold the output array).\n\nSee Also:\n\nvtkMaskPoints\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectEnclosedPoints(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectEnclosedPointsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectEnclosedPoints", o) != 0)
    {
    Py_DECREF(o);
    }

}

