// python wrapper for vtkROIStencilSource
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
#include "vtkROIStencilSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkROIStencilSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkROIStencilSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkROIStencilSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkROIStencilSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageStencilSourceNew
extern "C" { PyObject *PyVTKClass_vtkImageStencilSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageStencilSourceNew
#endif

static const char **PyvtkROIStencilSource_Doc();


static PyObject *
PyvtkROIStencilSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

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
      tempr = op->vtkROIStencilSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

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
      tempr = op->vtkROIStencilSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  vtkROIStencilSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkROIStencilSource::NewInstance();
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
PyvtkROIStencilSource_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkROIStencilSource *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkROIStencilSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShape();
      }
    else
      {
      tempr = op->vtkROIStencilSource::GetShape();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetShape(temp0);
      }
    else
      {
      op->vtkROIStencilSource::SetShape(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShapeMinValue();
      }
    else
      {
      tempr = op->vtkROIStencilSource::GetShapeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShapeMaxValue();
      }
    else
      {
      tempr = op->vtkROIStencilSource::GetShapeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShapeToBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToBox();
      }
    else
      {
      op->vtkROIStencilSource::SetShapeToBox();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShapeToEllipsoid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToEllipsoid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToEllipsoid();
      }
    else
      {
      op->vtkROIStencilSource::SetShapeToEllipsoid();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShapeToCylinderX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToCylinderX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToCylinderX();
      }
    else
      {
      op->vtkROIStencilSource::SetShapeToCylinderX();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShapeToCylinderY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToCylinderY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToCylinderY();
      }
    else
      {
      op->vtkROIStencilSource::SetShapeToCylinderY();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetShapeToCylinderZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToCylinderZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetShapeToCylinderZ();
      }
    else
      {
      op->vtkROIStencilSource::SetShapeToCylinderZ();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetShapeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetShapeAsString();
      }
    else
      {
      tempr = op->vtkROIStencilSource::GetShapeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  double *tempr;
  int sizer = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBounds();
      }
    else
      {
      tempr = op->vtkROIStencilSource::GetBounds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkROIStencilSource_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

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
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }
    else
      {
      op->vtkROIStencilSource::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkROIStencilSource_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkROIStencilSource *op = static_cast<vtkROIStencilSource *>(vp);

  double temp0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkROIStencilSource::SetBounds(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkROIStencilSource_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 6:
      return PyvtkROIStencilSource_SetBounds_s1(self, args);
    case 1:
      return PyvtkROIStencilSource_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}


static PyMethodDef PyvtkROIStencilSource_Methods[] = {
  {(char*)"GetClassName", PyvtkROIStencilSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkROIStencilSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkROIStencilSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkROIStencilSource\nC++: vtkROIStencilSource *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkROIStencilSource_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkROIStencilSource\nC++: vtkROIStencilSource *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetShape", PyvtkROIStencilSource_GetShape, 1,
   (char*)"V.GetShape() -> int\nC++: int GetShape()\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {(char*)"SetShape", PyvtkROIStencilSource_SetShape, 1,
   (char*)"V.SetShape(int)\nC++: void SetShape(int)\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {(char*)"GetShapeMinValue", PyvtkROIStencilSource_GetShapeMinValue, 1,
   (char*)"V.GetShapeMinValue() -> int\nC++: int GetShapeMinValue()\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {(char*)"GetShapeMaxValue", PyvtkROIStencilSource_GetShapeMaxValue, 1,
   (char*)"V.GetShapeMaxValue() -> int\nC++: int GetShapeMaxValue()\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {(char*)"SetShapeToBox", PyvtkROIStencilSource_SetShapeToBox, 1,
   (char*)"V.SetShapeToBox()\nC++: void SetShapeToBox()\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {(char*)"SetShapeToEllipsoid", PyvtkROIStencilSource_SetShapeToEllipsoid, 1,
   (char*)"V.SetShapeToEllipsoid()\nC++: void SetShapeToEllipsoid()\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {(char*)"SetShapeToCylinderX", PyvtkROIStencilSource_SetShapeToCylinderX, 1,
   (char*)"V.SetShapeToCylinderX()\nC++: void SetShapeToCylinderX()\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {(char*)"SetShapeToCylinderY", PyvtkROIStencilSource_SetShapeToCylinderY, 1,
   (char*)"V.SetShapeToCylinderY()\nC++: void SetShapeToCylinderY()\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {(char*)"SetShapeToCylinderZ", PyvtkROIStencilSource_SetShapeToCylinderZ, 1,
   (char*)"V.SetShapeToCylinderZ()\nC++: void SetShapeToCylinderZ()\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {(char*)"GetShapeAsString", PyvtkROIStencilSource_GetShapeAsString, 1,
   (char*)"V.GetShapeAsString() -> string\nC++: virtual const char *GetShapeAsString()\n\nThe shape of the region of interest.  Cylinders can be oriented\nalong the X, Y, or Z axes.  The default shape is \"Box\".\n"},
  {(char*)"GetBounds", PyvtkROIStencilSource_GetBounds, 1,
   (char*)"V.GetBounds() -> (float, float, float, float, float, float)\nC++: double *GetBounds()\n\n"},
  {(char*)"SetBounds", PyvtkROIStencilSource_SetBounds, 1,
   (char*)"V.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double, double, double, double, double,\n    double)\nV.SetBounds((float, float, float, float, float, float))\nC++: void SetBounds(double a[6])\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkROIStencilSource_StaticNew()
{
  return vtkROIStencilSource::New();
}

PyObject *PyVTKClass_vtkROIStencilSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkROIStencilSource_StaticNew,
    PyvtkROIStencilSource_Methods,
    "vtkROIStencilSource", modulename,
    NULL, NULL,
    PyvtkROIStencilSource_Doc(),
    PyVTKClass_vtkImageStencilSourceNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"BOX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"ELLIPSOID", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"CYLINDERX", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"CYLINDERY", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"CYLINDERZ", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkROIStencilSource_Doc()
{
  static const char *docstring[] = {
    "vtkROIStencilSource - create simple mask shapes\n\n",
    "Superclass: vtkImageStencilSource\n\n",
    "vtkROIStencilSource will create an image stencil with a simple shape\nlike a box, a sphere, or a cylinder.  Its output can be used with\nvtkImageStecil or other vtk classes that apply a stencil to an image.\n\nSee Also:\n\nvtkImplicitFunctionToImageStencil vtkLassoStencilSource\n\nThanks:\n\nThanks to David Gobbi for contributing this class to VTK.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkROIStencilSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkROIStencilSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkROIStencilSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

