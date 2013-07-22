// python wrapper for vtkPolynomialSolversUnivariate
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
#include "vtkPolynomialSolversUnivariate.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolynomialSolversUnivariate(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolynomialSolversUnivariate(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolynomialSolversUnivariateNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolynomialSolversUnivariateNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkPolynomialSolversUnivariate_Doc();


static PyObject *
PyvtkPolynomialSolversUnivariate_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolynomialSolversUnivariate *op = static_cast<vtkPolynomialSolversUnivariate *>(vp);

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
      tempr = op->vtkPolynomialSolversUnivariate::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolynomialSolversUnivariate *op = static_cast<vtkPolynomialSolversUnivariate *>(vp);

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
      tempr = op->vtkPolynomialSolversUnivariate::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolynomialSolversUnivariate *op = static_cast<vtkPolynomialSolversUnivariate *>(vp);

  vtkPolynomialSolversUnivariate *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolynomialSolversUnivariate::NewInstance();
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
PyvtkPolynomialSolversUnivariate_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolynomialSolversUnivariate *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolynomialSolversUnivariate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_SetDivisionTolerance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDivisionTolerance");

  double temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkPolynomialSolversUnivariate::SetDivisionTolerance(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolynomialSolversUnivariate_GetDivisionTolerance(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDivisionTolerance");

  double tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkPolynomialSolversUnivariate::GetDivisionTolerance();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPolynomialSolversUnivariate_Methods[] = {
  {(char*)"GetClassName", PyvtkPolynomialSolversUnivariate_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolynomialSolversUnivariate_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolynomialSolversUnivariate_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolynomialSolversUnivariate\nC++: vtkPolynomialSolversUnivariate *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolynomialSolversUnivariate_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolynomialSolversUnivariate\nC++: vtkPolynomialSolversUnivariate *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDivisionTolerance", PyvtkPolynomialSolversUnivariate_SetDivisionTolerance, 1,
   (char*)"V.SetDivisionTolerance(float)\nC++: static void SetDivisionTolerance(double tol)\n\nSet/get the tolerance used when performing polynomial Euclidean\ndivision to find polynomial roots. This tolerance is used to\ndecide whether the coefficient(s) of a polynomial remainder are\nclose enough to zero to be neglected.\n"},
  {(char*)"GetDivisionTolerance", PyvtkPolynomialSolversUnivariate_GetDivisionTolerance, 1,
   (char*)"V.GetDivisionTolerance() -> float\nC++: static double GetDivisionTolerance()\n\nSet/get the tolerance used when performing polynomial Euclidean\ndivision to find polynomial roots. This tolerance is used to\ndecide whether the coefficient(s) of a polynomial remainder are\nclose enough to zero to be neglected.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolynomialSolversUnivariate_StaticNew()
{
  return vtkPolynomialSolversUnivariate::New();
}

PyObject *PyVTKClass_vtkPolynomialSolversUnivariateNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolynomialSolversUnivariate_StaticNew,
    PyvtkPolynomialSolversUnivariate_Methods,
    "vtkPolynomialSolversUnivariate", modulename,
    NULL, NULL,
    PyvtkPolynomialSolversUnivariate_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkPolynomialSolversUnivariate_Doc()
{
  static const char *docstring[] = {
    "vtkPolynomialSolversUnivariate - polynomial solvers\n\n",
    "Superclass: vtkObject\n\n",
    "vtkPolynomialSolversUnivariate provides solvers for univariate\npolynomial equations with real coefficients. The Tartaglia-Cardan and\nFerrari solvers work on polynomials of fixed degree 3 and 4,\nrespectively. The Lin-Bairstow and Sturm solvers work on polynomials\nof arbitrary degree. The Sturm solver is the most robust solver but\nonly reports roots within an interval and does not report\nmultiplicit",
    "ies. The Lin-Bairstow solver reports multiplicities.\n\nFor difficult polynomials, you may wish to use FilterRoots to\neliminate some of the roots reported by the Sturm solver. FilterRoots\nevaluates the derivatives near each root to eliminate cases where a\nlocal minimum or maximum is close to zero.\n\nThanks:\n\nThanks to Philippe Pebay, Korben Rusek, David Thompson, and Maurice\nRojas for implementing th",
    "ese solvers.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolynomialSolversUnivariate(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolynomialSolversUnivariateNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolynomialSolversUnivariate", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(2.2204460492503131e-16);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DBL_EPSILON", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyFloat_FromDouble(2.2250738585072014e-308);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DBL_MIN", o) != 0)
    {
    Py_DECREF(o);
    }

}

