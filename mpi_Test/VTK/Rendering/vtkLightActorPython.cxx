// python wrapper for vtkLightActor
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
#include "vtkLightActor.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLightActor(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLightActor(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLightActorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLightActorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkProp3DNew
extern "C" { PyObject *PyVTKClass_vtkProp3DNew(const char *); }
#define DECLARED_PyVTKClass_vtkProp3DNew
#endif

static const char **PyvtkLightActor_Doc();


static PyObject *
PyvtkLightActor_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

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
      tempr = op->vtkLightActor::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

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
      tempr = op->vtkLightActor::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  vtkLightActor *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLightActor::NewInstance();
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
PyvtkLightActor_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLightActor *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLightActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightActor_SetLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  vtkLight *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
    {
    if (ap.IsBound())
      {
      op->SetLight(temp0);
      }
    else
      {
      op->vtkLightActor::SetLight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightActor_GetLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  vtkLight *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLight();
      }
    else
      {
      tempr = op->vtkLightActor::GetLight();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightActor_SetClippingRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->SetClippingRange(temp0, temp1);
      }
    else
      {
      op->vtkLightActor::SetClippingRange(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLightActor_SetClippingRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  double temp0[2];
  const int size0 = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    if (ap.IsBound())
      {
      op->SetClippingRange(temp0);
      }
    else
      {
      op->vtkLightActor::SetClippingRange(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLightActor_SetClippingRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkLightActor_SetClippingRange_s1(self, args);
    case 1:
      return PyvtkLightActor_SetClippingRange_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetClippingRange");
  return NULL;
}



static PyObject *
PyvtkLightActor_GetClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  double *tempr;
  int sizer = 2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClippingRange();
      }
    else
      {
      tempr = op->vtkLightActor::GetClippingRange();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildTuple(tempr, sizer);
      }
    }

  return result;
}


static PyObject *
PyvtkLightActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  vtkViewport *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
    {
    if (ap.IsBound())
      {
      tempr = op->RenderOpaqueGeometry(temp0);
      }
    else
      {
      tempr = op->vtkLightActor::RenderOpaqueGeometry(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->HasTranslucentPolygonalGeometry();
      }
    else
      {
      tempr = op->vtkLightActor::HasTranslucentPolygonalGeometry();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLightActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  vtkWindow *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
    {
    if (ap.IsBound())
      {
      op->ReleaseGraphicsResources(temp0);
      }
    else
      {
      op->vtkLightActor::ReleaseGraphicsResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLightActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMTime();
      }
    else
      {
      tempr = op->vtkLightActor::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkLightActor_Methods[] = {
  {(char*)"GetClassName", PyvtkLightActor_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLightActor_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLightActor_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLightActor\nC++: vtkLightActor *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLightActor_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLightActor\nC++: vtkLightActor *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLight", PyvtkLightActor_SetLight, 1,
   (char*)"V.SetLight(vtkLight)\nC++: void SetLight(vtkLight *light)\n\nThe spotlight to represent. Initial value is NULL.\n"},
  {(char*)"GetLight", PyvtkLightActor_GetLight, 1,
   (char*)"V.GetLight() -> vtkLight\nC++: vtkLight *GetLight()\n\nThe spotlight to represent. Initial value is NULL.\n"},
  {(char*)"SetClippingRange", PyvtkLightActor_SetClippingRange, 1,
   (char*)"V.SetClippingRange(float, float)\nC++: void SetClippingRange(double dNear, double dFar)\nV.SetClippingRange((float, float))\nC++: void SetClippingRange(const double a[2])\n\nSet/Get the location of the near and far clipping planes along\nthe direction of projection.  Both of these values must be\npositive. Initial values are  (0.5,11.0)\n"},
  {(char*)"GetClippingRange", PyvtkLightActor_GetClippingRange, 1,
   (char*)"V.GetClippingRange() -> (float, float)\nC++: double *GetClippingRange()\n\n"},
  {(char*)"RenderOpaqueGeometry", PyvtkLightActor_RenderOpaqueGeometry, 1,
   (char*)"V.RenderOpaqueGeometry(vtkViewport) -> int\nC++: virtual int RenderOpaqueGeometry(vtkViewport *viewport)\n\nSupport the standard render methods.\n"},
  {(char*)"HasTranslucentPolygonalGeometry", PyvtkLightActor_HasTranslucentPolygonalGeometry, 1,
   (char*)"V.HasTranslucentPolygonalGeometry() -> int\nC++: virtual int HasTranslucentPolygonalGeometry()\n\nDoes this prop have some translucent polygonal geometry? No.\n"},
  {(char*)"ReleaseGraphicsResources", PyvtkLightActor_ReleaseGraphicsResources, 1,
   (char*)"V.ReleaseGraphicsResources(vtkWindow)\nC++: void ReleaseGraphicsResources(vtkWindow *)\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {(char*)"GetMTime", PyvtkLightActor_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLightActor_StaticNew()
{
  return vtkLightActor::New();
}

PyObject *PyVTKClass_vtkLightActorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLightActor_StaticNew,
    PyvtkLightActor_Methods,
    "vtkLightActor", modulename,
    NULL, NULL,
    PyvtkLightActor_Doc(),
    PyVTKClass_vtkProp3DNew(modulename));
  return cls;
}

const char **PyvtkLightActor_Doc()
{
  static const char *docstring[] = {
    "vtkLightActor - a cone and a frustum to represent a spotlight.\n\n",
    "Superclass: vtkProp3D\n\n",
    "vtkLightActor is a composite actor used to represent a spotlight. The\ncone angle is equal to the spotlight angle, the cone apex is at the\nposition of the light, the direction of the light goes from the cone\napex to the center of the base of the cone. The square frustum\nposition is the light position, the frustum focal point is in the\ndirection of the light direction. The frustum vertical view angl",
    "e\n(aperture) (this is also the horizontal view angle as the frustum is\nsquare) is equal to twice the cone angle. The clipping range of the\nfrustum is arbitrary set by the user (initially at 0.5,11.0).\n\nCaveats:\n\nRight now only spotlight are supported but directional light might be\nsupported in the future.\n\nSee Also:\n\nvtkLight vtkConeSource vtkFrustumSource vtkCameraActor\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLightActor(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLightActorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLightActor", o) != 0)
    {
    Py_DECREF(o);
    }

}

