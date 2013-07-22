// python wrapper for vtkGraphAlgorithm
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
#include "vtkGraphAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGraphAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGraphAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkGraphAlgorithm_Doc();


static PyObject *
PyvtkGraphAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAlgorithm *op = static_cast<vtkGraphAlgorithm *>(vp);

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
      tempr = op->vtkGraphAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAlgorithm *op = static_cast<vtkGraphAlgorithm *>(vp);

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
      tempr = op->vtkGraphAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAlgorithm *op = static_cast<vtkGraphAlgorithm *>(vp);

  vtkGraphAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGraphAlgorithm::NewInstance();
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
PyvtkGraphAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGraphAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGraphAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGraphAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAlgorithm *op = static_cast<vtkGraphAlgorithm *>(vp);

  vtkGraph *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkGraphAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGraphAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAlgorithm *op = static_cast<vtkGraphAlgorithm *>(vp);

  int temp0;
  vtkGraph *tempr;
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
      tempr = op->vtkGraphAlgorithm::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkGraphAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkGraphAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkGraphAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkGraphAlgorithm_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAlgorithm *op = static_cast<vtkGraphAlgorithm *>(vp);

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
      op->vtkGraphAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraphAlgorithm_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphAlgorithm *op = static_cast<vtkGraphAlgorithm *>(vp);

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
      op->vtkGraphAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkGraphAlgorithm_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkGraphAlgorithm_SetInput_s1(self, args);
    case 2:
      return PyvtkGraphAlgorithm_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}


static PyMethodDef PyvtkGraphAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkGraphAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGraphAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGraphAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGraphAlgorithm\nC++: vtkGraphAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGraphAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGraphAlgorithm\nC++: vtkGraphAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkGraphAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkGraph\nC++: vtkGraph *GetOutput()\nV.GetOutput(int) -> vtkGraph\nC++: vtkGraph *GetOutput(int index)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetInput", PyvtkGraphAlgorithm_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *obj)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int index, vtkDataObject *obj)\n\nSet an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline.\nNote that these methods support old-style pipeline connections.\nWhen writing new code you should use the more general\nvtkAlgorithm::SetInputConnection().  These methods transform the\ninput index to the input port index, not an index of a connection\nwithin a single port.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGraphAlgorithm_StaticNew()
{
  return vtkGraphAlgorithm::New();
}

PyObject *PyVTKClass_vtkGraphAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGraphAlgorithm_StaticNew,
    PyvtkGraphAlgorithm_Methods,
    "vtkGraphAlgorithm", modulename,
    NULL, NULL,
    PyvtkGraphAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkGraphAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkGraphAlgorithm - Superclass for algorithms that produce only graph\nas output\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkGraphAlgorithm is a convenience class to make writing algorithms\neasier. It is also designed to help transition old algorithms to the\nnew pipeline architecture. There are some assumptions and defaults\nmade by this class you should be aware of. This class defaults such\nthat your filter will have one input port and one output port. If\nthat is not the case simply change it with SetNumberOfInputPor",
    "ts etc.\nSee this class constructor for the default. This class also provides\na FillInputPortInfo method that by default says that all inputs will\nbe Graph. If that isn't the case then please override this method in\nyour subclass. This class breaks out the downstream requests into\nseparate functions such as ExecuteData and ExecuteInformation.  For\nnew algorithms you should implement RequestData( re",
    "quest, inputVec,\noutputVec) but for older filters there is a default implementation\nthat calls the old ExecuteData(output) signature. For even older\nfilters that don't implement ExecuteData the default implementation\ncalls the even older Execute() signature.\n\nThanks:\n\nThanks to Patricia Crossno, Ken Moreland, Andrew Wilson and Brian\nWylie from Sandia National Laboratories for their help in develop",
    "ing\nthis class.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGraphAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGraphAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGraphAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

