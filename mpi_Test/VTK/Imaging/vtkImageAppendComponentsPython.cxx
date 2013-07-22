// python wrapper for vtkImageAppendComponents
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
#include "vtkImageAppendComponents.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageAppendComponents(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageAppendComponents(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageAppendComponentsNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageAppendComponentsNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageAppendComponents_Doc();


static PyObject *
PyvtkImageAppendComponents_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppendComponents *op = static_cast<vtkImageAppendComponents *>(vp);

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
      tempr = op->vtkImageAppendComponents::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppendComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppendComponents *op = static_cast<vtkImageAppendComponents *>(vp);

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
      tempr = op->vtkImageAppendComponents::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppendComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppendComponents *op = static_cast<vtkImageAppendComponents *>(vp);

  vtkImageAppendComponents *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageAppendComponents::NewInstance();
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
PyvtkImageAppendComponents_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageAppendComponents *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageAppendComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppendComponents_ReplaceNthInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceNthInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppendComponents *op = static_cast<vtkImageAppendComponents *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
    {
    if (ap.IsBound())
      {
      op->ReplaceNthInputConnection(temp0, temp1);
      }
    else
      {
      op->vtkImageAppendComponents::ReplaceNthInputConnection(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageAppendComponents_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppendComponents *op = static_cast<vtkImageAppendComponents *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkImageAppendComponents::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAppendComponents_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppendComponents *op = static_cast<vtkImageAppendComponents *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkImageAppendComponents::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkImageAppendComponents_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 2:
      return PyvtkImageAppendComponents_SetInput_s1(self, args);
    case 1:
      return PyvtkImageAppendComponents_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkImageAppendComponents_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppendComponents *op = static_cast<vtkImageAppendComponents *>(vp);

  int temp0;
  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput(temp0);
      }
    else
      {
      tempr = op->vtkImageAppendComponents::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageAppendComponents_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppendComponents *op = static_cast<vtkImageAppendComponents *>(vp);

  vtkDataObject *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkImageAppendComponents::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageAppendComponents_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkImageAppendComponents_GetInput_s1(self, args);
    case 0:
      return PyvtkImageAppendComponents_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkImageAppendComponents_GetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAppendComponents *op = static_cast<vtkImageAppendComponents *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfInputs();
      }
    else
      {
      tempr = op->vtkImageAppendComponents::GetNumberOfInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageAppendComponents_Methods[] = {
  {(char*)"GetClassName", PyvtkImageAppendComponents_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageAppendComponents_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageAppendComponents_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageAppendComponents\nC++: vtkImageAppendComponents *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageAppendComponents_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageAppendComponents\nC++: vtkImageAppendComponents *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"ReplaceNthInputConnection", PyvtkImageAppendComponents_ReplaceNthInputConnection, 1,
   (char*)"V.ReplaceNthInputConnection(int, vtkAlgorithmOutput)\nC++: virtual void ReplaceNthInputConnection(int idx,\n    vtkAlgorithmOutput *input)\n\nReplace one of the input connections with a new input.  You can\nonly replace input connections that you previously created with\nAddInputConnection() or, in the case of the first input, with\nSetInputConnection().\n"},
  {(char*)"SetInput", PyvtkImageAppendComponents_SetInput, 1,
   (char*)"V.SetInput(int, vtkDataObject)\nC++: void SetInput(int num, vtkDataObject *input)\nV.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *input)\n\nSet an Input of this filter.  This method is only for support of\nold-style pipeline connections.  When writing new code you should\nuse SetInputConnection(), AddInputConnection(), and\nReplaceNthInputConnection() instead.\n"},
  {(char*)"GetInput", PyvtkImageAppendComponents_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int num)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet one input to this filter. This method is only for support of\nold-style pipeline connections.  When writing new code you should\nuse vtkAlgorithm::GetInputConnection(0, num).\n"},
  {(char*)"GetNumberOfInputs", PyvtkImageAppendComponents_GetNumberOfInputs, 1,
   (char*)"V.GetNumberOfInputs() -> int\nC++: int GetNumberOfInputs()\n\nGet the number of inputs to this filter. This method is only for\nsupport of old-style pipeline connections.  When writing new code\nyou should use vtkAlgorithm::GetNumberOfInputConnections(0).\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageAppendComponents_StaticNew()
{
  return vtkImageAppendComponents::New();
}

PyObject *PyVTKClass_vtkImageAppendComponentsNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageAppendComponents_StaticNew,
    PyvtkImageAppendComponents_Methods,
    "vtkImageAppendComponents", modulename,
    NULL, NULL,
    PyvtkImageAppendComponents_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageAppendComponents_Doc()
{
  static const char *docstring[] = {
    "vtkImageAppendComponents - Collects components from two inputs into\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageAppendComponents takes the components from two inputs and\nmerges them into one output. If Input1 has M components, and Input2\nhas N components, the output will have M+N components with input1\ncomponents coming first.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageAppendComponents(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageAppendComponentsNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageAppendComponents", o) != 0)
    {
    Py_DECREF(o);
    }

}

