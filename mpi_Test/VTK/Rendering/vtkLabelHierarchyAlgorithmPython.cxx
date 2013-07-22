// python wrapper for vtkLabelHierarchyAlgorithm
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
#include "vtkLabelHierarchyAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkLabelHierarchyAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkLabelHierarchyAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkLabelHierarchyAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkLabelHierarchyAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkLabelHierarchyAlgorithm_Doc();


static PyObject *
PyvtkLabelHierarchyAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

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
      tempr = op->vtkLabelHierarchyAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

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
      tempr = op->vtkLabelHierarchyAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  vtkLabelHierarchyAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkLabelHierarchyAlgorithm::NewInstance();
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
PyvtkLabelHierarchyAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkLabelHierarchyAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkLabelHierarchyAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  vtkLabelHierarchy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkLabelHierarchyAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  int temp0;
  vtkLabelHierarchy *tempr;
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
      tempr = op->vtkLabelHierarchyAlgorithm::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLabelHierarchyAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkLabelHierarchyAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkLabelHierarchyAlgorithm_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkLabelHierarchyAlgorithm::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyAlgorithm_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

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
      tempr = op->vtkLabelHierarchyAlgorithm::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

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
      tempr = op->vtkLabelHierarchyAlgorithm::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkLabelHierarchyAlgorithm_GetInput_s1(self, args);
    case 1:
      return PyvtkLabelHierarchyAlgorithm_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkLabelHierarchyAlgorithm_GetLabelHierarchyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelHierarchyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  int temp0;
  vtkLabelHierarchy *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLabelHierarchyInput(temp0);
      }
    else
      {
      tempr = op->vtkLabelHierarchyAlgorithm::GetLabelHierarchyInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkLabelHierarchyAlgorithm_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

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
      op->vtkLabelHierarchyAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

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
      op->vtkLabelHierarchyAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLabelHierarchyAlgorithm_SetInput_s1(self, args);
    case 2:
      return PyvtkLabelHierarchyAlgorithm_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkLabelHierarchyAlgorithm_AddInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  vtkDataObject *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkLabelHierarchyAlgorithm::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_AddInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelHierarchyAlgorithm *op = static_cast<vtkLabelHierarchyAlgorithm *>(vp);

  int temp0;
  vtkDataObject *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0, temp1);
      }
    else
      {
      op->vtkLabelHierarchyAlgorithm::AddInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkLabelHierarchyAlgorithm_AddInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkLabelHierarchyAlgorithm_AddInput_s1(self, args);
    case 2:
      return PyvtkLabelHierarchyAlgorithm_AddInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInput");
  return NULL;
}


static PyMethodDef PyvtkLabelHierarchyAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkLabelHierarchyAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkLabelHierarchyAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkLabelHierarchyAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkLabelHierarchyAlgorithm\nC++: vtkLabelHierarchyAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkLabelHierarchyAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkLabelHierarchyAlgorithm\nC++: vtkLabelHierarchyAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkLabelHierarchyAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *GetOutput()\nV.GetOutput(int) -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetOutput", PyvtkLabelHierarchyAlgorithm_SetOutput, 1,
   (char*)"V.SetOutput(vtkDataObject)\nC++: virtual void SetOutput(vtkDataObject *d)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"GetInput", PyvtkLabelHierarchyAlgorithm_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\nV.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int port)\n\n"},
  {(char*)"GetLabelHierarchyInput", PyvtkLabelHierarchyAlgorithm_GetLabelHierarchyInput, 1,
   (char*)"V.GetLabelHierarchyInput(int) -> vtkLabelHierarchy\nC++: vtkLabelHierarchy *GetLabelHierarchyInput(int port)\n\n"},
  {(char*)"SetInput", PyvtkLabelHierarchyAlgorithm_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int, vtkDataObject *)\n\nSet an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline.\nNote that these methods support old-style pipeline connections.\nWhen writing new code you should use the more general\nvtkAlgorithm::SetInputConnection().  These methods transform the\ninput index to the input port index, not an index of a connection\nwithin a single port.\n"},
  {(char*)"AddInput", PyvtkLabelHierarchyAlgorithm_AddInput, 1,
   (char*)"V.AddInput(vtkDataObject)\nC++: void AddInput(vtkDataObject *)\nV.AddInput(int, vtkDataObject)\nC++: void AddInput(int, vtkDataObject *)\n\nAdd an input of this algorithm.  Note that these methods support\nold-style pipeline connections.  When writing new code you should\nuse the more general vtkAlgorithm::AddInputConnection().  See\nSetInput() for details.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkLabelHierarchyAlgorithm_StaticNew()
{
  return vtkLabelHierarchyAlgorithm::New();
}

PyObject *PyVTKClass_vtkLabelHierarchyAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkLabelHierarchyAlgorithm_StaticNew,
    PyvtkLabelHierarchyAlgorithm_Methods,
    "vtkLabelHierarchyAlgorithm", modulename,
    NULL, NULL,
    PyvtkLabelHierarchyAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkLabelHierarchyAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkLabelHierarchyAlgorithm - Superclass for algorithms that produce\nonly label hierarchies as output\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkLabelHierarchyAlgorithm is a convenience class to make writing\nalgorithms easier. It is also designed to help transition old\nalgorithms to the new pipeline architecture. There are some\nassumptions and defaults made by this class you should be aware of.\nThis class defaults such that your filter will have one input port\nand one output port. If that is not the case simply change it with\nSetNumberO",
    "fInputPorts etc. See this class constructor for the\ndefault. This class also provides a FillInputPortInfo method that by\ndefault says that all inputs will be DataObjects. If that isn't the\ncase then please override this method in your subclass. This class\nbreaks out the downstream requests into separate functions such as\nRequestData and RequestInformation.  You should implement\nRequestData( reques",
    "t, inputVec, outputVec) in subclasses.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkLabelHierarchyAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkLabelHierarchyAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkLabelHierarchyAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

