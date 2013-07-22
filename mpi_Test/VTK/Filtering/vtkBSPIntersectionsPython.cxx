// python wrapper for vtkBSPIntersections
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
#include "vtkBSPIntersections.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBSPIntersections(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBSPIntersections(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBSPIntersectionsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBSPIntersectionsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkBSPIntersections_Doc();


static PyObject *
PyvtkBSPIntersections_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

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
      tempr = op->vtkBSPIntersections::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

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
      tempr = op->vtkBSPIntersections::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  vtkBSPIntersections *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBSPIntersections::NewInstance();
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
PyvtkBSPIntersections_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBSPIntersections *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBSPIntersections::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_SetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  vtkBSPCuts *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBSPCuts"))
    {
    if (ap.IsBound())
      {
      op->SetCuts(temp0);
      }
    else
      {
      op->vtkBSPIntersections::SetCuts(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  vtkBSPCuts *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCuts();
      }
    else
      {
      tempr = op->vtkBSPIntersections::GetCuts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetNumberOfRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfRegions();
      }
    else
      {
      tempr = op->vtkBSPIntersections::GetNumberOfRegions();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetRegionBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetRegionBounds(temp0, temp1);
      }
    else
      {
      tempr = op->vtkBSPIntersections::GetRegionBounds(temp0, temp1);
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
PyvtkBSPIntersections_GetRegionDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double temp1[6];
  double save1[6];
  const int size1 = 6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      tempr = op->GetRegionDataBounds(temp0, temp1);
      }
    else
      {
      tempr = op->vtkBSPIntersections::GetRegionDataBounds(temp0, temp1);
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
PyvtkBSPIntersections_IntersectsBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
    {
    if (ap.IsBound())
      {
      tempr = op->IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }
    else
      {
      tempr = op->vtkBSPIntersections::IntersectsBox(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_IntersectsSphere2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsSphere2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
    {
    if (ap.IsBound())
      {
      tempr = op->IntersectsSphere2(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkBSPIntersections::IntersectsSphere2(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_IntersectsCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectsCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  vtkCell *temp1 = NULL;
  int temp2 = -1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
    {
    if (ap.IsBound())
      {
      tempr = op->IntersectsCell(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkBSPIntersections::IntersectsCell(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_GetComputeIntersectionsUsingDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeIntersectionsUsingDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetComputeIntersectionsUsingDataBounds();
      }
    else
      {
      tempr = op->vtkBSPIntersections::GetComputeIntersectionsUsingDataBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_SetComputeIntersectionsUsingDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeIntersectionsUsingDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetComputeIntersectionsUsingDataBounds(temp0);
      }
    else
      {
      op->vtkBSPIntersections::SetComputeIntersectionsUsingDataBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIntersectionsUsingDataBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeIntersectionsUsingDataBoundsOn();
      }
    else
      {
      op->vtkBSPIntersections::ComputeIntersectionsUsingDataBoundsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeIntersectionsUsingDataBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBSPIntersections *op = static_cast<vtkBSPIntersections *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ComputeIntersectionsUsingDataBoundsOff();
      }
    else
      {
      op->vtkBSPIntersections::ComputeIntersectionsUsingDataBoundsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBSPIntersections_Methods[] = {
  {(char*)"GetClassName", PyvtkBSPIntersections_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBSPIntersections_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBSPIntersections_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBSPIntersections\nC++: vtkBSPIntersections *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBSPIntersections_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBSPIntersections\nC++: vtkBSPIntersections *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCuts", PyvtkBSPIntersections_SetCuts, 1,
   (char*)"V.SetCuts(vtkBSPCuts)\nC++: void SetCuts(vtkBSPCuts *cuts)\n\nDefine the binary spatial partitioning.\n"},
  {(char*)"GetCuts", PyvtkBSPIntersections_GetCuts, 1,
   (char*)"V.GetCuts() -> vtkBSPCuts\nC++: vtkBSPCuts *GetCuts()\n\nDefine the binary spatial partitioning.\n"},
  {(char*)"GetNumberOfRegions", PyvtkBSPIntersections_GetNumberOfRegions, 1,
   (char*)"V.GetNumberOfRegions() -> int\nC++: int GetNumberOfRegions()\n\nThe number of regions in the binary spatial partitioning\n"},
  {(char*)"GetRegionBounds", PyvtkBSPIntersections_GetRegionBounds, 1,
   (char*)"V.GetRegionBounds(int, [float, float, float, float, float, float])\n     -> int\nC++: int GetRegionBounds(int regionID, double bounds[6])\n\nGet the spatial bounds of a particular region\n  Return 0 if OK, 1 on error.\n"},
  {(char*)"GetRegionDataBounds", PyvtkBSPIntersections_GetRegionDataBounds, 1,
   (char*)"V.GetRegionDataBounds(int, [float, float, float, float, float,\n    float]) -> int\nC++: int GetRegionDataBounds(int regionID, double bounds[6])\n\nGet the bounds of the data within the k-d tree region, possibly\n   smaller than the bounds of the region.\n  Return 0 if OK, 1 on error.\n"},
  {(char*)"IntersectsBox", PyvtkBSPIntersections_IntersectsBox, 1,
   (char*)"V.IntersectsBox(int, float, float, float, float, float, float)\n    -> int\nC++: int IntersectsBox(int regionId, double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\n\nDetermine whether a region of the spatial decomposition\n   intersects an axis aligned box.\n"},
  {(char*)"IntersectsSphere2", PyvtkBSPIntersections_IntersectsSphere2, 1,
   (char*)"V.IntersectsSphere2(int, float, float, float, float) -> int\nC++: int IntersectsSphere2(int regionId, double x, double y,\n    double z, double rSquared)\n\nDetermine whether a region of the spatial decomposition\n   intersects a sphere, given the center of the sphere\n   and the square of it's radius.\n"},
  {(char*)"IntersectsCell", PyvtkBSPIntersections_IntersectsCell, 1,
   (char*)"V.IntersectsCell(int, vtkCell, int) -> int\nC++: int IntersectsCell(int regionId, vtkCell *cell,\n    int cellRegion=-1)\n\nDetermine whether a region of the spatial decomposition\n   intersects the given cell.  If you already\n   know the region that the cell centroid lies in, provide\n   that as the last argument to make the computation quicker.\n"},
  {(char*)"GetComputeIntersectionsUsingDataBounds", PyvtkBSPIntersections_GetComputeIntersectionsUsingDataBounds, 1,
   (char*)"V.GetComputeIntersectionsUsingDataBounds() -> int\nC++: int GetComputeIntersectionsUsingDataBounds()\n\nWhen computing the intersection of k-d tree regions with other\n  objects, we use the spatial bounds of the region.  To use the\n  tighter bound of the bounding box of the data within the\nregion,\n  set this variable ON.  (Specifying data bounds in the\nvtkBSPCuts\n  object is optional.  If data bounds were not specified, this\n  option has no meaning.)\n"},
  {(char*)"SetComputeIntersectionsUsingDataBounds", PyvtkBSPIntersections_SetComputeIntersectionsUsingDataBounds, 1,
   (char*)"V.SetComputeIntersectionsUsingDataBounds(int)\nC++: void SetComputeIntersectionsUsingDataBounds(int c)\n\nWhen computing the intersection of k-d tree regions with other\n  objects, we use the spatial bounds of the region.  To use the\n  tighter bound of the bounding box of the data within the\nregion,\n  set this variable ON.  (Specifying data bounds in the\nvtkBSPCuts\n  object is optional.  If data bounds were not specified, this\n  option has no meaning.)\n"},
  {(char*)"ComputeIntersectionsUsingDataBoundsOn", PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOn, 1,
   (char*)"V.ComputeIntersectionsUsingDataBoundsOn()\nC++: void ComputeIntersectionsUsingDataBoundsOn()\n\nWhen computing the intersection of k-d tree regions with other\n  objects, we use the spatial bounds of the region.  To use the\n  tighter bound of the bounding box of the data within the\nregion,\n  set this variable ON.  (Specifying data bounds in the\nvtkBSPCuts\n  object is optional.  If data bounds were not specified, this\n  option has no meaning.)\n"},
  {(char*)"ComputeIntersectionsUsingDataBoundsOff", PyvtkBSPIntersections_ComputeIntersectionsUsingDataBoundsOff, 1,
   (char*)"V.ComputeIntersectionsUsingDataBoundsOff()\nC++: void ComputeIntersectionsUsingDataBoundsOff()\n\nWhen computing the intersection of k-d tree regions with other\n  objects, we use the spatial bounds of the region.  To use the\n  tighter bound of the bounding box of the data within the\nregion,\n  set this variable ON.  (Specifying data bounds in the\nvtkBSPCuts\n  object is optional.  If data bounds were not specified, this\n  option has no meaning.)\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBSPIntersections_StaticNew()
{
  return vtkBSPIntersections::New();
}

PyObject *PyVTKClass_vtkBSPIntersectionsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBSPIntersections_StaticNew,
    PyvtkBSPIntersections_Methods,
    "vtkBSPIntersections", modulename,
    NULL, NULL,
    PyvtkBSPIntersections_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkBSPIntersections_Doc()
{
  static const char *docstring[] = {
    "vtkBSPIntersections - Perform calculations (mostly intersection\n\n",
    "Superclass: vtkObject\n\n",
    "Given an axis aligned binary spatial partitioning described by a\n   vtkBSPCuts object, perform intersection queries on various\n   geometric entities with regions of the spatial partitioning.\n\nSee Also:\n\n\n   vtkBSPCuts  vtkKdTree\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBSPIntersections(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBSPIntersectionsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBSPIntersections", o) != 0)
    {
    Py_DECREF(o);
    }

}

