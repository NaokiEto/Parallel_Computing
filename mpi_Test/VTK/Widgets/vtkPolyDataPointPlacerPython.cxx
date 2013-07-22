// python wrapper for vtkPolyDataPointPlacer
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
#include "vtkPolyDataPointPlacer.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataPointPlacer(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataPointPlacer(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataPointPlacerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataPointPlacerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPointPlacerNew
extern "C" { PyObject *PyVTKClass_vtkPointPlacerNew(const char *); }
#define DECLARED_PyVTKClass_vtkPointPlacerNew
#endif

static const char **PyvtkPolyDataPointPlacer_Doc();


static PyObject *
PyvtkPolyDataPointPlacer_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

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
      tempr = op->vtkPolyDataPointPlacer::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

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
      tempr = op->vtkPolyDataPointPlacer::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

  vtkPolyDataPointPlacer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataPointPlacer::NewInstance();
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
PyvtkPolyDataPointPlacer_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyDataPointPlacer *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyDataPointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointPlacer_AddProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->AddProp(temp0);
      }
    else
      {
      op->vtkPolyDataPointPlacer::AddProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointPlacer_RemoveViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

  vtkProp *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      op->RemoveViewProp(temp0);
      }
    else
      {
      op->vtkPolyDataPointPlacer::RemoveViewProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointPlacer_RemoveAllProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllProps();
      }
    else
      {
      op->vtkPolyDataPointPlacer::RemoveAllProps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointPlacer_HasProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

  vtkProp *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
    {
    if (ap.IsBound())
      {
      tempr = op->HasProp(temp0);
      }
    else
      {
      tempr = op->vtkPolyDataPointPlacer::HasProp(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointPlacer_GetNumberOfProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfProps();
      }
    else
      {
      tempr = op->vtkPolyDataPointPlacer::GetNumberOfProps();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataPointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

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
      tempr = op->vtkPolyDataPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3);
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
PyvtkPolyDataPointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

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
      tempr = op->vtkPolyDataPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4);
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
PyvtkPolyDataPointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPolyDataPointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkPolyDataPointPlacer_ComputeWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return NULL;
}



static PyObject *
PyvtkPolyDataPointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

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
      tempr = op->vtkPolyDataPointPlacer::ValidateWorldPosition(temp0);
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
PyvtkPolyDataPointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

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
      tempr = op->vtkPolyDataPointPlacer::ValidateWorldPosition(temp0, temp1);
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
PyvtkPolyDataPointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPolyDataPointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkPolyDataPointPlacer_ValidateWorldPosition_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return NULL;
}



