// python wrapper for vtkMultiBlockDataSetAlgorithm
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
#include "vtkMultiBlockDataSetAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMultiBlockDataSetAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMultiBlockDataSetAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkMultiBlockDataSetAlgorithm_Doc();


static PyObject *
PyvtkMultiBlockDataSetAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

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
      tempr = op->vtkMultiBlockDataSetAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSetAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

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
      tempr = op->vtkMultiBlockDataSetAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSetAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

  vtkMultiBlockDataSetAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMultiBlockDataSetAlgorithm::NewInstance();
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
PyvtkMultiBlockDataSetAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMultiBlockDataSetAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMultiBlockDataSetAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiBlockDataSetAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

  vtkMultiBlockDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkMultiBlockDataSetAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSetAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

  int temp0;
  vtkMultiBlockDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkMultiBlockDataSetAlgorithm::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSetAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkMultiBlockDataSetAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkMultiBlockDataSetAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkMultiBlockDataSetAlgorithm_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

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
      op->vtkMultiBlockDataSetAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSetAlgorithm_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiBlockDataSetAlgorithm *op = static_cast<vtkMultiBlockDataSetAlgorithm *>(vp);

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
      op->vtkMultiBlockDataSetAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkMultiBlockDataSetAlgorithm_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkMultiBlockDataSetAlgorithm_SetInput_s1(self, args);
    case 2:
      return PyvtkMultiBlockDataSetAlgorithm_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}


static PyMethodDef PyvtkMultiBlockDataSetAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiBlockDataSetAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiBlockDataSetAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiBlockDataSetAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMultiBlockDataSetAlgorithm\nC++: vtkMultiBlockDataSetAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiBlockDataSetAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiBlockDataSetAlgorithm\nC++: vtkMultiBlockDataSetAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkMultiBlockDataSetAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *GetOutput()\nV.GetOutput(int) -> vtkMultiBlockDataSet\nC++: vtkMultiBlockDataSet *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetInput", PyvtkMultiBlockDataSetAlgorithm_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int, vtkDataObject *)\n\nSet an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline.\nNote that these methods support old-style pipeline connections.\nWhen writing new code you should use the more general\nvtkAlgorithm::SetInputConnection().  These methods transform the\ninput index to the input port index, not an index of a connection\nwithin a single port.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiBlockDataSetAlgorithm_StaticNew()
{
  return vtkMultiBlockDataSetAlgorithm::New();
}

PyObject *PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiBlockDataSetAlgorithm_StaticNew,
    PyvtkMultiBlockDataSetAlgorithm_Methods,
    "vtkMultiBlockDataSetAlgorithm", modulename,
    NULL, NULL,
    PyvtkMultiBlockDataSetAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkMultiBlockDataSetAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkMultiBlockDataSetAlgorithm - Superclass for algorithms that\nproduce only vtkMultiBlockDataSet as output\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "Algorithms that take any type of data object (including composite\ndataset) and produce a vtkMultiBlockDataSet in the output can\nsubclass from this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiBlockDataSetAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiBlockDataSetAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiBlockDataSetAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

