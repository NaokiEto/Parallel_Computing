// python wrapper for vtkBoundedPlanePointPlacer
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
#include "vtkBoundedPlanePointPlacer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBoundedPlanePointPlacer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBoundedPlanePointPlacer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBoundedPlanePointPlacerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBoundedPlanePointPlacerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointPlacerNew
extern "C" { PyObject *PyVTKClass_vtkPointPlacerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointPlacerNew
#endif

static const char **PyvtkBoundedPlanePointPlacer_Doc();


static PyObject *
PyvtkBoundedPlanePointPlacer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

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
      tempr = op->vtkBoundedPlanePointPlacer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

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
      tempr = op->vtkBoundedPlanePointPlacer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkBoundedPlanePointPlacer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBoundedPlanePointPlacer::NewInstance();
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
PyvtkBoundedPlanePointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBoundedPlanePointPlacer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBoundedPlanePointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormal(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormal(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionNormalMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionNormalMinValue();
      }
    else
      {
      tempr = op->vtkBoundedPlanePointPlacer::GetProjectionNormalMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionNormalMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormalMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionNormalMaxValue();
      }
    else
      {
      tempr = op->vtkBoundedPlanePointPlacer::GetProjectionNormalMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionNormal();
      }
    else
      {
      tempr = op->vtkBoundedPlanePointPlacer::GetProjectionNormal();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToXAxis();
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToXAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToYAxis();
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToYAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToZAxis();
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToZAxis();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionNormalToOblique(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionNormalToOblique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionNormalToOblique();
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionNormalToOblique();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetObliquePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetObliquePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->SetObliquePlane(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetObliquePlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetProjectionPosition(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetProjectionPosition(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_GetProjectionPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProjectionPosition();
      }
    else
      {
      tempr = op->vtkBoundedPlanePointPlacer::GetProjectionPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_AddBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->AddBoundingPlane(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::AddBoundingPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_RemoveBoundingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBoundingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlane *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->RemoveBoundingPlane(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::RemoveBoundingPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_RemoveAllBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllBoundingPlanes();
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::RemoveAllBoundingPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlaneCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlaneCollection"))
    {
    if (ap.IsBound())
      {
      op->SetBoundingPlanes(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetBoundingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlanes *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
    {
    if (ap.IsBound())
      {
      op->SetBoundingPlanes(temp0);
      }
    else
      {
      op->vtkBoundedPlanePointPlacer::SetBoundingPlanes(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_Methods[] = {
  {NULL, PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s1, 1,
   (char*)"@O *vtkPlaneCollection"},
  {NULL, PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_s2, 1,
   (char*)"@O *vtkPlanes"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkBoundedPlanePointPlacer_SetBoundingPlanes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkBoundedPlanePointPlacer_SetBoundingPlanes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBoundingPlanes");
  return NULL;
}



static PyObject *
PyvtkBoundedPlanePointPlacer_GetBoundingPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

  vtkPlaneCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBoundingPlanes();
      }
    else
      {
      tempr = op->vtkBoundedPlanePointPlacer::GetBoundingPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

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
      tempr = op->vtkBoundedPlanePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3);
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
PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

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
      tempr = op->vtkBoundedPlanePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4);
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
PyvtkBoundedPlanePointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkBoundedPlanePointPlacer_ComputeWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return NULL;
}



static PyObject *
PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

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
      tempr = op->vtkBoundedPlanePointPlacer::ValidateWorldPosition(temp0);
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
PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

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
      tempr = op->vtkBoundedPlanePointPlacer::ValidateWorldPosition(temp0, temp1);
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
PyvtkBoundedPlanePointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkBoundedPlanePointPlacer_ValidateWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return NULL;
}



static PyObject *
PyvtkBoundedPlanePointPlacer_UpdateWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoundedPlanePointPlacer *op = static_cast<vtkBoundedPlanePointPlacer *>(vp);

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
      tempr = op->vtkBoundedPlanePointPlacer::UpdateWorldPosition(temp0, temp1, temp2);
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

static PyMethodDef PyvtkBoundedPlanePointPlacer_Methods[] = {
  {(char*)"GetClassName", PyvtkBoundedPlanePointPlacer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkBoundedPlanePointPlacer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkBoundedPlanePointPlacer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBoundedPlanePointPlacer\nC++: vtkBoundedPlanePointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkBoundedPlanePointPlacer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBoundedPlanePointPlacer\nC++: vtkBoundedPlanePointPlacer *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"SetProjectionNormal", PyvtkBoundedPlanePointPlacer_SetProjectionNormal, 1,
   (char*)"V.SetProjectionNormal(int)\nC++: void SetProjectionNormal(int)\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"GetProjectionNormalMinValue", PyvtkBoundedPlanePointPlacer_GetProjectionNormalMinValue, 1,
   (char*)"V.GetProjectionNormalMinValue() -> int\nC++: int GetProjectionNormalMinValue()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"GetProjectionNormalMaxValue", PyvtkBoundedPlanePointPlacer_GetProjectionNormalMaxValue, 1,
   (char*)"V.GetProjectionNormalMaxValue() -> int\nC++: int GetProjectionNormalMaxValue()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"GetProjectionNormal", PyvtkBoundedPlanePointPlacer_GetProjectionNormal, 1,
   (char*)"V.GetProjectionNormal() -> int\nC++: int GetProjectionNormal()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"SetProjectionNormalToXAxis", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToXAxis, 1,
   (char*)"V.SetProjectionNormalToXAxis()\nC++: void SetProjectionNormalToXAxis()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"SetProjectionNormalToYAxis", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToYAxis, 1,
   (char*)"V.SetProjectionNormalToYAxis()\nC++: void SetProjectionNormalToYAxis()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"SetProjectionNormalToZAxis", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToZAxis, 1,
   (char*)"V.SetProjectionNormalToZAxis()\nC++: void SetProjectionNormalToZAxis()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"SetProjectionNormalToOblique", PyvtkBoundedPlanePointPlacer_SetProjectionNormalToOblique, 1,
   (char*)"V.SetProjectionNormalToOblique()\nC++: void SetProjectionNormalToOblique()\n\nSet the projection normal to lie along the x, y, or z axis, or to\nbe oblique. If it is oblique, then the plane is defined in the\nObliquePlane ivar.\n"},
  {(char*)"SetObliquePlane", PyvtkBoundedPlanePointPlacer_SetObliquePlane, 1,
   (char*)"V.SetObliquePlane(vtkPlane)\nC++: void SetObliquePlane(vtkPlane *)\n\nIf the ProjectionNormal is set to Oblique, then this is the\noblique plane used to constrain the handle position.\n"},
  {(char*)"SetProjectionPosition", PyvtkBoundedPlanePointPlacer_SetProjectionPosition, 1,
   (char*)"V.SetProjectionPosition(float)\nC++: void SetProjectionPosition(double position)\n\nThe position of the bounding plane from the origin along the\nnormal. The origin and normal are defined in the oblique plane\nwhen the ProjectionNormal is oblique. For the X, Y, and Z axes\nprojection normals, the normal is the axis direction, and the\norigin is (0,0,0).\n"},
  {(char*)"GetProjectionPosition", PyvtkBoundedPlanePointPlacer_GetProjectionPosition, 1,
   (char*)"V.GetProjectionPosition() -> float\nC++: double GetProjectionPosition()\n\nThe position of the bounding plane from the origin along the\nnormal. The origin and normal are defined in the oblique plane\nwhen the ProjectionNormal is oblique. For the X, Y, and Z axes\nprojection normals, the normal is the axis direction, and the\norigin is (0,0,0).\n"},
  {(char*)"AddBoundingPlane", PyvtkBoundedPlanePointPlacer_AddBoundingPlane, 1,
   (char*)"V.AddBoundingPlane(vtkPlane)\nC++: void AddBoundingPlane(vtkPlane *plane)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {(char*)"RemoveBoundingPlane", PyvtkBoundedPlanePointPlacer_RemoveBoundingPlane, 1,
   (char*)"V.RemoveBoundingPlane(vtkPlane)\nC++: void RemoveBoundingPlane(vtkPlane *plane)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {(char*)"RemoveAllBoundingPlanes", PyvtkBoundedPlanePointPlacer_RemoveAllBoundingPlanes, 1,
   (char*)"V.RemoveAllBoundingPlanes()\nC++: void RemoveAllBoundingPlanes()\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {(char*)"SetBoundingPlanes", PyvtkBoundedPlanePointPlacer_SetBoundingPlanes, 1,
   (char*)"V.SetBoundingPlanes(vtkPlaneCollection)\nC++: virtual void SetBoundingPlanes(vtkPlaneCollection *)\nV.SetBoundingPlanes(vtkPlanes)\nC++: void SetBoundingPlanes(vtkPlanes *planes)\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {(char*)"GetBoundingPlanes", PyvtkBoundedPlanePointPlacer_GetBoundingPlanes, 1,
   (char*)"V.GetBoundingPlanes() -> vtkPlaneCollection\nC++: vtkPlaneCollection *GetBoundingPlanes()\n\nA collection of plane equations used to bound the position of the\npoint. This is in addition to confining the point to a plane -\nthese constraints are meant to, for example, keep a point within\nthe extent of an image. Using a set of plane equations allows for\nmore complex bounds (such as bounding a point to an oblique\nreliced image that has hexagonal shape) than a simple extent.\n"},
  {(char*)"ComputeWorldPosition", PyvtkBoundedPlanePointPlacer_ComputeWorldPosition, 1,
   (char*)"V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9])\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9])\n\nGiven a renderer and a display position, compute the world\nposition and world orientation for this point. A plane is defined\nby a combination of the ProjectionNormal, ProjectionOrigin, and\nObliquePlane ivars. The display position is projected onto this\nplane to determine a world position, and the orientation is set\nto the normal of the plane. If the point cannot project onto the\nplane or if it falls outside the bounds imposed by the\nBoundingPlanes, then 0 is returned, otherwise 1 is returned to\nindicate a valid return position and orientation.\n"},
  {(char*)"ValidateWorldPosition", PyvtkBoundedPlanePointPlacer_ValidateWorldPosition, 1,
   (char*)"V.ValidateWorldPosition([float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3])\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nGive a world position check if it is valid - does it lie on the\nplane and within the bounds? Returns 1 if it is valid, 0\notherwise.\n"},
  {(char*)"UpdateWorldPosition", PyvtkBoundedPlanePointPlacer_UpdateWorldPosition, 1,
   (char*)"V.UpdateWorldPosition(vtkRenderer, [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: virtual int UpdateWorldPosition(vtkRenderer *ren,\n    double worldPos[3], double worldOrient[9])\n\nIf the constraints on this placer are changed, then this method\nwill be called by the representation on each of its points. For\nthis placer, the world position will be converted to a display\nposition, then ComputeWorldPosition will be used to update the\npoint.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBoundedPlanePointPlacer_StaticNew()
{
  return vtkBoundedPlanePointPlacer::New();
}

PyObject *PyVTKClass_vtkBoundedPlanePointPlacerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBoundedPlanePointPlacer_StaticNew,
    PyvtkBoundedPlanePointPlacer_Methods,
    "vtkBoundedPlanePointPlacer", modulename,
    NULL, NULL,
    PyvtkBoundedPlanePointPlacer_Doc(),
    PyVTKClass_vtkPointPlacerNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"XAxis", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"YAxis", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ZAxis", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"Oblique", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkBoundedPlanePointPlacer_Doc()
{
  static const char *docstring[] = {
    "vtkBoundedPlanePointPlacer - a placer that constrains a handle to a\nfinite plane\n\n",
    "Superclass: vtkPointPlacer\n\n",
    "vtkBoundedPlanePointPlacer is a type of point placer that constrains\nits points to a finite (i.e., bounded) plance.\n\nSee Also:\n\nvtkPointPlacer vtkHandleWidget vtkHandleRepresentation\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBoundedPlanePointPlacer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBoundedPlanePointPlacerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBoundedPlanePointPlacer", o) != 0)
    {
    Py_DECREF(o);
    }

}

