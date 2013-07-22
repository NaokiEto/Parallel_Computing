// python wrapper for vtkPointSource
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
#include "vtkPointSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkPointSource_Doc();


static PyObject *
PyvtkPointSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      tempr = op->vtkPointSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      tempr = op->vtkPointSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  vtkPointSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointSource::NewInstance();
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
PyvtkPointSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPointSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPointSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfPoints(temp0);
      }
    else
      {
      op->vtkPointSource::SetNumberOfPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPointsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointsMinValue();
      }
    else
      {
      tempr = op->vtkPointSource::GetNumberOfPointsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPointsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPointsMaxValue();
      }
    else
      {
      tempr = op->vtkPointSource::GetNumberOfPointsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPoints();
      }
    else
      {
      tempr = op->vtkPointSource::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      op->vtkPointSource::SetCenter(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      op->vtkPointSource::SetCenter(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 3:
      return PyvtkPointSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkPointSource_SetCenter_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return NULL;
}



static PyObject *
PyvtkPointSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      tempr = op->vtkPointSource::GetCenter();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      op->vtkPointSource::SetRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadiusMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      tempr = op->vtkPointSource::GetRadiusMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadiusMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      tempr = op->vtkPointSource::GetRadiusMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

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
      tempr = op->vtkPointSource::GetRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistribution(temp0);
      }
    else
      {
      op->vtkPointSource::SetDistribution(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistributionToUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributionToUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDistributionToUniform();
      }
    else
      {
      op->vtkPointSource::SetDistributionToUniform();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_SetDistributionToShell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistributionToShell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetDistributionToShell();
      }
    else
      {
      op->vtkPointSource::SetDistributionToShell();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPointSource_GetDistribution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistribution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSource *op = static_cast<vtkPointSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistribution();
      }
    else
      {
      tempr = op->vtkPointSource::GetDistribution();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPointSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointSource\nC++: vtkPointSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointSource\nC++: vtkPointSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfPoints", PyvtkPointSource_SetNumberOfPoints, 1,
   (char*)"V.SetNumberOfPoints(int)\nC++: void SetNumberOfPoints(vtkIdType)\n\nSet the number of points to generate.\n"},
  {(char*)"GetNumberOfPointsMinValue", PyvtkPointSource_GetNumberOfPointsMinValue, 1,
   (char*)"V.GetNumberOfPointsMinValue() -> int\nC++: vtkIdType GetNumberOfPointsMinValue()\n\nSet the number of points to generate.\n"},
  {(char*)"GetNumberOfPointsMaxValue", PyvtkPointSource_GetNumberOfPointsMaxValue, 1,
   (char*)"V.GetNumberOfPointsMaxValue() -> int\nC++: vtkIdType GetNumberOfPointsMaxValue()\n\nSet the number of points to generate.\n"},
  {(char*)"GetNumberOfPoints", PyvtkPointSource_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: vtkIdType GetNumberOfPoints()\n\nSet the number of points to generate.\n"},
  {(char*)"SetCenter", PyvtkPointSource_SetCenter, 1,
   (char*)"V.SetCenter(float, float, float)\nC++: void SetCenter(double, double, double)\nV.SetCenter((float, float, float))\nC++: void SetCenter(double a[3])\n\n"},
  {(char*)"GetCenter", PyvtkPointSource_GetCenter, 1,
   (char*)"V.GetCenter() -> (float, float, float)\nC++: double *GetCenter()\n\nSet the center of the point cloud.\n"},
  {(char*)"SetRadius", PyvtkPointSource_SetRadius, 1,
   (char*)"V.SetRadius(float)\nC++: void SetRadius(double)\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {(char*)"GetRadiusMinValue", PyvtkPointSource_GetRadiusMinValue, 1,
   (char*)"V.GetRadiusMinValue() -> float\nC++: double GetRadiusMinValue()\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {(char*)"GetRadiusMaxValue", PyvtkPointSource_GetRadiusMaxValue, 1,
   (char*)"V.GetRadiusMaxValue() -> float\nC++: double GetRadiusMaxValue()\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {(char*)"GetRadius", PyvtkPointSource_GetRadius, 1,
   (char*)"V.GetRadius() -> float\nC++: double GetRadius()\n\nSet the radius of the point cloud.  If you are generating a\nGaussian distribution, then this is the standard deviation for\neach of x, y, and z.\n"},
  {(char*)"SetDistribution", PyvtkPointSource_SetDistribution, 1,
   (char*)"V.SetDistribution(int)\nC++: void SetDistribution(int a)\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {(char*)"SetDistributionToUniform", PyvtkPointSource_SetDistributionToUniform, 1,
   (char*)"V.SetDistributionToUniform()\nC++: void SetDistributionToUniform()\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {(char*)"SetDistributionToShell", PyvtkPointSource_SetDistributionToShell, 1,
   (char*)"V.SetDistributionToShell()\nC++: void SetDistributionToShell()\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {(char*)"GetDistribution", PyvtkPointSource_GetDistribution, 1,
   (char*)"V.GetDistribution() -> int\nC++: int GetDistribution()\n\nSpecify the distribution to use.  The default is a uniform\ndistribution.  The shell distribution produces random points on\nthe surface of the sphere, none in the interior.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointSource_StaticNew()
{
  return vtkPointSource::New();
}

PyObject *PyVTKClass_vtkPointSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointSource_StaticNew,
    PyvtkPointSource_Methods,
    "vtkPointSource", modulename,
    NULL, NULL,
    PyvtkPointSource_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPointSource_Doc()
{
  static const char *docstring[] = {
    "vtkPointSource - create a random cloud of points\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkPointSource is a source object that creates a user-specified\nnumber of points within a specified radius about a specified center\npoint. By default location of the points is random within the sphere.\nIt is also possible to generate random points only on the surface of\nthe sphere.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointSource", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_POINT_UNIFORM", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_POINT_SHELL", o) != 0)
    {
    Py_DECREF(o);
    }

}

