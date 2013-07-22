// python wrapper for vtkCylinderSource
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
#include "vtkCylinderSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCylinderSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCylinderSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCylinderSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCylinderSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCylinderSource_Doc();


static PyObject *
PyvtkCylinderSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

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
      tempr = op->vtkCylinderSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

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
      tempr = op->vtkCylinderSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  vtkCylinderSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCylinderSource::NewInstance();
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
PyvtkCylinderSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCylinderSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCylinderSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetHeight(temp0);
      }
    else
      {
      op->vtkCylinderSource::SetHeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightMinValue();
      }
    else
      {
      tempr = op->vtkCylinderSource::GetHeightMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeightMaxValue();
      }
    else
      {
      tempr = op->vtkCylinderSource::GetHeightMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetHeight();
      }
    else
      {
      tempr = op->vtkCylinderSource::GetHeight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRadius(temp0);
      }
    else
      {
      op->vtkCylinderSource::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMinValue();
      }
    else
      {
      tempr = op->vtkCylinderSource::GetRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadiusMaxValue();
      }
    else
      {
      tempr = op->vtkCylinderSource::GetRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRadius();
      }
    else
      {
      tempr = op->vtkCylinderSource::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
      }
    else
      {
      op->vtkCylinderSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCylinderSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double temp0[3];
  const int size0 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetCenter(temp0);
      }
    else
      {
      op->vtkCylinderSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkCylinderSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkCylinderSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkCylinderSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkCylinderSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  double *tempr;
  int sizer = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCenter();
      }
    else
      {
      tempr = op->vtkCylinderSource::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

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
      op->vtkCylinderSource::SetResolution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

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
      tempr = op->vtkCylinderSource::GetResolutionMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

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
      tempr = op->vtkCylinderSource::GetResolutionMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

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
      tempr = op->vtkCylinderSource::GetResolution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

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
      op->vtkCylinderSource::SetCapping(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

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
      tempr = op->vtkCylinderSource::GetCapping();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOn();
      }
    else
      {
      op->vtkCylinderSource::CappingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCylinderSource_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCylinderSource *op = static_cast<vtkCylinderSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->CappingOff();
      }
    else
      {
      op->vtkCylinderSource::CappingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCylinderSource_Methods[] = {
  {(char*)"GetClassName", PyvtkCylinderSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCylinderSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCylinderSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCylinderSource\nC++: vtkCylinderSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCylinderSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCylinderSource\nC++: vtkCylinderSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetHeight", PyvtkCylinderSource_SetHeight, 1,
   (char*)"V.SetHeight(float)\nC++: void SetHeight(double)\n\nSet the height of the cylinder. Initial value is 1.\n"},
  {(char*)"GetHeightMinValue", PyvtkCylinderSource_GetHeightMinValue, 1,
   (char*)"V.GetHeightMinValue() -> float\nC++: double GetHeightMinValue()\n\nSet the height of the cylinder. Initial value is 1.\n"},
  {(char*)"GetHeightMaxValue", PyvtkCylinderSource_GetHeightMaxValue, 1,
   (char*)"V.GetHeightMaxValue() -> float\nC++: double GetHeightMaxValue()\n\nSet the height of the cylinder. Initial value is 1.\n"},
  {(char*)"GetHeight", PyvtkCylinderSource_GetHeight, 1,
   (char*)"V.GetHeight() -> float\nC++: double GetHeight()\n\nSet the height of the cylinder. Initial value is 1.\n"},
  {(char*)"SetRadius", PyvtkCylinderSource_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet the radius of the cylinder. Initial value is 0.5\n"},
  {(char*)"GetRadiusMinValue", PyvtkCylinderSource_GetRadiusMinValue, 1,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet the radius of the cylinder. Initial value is 0.5\n"},
  {(char*)"GetRadiusMaxValue", PyvtkCylinderSource_GetRadiusMaxValue, 1,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet the radius of the cylinder. Initial value is 0.5\n"},
  {(char*)"GetRadius", PyvtkCylinderSource_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet the radius of the cylinder. Initial value is 0.5\n"},
  {(char*)"SetCenter", PyvtkCylinderSource_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkCylinderSource_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet/Get cylinder center. Initial value is (0.0,0.0,0.0)\n"},
  {(char*)"SetResolution", PyvtkCylinderSource_SetResolution, 1,
   (char*)"V.SetResolution(int)\nC++: void SetResolution(int)\n\nSet the number of facets used to define cylinder. Initial value\nis 6.\n"},
  {(char*)"GetResolutionMinValue", PyvtkCylinderSource_GetResolutionMinValue, 1,
   (char*)"V.GetResolutionMinValue() -> int\nC++: int GetResolutionMinValue()\n\nSet the number of facets used to define cylinder. Initial value\nis 6.\n"},
  {(char*)"GetResolutionMaxValue", PyvtkCylinderSource_GetResolutionMaxValue, 1,
   (char*)"V.GetResolutionMaxValue() -> int\nC++: int GetResolutionMaxValue()\n\nSet the number of facets used to define cylinder. Initial value\nis 6.\n"},
  {(char*)"GetResolution", PyvtkCylinderSource_GetResolution, 1,
   (char*)"V.GetResolution() -> int\nC++: int GetResolution()\n\nSet the number of facets used to define cylinder. Initial value\nis 6.\n"},
  {(char*)"SetCapping", PyvtkCylinderSource_SetCapping, 1,
   (char*)"V.SetCapping(int)\nC++: void SetCapping(int a)\n\nTurn on/off whether to cap cylinder with polygons. Initial value\nis true.\n"},
  {(char*)"GetCapping", PyvtkCylinderSource_GetCapping, 1,
   (char*)"V.GetCapping() -> int\nC++: int GetCapping()\n\nTurn on/off whether to cap cylinder with polygons. Initial value\nis true.\n"},
  {(char*)"CappingOn", PyvtkCylinderSource_CappingOn, 1,
   (char*)"V.CappingOn()\nC++: void CappingOn()\n\nTurn on/off whether to cap cylinder with polygons. Initial value\nis true.\n"},
  {(char*)"CappingOff", PyvtkCylinderSource_CappingOff, 1,
   (char*)"V.CappingOff()\nC++: void CappingOff()\n\nTurn on/off whether to cap cylinder with polygons. Initial value\nis true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCylinderSource_StaticNew()
{
  return vtkCylinderSource::New();
}

PyObject *PyVTKClass_vtkCylinderSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCylinderSource_StaticNew,
    PyvtkCylinderSource_Methods,
    "vtkCylinderSource", modulename,
    NULL, NULL,
    PyvtkCylinderSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCylinderSource_Doc()
{
  static const char *docstring[] = {
    "vtkCylinderSource - generate a cylinder centered at origin\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkCylinderSource creates a polygonal cylinder centered at Center;\nThe axis of the cylinder is aligned along the global y-axis. The\nheight and radius of the cylinder can be specified, as well as the\nnumber of sides. It is also possible to control whether the cylinder\nis open-ended or capped.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCylinderSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCylinderSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCylinderSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

