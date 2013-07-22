// python wrapper for vtkDSPFilterDefinition
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
#include "vtkDSPFilterDefinition.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDSPFilterDefinition(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDSPFilterDefinition(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDSPFilterDefinitionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDSPFilterDefinitionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkDSPFilterDefinition_Doc();


static PyObject *
PyvtkDSPFilterDefinition_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

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
      tempr = op->vtkDSPFilterDefinition::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

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
      tempr = op->vtkDSPFilterDefinition::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  vtkDSPFilterDefinition *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDSPFilterDefinition::NewInstance();
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
PyvtkDSPFilterDefinition_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDSPFilterDefinition *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDSPFilterDefinition::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  vtkDSPFilterDefinition *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDSPFilterDefinition"))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0);
      }
    else
      {
      op->vtkDSPFilterDefinition::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkDSPFilterDefinition::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_IsThisInputVariableInstanceNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsThisInputVariableInstanceNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  int temp1;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->IsThisInputVariableInstanceNeeded(temp0, temp1);
      }
    else
      {
      tempr = op->vtkDSPFilterDefinition::IsThisInputVariableInstanceNeeded(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_PushBackNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushBackNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PushBackNumeratorWeight(temp0);
      }
    else
      {
      op->vtkDSPFilterDefinition::PushBackNumeratorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_PushBackDenominatorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushBackDenominatorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PushBackDenominatorWeight(temp0);
      }
    else
      {
      op->vtkDSPFilterDefinition::PushBackDenominatorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_PushBackForwardNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushBackForwardNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->PushBackForwardNumeratorWeight(temp0);
      }
    else
      {
      op->vtkDSPFilterDefinition::PushBackForwardNumeratorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_SetInputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetInputVariableName(temp0);
      }
    else
      {
      op->vtkDSPFilterDefinition::SetInputVariableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_SetOutputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOutputVariableName(temp0);
      }
    else
      {
      op->vtkDSPFilterDefinition::SetOutputVariableName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetInputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputVariableName();
      }
    else
      {
      tempr = op->vtkDSPFilterDefinition::GetInputVariableName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetOutputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutputVariableName();
      }
    else
      {
      tempr = op->vtkDSPFilterDefinition::GetOutputVariableName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumNumeratorWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumNumeratorWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumNumeratorWeights();
      }
    else
      {
      tempr = op->vtkDSPFilterDefinition::GetNumNumeratorWeights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumDenominatorWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumDenominatorWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumDenominatorWeights();
      }
    else
      {
      tempr = op->vtkDSPFilterDefinition::GetNumDenominatorWeights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumForwardNumeratorWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumForwardNumeratorWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumForwardNumeratorWeights();
      }
    else
      {
      tempr = op->vtkDSPFilterDefinition::GetNumForwardNumeratorWeights();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumeratorWeight(temp0);
      }
    else
      {
      tempr = op->vtkDSPFilterDefinition::GetNumeratorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetDenominatorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDenominatorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDenominatorWeight(temp0);
      }
    else
      {
      tempr = op->vtkDSPFilterDefinition::GetDenominatorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetForwardNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForwardNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetForwardNumeratorWeight(temp0);
      }
    else
      {
      tempr = op->vtkDSPFilterDefinition::GetForwardNumeratorWeight(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDSPFilterDefinition_Methods[] = {
  {(char*)"GetClassName", PyvtkDSPFilterDefinition_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDSPFilterDefinition_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDSPFilterDefinition_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDSPFilterDefinition\nC++: vtkDSPFilterDefinition *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDSPFilterDefinition_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDSPFilterDefinition\nC++: vtkDSPFilterDefinition *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Copy", PyvtkDSPFilterDefinition_Copy, 1,
   (char*)"V.Copy(vtkDSPFilterDefinition)\nC++: void Copy(vtkDSPFilterDefinition *other)\n\n"},
  {(char*)"Clear", PyvtkDSPFilterDefinition_Clear, 1,
   (char*)"V.Clear()\nC++: void Clear()\n\n"},
  {(char*)"IsThisInputVariableInstanceNeeded", PyvtkDSPFilterDefinition_IsThisInputVariableInstanceNeeded, 1,
   (char*)"V.IsThisInputVariableInstanceNeeded(int, int) -> bool\nC++: bool IsThisInputVariableInstanceNeeded(int a_timestep,\n    int a_outputTimestep)\n\n"},
  {(char*)"PushBackNumeratorWeight", PyvtkDSPFilterDefinition_PushBackNumeratorWeight, 1,
   (char*)"V.PushBackNumeratorWeight(float)\nC++: void PushBackNumeratorWeight(double a_value)\n\n"},
  {(char*)"PushBackDenominatorWeight", PyvtkDSPFilterDefinition_PushBackDenominatorWeight, 1,
   (char*)"V.PushBackDenominatorWeight(float)\nC++: void PushBackDenominatorWeight(double a_value)\n\n"},
  {(char*)"PushBackForwardNumeratorWeight", PyvtkDSPFilterDefinition_PushBackForwardNumeratorWeight, 1,
   (char*)"V.PushBackForwardNumeratorWeight(float)\nC++: void PushBackForwardNumeratorWeight(double a_value)\n\n"},
  {(char*)"SetInputVariableName", PyvtkDSPFilterDefinition_SetInputVariableName, 1,
   (char*)"V.SetInputVariableName(string)\nC++: void SetInputVariableName(char *a_value)\n\n"},
  {(char*)"SetOutputVariableName", PyvtkDSPFilterDefinition_SetOutputVariableName, 1,
   (char*)"V.SetOutputVariableName(string)\nC++: void SetOutputVariableName(char *a_value)\n\n"},
  {(char*)"GetInputVariableName", PyvtkDSPFilterDefinition_GetInputVariableName, 1,
   (char*)"V.GetInputVariableName() -> string\nC++: const char *GetInputVariableName()\n\n"},
  {(char*)"GetOutputVariableName", PyvtkDSPFilterDefinition_GetOutputVariableName, 1,
   (char*)"V.GetOutputVariableName() -> string\nC++: const char *GetOutputVariableName()\n\n"},
  {(char*)"GetNumNumeratorWeights", PyvtkDSPFilterDefinition_GetNumNumeratorWeights, 1,
   (char*)"V.GetNumNumeratorWeights() -> int\nC++: int GetNumNumeratorWeights()\n\n"},
  {(char*)"GetNumDenominatorWeights", PyvtkDSPFilterDefinition_GetNumDenominatorWeights, 1,
   (char*)"V.GetNumDenominatorWeights() -> int\nC++: int GetNumDenominatorWeights()\n\n"},
  {(char*)"GetNumForwardNumeratorWeights", PyvtkDSPFilterDefinition_GetNumForwardNumeratorWeights, 1,
   (char*)"V.GetNumForwardNumeratorWeights() -> int\nC++: int GetNumForwardNumeratorWeights()\n\n"},
  {(char*)"GetNumeratorWeight", PyvtkDSPFilterDefinition_GetNumeratorWeight, 1,
   (char*)"V.GetNumeratorWeight(int) -> float\nC++: double GetNumeratorWeight(int a_which)\n\n"},
  {(char*)"GetDenominatorWeight", PyvtkDSPFilterDefinition_GetDenominatorWeight, 1,
   (char*)"V.GetDenominatorWeight(int) -> float\nC++: double GetDenominatorWeight(int a_which)\n\n"},
  {(char*)"GetForwardNumeratorWeight", PyvtkDSPFilterDefinition_GetForwardNumeratorWeight, 1,
   (char*)"V.GetForwardNumeratorWeight(int) -> float\nC++: double GetForwardNumeratorWeight(int a_which)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDSPFilterDefinition_StaticNew()
{
  return vtkDSPFilterDefinition::New();
}

PyObject *PyVTKClass_vtkDSPFilterDefinitionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDSPFilterDefinition_StaticNew,
    PyvtkDSPFilterDefinition_Methods,
    "vtkDSPFilterDefinition", modulename,
    NULL, NULL,
    PyvtkDSPFilterDefinition_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkDSPFilterDefinition_Doc()
{
  static const char *docstring[] = {
    "vtkDSPFilterDefinition - used by the Exodus readers\n\n",
    "Superclass: vtkObject\n\n",
    "vtkDSPFilterDefinition is used by vtkExodusReader, vtkExodusIIReader\nand vtkPExodusReader to do temporal smoothing of data\n\nSee Also:\n\nvtkDSPFilterGroup vtkExodusReader vtkExodusIIReader vtkPExodusReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDSPFilterDefinition(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDSPFilterDefinitionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDSPFilterDefinition", o) != 0)
    {
    Py_DECREF(o);
    }

}

