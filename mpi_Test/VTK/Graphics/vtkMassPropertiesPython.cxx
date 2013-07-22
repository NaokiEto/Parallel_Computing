// python wrapper for vtkMassProperties
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
#include "vtkMassProperties.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMassProperties(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMassProperties(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMassPropertiesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMassPropertiesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkMassProperties_Doc();


static PyObject *
PyvtkMassProperties_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

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
      tempr = op->vtkMassProperties::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

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
      tempr = op->vtkMassProperties::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  vtkMassProperties *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMassProperties::NewInstance();
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
PyvtkMassProperties_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMassProperties *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMassProperties::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolume();
      }
    else
      {
      tempr = op->vtkMassProperties::GetVolume();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeProjected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeProjected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeProjected();
      }
    else
      {
      tempr = op->vtkMassProperties::GetVolumeProjected();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeX();
      }
    else
      {
      tempr = op->vtkMassProperties::GetVolumeX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeY();
      }
    else
      {
      tempr = op->vtkMassProperties::GetVolumeY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetVolumeZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetVolumeZ();
      }
    else
      {
      tempr = op->vtkMassProperties::GetVolumeZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetKx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKx();
      }
    else
      {
      tempr = op->vtkMassProperties::GetKx();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetKy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKy();
      }
    else
      {
      tempr = op->vtkMassProperties::GetKy();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetKz(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKz");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetKz();
      }
    else
      {
      tempr = op->vtkMassProperties::GetKz();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetSurfaceArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSurfaceArea();
      }
    else
      {
      tempr = op->vtkMassProperties::GetSurfaceArea();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetMinCellArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinCellArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMinCellArea();
      }
    else
      {
      tempr = op->vtkMassProperties::GetMinCellArea();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetMaxCellArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMaxCellArea();
      }
    else
      {
      tempr = op->vtkMassProperties::GetMaxCellArea();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMassProperties_GetNormalizedShapeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizedShapeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMassProperties *op = static_cast<vtkMassProperties *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormalizedShapeIndex();
      }
    else
      {
      tempr = op->vtkMassProperties::GetNormalizedShapeIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMassProperties_Methods[] = {
  {(char*)"GetClassName", PyvtkMassProperties_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMassProperties_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMassProperties_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMassProperties\nC++: vtkMassProperties *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMassProperties_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMassProperties\nC++: vtkMassProperties *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetVolume", PyvtkMassProperties_GetVolume, 1,
   (char*)"V.GetVolume() -> float\nC++: double GetVolume()\n\nCompute and return the volume.\n"},
  {(char*)"GetVolumeProjected", PyvtkMassProperties_GetVolumeProjected, 1,
   (char*)"V.GetVolumeProjected() -> float\nC++: double GetVolumeProjected()\n\nCompute and return the projected volume. Typically you should\ncompare this volume to the value returned by GetVolume if you get\nan error (GetVolume()-GetVolumeProjected())*10000 that is greater\nthan GetVolume() this should identify a problem:\n* Either the polydata is not closed\n* Or the polydata contains triangle that are flipped\n"},
  {(char*)"GetVolumeX", PyvtkMassProperties_GetVolumeX, 1,
   (char*)"V.GetVolumeX() -> float\nC++: double GetVolumeX()\n\nCompute and return the volume projected on to each axis aligned\nplane.\n"},
  {(char*)"GetVolumeY", PyvtkMassProperties_GetVolumeY, 1,
   (char*)"V.GetVolumeY() -> float\nC++: double GetVolumeY()\n\nCompute and return the volume projected on to each axis aligned\nplane.\n"},
  {(char*)"GetVolumeZ", PyvtkMassProperties_GetVolumeZ, 1,
   (char*)"V.GetVolumeZ() -> float\nC++: double GetVolumeZ()\n\nCompute and return the volume projected on to each axis aligned\nplane.\n"},
  {(char*)"GetKx", PyvtkMassProperties_GetKx, 1,
   (char*)"V.GetKx() -> float\nC++: double GetKx()\n\nCompute and return the weighting factors for the maximum unit\nnormal component (MUNC).\n"},
  {(char*)"GetKy", PyvtkMassProperties_GetKy, 1,
   (char*)"V.GetKy() -> float\nC++: double GetKy()\n\nCompute and return the weighting factors for the maximum unit\nnormal component (MUNC).\n"},
  {(char*)"GetKz", PyvtkMassProperties_GetKz, 1,
   (char*)"V.GetKz() -> float\nC++: double GetKz()\n\nCompute and return the weighting factors for the maximum unit\nnormal component (MUNC).\n"},
  {(char*)"GetSurfaceArea", PyvtkMassProperties_GetSurfaceArea, 1,
   (char*)"V.GetSurfaceArea() -> float\nC++: double GetSurfaceArea()\n\nCompute and return the area.\n"},
  {(char*)"GetMinCellArea", PyvtkMassProperties_GetMinCellArea, 1,
   (char*)"V.GetMinCellArea() -> float\nC++: double GetMinCellArea()\n\nCompute and return the min cell area.\n"},
  {(char*)"GetMaxCellArea", PyvtkMassProperties_GetMaxCellArea, 1,
   (char*)"V.GetMaxCellArea() -> float\nC++: double GetMaxCellArea()\n\nCompute and return the max cell area.\n"},
  {(char*)"GetNormalizedShapeIndex", PyvtkMassProperties_GetNormalizedShapeIndex, 1,
   (char*)"V.GetNormalizedShapeIndex() -> float\nC++: double GetNormalizedShapeIndex()\n\nCompute and return the normalized shape index. This characterizes\nthe deviation of the shape of an object from a sphere. A sphere's\nNSI is one. This number is always >= 1.0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMassProperties_StaticNew()
{
  return vtkMassProperties::New();
}

PyObject *PyVTKClass_vtkMassPropertiesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMassProperties_StaticNew,
    PyvtkMassProperties_Methods,
    "vtkMassProperties", modulename,
    NULL, NULL,
    PyvtkMassProperties_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMassProperties_Doc()
{
  static const char *docstring[] = {
    "vtkMassProperties - estimate volume, area, shape index of triangle\nmesh\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkMassProperties estimates the volume, the surface area, and the\nnormalized shape index of a triangle mesh.  The algorithm implemented\nhere is based on the discrete form of the divergence theorem.  The\ngeneral assumption here is that the model is of closed surface.  For\nmore details see the following reference (Alyassin A.M. et al,\n\"Evaluation of new algorithms for the interactive measurement of\n",
    "surface area and volume\", Med Phys 21(6) 1994.).\n\nCaveats:\n\nCurrently only triangles are processed. Use vtkTriangleFilter to\nconvert any strips or polygons to triangles.\n\nSee Also:\n\nvtkTriangleFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMassProperties(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMassPropertiesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMassProperties", o) != 0)
    {
    Py_DECREF(o);
    }

}

