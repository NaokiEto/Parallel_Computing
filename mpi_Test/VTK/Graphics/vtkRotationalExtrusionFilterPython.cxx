// python wrapper for vtkRotationalExtrusionFilter
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
#include "vtkRotationalExtrusionFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRotationalExtrusionFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRotationalExtrusionFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRotationalExtrusionFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRotationalExtrusionFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkRotationalExtrusionFilter_Doc();


static PyObject *
PyvtkRotationalExtrusionFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

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
      tempr = op->vtkRotationalExtrusionFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

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
      tempr = op->vtkRotationalExtrusionFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  vtkRotationalExtrusionFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRotationalExtrusionFilter::NewInstance();
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
PyvtkRotationalExtrusionFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkRotationalExtrusionFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkRotationalExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetResolution(temp0);
      }
    else
      {
      op->vtkRotationalExtrusionFilter::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolutionMinValue();
      }
    else
      {
      tempr = op->vtkRotationalExtrusionFilter::GetResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolutionMaxValue();
      }
    else
      {
      tempr = op->vtkRotationalExtrusionFilter::GetResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResolution();
      }
    else
      {
      tempr = op->vtkRotationalExtrusionFilter::GetResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCapping(temp0);
      }
    else
      {
      op->vtkRotationalExtrusionFilter::SetCapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCapping();
      }
    else
      {
      tempr = op->vtkRotationalExtrusionFilter::GetCapping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOn();
      }
    else
      {
      op->vtkRotationalExtrusionFilter::CappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOff();
      }
    else
      {
      op->vtkRotationalExtrusionFilter::CappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAngle(temp0);
      }
    else
      {
      op->vtkRotationalExtrusionFilter::SetAngle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAngle();
      }
    else
      {
      tempr = op->vtkRotationalExtrusionFilter::GetAngle();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetTranslation(temp0);
      }
    else
      {
      op->vtkRotationalExtrusionFilter::SetTranslation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTranslation();
      }
    else
      {
      tempr = op->vtkRotationalExtrusionFilter::GetTranslation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetDeltaRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDeltaRadius(temp0);
      }
    else
      {
      op->vtkRotationalExtrusionFilter::SetDeltaRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetDeltaRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDeltaRadius();
      }
    else
      {
      tempr = op->vtkRotationalExtrusionFilter::GetDeltaRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkRotationalExtrusionFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkRotationalExtrusionFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRotationalExtrusionFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRotationalExtrusionFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRotationalExtrusionFilter\nC++: vtkRotationalExtrusionFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkRotationalExtrusionFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkRotationalExtrusionFilter\nC++: vtkRotationalExtrusionFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetResolution", PyvtkRotationalExtrusionFilter_SetResolution, 1,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int)\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {(char*)"GetResolutionMinValue", PyvtkRotationalExtrusionFilter_GetResolutionMinValue, 1,
   (char*)"V.GetResolutionMinValue() -> int\nC++: int GetResolutionMinValue()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {(char*)"GetResolutionMaxValue", PyvtkRotationalExtrusionFilter_GetResolutionMaxValue, 1,
   (char*)"V.GetResolutionMaxValue() -> int\nC++: int GetResolutionMaxValue()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {(char*)"GetResolution", PyvtkRotationalExtrusionFilter_GetResolution, 1,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {(char*)"SetCapping", PyvtkRotationalExtrusionFilter_SetCapping, 1,
   (char*)"V.SetCapping(int)\nC++: void SetCapping(int a)\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"GetCapping", PyvtkRotationalExtrusionFilter_GetCapping, 1,
   (char*)"V.GetCapping() -> int\nC++: int GetCapping()\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"CappingOn", PyvtkRotationalExtrusionFilter_CappingOn, 1,
   (char*)"V.CappingOn()\nC++: void CappingOn()\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"CappingOff", PyvtkRotationalExtrusionFilter_CappingOff, 1,
   (char*)"V.CappingOff()\nC++: void CappingOff()\n\nTurn on/off the capping of the skirt.\n"},
  {(char*)"SetAngle", PyvtkRotationalExtrusionFilter_SetAngle, 1,
   (char*)"V.SetAngle(float)\nC++: void SetAngle(double a)\n\nSet/Get angle of rotation.\n"},
  {(char*)"GetAngle", PyvtkRotationalExtrusionFilter_GetAngle, 1,
   (char*)"V.GetAngle() -> float\nC++: double GetAngle()\n\nSet/Get angle of rotation.\n"},
  {(char*)"SetTranslation", PyvtkRotationalExtrusionFilter_SetTranslation, 1,
   (char*)"V.SetTranslation(float)\nC++: void SetTranslation(double a)\n\nSet/Get total amount of translation along the z-axis.\n"},
  {(char*)"GetTranslation", PyvtkRotationalExtrusionFilter_GetTranslation, 1,
   (char*)"V.GetTranslation() -> float\nC++: double GetTranslation()\n\nSet/Get total amount of translation along the z-axis.\n"},
  {(char*)"SetDeltaRadius", PyvtkRotationalExtrusionFilter_SetDeltaRadius, 1,
   (char*)"V.SetDeltaRadius(float)\nC++: void SetDeltaRadius(double a)\n\nSet/Get change in radius during sweep process.\n"},
  {(char*)"GetDeltaRadius", PyvtkRotationalExtrusionFilter_GetDeltaRadius, 1,
   (char*)"V.GetDeltaRadius() -> float\nC++: double GetDeltaRadius()\n\nSet/Get change in radius during sweep process.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkRotationalExtrusionFilter_StaticNew()
{
  return vtkRotationalExtrusionFilter::New();
}

PyObject *PyVTKClass_vtkRotationalExtrusionFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkRotationalExtrusionFilter_StaticNew,
    PyvtkRotationalExtrusionFilter_Methods,
    "vtkRotationalExtrusionFilter", modulename,
    NULL, NULL,
    PyvtkRotationalExtrusionFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkRotationalExtrusionFilter_Doc()
{
  static const char *docstring[] = {
    "vtkRotationalExtrusionFilter - sweep polygonal data creating \"skirt\"\nfrom free edges and lines, and lines from vertices\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkRotationalExtrusionFilter is a modeling filter. It takes polygonal\ndata as input and generates polygonal data on output. The input\ndataset is swept around the z-axis to create new polygonal\nprimitives. These primitives form a \"skirt\" or swept surface. For\nexample, sweeping a line results in a cylindrical shell, and sweeping\na circle creates a torus.\n\nThere are a number of control parameters for",
    " this filter. You can\ncontrol whether the sweep of a 2D object (i.e., polygon or triangle\nstrip) is capped with the generating geometry via the \"Capping\"\ninstance variable. Also, you can control the angle of rotation, and\nwhether translation along the z-axis is performed along with the\nrotation. (Translation is useful for creating \"springs\".) You also\ncan adjust the radius of the generating geomet",
    "ry using the\n\"DeltaRotation\" instance variable.\n\nThe skirt is generated by locating certain topological features. Free\nedges (edges of polygons or triangle strips only used by one polygon\nor triangle strips) generate surfaces. This is true also of lines or\npolylines. Vertices generate lines.\n\nThis filter can be used to model axisymmetric objects like cylinders,\nbottles, and wine glasses; or transl",
    "ational/rotational symmetric\nobjects like springs or corkscrews.\n\nCaveats:\n\nIf the object sweeps 360 degrees, radius does not vary, and the\nobject does not translate, capping is not performed. This is because\nthe cap is unnecessary.\n\nSome polygonal objects have no free edges (e.g., sphere). When swept,\nthis will result in two separate surfaces if capping is on, or no\nsurface if capping is off.\n\nSe",
    "e Also:\n\nvtkLinearExtrusionFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRotationalExtrusionFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRotationalExtrusionFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRotationalExtrusionFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

