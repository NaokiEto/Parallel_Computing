// python wrapper for vtkImplicitBoolean
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
#include "vtkImplicitBoolean.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImplicitBoolean(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImplicitBoolean(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImplicitBooleanNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImplicitBooleanNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImplicitFunctionNew
extern "C" { PyObject *PyVTKClass_vtkImplicitFunctionNew(const char *); }
#define DECLARED_PyVTKClass_vtkImplicitFunctionNew
#endif

static const char **PyvtkImplicitBoolean_Doc();


static PyObject *
PyvtkImplicitBoolean_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      tempr = op->vtkImplicitBoolean::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      tempr = op->vtkImplicitBoolean::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  vtkImplicitBoolean *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImplicitBoolean::NewInstance();
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
PyvtkImplicitBoolean_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImplicitBoolean *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImplicitBoolean::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      tempr = op->vtkImplicitBoolean::EvaluateFunction(temp0);
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
PyvtkImplicitBoolean_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      tempr = op->vtkImplicitBoolean::EvaluateFunction(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImplicitBoolean_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImplicitBoolean_EvaluateFunction_s1(self, args);
    case 3:
      return PyvtkImplicitBoolean_EvaluateFunction_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return NULL;
}



static PyObject *
PyvtkImplicitBoolean_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      op->vtkImplicitBoolean::EvaluateGradient(temp0, temp1);
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
PyvtkImplicitBoolean_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

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
      tempr = op->vtkImplicitBoolean::GetMTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_AddFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->AddFunction(temp0);
      }
    else
      {
      op->vtkImplicitBoolean::AddFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_RemoveFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  vtkImplicitFunction *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
    {
    if (ap.IsBound())
      {
      op->RemoveFunction(temp0);
      }
    else
      {
      op->vtkImplicitBoolean::RemoveFunction(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  vtkImplicitFunctionCollection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFunction();
      }
    else
      {
      tempr = op->vtkImplicitBoolean::GetFunction();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOperationType(temp0);
      }
    else
      {
      op->vtkImplicitBoolean::SetOperationType(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOperationTypeMinValue();
      }
    else
      {
      tempr = op->vtkImplicitBoolean::GetOperationTypeMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOperationTypeMaxValue();
      }
    else
      {
      tempr = op->vtkImplicitBoolean::GetOperationTypeMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOperationType();
      }
    else
      {
      tempr = op->vtkImplicitBoolean::GetOperationType();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationTypeToUnion();
      }
    else
      {
      op->vtkImplicitBoolean::SetOperationTypeToUnion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationTypeToIntersection();
      }
    else
      {
      op->vtkImplicitBoolean::SetOperationTypeToIntersection();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationTypeToDifference();
      }
    else
      {
      op->vtkImplicitBoolean::SetOperationTypeToDifference();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_SetOperationTypeToUnionOfMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationTypeToUnionOfMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationTypeToUnionOfMagnitudes();
      }
    else
      {
      op->vtkImplicitBoolean::SetOperationTypeToUnionOfMagnitudes();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImplicitBoolean_GetOperationTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitBoolean *op = static_cast<vtkImplicitBoolean *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOperationTypeAsString();
      }
    else
      {
      tempr = op->vtkImplicitBoolean::GetOperationTypeAsString();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImplicitBoolean_Methods[] = {
  {(char*)"GetClassName", PyvtkImplicitBoolean_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImplicitBoolean_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImplicitBoolean_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImplicitBoolean\nC++: vtkImplicitBoolean *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImplicitBoolean_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImplicitBoolean\nC++: vtkImplicitBoolean *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"EvaluateFunction", PyvtkImplicitBoolean_EvaluateFunction, 1,
   (char*)"V.EvaluateFunction([float, float, float]) -> float\nC++: double EvaluateFunction(double x[3])\nV.EvaluateFunction(float, float, float) -> float\nC++: double EvaluateFunction(double x, double y, double z)\n\nEvaluate boolean combinations of implicit function using current\noperator.\n"},
  {(char*)"EvaluateGradient", PyvtkImplicitBoolean_EvaluateGradient, 1,
   (char*)"V.EvaluateGradient([float, float, float], [float, float, float])\nC++: void EvaluateGradient(double x[3], double g[3])\n\nEvaluate gradient of boolean combination.\n"},
  {(char*)"GetMTime", PyvtkImplicitBoolean_GetMTime, 1,
   (char*)"V.GetMTime() -> int\nC++: unsigned long GetMTime()\n\nOverride modified time retrieval because of object dependencies.\n"},
  {(char*)"AddFunction", PyvtkImplicitBoolean_AddFunction, 1,
   (char*)"V.AddFunction(vtkImplicitFunction)\nC++: void AddFunction(vtkImplicitFunction *in)\n\nAdd another implicit function to the list of functions.\n"},
  {(char*)"RemoveFunction", PyvtkImplicitBoolean_RemoveFunction, 1,
   (char*)"V.RemoveFunction(vtkImplicitFunction)\nC++: void RemoveFunction(vtkImplicitFunction *in)\n\nRemove a function from the list of implicit functions to boolean.\n"},
  {(char*)"GetFunction", PyvtkImplicitBoolean_GetFunction, 1,
   (char*)"V.GetFunction() -> vtkImplicitFunctionCollection\nC++: vtkImplicitFunctionCollection *GetFunction()\n\nReturn the collection of implicit functions.\n"},
  {(char*)"SetOperationType", PyvtkImplicitBoolean_SetOperationType, 1,
   (char*)"V.SetOperationType(int)\nC++: void SetOperationType(int)\n\nSpecify the type of boolean operation.\n"},
  {(char*)"GetOperationTypeMinValue", PyvtkImplicitBoolean_GetOperationTypeMinValue, 1,
   (char*)"V.GetOperationTypeMinValue() -> int\nC++: int GetOperationTypeMinValue()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"GetOperationTypeMaxValue", PyvtkImplicitBoolean_GetOperationTypeMaxValue, 1,
   (char*)"V.GetOperationTypeMaxValue() -> int\nC++: int GetOperationTypeMaxValue()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"GetOperationType", PyvtkImplicitBoolean_GetOperationType, 1,
   (char*)"V.GetOperationType() -> int\nC++: int GetOperationType()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"SetOperationTypeToUnion", PyvtkImplicitBoolean_SetOperationTypeToUnion, 1,
   (char*)"V.SetOperationTypeToUnion()\nC++: void SetOperationTypeToUnion()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"SetOperationTypeToIntersection", PyvtkImplicitBoolean_SetOperationTypeToIntersection, 1,
   (char*)"V.SetOperationTypeToIntersection()\nC++: void SetOperationTypeToIntersection()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"SetOperationTypeToDifference", PyvtkImplicitBoolean_SetOperationTypeToDifference, 1,
   (char*)"V.SetOperationTypeToDifference()\nC++: void SetOperationTypeToDifference()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"SetOperationTypeToUnionOfMagnitudes", PyvtkImplicitBoolean_SetOperationTypeToUnionOfMagnitudes, 1,
   (char*)"V.SetOperationTypeToUnionOfMagnitudes()\nC++: void SetOperationTypeToUnionOfMagnitudes()\n\nSpecify the type of boolean operation.\n"},
  {(char*)"GetOperationTypeAsString", PyvtkImplicitBoolean_GetOperationTypeAsString, 1,
   (char*)"V.GetOperationTypeAsString() -> string\nC++: const char *GetOperationTypeAsString()\n\nSpecify the type of boolean operation.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImplicitBoolean_StaticNew()
{
  return vtkImplicitBoolean::New();
}

PyObject *PyVTKClass_vtkImplicitBooleanNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImplicitBoolean_StaticNew,
    PyvtkImplicitBoolean_Methods,
    "vtkImplicitBoolean", modulename,
    NULL, NULL,
    PyvtkImplicitBoolean_Doc(),
    PyVTKClass_vtkImplicitFunctionNew(modulename));
  return cls;
}

const char **PyvtkImplicitBoolean_Doc()
{
  static const char *docstring[] = {
    "vtkImplicitBoolean - implicit function consisting of boolean\ncombinations of implicit functions\n\n",
    "Superclass: vtkImplicitFunction\n\n",
    "vtkImplicitBoolean is an implicit function consisting of boolean\ncombinations of implicit functions. The class has a list of functions\n(FunctionList) that are combined according to a specified operator\n(VTK_UNION or VTK_INTERSECTION or VTK_DIFFERENCE). You can use nested\ncombinations of vtkImplicitFunction's (and/or vtkImplicitBoolean) to\ncreate elaborate implicit functions.  vtkImplicitBoolean is",
    " a\nconcrete implementation of vtkImplicitFunction.\n\nThe operators work as follows. The VTK_UNION operator takes the\nminimum value of all implicit functions. The VTK_INTERSECTION\noperator takes the maximum value of all implicit functions. The\nVTK_DIFFERENCE operator subtracts the 2nd through last implicit\nfunctions from the first. The VTK_UNION_OF_MAGNITUDES takes the\nminimum absolute value of the ",
    "implicit functions.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImplicitBoolean(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImplicitBooleanNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImplicitBoolean", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_INTERSECTION", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_DIFFERENCE", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_UNION_OF_MAGNITUDES", o) != 0)
    {
    Py_DECREF(o);
    }

}

