// python wrapper for vtkPlanes
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
#include "vtkPlanes.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPlanes(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPlanes(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPlanesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPlanesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkPlanes_Doc();


static PyObject *
PyvtkPlanes_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

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
      tempr = op->vtkPlanes::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlanes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

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
      tempr = op->vtkPlanes::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlanes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  vtkPlanes *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPlanes::NewInstance();
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
PyvtkPlanes_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPlanes *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPlanes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlanes_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      tempr = op->EvaluateFunction(temp0);
      }
    else
      {
      tempr = op->vtkPlanes::EvaluateFunction(temp0);
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
PyvtkPlanes_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->EvaluateFunction(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkPlanes::EvaluateFunction(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPlanes_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPlanes_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkPlanes_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkPlanes_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);

    if (ap.IsBound())
      {
      op->EvaluateGradient(temp0, temp1);
      }
    else
      {
      op->vtkPlanes::EvaluateGradient(temp0, temp1);
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
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlanes_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  vtkPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
    {
    if (ap.IsBound())
      {
      op->SetPoints(temp0);
      }
    else
      {
      op->vtkPlanes::SetPoints(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlanes_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  vtkPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPoints();
      }
    else
      {
      tempr = op->vtkPlanes::GetPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlanes_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  vtkDataArray *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
    {
    if (ap.IsBound())
      {
      op->SetNormals(temp0);
      }
    else
      {
      op->vtkPlanes::SetNormals(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlanes_GetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  vtkDataArray *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNormals();
      }
    else
      {
      tempr = op->vtkPlanes::GetNormals();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlanes_SetFrustumPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustumPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  double temp0[24];
  double save0[24];
  const int size0 = 24;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetFrustumPlanes(temp0);
      }
    else
      {
      op->vtkPlanes::SetFrustumPlanes(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPlanes_SetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  double temp0[6];
  double save0[6];
  const int size0 = 6;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
    {
    ap.SaveArray(temp0, save0, size0);

    if (ap.IsBound())
      {
      op->SetBounds(temp0);
      }
    else
      {
      op->vtkPlanes::SetBounds(temp0);
      }

    if (ap.ArrayHasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(0, temp0, size0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlanes_SetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

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
      op->vtkPlanes::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlanes_SetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPlanes_SetBounds_s1(self, args);
    case 6:
      return PyvtkPlanes_SetBounds_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetBounds");
  return NULL;
}



static PyObject *
PyvtkPlanes_GetNumberOfPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPlanes();
      }
    else
      {
      tempr = op->vtkPlanes::GetNumberOfPlanes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPlanes_GetPlane_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  int temp0;
  vtkPlane *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPlane(temp0);
      }
    else
      {
      tempr = op->vtkPlanes::GetPlane(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPlanes_GetPlane_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlanes *op = static_cast<vtkPlanes *>(vp);

  int temp0;
  vtkPlane *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPlane"))
    {
    if (ap.IsBound())
      {
      op->GetPlane(temp0, temp1);
      }
    else
      {
      op->vtkPlanes::GetPlane(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPlanes_GetPlane(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPlanes_GetPlane_s1(self, args);
    case 2:
      return PyvtkPlanes_GetPlane_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetPlane");
  return NULL;
}


static PyMethodDef PyvtkPlanes_Methods[] = {
  {(char*)"GetClassName", PyvtkPlanes_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPlanes_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPlanes_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPlanes\nC++: vtkPlanes *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPlanes_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPlanes\nC++: vtkPlanes *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateFunction", PyvtkPlanes_EvaluateFunction, 1,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\n"},
  {(char*)"EvaluateGradient", PyvtkPlanes_EvaluateGradient, 1,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double n[3])\n\n"},
  {(char*)"SetPoints", PyvtkPlanes_SetPoints, 1,
   (char*)"V.SetPoints(vtkPoints)\nC++: virtual void SetPoints(vtkPoints *)\n\nSpecify a list of points defining points through which the planes\npass.\n"},
  {(char*)"GetPoints", PyvtkPlanes_GetPoints, 1,
   (char*)"V.GetPoints() -> vtkPoints\nC++: vtkPoints *GetPoints()\n\nSpecify a list of points defining points through which the planes\npass.\n"},
  {(char*)"SetNormals", PyvtkPlanes_SetNormals, 1,
   (char*)"V.SetNormals(vtkDataArray)\nC++: void SetNormals(vtkDataArray *normals)\n\nSpecify a list of normal vectors for the planes. There is a\none-to-one correspondence between plane points and plane normals.\n"},
  {(char*)"GetNormals", PyvtkPlanes_GetNormals, 1,
   (char*)"V.GetNormals() -> vtkDataArray\nC++: vtkDataArray *GetNormals()\n\nSpecify a list of normal vectors for the planes. There is a\none-to-one correspondence between plane points and plane normals.\n"},
  {(char*)"SetFrustumPlanes", PyvtkPlanes_SetFrustumPlanes, 1,
   (char*)"V.SetFrustumPlanes([float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float,\n    float])\nC++: void SetFrustumPlanes(double planes[24])\n\nAn alternative method to specify six planes defined by the camera\nview frustrum. See vtkCamera::GetFrustumPlanes() documentation.\n"},
  {(char*)"SetBounds", PyvtkPlanes_SetBounds, 1,
   (char*)"V.SetBounds([float, float, float, float, float, float])\nC++: void SetBounds(double bounds[6])\nV.SetBounds(float, float, float, float, float, float)\nC++: void SetBounds(double xmin, double xmax, double ymin,\n    double ymax, double zmin, double zmax)\n\nAn alternative method to specify six planes defined by a bounding\nbox. The bounding box is a six-vector defined as\n(xmin,xmax,ymin,ymax,zmin,zmax). It defines six planes orthogonal\nto the x-y-z coordinate axes.\n"},
  {(char*)"GetNumberOfPlanes", PyvtkPlanes_GetNumberOfPlanes, 1,
   (char*)"V.GetNumberOfPlanes() -> int\nC++: int GetNumberOfPlanes()\n\nReturn the number of planes in the set of planes.\n"},
  {(char*)"GetPlane", PyvtkPlanes_GetPlane, 1,
   (char*)"V.GetPlane(int) -> vtkPlane\nC++: vtkPlane *GetPlane(int i)\nV.GetPlane(int, vtkPlane)\nC++: void GetPlane(int i, vtkPlane *plane)\n\nCreate and return a pointer to a vtkPlane object at the ith\nposition. Asking for a plane outside the allowable range returns\nNULL. This method always returns the same object. Use\nGetPlane(int i, vtkPlane *plane) instead\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPlanes_StaticNew()
{
  return vtkPlanes::New();
}

PyObject *PyVTKClass_vtkPlanesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPlanes_StaticNew,
    PyvtkPlanes_Methods,
    "vtkPlanes", modulename,
    NULL, NULL,
    PyvtkPlanes_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkPlanes_Doc()
{
  static const char *docstring[] = {
    "vtkPlanes - implicit function for convex set of planes\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkPlanes computes the implicit function and function gradient for a\nset of planes. The planes must define a convex space.\n\nThe function value is the closest first order distance of a point to\nthe convex region defined by the planes. The function gradient is the\nplane normal at the function value.  Note that the normals must point\noutside of the convex region. Thus, a negative function value means",
    "\nthat a point is inside the convex region.\n\nThere are several methods to define the set of planes. The most\ngeneral is to supply an instance of vtkPoints and an instance of\nvtkDataArray. (The points define a point on the plane, and the\nnormals corresponding plane normals.) Two other specialized ways are\nto 1) supply six planes defining the view frustrum of a camera, and\n2) provide a bounding box.\n",
    "\nSee Also:\n\nvtkCamera\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPlanes(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPlanesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPlanes", o) != 0)
    {
    Py_DECREF(o);
    }

}

