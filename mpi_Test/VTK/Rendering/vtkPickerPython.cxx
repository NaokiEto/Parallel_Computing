// python wrapper for vtkPicker
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
#include "vtkPicker.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPicker(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPicker(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPickerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPickerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractPropPickerNew
extern "C" { PyObject *PyVTKClass_vtkAbstractPropPickerNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractPropPickerNew
#endif

static const char **PyvtkPicker_Doc();


static PyObject *
PyvtkPicker_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

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
      tempr = op->vtkPicker::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

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
      tempr = op->vtkPicker::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  vtkPicker *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPicker::NewInstance();
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
PyvtkPicker_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPicker *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

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
      op->vtkPicker::SetTolerance(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

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
      tempr = op->vtkPicker::GetTolerance();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_GetMapperPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapperPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMapperPosition();
      }
    else
      {
      tempr = op->vtkPicker::GetMapperPosition();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  vtkAbstractMapper3D *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMapper();
      }
    else
      {
      tempr = op->vtkPicker::GetMapper();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_GetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  vtkDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDataSet();
      }
    else
      {
      tempr = op->vtkPicker::GetDataSet();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_GetProp3Ds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProp3Ds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  vtkProp3DCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProp3Ds();
      }
    else
      {
      tempr = op->vtkPicker::GetProp3Ds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  vtkActorCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetActors();
      }
    else
      {
      tempr = op->vtkPicker::GetActors();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_GetPickedPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPickedPositions();
      }
    else
      {
      tempr = op->vtkPicker::GetPickedPositions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkRenderer"))
    {
    if (ap.IsBound())
      {
      tempr = op->Pick(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkPicker::Pick(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPicker *op = static_cast<vtkPicker *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  vtkRenderer *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkRenderer"))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->Pick(temp0, temp1);
      }
    else
      {
      tempr = op->vtkPicker::Pick(temp0, temp1);
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
PyvtkPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 4:
      return PyvtkPicker_Pick_s1(self, args);
    case 2:
      return PyvtkPicker_Pick_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return NULL;
}


static PyMethodDef PyvtkPicker_Methods[] = {
  {(char*)"GetClassName", PyvtkPicker_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPicker_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPicker_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPicker\nC++: vtkPicker *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPicker_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPicker\nC++: vtkPicker *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetTolerance", PyvtkPicker_SetTolerance, 1,
   (char*)"V.SetTolerance(float)\nC++: void SetTolerance(double a)\n\nSpecify tolerance for performing pick operation. Tolerance is\nspecified as fraction of rendering window size. (Rendering window\nsize is measured across diagonal.)\n"},
  {(char*)"GetTolerance", PyvtkPicker_GetTolerance, 1,
   (char*)"V.GetTolerance() -> float\nC++: double GetTolerance()\n\nSpecify tolerance for performing pick operation. Tolerance is\nspecified as fraction of rendering window size. (Rendering window\nsize is measured across diagonal.)\n"},
  {(char*)"GetMapperPosition", PyvtkPicker_GetMapperPosition, 1,
   (char*)"V.GetMapperPosition() -> (float, float, float)\nC++: double *GetMapperPosition()\n\nReturn position in mapper (i.e., non-transformed) coordinates of\npick point.\n"},
  {(char*)"GetMapper", PyvtkPicker_GetMapper, 1,
   (char*)"V.GetMapper() -> vtkAbstractMapper3D\nC++: vtkAbstractMapper3D *GetMapper()\n\nReturn mapper that was picked (if any).\n"},
  {(char*)"GetDataSet", PyvtkPicker_GetDataSet, 1,
   (char*)"V.GetDataSet() -> vtkDataSet\nC++: vtkDataSet *GetDataSet()\n\nGet a pointer to the dataset that was picked (if any). If nothing\nwas picked then NULL is returned.\n"},
  {(char*)"GetProp3Ds", PyvtkPicker_GetProp3Ds, 1,
   (char*)"V.GetProp3Ds() -> vtkProp3DCollection\nC++: vtkProp3DCollection *GetProp3Ds()\n\nReturn a collection of all the prop 3D's that were intersected by\nthe pick ray. This collection is not sorted.\n"},
  {(char*)"GetActors", PyvtkPicker_GetActors, 1,
   (char*)"V.GetActors() -> vtkActorCollection\nC++: vtkActorCollection *GetActors()\n\nReturn a collection of all the actors that were intersected. This\ncollection is not sorted. (This is a convenience method to\nmaintain backward compatibility.)\n"},
  {(char*)"GetPickedPositions", PyvtkPicker_GetPickedPositions, 1,
   (char*)"V.GetPickedPositions() -> vtkPoints\nC++: vtkPoints *GetPickedPositions()\n\nReturn a list of the points the the actors returned by GetProp3Ds\nwere intersected at. The order of this list will match the order\nof GetProp3Ds.\n"},
  {(char*)"Pick", PyvtkPicker_Pick, 1,
   (char*)"V.Pick(float, float, float, vtkRenderer) -> int\nC++: virtual int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer)\nV.Pick([float, float, float], vtkRenderer) -> int\nC++: int Pick(double selectionPt[3], vtkRenderer *ren)\n\nPerform pick operation with selection point provided. Normally\nthe first two values for the selection point are x-y pixel\ncoordinate, and the third value is =0. Return non-zero if\nsomething was successfully picked.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPicker_StaticNew()
{
  return vtkPicker::New();
}

PyObject *PyVTKClass_vtkPickerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPicker_StaticNew,
    PyvtkPicker_Methods,
    "vtkPicker", modulename,
    NULL, NULL,
    PyvtkPicker_Doc(),
    PyVTKClass_vtkAbstractPropPickerNew(modulename));
  return cls;
}

const char **PyvtkPicker_Doc()
{
  static const char *docstring[] = {
    "vtkPicker - superclass for 3D geometric pickers (uses ray cast)\n\n",
    "Superclass: vtkAbstractPropPicker\n\n",
    "vtkPicker is used to select instances of vtkProp3D by shooting a ray\ninto a graphics window and intersecting with the actor's bounding\nbox. The ray is defined from a point defined in window (or pixel)\ncoordinates, and a point located from the camera's position.\n\nvtkPicker may return more than one vtkProp3D, since more than one\nbounding box may be intersected. vtkPicker returns an unsorted list\nof ",
    "props that were hit, and a list of the corresponding world points\nof the hits. For the vtkProp3D that is closest to the camera,\nvtkPicker returns the pick coordinates in world and untransformed\nmapper space, the prop itself, the data set, and the mapper.  For\nvtkPicker the closest prop is the one whose center point (i.e.,\ncenter of bounding box) projected on the view ray is closest to the\ncamera. ",
    " Subclasses of vtkPicker use other methods for computing the\npick point.\n\nSee Also:\n\nvtkPicker is used for quick geometric picking. If you desire more\nprecise picking of points or cells based on the geometry of any\nvtkProp3D, use the subclasses vtkPointPicker or vtkCellPicker.  For\nhardware-accelerated picking of any type of vtkProp, use\nvtkPropPicker or vtkWorldPointPicker.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPicker(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPickerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPicker", o) != 0)
    {
    Py_DECREF(o);
    }

}
