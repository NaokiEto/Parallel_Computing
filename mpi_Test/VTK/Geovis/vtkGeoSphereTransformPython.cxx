// python wrapper for vtkGeoSphereTransform
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
#include "vtkGeoSphereTransform.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGeoSphereTransform(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGeoSphereTransform(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGeoSphereTransformNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGeoSphereTransformNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAbstractTransformNew
extern "C" { PyObject *PyVTKClass_vtkAbstractTransformNew(const char *); }
#define DECLARED_PyVTKClass_vtkAbstractTransformNew
#endif

static const char **PyvtkGeoSphereTransform_Doc();


static PyObject *
PyvtkGeoSphereTransform_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

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
      tempr = op->vtkGeoSphereTransform::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

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
      tempr = op->vtkGeoSphereTransform::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  vtkGeoSphereTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGeoSphereTransform::NewInstance();
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
PyvtkGeoSphereTransform_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGeoSphereTransform *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGeoSphereTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Inverse();
      }
    else
      {
      op->vtkGeoSphereTransform::Inverse();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->InternalTransformPoint(temp0, temp1);
      }
    else
      {
      op->vtkGeoSphereTransform::InternalTransformPoint(temp0, temp1);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  double temp0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[3][3];
  double save2[3][3];
  static int size2[2] = { 3, 3 };
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
    {
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
      {
      op->InternalTransformDerivative(temp0, temp1, temp2);
      }
    else
      {
      op->vtkGeoSphereTransform::InternalTransformDerivative(temp0, temp1, temp2);
      }

    if (ap.ArrayHasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(1, temp1, size1);
      }

    if (ap.ArrayHasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
      {
      ap.SetNArray(2, *temp2, 2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_MakeTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  vtkAbstractTransform *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->MakeTransform();
      }
    else
      {
      tempr = op->vtkGeoSphereTransform::MakeTransform();
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
PyvtkGeoSphereTransform_SetToRectangular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetToRectangular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetToRectangular(temp0);
      }
    else
      {
      op->vtkGeoSphereTransform::SetToRectangular(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_GetToRectangular(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToRectangular");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetToRectangular();
      }
    else
      {
      tempr = op->vtkGeoSphereTransform::GetToRectangular();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_ToRectangularOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToRectangularOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToRectangularOn();
      }
    else
      {
      op->vtkGeoSphereTransform::ToRectangularOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_ToRectangularOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToRectangularOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ToRectangularOff();
      }
    else
      {
      op->vtkGeoSphereTransform::ToRectangularOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_SetBaseAltitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBaseAltitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBaseAltitude(temp0);
      }
    else
      {
      op->vtkGeoSphereTransform::SetBaseAltitude(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGeoSphereTransform_GetBaseAltitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBaseAltitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoSphereTransform *op = static_cast<vtkGeoSphereTransform *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetBaseAltitude();
      }
    else
      {
      tempr = op->vtkGeoSphereTransform::GetBaseAltitude();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGeoSphereTransform_Methods[] = {
  {(char*)"GetClassName", PyvtkGeoSphereTransform_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGeoSphereTransform_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGeoSphereTransform_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGeoSphereTransform\nC++: vtkGeoSphereTransform *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGeoSphereTransform_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGeoSphereTransform\nC++: vtkGeoSphereTransform *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Inverse", PyvtkGeoSphereTransform_Inverse, 1,
   (char*)"V.Inverse()\nC++: virtual void Inverse()\n\nInvert the transformation.\n"},
  {(char*)"InternalTransformPoint", PyvtkGeoSphereTransform_InternalTransformPoint, 1,
   (char*)"V.InternalTransformPoint((float, float, float), [float, float,\n    float])\nC++: virtual void InternalTransformPoint(const double in[3],\n    double out[3])\n\nThis will calculate the transformation without calling Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"InternalTransformDerivative", PyvtkGeoSphereTransform_InternalTransformDerivative, 1,
   (char*)"V.InternalTransformDerivative((float, float, float), [float,\n    float, float], [[float, float, float], [float, float, float],\n    [float, float, float]])\nC++: virtual void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3])\n\nThis will transform a point and, at the same time, calculate a\n3x3 Jacobian matrix that provides the partial derivatives of the\ntransformation at that point.  This method does not call Update.\nMeant for use only within other VTK classes.\n"},
  {(char*)"MakeTransform", PyvtkGeoSphereTransform_MakeTransform, 1,
   (char*)"V.MakeTransform() -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *MakeTransform()\n\nMake another transform of the same type.\n"},
  {(char*)"SetToRectangular", PyvtkGeoSphereTransform_SetToRectangular, 1,
   (char*)"V.SetToRectangular(bool)\nC++: void SetToRectangular(bool a)\n\nIf on, this transform converts (long,lat,alt) triples to (x,y,z)\nas an offset from the center of the earth. Alt, x, y, and z are\nall be in meters. If off, the tranform works in the reverse\ndirection. Initial value is on.\n"},
  {(char*)"GetToRectangular", PyvtkGeoSphereTransform_GetToRectangular, 1,
   (char*)"V.GetToRectangular() -> bool\nC++: bool GetToRectangular()\n\nIf on, this transform converts (long,lat,alt) triples to (x,y,z)\nas an offset from the center of the earth. Alt, x, y, and z are\nall be in meters. If off, the tranform works in the reverse\ndirection. Initial value is on.\n"},
  {(char*)"ToRectangularOn", PyvtkGeoSphereTransform_ToRectangularOn, 1,
   (char*)"V.ToRectangularOn()\nC++: void ToRectangularOn()\n\nIf on, this transform converts (long,lat,alt) triples to (x,y,z)\nas an offset from the center of the earth. Alt, x, y, and z are\nall be in meters. If off, the tranform works in the reverse\ndirection. Initial value is on.\n"},
  {(char*)"ToRectangularOff", PyvtkGeoSphereTransform_ToRectangularOff, 1,
   (char*)"V.ToRectangularOff()\nC++: void ToRectangularOff()\n\nIf on, this transform converts (long,lat,alt) triples to (x,y,z)\nas an offset from the center of the earth. Alt, x, y, and z are\nall be in meters. If off, the tranform works in the reverse\ndirection. Initial value is on.\n"},
  {(char*)"SetBaseAltitude", PyvtkGeoSphereTransform_SetBaseAltitude, 1,
   (char*)"V.SetBaseAltitude(float)\nC++: void SetBaseAltitude(double a)\n\nThe base altitude to transform coordinates to. This can be useful\nfor transforming lines just above the earth's surface. Default is\n0.\n"},
  {(char*)"GetBaseAltitude", PyvtkGeoSphereTransform_GetBaseAltitude, 1,
   (char*)"V.GetBaseAltitude() -> float\nC++: double GetBaseAltitude()\n\nThe base altitude to transform coordinates to. This can be useful\nfor transforming lines just above the earth's surface. Default is\n0.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGeoSphereTransform_StaticNew()
{
  return vtkGeoSphereTransform::New();
}

PyObject *PyVTKClass_vtkGeoSphereTransformNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGeoSphereTransform_StaticNew,
    PyvtkGeoSphereTransform_Methods,
    "vtkGeoSphereTransform", modulename,
    NULL, NULL,
    PyvtkGeoSphereTransform_Doc(),
    PyVTKClass_vtkAbstractTransformNew(modulename));
  return cls;
}

const char **PyvtkGeoSphereTransform_Doc()
{
  static const char *docstring[] = {
    "vtkGeoSphereTransform - A transformation between long-lat-alt and\nrect coords\n\n",
    "Superclass: vtkAbstractTransform\n\n",
    "the cartesian coordinate system is the following (if BaseAltitude is\n0),\n- the origin is at the center of the earth\n- the x axis goes from the origin to (longtitude=-90,latitude=0),\n  intersection of equator and the meridian passing just east of\n  Galapagos Islands\n- the y axis goes from the origin to the intersection of Greenwitch\n  meridian and equator (longitude=0,latitude=0)\n- the z axis goes ",
    "from the origin to the Geographic North Pole\n  (latitude=90)\n- therefore the frame is right-handed.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGeoSphereTransform(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGeoSphereTransformNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGeoSphereTransform", o) != 0)
    {
    Py_DECREF(o);
    }

}

