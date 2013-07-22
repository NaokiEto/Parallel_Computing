// python wrapper for vtkParametricEllipsoid
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
#include "vtkParametricEllipsoid.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParametricEllipsoid(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParametricEllipsoid(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParametricEllipsoidNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParametricEllipsoidNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkParametricFunctionNew
extern "C" { PyObject *PyVTKClass_vtkParametricFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkParametricFunctionNew
#endif

static const char **PyvtkParametricEllipsoid_Doc();


static PyObject *
PyvtkParametricEllipsoid_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

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
      tempr = op->vtkParametricEllipsoid::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

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
      tempr = op->vtkParametricEllipsoid::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  vtkParametricEllipsoid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParametricEllipsoid::NewInstance();
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
PyvtkParametricEllipsoid_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParametricEllipsoid *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParametricEllipsoid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDimension();
      }
    else
      {
      tempr = op->vtkParametricEllipsoid::GetDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_SetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetXRadius(temp0);
      }
    else
      {
      op->vtkParametricEllipsoid::SetXRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_GetXRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetXRadius();
      }
    else
      {
      tempr = op->vtkParametricEllipsoid::GetXRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_SetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetYRadius(temp0);
      }
    else
      {
      op->vtkParametricEllipsoid::SetYRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_GetYRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetYRadius();
      }
    else
      {
      tempr = op->vtkParametricEllipsoid::GetYRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_SetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZRadius(temp0);
      }
    else
      {
      op->vtkParametricEllipsoid::SetZRadius(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_GetZRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZRadius();
      }
    else
      {
      tempr = op->vtkParametricEllipsoid::GetZRadius();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      op->Evaluate(temp0, temp1, temp2);
      }
    else
      {
      op->vtkParametricEllipsoid::Evaluate(temp0, temp1, temp2);
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

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricEllipsoid_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricEllipsoid *op = static_cast<vtkParametricEllipsoid *>(vp);

  double temp0[3];
  double save0[3];
  const int size0 = 3;
  double temp1[3];
  double save1[3];
  const int size1 = 3;
  double temp2[9];
  double save2[9];
  const int size2 = 9;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
    {
    ap.SaveArray(temp0, save0, size0);
    ap.SaveArray(temp1, save1, size1);
    ap.SaveArray(temp2, save2, size2);

    if (ap.IsBound())
      {
      tempr = op->EvaluateScalar(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkParametricEllipsoid::EvaluateScalar(temp0, temp1, temp2);
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

    if (ap.ArrayHasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
      {
      ap.SetArray(2, temp2, size2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkParametricEllipsoid_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricEllipsoid_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricEllipsoid_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricEllipsoid_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParametricEllipsoid\nC++: vtkParametricEllipsoid *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricEllipsoid_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricEllipsoid\nC++: vtkParametricEllipsoid *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDimension", PyvtkParametricEllipsoid_GetDimension, 1,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\n"},
  {(char*)"SetXRadius", PyvtkParametricEllipsoid_SetXRadius, 1,
   (char*)"V.SetXRadius(float)\nC++: void SetXRadius(double a)\n\nSet/Get the scaling factor for the x-axis. Default = 1.\n"},
  {(char*)"GetXRadius", PyvtkParametricEllipsoid_GetXRadius, 1,
   (char*)"V.GetXRadius() -> float\nC++: double GetXRadius()\n\nSet/Get the scaling factor for the x-axis. Default = 1.\n"},
  {(char*)"SetYRadius", PyvtkParametricEllipsoid_SetYRadius, 1,
   (char*)"V.SetYRadius(float)\nC++: void SetYRadius(double a)\n\nSet/Get the scaling factor for the y-axis. Default = 1.\n"},
  {(char*)"GetYRadius", PyvtkParametricEllipsoid_GetYRadius, 1,
   (char*)"V.GetYRadius() -> float\nC++: double GetYRadius()\n\nSet/Get the scaling factor for the y-axis. Default = 1.\n"},
  {(char*)"SetZRadius", PyvtkParametricEllipsoid_SetZRadius, 1,
   (char*)"V.SetZRadius(float)\nC++: void SetZRadius(double a)\n\nSet/Get the scaling factor for the z-axis. Default = 1.\n"},
  {(char*)"GetZRadius", PyvtkParametricEllipsoid_GetZRadius, 1,
   (char*)"V.GetZRadius() -> float\nC++: double GetZRadius()\n\nSet/Get the scaling factor for the z-axis. Default = 1.\n"},
  {(char*)"Evaluate", PyvtkParametricEllipsoid_Evaluate, 1,
   (char*)"V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void Evaluate(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nAn ellipsoid.\n\nThis function performs the mapping $f(u,v) \\rightarrow (x,y,x) $,\nreturning it as Pt. It also returns the partial derivatives Du\nand Dv.$Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\ndy/dv, dz/dv) $ . Then the normal is $N = Du X Dv $ .\n"},
  {(char*)"EvaluateScalar", PyvtkParametricEllipsoid_EvaluateScalar, 1,
   (char*)"V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: virtual double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\nuvw are the parameters with Pt being the the cartesian point,\nDuvw are the derivatives of this point with respect to u, v and\nw. Pt, Duvw are obtained from Evaluate().\n\nThis function is only called if the ScalarMode has the value\nvtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\nIf the user does not need to calculate a scalar, then the\ninstantiated function should return zero.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParametricEllipsoid_StaticNew()
{
  return vtkParametricEllipsoid::New();
}

PyObject *PyVTKClass_vtkParametricEllipsoidNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParametricEllipsoid_StaticNew,
    PyvtkParametricEllipsoid_Methods,
    "vtkParametricEllipsoid", modulename,
    NULL, NULL,
    PyvtkParametricEllipsoid_Doc(),
    PyVTKClass_vtkParametricFunctionNew(modulename));
  return cls;
}

const char **PyvtkParametricEllipsoid_Doc()
{
  static const char *docstring[] = {
    "vtkParametricEllipsoid - Generate an ellipsoid.\n\n",
    "Superclass: vtkParametricFunction\n\n",
    "vtkParametricEllipsoid generates an ellipsoid. If all the radii are\nthe same, we have a sphere. An oblate spheroid occurs if RadiusX =\nRadiusY > RadiusZ. Here the Z-axis forms the symmetry axis. To a\nfirst approximation, this is the shape of the earth. A prolate\nspheroid occurs if RadiusX = RadiusY < RadiusZ.\n\nFor further information about this surface, please consult the\ntechnical description \"Pa",
    "rametric surfaces\" in\nhttp://www.vtk.org/documents.php in the \"VTK Technical Documents\"\nsection in the VTk.org web pages.\n\nThanks:\n\nAndrew Maclean a.maclean@cas.edu.au for creating and contributing the\nclass.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricEllipsoid(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricEllipsoidNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricEllipsoid", o) != 0)
    {
    Py_DECREF(o);
    }

}

