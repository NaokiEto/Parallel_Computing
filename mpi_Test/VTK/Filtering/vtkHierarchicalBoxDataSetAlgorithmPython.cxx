// python wrapper for vtkHierarchicalBoxDataSetAlgorithm
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
#include "vtkHierarchicalBoxDataSetAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkHierarchicalBoxDataSetAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkHierarchicalBoxDataSetAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkHierarchicalBoxDataSetAlgorithm_Doc();


static PyObject *
PyvtkHierarchicalBoxDataSetAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSetAlgorithm *op = static_cast<vtkHierarchicalBoxDataSetAlgorithm *>(vp);

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
      tempr = op->vtkHierarchicalBoxDataSetAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSetAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSetAlgorithm *op = static_cast<vtkHierarchicalBoxDataSetAlgorithm *>(vp);

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
      tempr = op->vtkHierarchicalBoxDataSetAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSetAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSetAlgorithm *op = static_cast<vtkHierarchicalBoxDataSetAlgorithm *>(vp);

  vtkHierarchicalBoxDataSetAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSetAlgorithm::NewInstance();
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
PyvtkHierarchicalBoxDataSetAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkHierarchicalBoxDataSetAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkHierarchicalBoxDataSetAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkHierarchicalBoxDataSetAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSetAlgorithm *op = static_cast<vtkHierarchicalBoxDataSetAlgorithm *>(vp);

  vtkHierarchicalBoxDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkHierarchicalBoxDataSetAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSetAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSetAlgorithm *op = static_cast<vtkHierarchicalBoxDataSetAlgorithm *>(vp);

  int temp0;
  vtkHierarchicalBoxDataSet *tempr;
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
      tempr = op->vtkHierarchicalBoxDataSetAlgorithm::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSetAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkHierarchicalBoxDataSetAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkHierarchicalBoxDataSetAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkHierarchicalBoxDataSetAlgorithm_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSetAlgorithm *op = static_cast<vtkHierarchicalBoxDataSetAlgorithm *>(vp);

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
      op->vtkHierarchicalBoxDataSetAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSetAlgorithm_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHierarchicalBoxDataSetAlgorithm *op = static_cast<vtkHierarchicalBoxDataSetAlgorithm *>(vp);

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
      op->vtkHierarchicalBoxDataSetAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkHierarchicalBoxDataSetAlgorithm_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkHierarchicalBoxDataSetAlgorithm_SetInput_s1(self, args);
    case 2:
      return PyvtkHierarchicalBoxDataSetAlgorithm_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}


static PyMethodDef PyvtkHierarchicalBoxDataSetAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkHierarchicalBoxDataSetAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkHierarchicalBoxDataSetAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkHierarchicalBoxDataSetAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkHierarchicalBoxDataSetAlgorithm\nC++: vtkHierarchicalBoxDataSetAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkHierarchicalBoxDataSetAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkHierarchicalBoxDataSetAlgorithm\nC++: vtkHierarchicalBoxDataSetAlgorithm *SafeDownCast(\n    vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkHierarchicalBoxDataSetAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkHierarchicalBoxDataSet\nC++: vtkHierarchicalBoxDataSet *GetOutput()\nV.GetOutput(int) -> vtkHierarchicalBoxDataSet\nC++: vtkHierarchicalBoxDataSet *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetInput", PyvtkHierarchicalBoxDataSetAlgorithm_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int, vtkDataObject *)\n\nSet an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline.\nNote that these methods support old-style pipeline connections.\nWhen writing new code you should use the more general\nvtkAlgorithm::SetInputConnection().  These methods transform the\ninput index to the input port index, not an index of a connection\nwithin a single port.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkHierarchicalBoxDataSetAlgorithm_StaticNew()
{
  return vtkHierarchicalBoxDataSetAlgorithm::New();
}

PyObject *PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkHierarchicalBoxDataSetAlgorithm_StaticNew,
    PyvtkHierarchicalBoxDataSetAlgorithm_Methods,
    "vtkHierarchicalBoxDataSetAlgorithm", modulename,
    NULL, NULL,
    PyvtkHierarchicalBoxDataSetAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkHierarchicalBoxDataSetAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkHierarchicalBoxDataSetAlgorithm - superclass for algorithms that\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "Algorithms that take any type of data object (including composite\ndataset) and produce a vtkHierarchicalBoxDataSet in the output can\nsubclass from this class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkHierarchicalBoxDataSetAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkHierarchicalBoxDataSetAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkHierarchicalBoxDataSetAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

