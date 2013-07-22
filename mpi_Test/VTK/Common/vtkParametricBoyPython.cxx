// python wrapper for vtkParametricBoy
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
#include "vtkParametricBoy.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParametricBoy(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParametricBoy(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParametricBoyNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParametricBoyNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkParametricFunctionNew
extern "C" { PyObject *PyVTKClass_vtkParametricFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkParametricFunctionNew
#endif

static const char **PyvtkParametricBoy_Doc();


static PyObject *
PyvtkParametricBoy_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBoy *op = static_cast<vtkParametricBoy *>(vp);

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
      tempr = op->vtkParametricBoy::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricBoy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBoy *op = static_cast<vtkParametricBoy *>(vp);

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
      tempr = op->vtkParametricBoy::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricBoy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBoy *op = static_cast<vtkParametricBoy *>(vp);

  vtkParametricBoy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParametricBoy::NewInstance();
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
PyvtkParametricBoy_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParametricBoy *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParametricBoy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricBoy_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBoy *op = static_cast<vtkParametricBoy *>(vp);

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
      tempr = op->vtkParametricBoy::GetDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricBoy_SetZScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBoy *op = static_cast<vtkParametricBoy *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetZScale(temp0);
      }
    else
      {
      op->vtkParametricBoy::SetZScale(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricBoy_GetZScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBoy *op = static_cast<vtkParametricBoy *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetZScale();
      }
    else
      {
      tempr = op->vtkParametricBoy::GetZScale();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricBoy_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBoy *op = static_cast<vtkParametricBoy *>(vp);

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
      op->vtkParametricBoy::Evaluate(temp0, temp1, temp2);
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
PyvtkParametricBoy_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBoy *op = static_cast<vtkParametricBoy *>(vp);

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
      tempr = op->vtkParametricBoy::EvaluateScalar(temp0, temp1, temp2);
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

static PyMethodDef PyvtkParametricBoy_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricBoy_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricBoy_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricBoy_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParametricBoy\nC++: vtkParametricBoy *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricBoy_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricBoy\nC++: vtkParametricBoy *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDimension", PyvtkParametricBoy_GetDimension, 1,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\n"},
  {(char*)"SetZScale", PyvtkParametricBoy_SetZScale, 1,
   (char*)"V.SetZScale(float)\nC++: void SetZScale(double a)\n\nSet/Get the scale factor for the z-coordinate. Default = 1/8,\ngiving a nice shape.\n"},
  {(char*)"GetZScale", PyvtkParametricBoy_GetZScale, 1,
   (char*)"V.GetZScale() -> float\nC++: double GetZScale()\n\nSet/Get the scale factor for the z-coordinate. Default = 1/8,\ngiving a nice shape.\n"},
  {(char*)"Evaluate", PyvtkParametricBoy_Evaluate, 1,
   (char*)"V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void Evaluate(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nBoy's surface.\n\nThis function performs the mapping $f(u,v) \\rightarrow (x,y,x) $,\nreturning it as Pt. It also returns the partial derivatives Du\nand Dv.$Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\ndy/dv, dz/dv) $ . Then the normal is $N = Du X Dv $ .\n"},
  {(char*)"EvaluateScalar", PyvtkParametricBoy_EvaluateScalar, 1,
   (char*)"V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: virtual double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\nuvw are the parameters with Pt being the the cartesian point,\nDuvw are the derivatives of this point with respect to u, v and\nw. Pt, Duvw are obtained from Evaluate().\n\nThis function is only called if the ScalarMode has the value\nvtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\nIf the user does not need to calculate a scalar, then the\ninstantiated function should return zero.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParametricBoy_StaticNew()
{
  return vtkParametricBoy::New();
}

PyObject *PyVTKClass_vtkParametricBoyNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParametricBoy_StaticNew,
    PyvtkParametricBoy_Methods,
    "vtkParametricBoy", modulename,
    NULL, NULL,
    PyvtkParametricBoy_Doc(),
    PyVTKClass_vtkParametricFunctionNew(modulename));
  return cls;
}

const char **PyvtkParametricBoy_Doc()
{
  static const char *docstring[] = {
    "vtkParametricBoy - Generate Boy's surface.\n\n",
    "Superclass: vtkParametricFunction\n\n",
    "vtkParametricBoy generates Boy's surface. This is a Model of the\nprojective plane without singularities. It was found by Werner Boy on\nassignment from David Hilbert.\n\nFor further information about this surface, please consult the\ntechnical description \"Parametric surfaces\" in\nhttp://www.vtk.org/documents.php in the \"VTK Technical Documents\"\nsection in the VTk.org web pages.\n\nThanks:\n\nAndrew Maclea",
    "n a.maclean@cas.edu.au for creating and contributing the\nclass.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricBoy(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricBoyNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricBoy", o) != 0)
    {
    Py_DECREF(o);
    }

}

