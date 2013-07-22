// python wrapper for vtkParametricConicSpiral
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
#include "vtkParametricConicSpiral.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkParametricConicSpiral(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkParametricConicSpiral(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkParametricConicSpiralNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkParametricConicSpiralNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkParametricFunctionNew
extern "C" { PyObject *PyVTKClass_vtkParametricFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkParametricFunctionNew
#endif

static const char **PyvtkParametricConicSpiral_Doc();


static PyObject *
PyvtkParametricConicSpiral_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

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
      tempr = op->vtkParametricConicSpiral::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

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
      tempr = op->vtkParametricConicSpiral::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  vtkParametricConicSpiral *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkParametricConicSpiral::NewInstance();
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
PyvtkParametricConicSpiral_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkParametricConicSpiral *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkParametricConicSpiral::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

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
      tempr = op->vtkParametricConicSpiral::GetDimension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_SetA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetA(temp0);
      }
    else
      {
      op->vtkParametricConicSpiral::SetA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_GetA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetA();
      }
    else
      {
      tempr = op->vtkParametricConicSpiral::GetA();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_SetB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetB(temp0);
      }
    else
      {
      op->vtkParametricConicSpiral::SetB(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_GetB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetB();
      }
    else
      {
      tempr = op->vtkParametricConicSpiral::GetB();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_SetC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetC(temp0);
      }
    else
      {
      op->vtkParametricConicSpiral::SetC(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_GetC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetC();
      }
    else
      {
      tempr = op->vtkParametricConicSpiral::GetC();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_SetN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetN(temp0);
      }
    else
      {
      op->vtkParametricConicSpiral::SetN(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_GetN(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetN");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetN();
      }
    else
      {
      tempr = op->vtkParametricConicSpiral::GetN();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkParametricConicSpiral_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

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
      op->vtkParametricConicSpiral::Evaluate(temp0, temp1, temp2);
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
PyvtkParametricConicSpiral_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricConicSpiral *op = static_cast<vtkParametricConicSpiral *>(vp);

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
      tempr = op->vtkParametricConicSpiral::EvaluateScalar(temp0, temp1, temp2);
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

static PyMethodDef PyvtkParametricConicSpiral_Methods[] = {
  {(char*)"GetClassName", PyvtkParametricConicSpiral_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkParametricConicSpiral_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkParametricConicSpiral_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkParametricConicSpiral\nC++: vtkParametricConicSpiral *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkParametricConicSpiral_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkParametricConicSpiral\nC++: vtkParametricConicSpiral *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetDimension", PyvtkParametricConicSpiral_GetDimension, 1,
   (char*)"V.GetDimension() -> int\nC++: virtual int GetDimension()\n\n"},
  {(char*)"SetA", PyvtkParametricConicSpiral_SetA, 1,
   (char*)"V.SetA(float)\nC++: void SetA(double a)\n\nSet/Get the scale factor. Default = 0.2\n"},
  {(char*)"GetA", PyvtkParametricConicSpiral_GetA, 1,
   (char*)"V.GetA() -> float\nC++: double GetA()\n\nSet/Get the scale factor. Default = 0.2\n"},
  {(char*)"SetB", PyvtkParametricConicSpiral_SetB, 1,
   (char*)"V.SetB(float)\nC++: void SetB(double a)\n\nSet/Get the A function coefficient (see equation below). Default\n= 1.\n"},
  {(char*)"GetB", PyvtkParametricConicSpiral_GetB, 1,
   (char*)"V.GetB() -> float\nC++: double GetB()\n\nSet/Get the A function coefficient (see equation below). Default\n= 1.\n"},
  {(char*)"SetC", PyvtkParametricConicSpiral_SetC, 1,
   (char*)"V.SetC(float)\nC++: void SetC(double a)\n\nSet/Get the B function coefficient (see equation below). Default\n= 0.1.\n"},
  {(char*)"GetC", PyvtkParametricConicSpiral_GetC, 1,
   (char*)"V.GetC() -> float\nC++: double GetC()\n\nSet/Get the B function coefficient (see equation below). Default\n= 0.1.\n"},
  {(char*)"SetN", PyvtkParametricConicSpiral_SetN, 1,
   (char*)"V.SetN(float)\nC++: void SetN(double a)\n\nSet/Get the C function coefficient (see equation below). Default\n= 2.\n"},
  {(char*)"GetN", PyvtkParametricConicSpiral_GetN, 1,
   (char*)"V.GetN() -> float\nC++: double GetN()\n\nSet/Get the C function coefficient (see equation below). Default\n= 2.\n"},
  {(char*)"Evaluate", PyvtkParametricConicSpiral_Evaluate, 1,
   (char*)"V.Evaluate([float, float, float], [float, float, float], [float,\n    float, float, float, float, float, float, float, float])\nC++: virtual void Evaluate(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nA conic spiral surface.\n\nThis function performs the mapping $f(u,v) \\rightarrow (x,y,x) $,\nreturning it as Pt. It also returns the partial derivatives Du\nand Dv.$Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv,\ndy/dv, dz/dv) $ . Then the normal is $N = Du X Dv $ .\n"},
  {(char*)"EvaluateScalar", PyvtkParametricConicSpiral_EvaluateScalar, 1,
   (char*)"V.EvaluateScalar([float, float, float], [float, float, float],\n    [float, float, float, float, float, float, float, float,\n    float]) -> float\nC++: virtual double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9])\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw.\n\nuvw are the parameters with Pt being the the cartesian point,\nDuvw are the derivatives of this point with respect to u, v and\nw. Pt, Duvw are obtained from Evaluate().\n\nThis function is only called if the ScalarMode has the value\nvtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED\n\nIf the user does not need to calculate a scalar, then the\ninstantiated function should return zero.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkParametricConicSpiral_StaticNew()
{
  return vtkParametricConicSpiral::New();
}

PyObject *PyVTKClass_vtkParametricConicSpiralNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkParametricConicSpiral_StaticNew,
    PyvtkParametricConicSpiral_Methods,
    "vtkParametricConicSpiral", modulename,
    NULL, NULL,
    PyvtkParametricConicSpiral_Doc(),
    PyVTKClass_vtkParametricFunctionNew(modulename));
  return cls;
}

const char **PyvtkParametricConicSpiral_Doc()
{
  static const char *docstring[] = {
    "vtkParametricConicSpiral - Generate conic spiral surfaces that\nresemble sea-shells.\n\n",
    "Superclass: vtkParametricFunction\n\n",
    "vtkParametricConicSpiral generates conic spiral surfaces. These can\nresemble sea shells, or may look like a torus \"eating\" its own tail.\n\nFor further information about this surface, please consult the\ntechnical description \"Parametric surfaces\" in\nhttp://www.vtk.org/documents.php in the \"VTK Technical Documents\"\nsection in the VTk.org web pages.\n\nThanks:\n\nAndrew Maclean a.maclean@cas.edu.au for cr",
    "eating and contributing the\nclass.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkParametricConicSpiral(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkParametricConicSpiralNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkParametricConicSpiral", o) != 0)
    {
    Py_DECREF(o);
    }

}

