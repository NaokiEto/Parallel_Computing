// python wrapper for vtkUndirectedGraphAlgorithm
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
#include "vtkUndirectedGraphAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUndirectedGraphAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUndirectedGraphAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUndirectedGraphAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUndirectedGraphAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkUndirectedGraphAlgorithm_Doc();


static PyObject *
PyvtkUndirectedGraphAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraphAlgorithm *op = static_cast<vtkUndirectedGraphAlgorithm *>(vp);

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
      tempr = op->vtkUndirectedGraphAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndirectedGraphAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraphAlgorithm *op = static_cast<vtkUndirectedGraphAlgorithm *>(vp);

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
      tempr = op->vtkUndirectedGraphAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndirectedGraphAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraphAlgorithm *op = static_cast<vtkUndirectedGraphAlgorithm *>(vp);

  vtkUndirectedGraphAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUndirectedGraphAlgorithm::NewInstance();
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
PyvtkUndirectedGraphAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUndirectedGraphAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUndirectedGraphAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUndirectedGraphAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraphAlgorithm *op = static_cast<vtkUndirectedGraphAlgorithm *>(vp);

  vtkUndirectedGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkUndirectedGraphAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUndirectedGraphAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraphAlgorithm *op = static_cast<vtkUndirectedGraphAlgorithm *>(vp);

  int temp0;
  vtkUndirectedGraph *tempr;
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
      tempr = op->vtkUndirectedGraphAlgorithm::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUndirectedGraphAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkUndirectedGraphAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkUndirectedGraphAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkUndirectedGraphAlgorithm_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraphAlgorithm *op = static_cast<vtkUndirectedGraphAlgorithm *>(vp);

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
      op->vtkUndirectedGraphAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUndirectedGraphAlgorithm_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUndirectedGraphAlgorithm *op = static_cast<vtkUndirectedGraphAlgorithm *>(vp);

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
      op->vtkUndirectedGraphAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUndirectedGraphAlgorithm_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUndirectedGraphAlgorithm_SetInput_s1(self, args);
    case 2:
      return PyvtkUndirectedGraphAlgorithm_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}


static PyMethodDef PyvtkUndirectedGraphAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkUndirectedGraphAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUndirectedGraphAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUndirectedGraphAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUndirectedGraphAlgorithm\nC++: vtkUndirectedGraphAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUndirectedGraphAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUndirectedGraphAlgorithm\nC++: vtkUndirectedGraphAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkUndirectedGraphAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkUndirectedGraph\nC++: vtkUndirectedGraph *GetOutput()\nV.GetOutput(int) -> vtkUndirectedGraph\nC++: vtkUndirectedGraph *GetOutput(int index)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetInput", PyvtkUndirectedGraphAlgorithm_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *obj)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int index, vtkDataObject *obj)\n\nSet an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline.\nNote that these methods support old-style pipeline connections.\nWhen writing new code you should use the more general\nvtkAlgorithm::SetInputConnection().  These methods transform the\ninput index to the input port index, not an index of a connection\nwithin a single port.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUndirectedGraphAlgorithm_StaticNew()
{
  return vtkUndirectedGraphAlgorithm::New();
}

PyObject *PyVTKClass_vtkUndirectedGraphAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUndirectedGraphAlgorithm_StaticNew,
    PyvtkUndirectedGraphAlgorithm_Methods,
    "vtkUndirectedGraphAlgorithm", modulename,
    NULL, NULL,
    PyvtkUndirectedGraphAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkUndirectedGraphAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkUndirectedGraphAlgorithm - Superclass for algorithms that produce\nundirected graph as output\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkUndirectedGraphAlgorithm is a convenience class to make writing\nalgorithms easier. It is also designed to help transition old\nalgorithms to the new pipeline edgehitecture. There are some\nassumptions and defaults made by this class you should be aware of.\nThis class defaults such that your filter will have one input port\nand one output port. If that is not the case simply change it with\nSetNumbe",
    "rOfInputPorts etc. See this class constructor for the\ndefault. This class also provides a FillInputPortInfo method that by\ndefault says that all inputs will be Graph. If that isn't the case\nthen please override this method in your subclass. This class breaks\nout the downstream requests into separate functions such as\nExecuteData and ExecuteInformation.  For new algorithms you should\nimplement Requ",
    "estData( request, inputVec, outputVec) but for older\nfilters there is a default implementation that calls the old\nExecuteData(output) signature. For even older filters that don't\nimplement ExecuteData the default implementation calls the even older\nExecute() signature.\n\nThanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help",
    " in developing\nthis class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUndirectedGraphAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUndirectedGraphAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUndirectedGraphAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

