// python wrapper for vtkFocalPlanePointPlacer
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
#include "vtkFocalPlanePointPlacer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFocalPlanePointPlacer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFocalPlanePointPlacer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFocalPlanePointPlacerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFocalPlanePointPlacerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointPlacerNew
extern "C" { PyObject *PyVTKClass_vtkPointPlacerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointPlacerNew
#endif

static const char **PyvtkFocalPlanePointPlacer_Doc();


static PyObject *
PyvtkFocalPlanePointPlacer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

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
      tempr = op->vtkFocalPlanePointPlacer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlanePointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

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
      tempr = op->vtkFocalPlanePointPlacer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlanePointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

  vtkFocalPlanePointPlacer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFocalPlanePointPlacer::NewInstance();
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
PyvtkFocalPlanePointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFocalPlanePointPlacer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFocalPlanePointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlanePointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

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
      tempr = op->vtkFocalPlanePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3);
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
PyvtkFocalPlanePointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

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
      tempr = op->vtkFocalPlanePointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4);
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
PyvtkFocalPlanePointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkFocalPlanePointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkFocalPlanePointPlacer_ComputeWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return NULL;
}



static PyObject *
PyvtkFocalPlanePointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

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
      tempr = op->vtkFocalPlanePointPlacer::ValidateWorldPosition(temp0);
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
PyvtkFocalPlanePointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

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
      tempr = op->vtkFocalPlanePointPlacer::ValidateWorldPosition(temp0, temp1);
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
PyvtkFocalPlanePointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkFocalPlanePointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkFocalPlanePointPlacer_ValidateWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return NULL;
}



static PyObject *
PyvtkFocalPlanePointPlacer_SetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOffset(temp0);
      }
    else
      {
      op->vtkFocalPlanePointPlacer::SetOffset(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlanePointPlacer_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOffset();
      }
    else
      {
      tempr = op->vtkFocalPlanePointPlacer::GetOffset();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFocalPlanePointPlacer_SetPointBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
    {
    if (ap.IsBound())
      {
      op->SetPointBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkFocalPlanePointPlacer::SetPointBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFocalPlanePointPlacer_SetPointBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetPointBounds(temp0);
      }
    else
      {
      op->vtkFocalPlanePointPlacer::SetPointBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkFocalPlanePointPlacer_SetPointBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkFocalPlanePointPlacer_SetPointBounds_s1(self, args);
    case 1:
      return PyvtkFocalPlanePointPlacer_SetPointBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetPointBounds");
  return NULL;
}



static PyObject *
PyvtkFocalPlanePointPlacer_GetPointBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlanePointPlacer *op = static_cast<vtkFocalPlanePointPlacer *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPointBounds();
      }
    else
      {
      tempr = op->vtkFocalPlanePointPlacer::GetPointBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}

static PyMethodDef PyvtkFocalPlanePointPlacer_Methods[] = {
  {(char*)"GetClassName", PyvtkFocalPlanePointPlacer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkFocalPlanePointPlacer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkFocalPlanePointPlacer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFocalPlanePointPlacer\nC++: vtkFocalPlanePointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkFocalPlanePointPlacer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFocalPlanePointPlacer\nC++: vtkFocalPlanePointPlacer *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"ComputeWorldPosition", PyvtkFocalPlanePointPlacer_ComputeWorldPosition, 1,
   (char*)"V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9])\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9])\n\n"},
  {(char*)"ValidateWorldPosition", PyvtkFocalPlanePointPlacer_ValidateWorldPosition, 1,
   (char*)"V.ValidateWorldPosition([float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3])\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nValidate a world position. All world positions are valid so these\nmethods always return 1.\n"},
  {(char*)"SetOffset", PyvtkFocalPlanePointPlacer_SetOffset, 1,
   (char*)"V.SetOffset(float)\nC++: void SetOffset(double a)\n\nOptionally specify a signed offset from the focal plane for the\npoints to be placed at.  If negative, the constraint plane is\noffset closer to the camera. If positive, its further away from\nthe camera.\n"},
  {(char*)"GetOffset", PyvtkFocalPlanePointPlacer_GetOffset, 1,
   (char*)"V.GetOffset() -> float\nC++: double GetOffset()\n\nOptionally specify a signed offset from the focal plane for the\npoints to be placed at.  If negative, the constraint plane is\noffset closer to the camera. If positive, its further away from\nthe camera.\n"},
  {(char*)"SetPointBounds", PyvtkFocalPlanePointPlacer_SetPointBounds, 1,
   (char*)"V.SetPointBounds(float, float, float, float, float, float)\nC++: void SetPointBounds(double, double, double, double, double,\n    double)\nV.SetPointBounds((float, float, float, float, float, float))\nC++: void SetPointBounds(double a[6])\n\n"},
  {(char*)"GetPointBounds", PyvtkFocalPlanePointPlacer_GetPointBounds, 1,
   (char*)"V.GetPointBounds() -> (float, float, float, float, float, float)\nC++: double *GetPointBounds()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFocalPlanePointPlacer_StaticNew()
{
  return vtkFocalPlanePointPlacer::New();
}

PyObject *PyVTKClass_vtkFocalPlanePointPlacerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFocalPlanePointPlacer_StaticNew,
    PyvtkFocalPlanePointPlacer_Methods,
    "vtkFocalPlanePointPlacer", modulename,
    NULL, NULL,
    PyvtkFocalPlanePointPlacer_Doc(),
    PyVTKClass_vtkPointPlacerNew(modulename));
  return cls;
}

const char **PyvtkFocalPlanePointPlacer_Doc()
{
  static const char *docstring[] = {
    "\n\n",
    "Superclass: vtkPointPlacer\n\n",
    "See Also:\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFocalPlanePointPlacer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFocalPlanePointPlacerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFocalPlanePointPlacer", o) != 0)
    {
    Py_DECREF(o);
    }

}

