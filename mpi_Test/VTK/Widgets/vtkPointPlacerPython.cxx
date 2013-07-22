// python wrapper for vtkPointPlacer
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
#include "vtkPointPlacer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointPlacer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointPlacer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointPlacerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointPlacerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPointPlacer_Doc();


static PyObject *
PyvtkPointPlacer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

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
      tempr = op->vtkPointPlacer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

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
      tempr = op->vtkPointPlacer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  vtkPointPlacer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointPlacer::NewInstance();
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
PyvtkPointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPointPlacer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[9];
  double save3[9];
  const int size3 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);

    if (ap.IsBound())
      {
      tempr = op->ComputeWorldPosition(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  double temp2[3];
  double save2[3];
  const int size2 = 3;
  double temp3[3];
  double save3[3];
  const int size3 = 3;
  double temp4[9];
  double save4[9];
  const int size4 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);
    ap.SaveArray(temp3, save3, size3);
    ap.SaveArray(temp4, save4, size4);

    if (ap.IsBound())
      {
      tempr = op->ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (ap.ArrayHasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(3, temp3, size3);
      }

    if (ap.ArrayHasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(4, temp4, size4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkPointPlacer_ComputeWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return NULL;
}



static PyObject *
PyvtkPointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

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
      tempr = op->ValidateWorldPosition(temp0);
      }
    else
      {
      tempr = op->vtkPointPlacer::ValidateWorldPosition(temp0);
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
PyvtkPointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[9];
  double save1[9];
  const int size1 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->ValidateWorldPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPointPlacer::ValidateWorldPosition(temp0, temp1);
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
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkPointPlacer_ValidateWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return NULL;
}



static PyObject *
PyvtkPointPlacer_ValidateDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[2];
  double save1[2];
  const int size1 = 2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->ValidateDisplayPosition(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPointPlacer::ValidateDisplayPosition(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_UpdateWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  vtkRenderer *temp0 = NULL;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->UpdateWorldPosition(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkPointPlacer::UpdateWorldPosition(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_UpdateInternalState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateInternalState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->UpdateInternalState();
      }
    else
      {
      tempr = op->vtkPointPlacer::UpdateInternalState();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_SetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPixelTolerance(temp0);
      }
    else
      {
      op->vtkPointPlacer::SetPixelTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetPixelToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelToleranceMinValue();
      }
    else
      {
      tempr = op->vtkPointPlacer::GetPixelToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetPixelToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkPointPlacer::GetPixelToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetPixelTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPixelTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPixelTolerance();
      }
    else
      {
      tempr = op->vtkPointPlacer::GetPixelTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_SetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetWorldTolerance(temp0);
      }
    else
      {
      op->vtkPointPlacer::SetWorldTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetWorldToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWorldToleranceMinValue();
      }
    else
      {
      tempr = op->vtkPointPlacer::GetWorldToleranceMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetWorldToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWorldToleranceMaxValue();
      }
    else
      {
      tempr = op->vtkPointPlacer::GetWorldToleranceMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointPlacer_GetWorldTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPlacer *op = static_cast<vtkPointPlacer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetWorldTolerance();
      }
    else
      {
      tempr = op->vtkPointPlacer::GetWorldTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointPlacer_Methods[] = {
  {(char*)"GetClassName", PyvtkPointPlacer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkPointPlacer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkPointPlacer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointPlacer\nC++: vtkPointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkPointPlacer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointPlacer\nC++: vtkPointPlacer *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"ComputeWorldPosition", PyvtkPointPlacer_ComputeWorldPosition, 1,
   (char*)"V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9])\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9])\n\nGiven a renderer and a display position in pixel coordinates,\ncompute the world position and orientation where this point will\nbe placed. This method is typically used by the representation to\nplace the point initially. A return value of 1 indicates that\nconstraints of the placer are met.\n"},
  {(char*)"ValidateWorldPosition", PyvtkPointPlacer_ValidateWorldPosition, 1,
   (char*)"V.ValidateWorldPosition([float, float, float]) -> int\nC++: virtual int ValidateWorldPosition(double worldPos[3])\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: virtual int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nGiven a world position check the validity of this position\naccording to the constraints of the placer.\n"},
  {(char*)"ValidateDisplayPosition", PyvtkPointPlacer_ValidateDisplayPosition, 1,
   (char*)"V.ValidateDisplayPosition(vtkRenderer, [float, float]) -> int\nC++: virtual int ValidateDisplayPosition(vtkRenderer *,\n    double displayPos[2])\n\nGiven a display position, check the validity of this position.\n"},
  {(char*)"UpdateWorldPosition", PyvtkPointPlacer_UpdateWorldPosition, 1,
   (char*)"V.UpdateWorldPosition(vtkRenderer, [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: virtual int UpdateWorldPosition(vtkRenderer *ren,\n    double worldPos[3], double worldOrient[9])\n\nGiven a current renderer, world position and orientation, update\nthem according to the constraints of the placer. This method is\ntypically used when UpdateContour is called on the\nrepresentation, which must be called after changes are made to\nthe constraints in the placer. A return value of 1 indicates that\nthe point has been updated. A return value of 0 indicates that\nthe point could not be updated and was left alone. By default\nthis is a no-op - leaving the point as is.\n"},
  {(char*)"UpdateInternalState", PyvtkPointPlacer_UpdateInternalState, 1,
   (char*)"V.UpdateInternalState() -> int\nC++: virtual int UpdateInternalState()\n\nCalled by the representation to give the placer a chance to\nupdate itself.\n"},
  {(char*)"SetPixelTolerance", PyvtkPointPlacer_SetPixelTolerance, 1,
   (char*)"V.SetPixelTolerance(int)\nC++: void SetPixelTolerance(int)\n\nSet/get the tolerance used when performing computations in\ndisplay coordinates.\n"},
  {(char*)"GetPixelToleranceMinValue", PyvtkPointPlacer_GetPixelToleranceMinValue, 1,
   (char*)"V.GetPixelToleranceMinValue() -> int\nC++: int GetPixelToleranceMinValue()\n\nSet/get the tolerance used when performing computations in\ndisplay coordinates.\n"},
  {(char*)"GetPixelToleranceMaxValue", PyvtkPointPlacer_GetPixelToleranceMaxValue, 1,
   (char*)"V.GetPixelToleranceMaxValue() -> int\nC++: int GetPixelToleranceMaxValue()\n\nSet/get the tolerance used when performing computations in\ndisplay coordinates.\n"},
  {(char*)"GetPixelTolerance", PyvtkPointPlacer_GetPixelTolerance, 1,
   (char*)"V.GetPixelTolerance() -> int\nC++: int GetPixelTolerance()\n\nSet/get the tolerance used when performing computations in\ndisplay coordinates.\n"},
  {(char*)"SetWorldTolerance", PyvtkPointPlacer_SetWorldTolerance, 1,
   (char*)"V.SetWorldTolerance(float)\nC++: void SetWorldTolerance(double)\n\nSet/get the tolerance used when performing computations in world\ncoordinates.\n"},
  {(char*)"GetWorldToleranceMinValue", PyvtkPointPlacer_GetWorldToleranceMinValue, 1,
   (char*)"V.GetWorldToleranceMinValue() -> float\nC++: double GetWorldToleranceMinValue()\n\nSet/get the tolerance used when performing computations in world\ncoordinates.\n"},
  {(char*)"GetWorldToleranceMaxValue", PyvtkPointPlacer_GetWorldToleranceMaxValue, 1,
   (char*)"V.GetWorldToleranceMaxValue() -> float\nC++: double GetWorldToleranceMaxValue()\n\nSet/get the tolerance used when performing computations in world\ncoordinates.\n"},
  {(char*)"GetWorldTolerance", PyvtkPointPlacer_GetWorldTolerance, 1,
   (char*)"V.GetWorldTolerance() -> float\nC++: double GetWorldTolerance()\n\nSet/get the tolerance used when performing computations in world\ncoordinates.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointPlacer_StaticNew()
{
  return vtkPointPlacer::New();
}

PyObject *PyVTKClass_vtkPointPlacerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointPlacer_StaticNew,
    PyvtkPointPlacer_Methods,
    "vtkPointPlacer", modulename,
    NULL, NULL,
    PyvtkPointPlacer_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPointPlacer_Doc()
{
  static const char *docstring[] = {
    "vtkPointPlacer - Abstract interface to translate 2D display positions\nto world coordinates\n\n",
    "Superclass: vtkObject\n\n",
    "Most widgets in VTK have a need to translate of 2D display\ncoordinates (as reported by the RenderWindowInteractor) to 3D world\ncoordinates. This class is an abstraction of this functionality. A\nfew subclasses are listed below:\n\n1) vtkFocalPlanePointPlacer: This class converts 2D display positions\nto world positions such that they lie on the focal plane.\n\n2) vtkPolygonalSurfacePointPlacer: Converts",
    " 2D display positions to\nworld positions such that they lie on the surface of one or more\nspecified polydatas.\n\n3) vtkImageActorPointPlacer: Converts 2D display positions to world\npositions such that they lie on an ImageActor\n\n4) vtkBoundedPlanePointPlacer: Converts 2D display positions to world\npositions such that they lie within a set of specified bounding\nplanes.\n\n5) vtkTerrainDataPointPlacer: ",
    "Converts 2D display positions to world\npositions such that they lie on a height field.\n\nPoint placers provide an extensible framework to specify constraints\non points. The methods ComputeWorldPosition, ValidateDisplayPosition\nand ValidateWorldPosition may be overridden to dictate whether a\nworld or display position is allowed. These classes are currently\nused by the HandleWidget and the ContourWid",
    "get to allow various\nconstraints to be enforced on the placement of their handles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointPlacer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointPlacerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointPlacer", o) != 0)
    {
    Py_DECREF(o);
    }

}