static PyObject *
PyvtkPolyDataPointPlacer_ValidateDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

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
      tempr = op->vtkPolyDataPointPlacer::ValidateDisplayPosition(temp0, temp1);
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
PyvtkPolyDataPointPlacer_GetPropPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPropPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataPointPlacer *op = static_cast<vtkPolyDataPointPlacer *>(vp);

  vtkPropPicker *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPropPicker();
      }
    else
      {
      tempr = op->vtkPolyDataPointPlacer::GetPropPicker();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolyDataPointPlacer_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataPointPlacer_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\nStandard methods for instances of this class.\n"},
  {(char*)"IsA", PyvtkPolyDataPointPlacer_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\nStandard methods for instances of this class.\n"},
  {(char*)"NewInstance", PyvtkPolyDataPointPlacer_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataPointPlacer\nC++: vtkPolyDataPointPlacer *NewInstance()\n\nStandard methods for instances of this class.\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataPointPlacer_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataPointPlacer\nC++: vtkPolyDataPointPlacer *SafeDownCast(vtkObject* o)\n\nStandard methods for instances of this class.\n"},
  {(char*)"AddProp", PyvtkPolyDataPointPlacer_AddProp, 1,
   (char*)"V.AddProp(vtkProp)\nC++: virtual void AddProp(vtkProp *)\n\n"},
  {(char*)"RemoveViewProp", PyvtkPolyDataPointPlacer_RemoveViewProp, 1,
   (char*)"V.RemoveViewProp(vtkProp)\nC++: virtual void RemoveViewProp(vtkProp *prop)\n\n"},
  {(char*)"RemoveAllProps", PyvtkPolyDataPointPlacer_RemoveAllProps, 1,
   (char*)"V.RemoveAllProps()\nC++: virtual void RemoveAllProps()\n\n"},
  {(char*)"HasProp", PyvtkPolyDataPointPlacer_HasProp, 1,
   (char*)"V.HasProp(vtkProp) -> int\nC++: int HasProp(vtkProp *)\n\n"},
  {(char*)"GetNumberOfProps", PyvtkPolyDataPointPlacer_GetNumberOfProps, 1,
   (char*)"V.GetNumberOfProps() -> int\nC++: int GetNumberOfProps()\n\n"},
  {(char*)"ComputeWorldPosition", PyvtkPolyDataPointPlacer_ComputeWorldPosition, 1,
   (char*)"V.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9])\nV.ComputeWorldPosition(vtkRenderer, [float, float], [float, float,\n     float], [float, float, float], [float, float, float, float,\n    float, float, float, float, float]) -> int\nC++: virtual int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9])\n\nGiven a renderer and a display position in pixel coordinates,\ncompute the world position and orientation where this point will\nbe placed. This method is typically used by the representation to\nplace the point initially. For the Terrain point placer this\ncomputes world points that lie at the specified height above the\nterrain.\n"},
  {(char*)"ValidateWorldPosition", PyvtkPolyDataPointPlacer_ValidateWorldPosition, 1,
   (char*)"V.ValidateWorldPosition([float, float, float]) -> int\nC++: virtual int ValidateWorldPosition(double worldPos[3])\nV.ValidateWorldPosition([float, float, float], [float, float,\n    float, float, float, float, float, float, float]) -> int\nC++: virtual int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9])\n\nGiven a world position check the validity of this position\naccording to the constraints of the placer\n"},
  {(char*)"ValidateDisplayPosition", PyvtkPolyDataPointPlacer_ValidateDisplayPosition, 1,
   (char*)"V.ValidateDisplayPosition(vtkRenderer, [float, float]) -> int\nC++: virtual int ValidateDisplayPosition(vtkRenderer *,\n    double displayPos[2])\n\nGiven a display position, check the validity of this position.\n"},
  {(char*)"GetPropPicker", PyvtkPolyDataPointPlacer_GetPropPicker, 1,
   (char*)"V.GetPropPicker() -> vtkPropPicker\nC++: vtkPropPicker *GetPropPicker()\n\nGet the Prop picker.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataPointPlacer_StaticNew()
{
  return vtkPolyDataPointPlacer::New();
}

PyObject *PyVTKClass_vtkPolyDataPointPlacerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataPointPlacer_StaticNew,
    PyvtkPolyDataPointPlacer_Methods,
    "vtkPolyDataPointPlacer", modulename,
    NULL, NULL,
    PyvtkPolyDataPointPlacer_Doc(),
    PyVTKClass_vtkPointPlacerNew(modulename));
  return cls;
}

const char **PyvtkPolyDataPointPlacer_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataPointPlacer - Base class to place points given constraints\non polygonal data\n\n",
    "Superclass: vtkPointPlacer\n\n",
    "vtkPolyDataPointPlacer is a base class to place points on the surface\nof polygonal data.\n\nUsage:\n\nThe actors that render polygonal data and wish to be considered for\nplacement by this placer are added to the list asplacer->AddProp(\npolyDataActor );\n\nSee Also:\n\nvtkPolygonalSurfacePointPlacer\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataPointPlacer(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataPointPlacerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataPointPlacer", o) != 0)
    {
    Py_DECREF(o);
    }

}

