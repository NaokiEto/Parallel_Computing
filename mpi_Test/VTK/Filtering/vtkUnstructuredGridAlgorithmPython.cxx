// python wrapper for vtkUnstructuredGridAlgorithm
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
#include "vtkUnstructuredGridAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkUnstructuredGridAlgorithm_Doc();


static PyObject *
PyvtkUnstructuredGridAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

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
      tempr = op->vtkUnstructuredGridAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

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
      tempr = op->vtkUnstructuredGridAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

  vtkUnstructuredGridAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridAlgorithm::NewInstance();
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
PyvtkUnstructuredGridAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUnstructuredGridAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUnstructuredGridAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkUnstructuredGridAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

  int temp0;
  vtkUnstructuredGrid *tempr;
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
      tempr = op->vtkUnstructuredGridAlgorithm::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkUnstructuredGridAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkUnstructuredGridAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGridAlgorithm_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

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
      op->vtkUnstructuredGridAlgorithm::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridAlgorithm_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

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
      tempr = op->vtkUnstructuredGridAlgorithm::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridAlgorithm_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

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
      tempr = op->vtkUnstructuredGridAlgorithm::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridAlgorithm_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUnstructuredGridAlgorithm_GetInput_s1(self, args);
    case 0:
      return PyvtkUnstructuredGridAlgorithm_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGridAlgorithm_GetUnstructuredGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

  int temp0;
  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnstructuredGridInput(temp0);
      }
    else
      {
      tempr = op->vtkUnstructuredGridAlgorithm::GetUnstructuredGridInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridAlgorithm_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

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
      op->vtkUnstructuredGridAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridAlgorithm_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

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
      op->vtkUnstructuredGridAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridAlgorithm_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUnstructuredGridAlgorithm_SetInput_s1(self, args);
    case 2:
      return PyvtkUnstructuredGridAlgorithm_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGridAlgorithm_AddInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

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
      op->vtkUnstructuredGridAlgorithm::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridAlgorithm_AddInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridAlgorithm *op = static_cast<vtkUnstructuredGridAlgorithm *>(vp);

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
      op->vtkUnstructuredGridAlgorithm::AddInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridAlgorithm_AddInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkUnstructuredGridAlgorithm_AddInput_s1(self, args);
    case 2:
      return PyvtkUnstructuredGridAlgorithm_AddInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInput");
  return NULL;
}


static PyMethodDef PyvtkUnstructuredGridAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridAlgorithm\nC++: vtkUnstructuredGridAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUnstructuredGridAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUnstructuredGridAlgorithm\nC++: vtkUnstructuredGridAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkUnstructuredGridAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetOutput", PyvtkUnstructuredGridAlgorithm_SetOutput, 1,
   (char*)"V.SetOutput(vtkDataObject)\nC++: virtual void SetOutput(vtkDataObject *d)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"GetInput", PyvtkUnstructuredGridAlgorithm_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int port)\nV.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\n"},
  {(char*)"GetUnstructuredGridInput", PyvtkUnstructuredGridAlgorithm_GetUnstructuredGridInput, 1,
   (char*)"V.GetUnstructuredGridInput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridInput(int port)\n\n"},
  {(char*)"SetInput", PyvtkUnstructuredGridAlgorithm_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int, vtkDataObject *)\n\nSet an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline.\nNote that these methods support old-style pipeline connections.\nWhen writing new code you should use the more general\nvtkAlgorithm::SetInputConnection().  These methods transform the\ninput index to the input port index, not an index of a connection\nwithin a single port.\n"},
  {(char*)"AddInput", PyvtkUnstructuredGridAlgorithm_AddInput, 1,
   (char*)"V.AddInput(vtkDataObject)\nC++: void AddInput(vtkDataObject *)\nV.AddInput(int, vtkDataObject)\nC++: void AddInput(int, vtkDataObject *)\n\nAdd an input of this algorithm.  Note that these methods support\nold-style pipeline connections.  When writing new code you should\nuse the more general vtkAlgorithm::AddInputConnection().  See\nSetInput() for details.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUnstructuredGridAlgorithm_StaticNew()
{
  return vtkUnstructuredGridAlgorithm::New();
}

PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUnstructuredGridAlgorithm_StaticNew,
    PyvtkUnstructuredGridAlgorithm_Methods,
    "vtkUnstructuredGridAlgorithm", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridAlgorithm - Superclass for algorithms that produce\nonly unstructured grid as output\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

