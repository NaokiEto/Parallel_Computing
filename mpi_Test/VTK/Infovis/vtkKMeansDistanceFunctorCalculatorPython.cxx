// python wrapper for vtkKMeansDistanceFunctorCalculator
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
#include "vtkKMeansDistanceFunctorCalculator.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkKMeansDistanceFunctorCalculator(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkKMeansDistanceFunctorCalculator(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkKMeansDistanceFunctorCalculatorNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkKMeansDistanceFunctorCalculatorNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkKMeansDistanceFunctorNew
extern "C" { PyObject *PyVTKClass_vtkKMeansDistanceFunctorNew(const char *); }
#define DECLARED_PyVTKClass_vtkKMeansDistanceFunctorNew
#endif

static const char **PyvtkKMeansDistanceFunctorCalculator_Doc();


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

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
      tempr = op->vtkKMeansDistanceFunctorCalculator::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

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
      tempr = op->vtkKMeansDistanceFunctorCalculator::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  vtkKMeansDistanceFunctorCalculator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkKMeansDistanceFunctorCalculator::NewInstance();
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
PyvtkKMeansDistanceFunctorCalculator_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkKMeansDistanceFunctorCalculator *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkKMeansDistanceFunctorCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_SetDistanceExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDistanceExpression(temp0);
      }
    else
      {
      op->vtkKMeansDistanceFunctorCalculator::SetDistanceExpression(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_GetDistanceExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDistanceExpression();
      }
    else
      {
      tempr = op->vtkKMeansDistanceFunctorCalculator::GetDistanceExpression();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_SetFunctionParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  vtkFunctionParser *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFunctionParser"))
    {
    if (ap.IsBound())
      {
      op->SetFunctionParser(temp0);
      }
    else
      {
      op->vtkKMeansDistanceFunctorCalculator::SetFunctionParser(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctorCalculator_GetFunctionParser(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionParser");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctorCalculator *op = static_cast<vtkKMeansDistanceFunctorCalculator *>(vp);

  vtkFunctionParser *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFunctionParser();
      }
    else
      {
      tempr = op->vtkKMeansDistanceFunctorCalculator::GetFunctionParser();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkKMeansDistanceFunctorCalculator_Methods[] = {
  {(char*)"GetClassName", PyvtkKMeansDistanceFunctorCalculator_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkKMeansDistanceFunctorCalculator_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkKMeansDistanceFunctorCalculator_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkKMeansDistanceFunctorCalculator\nC++: vtkKMeansDistanceFunctorCalculator *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkKMeansDistanceFunctorCalculator_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkKMeansDistanceFunctorCalculator\nC++: vtkKMeansDistanceFunctorCalculator *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"SetDistanceExpression", PyvtkKMeansDistanceFunctorCalculator_SetDistanceExpression, 1,
   (char*)"V.SetDistanceExpression(string)\nC++: void SetDistanceExpression(char *)\n\nSet/get the distance function expression.\n"},
  {(char*)"GetDistanceExpression", PyvtkKMeansDistanceFunctorCalculator_GetDistanceExpression, 1,
   (char*)"V.GetDistanceExpression() -> string\nC++: char *GetDistanceExpression()\n\nSet/get the distance function expression.\n"},
  {(char*)"SetFunctionParser", PyvtkKMeansDistanceFunctorCalculator_SetFunctionParser, 1,
   (char*)"V.SetFunctionParser(vtkFunctionParser)\nC++: virtual void SetFunctionParser(vtkFunctionParser *)\n\nSet/get the string containing an expression which evaluates to\nthe distance metric used for k-means computation. The scalar\nvariables \"x0\", \"x1\", ... \"xn\" and \"y0\", \"y1\", ..., \"yn\" refer to\nthe coordinates involved in the computation.\n"},
  {(char*)"GetFunctionParser", PyvtkKMeansDistanceFunctorCalculator_GetFunctionParser, 1,
   (char*)"V.GetFunctionParser() -> vtkFunctionParser\nC++: vtkFunctionParser *GetFunctionParser()\n\nSet/get the string containing an expression which evaluates to\nthe distance metric used for k-means computation. The scalar\nvariables \"x0\", \"x1\", ... \"xn\" and \"y0\", \"y1\", ..., \"yn\" refer to\nthe coordinates involved in the computation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkKMeansDistanceFunctorCalculator_StaticNew()
{
  return vtkKMeansDistanceFunctorCalculator::New();
}

PyObject *PyVTKClass_vtkKMeansDistanceFunctorCalculatorNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkKMeansDistanceFunctorCalculator_StaticNew,
    PyvtkKMeansDistanceFunctorCalculator_Methods,
    "vtkKMeansDistanceFunctorCalculator", modulename,
    NULL, NULL,
    PyvtkKMeansDistanceFunctorCalculator_Doc(),
    PyVTKClass_vtkKMeansDistanceFunctorNew(modulename));
  return cls;
}

const char **PyvtkKMeansDistanceFunctorCalculator_Doc()
{
  static const char *docstring[] = {
    "vtkKMeansDistanceFunctorCalculator - measure distance from k-means\ncluster centers using a user-specified expression\n\n",
    "Superclass: vtkKMeansDistanceFunctor\n\n",
    "This is a subclass of the default k-means distance functor that\nallows the user to specify a distance function as a string. The\nprovided expression is evaluated whenever the parenthesis operator is\ninvoked but this is much slower than the default distance\ncalculation.\n\nUser-specified distance expressions should be written in terms of two\nvector variables named \"x\" and \"y\". The length of the vector",
    "s will be\ndetermined by the k-means request and all columns of interest in the\nrequest must contain values that may be converted to a floating point\nrepresentation. (Strings and vtkObject pointers are not allowed.) An\nexample distance expression is \"sqrt( (x0-y0)^2 + (x1-y1)^2 )\" which\ncomputes Euclidian distance in a plane defined by the first 2\ncoordinates of the vectors specified.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkKMeansDistanceFunctorCalculator(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkKMeansDistanceFunctorCalculatorNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkKMeansDistanceFunctorCalculator", o) != 0)
    {
    Py_DECREF(o);
    }

}

