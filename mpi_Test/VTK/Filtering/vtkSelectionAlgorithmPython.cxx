// python wrapper for vtkSelectionAlgorithm
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
#include "vtkSelectionAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSelectionAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSelectionAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkSelectionAlgorithm_Doc();


static PyObject *
PyvtkSelectionAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionAlgorithm *op = static_cast<vtkSelectionAlgorithm *>(vp);

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
      tempr = op->vtkSelectionAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionAlgorithm *op = static_cast<vtkSelectionAlgorithm *>(vp);

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
      tempr = op->vtkSelectionAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionAlgorithm *op = static_cast<vtkSelectionAlgorithm *>(vp);

  vtkSelectionAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSelectionAlgorithm::NewInstance();
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
PyvtkSelectionAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSelectionAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSelectionAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSelectionAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionAlgorithm *op = static_cast<vtkSelectionAlgorithm *>(vp);

  vtkSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkSelectionAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelectionAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionAlgorithm *op = static_cast<vtkSelectionAlgorithm *>(vp);

  int temp0;
  vtkSelection *tempr;
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
      tempr = op->vtkSelectionAlgorithm::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkSelectionAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkSelectionAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkSelectionAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkSelectionAlgorithm_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionAlgorithm *op = static_cast<vtkSelectionAlgorithm *>(vp);

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
      op->vtkSelectionAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelectionAlgorithm_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionAlgorithm *op = static_cast<vtkSelectionAlgorithm *>(vp);

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
      op->vtkSelectionAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkSelectionAlgorithm_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkSelectionAlgorithm_SetInput_s1(self, args);
    case 2:
      return PyvtkSelectionAlgorithm_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}


static PyMethodDef PyvtkSelectionAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkSelectionAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSelectionAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSelectionAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSelectionAlgorithm\nC++: vtkSelectionAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSelectionAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSelectionAlgorithm\nC++: vtkSelectionAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkSelectionAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkSelection\nC++: vtkSelection *GetOutput()\nV.GetOutput(int) -> vtkSelection\nC++: vtkSelection *GetOutput(int index)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetInput", PyvtkSelectionAlgorithm_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *obj)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int index, vtkDataObject *obj)\n\nSet an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline.\nNote that these methods support old-style pipeline connections.\nWhen writing new code you should use the more general\nvtkAlgorithm::SetInputConnection().  These methods transform the\ninput index to the input port index, not an index of a connection\nwithin a single port.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSelectionAlgorithm_StaticNew()
{
  return vtkSelectionAlgorithm::New();
}

PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSelectionAlgorithm_StaticNew,
    PyvtkSelectionAlgorithm_Methods,
    "vtkSelectionAlgorithm", modulename,
    NULL, NULL,
    PyvtkSelectionAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSelectionAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkSelectionAlgorithm - Superclass for algorithms that produce only\nSelection as output\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkSelectionAlgorithm is a convenience class to make writing\nalgorithms easier. It is also designed to help transition old\nalgorithms to the new pipeline edgehitecture. There are some\nassumptions and defaults made by this class you should be aware of.\nThis class defaults such that your filter will have one input port\nand one output port. If that is not the case simply change it with\nSetNumberOfInp",
    "utPorts etc. See this class constructor for the\ndefault. This class also provides a FillInputPortInfo method that by\ndefault says that all inputs will be Selection. If that isn't the\ncase then please override this method in your subclass. This class\nbreaks out the downstream requests into separate functions such as\nExecuteData and ExecuteInformation.  For new algorithms you should\nimplement Reques",
    "tData( request, inputVec, outputVec) but for older\nfilters there is a default implementation that calls the old\nExecuteData(output) signature. For even older filters that don't\nimplement ExecuteData the default implementation calls the even older\nExecute() signature.\n\nThanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help i",
    "n developing\nthis class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSelectionAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSelectionAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSelectionAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

