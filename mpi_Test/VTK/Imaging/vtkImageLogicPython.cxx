// python wrapper for vtkImageLogic
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
#include "vtkImageLogic.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageLogic(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageLogic(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageLogicNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageLogicNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageLogic_Doc();


static PyObject *
PyvtkImageLogic_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

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
      tempr = op->vtkImageLogic::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

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
      tempr = op->vtkImageLogic::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  vtkImageLogic *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageLogic::NewInstance();
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
PyvtkImageLogic_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageLogic *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOperation(temp0);
      }
    else
      {
      op->vtkImageLogic::SetOperation(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOperation();
      }
    else
      {
      tempr = op->vtkImageLogic::GetOperation();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToAnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToAnd();
      }
    else
      {
      op->vtkImageLogic::SetOperationToAnd();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToOr(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToOr");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToOr();
      }
    else
      {
      op->vtkImageLogic::SetOperationToOr();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToXor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToXor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToXor();
      }
    else
      {
      op->vtkImageLogic::SetOperationToXor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToNand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToNand();
      }
    else
      {
      op->vtkImageLogic::SetOperationToNand();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToNor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToNor();
      }
    else
      {
      op->vtkImageLogic::SetOperationToNor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToNot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SetOperationToNot();
      }
    else
      {
      op->vtkImageLogic::SetOperationToNot();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOutputTrueValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTrueValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputTrueValue(temp0);
      }
    else
      {
      op->vtkImageLogic::SetOutputTrueValue(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_GetOutputTrueValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTrueValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputTrueValue();
      }
    else
      {
      tempr = op->vtkImageLogic::GetOutputTrueValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_SetInput1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput1(temp0);
      }
    else
      {
      op->vtkImageLogic::SetInput1(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageLogic_SetInput2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput2(temp0);
      }
    else
      {
      op->vtkImageLogic::SetInput2(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkImageLogic_Methods[] = {
  {(char*)"GetClassName", PyvtkImageLogic_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageLogic_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageLogic_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageLogic\nC++: vtkImageLogic *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageLogic_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageLogic\nC++: vtkImageLogic *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetOperation", PyvtkImageLogic_SetOperation, 1,
   (char*)"V.SetOperation(int)\nC++: void SetOperation(int a)\n\nSet/Get the Operation to perform.\n"},
  {(char*)"GetOperation", PyvtkImageLogic_GetOperation, 1,
   (char*)"V.GetOperation() -> int\nC++: int GetOperation()\n\nSet/Get the Operation to perform.\n"},
  {(char*)"SetOperationToAnd", PyvtkImageLogic_SetOperationToAnd, 1,
   (char*)"V.SetOperationToAnd()\nC++: void SetOperationToAnd()\n\nSet/Get the Operation to perform.\n"},
  {(char*)"SetOperationToOr", PyvtkImageLogic_SetOperationToOr, 1,
   (char*)"V.SetOperationToOr()\nC++: void SetOperationToOr()\n\nSet/Get the Operation to perform.\n"},
  {(char*)"SetOperationToXor", PyvtkImageLogic_SetOperationToXor, 1,
   (char*)"V.SetOperationToXor()\nC++: void SetOperationToXor()\n\nSet/Get the Operation to perform.\n"},
  {(char*)"SetOperationToNand", PyvtkImageLogic_SetOperationToNand, 1,
   (char*)"V.SetOperationToNand()\nC++: void SetOperationToNand()\n\nSet/Get the Operation to perform.\n"},
  {(char*)"SetOperationToNor", PyvtkImageLogic_SetOperationToNor, 1,
   (char*)"V.SetOperationToNor()\nC++: void SetOperationToNor()\n\nSet/Get the Operation to perform.\n"},
  {(char*)"SetOperationToNot", PyvtkImageLogic_SetOperationToNot, 1,
   (char*)"V.SetOperationToNot()\nC++: void SetOperationToNot()\n\nSet/Get the Operation to perform.\n"},
  {(char*)"SetOutputTrueValue", PyvtkImageLogic_SetOutputTrueValue, 1,
   (char*)"V.SetOutputTrueValue(float)\nC++: void SetOutputTrueValue(double a)\n\nSet the value to use for true in the output.\n"},
  {(char*)"GetOutputTrueValue", PyvtkImageLogic_GetOutputTrueValue, 1,
   (char*)"V.GetOutputTrueValue() -> float\nC++: double GetOutputTrueValue()\n\nSet the value to use for true in the output.\n"},
  {(char*)"SetInput1", PyvtkImageLogic_SetInput1, 1,
   (char*)"V.SetInput1(vtkDataObject)\nC++: virtual void SetInput1(vtkDataObject *input)\n\nSet the Input1 of this filter.\n"},
  {(char*)"SetInput2", PyvtkImageLogic_SetInput2, 1,
   (char*)"V.SetInput2(vtkDataObject)\nC++: virtual void SetInput2(vtkDataObject *input)\n\nSet the Input2 of this filter.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageLogic_StaticNew()
{
  return vtkImageLogic::New();
}

PyObject *PyVTKClass_vtkImageLogicNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageLogic_StaticNew,
    PyvtkImageLogic_Methods,
    "vtkImageLogic", modulename,
    NULL, NULL,
    PyvtkImageLogic_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageLogic_Doc()
{
  static const char *docstring[] = {
    "vtkImageLogic - And, or, xor, nand, nor, not.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageLogic implements basic logic operations. SetOperation is used\nto select the filter's behavior. The filter can take two or one\ninput. Inputs must have the same type.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageLogic(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageLogicNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageLogic", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(0);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_AND", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(1);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_OR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(2);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_XOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(3);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_NAND", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(4);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_NOR", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(5);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_NOT", o) != 0)
    {
    Py_DECREF(o);
    }

  o = PyInt_FromLong(6);
  if (o && PyDict_SetItemString(dict, (char *)"VTK_NOP", o) != 0)
    {
    Py_DECREF(o);
    }

}

