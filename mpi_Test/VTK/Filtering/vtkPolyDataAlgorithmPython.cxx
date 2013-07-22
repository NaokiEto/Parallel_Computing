// python wrapper for vtkPolyDataAlgorithm
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
#include "vtkPolyDataAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPolyDataAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPolyDataAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkPolyDataAlgorithm_Doc();


static PyObject *
PyvtkPolyDataAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

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
      tempr = op->vtkPolyDataAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

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
      tempr = op->vtkPolyDataAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

  vtkPolyDataAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPolyDataAlgorithm::NewInstance();
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
PyvtkPolyDataAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPolyDataAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPolyDataAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkPolyDataAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

  int temp0;
  vtkPolyData *tempr;
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
      tempr = op->vtkPolyDataAlgorithm::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPolyDataAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkPolyDataAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkPolyDataAlgorithm_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

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
      op->vtkPolyDataAlgorithm::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataAlgorithm_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

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
      tempr = op->vtkPolyDataAlgorithm::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataAlgorithm_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

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
      tempr = op->vtkPolyDataAlgorithm::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataAlgorithm_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPolyDataAlgorithm_GetInput_s1(self, args);
    case 1:
      return PyvtkPolyDataAlgorithm_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkPolyDataAlgorithm_GetPolyDataInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

  int temp0;
  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyDataInput(temp0);
      }
    else
      {
      tempr = op->vtkPolyDataAlgorithm::GetPolyDataInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPolyDataAlgorithm_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

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
      op->vtkPolyDataAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataAlgorithm_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

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
      op->vtkPolyDataAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataAlgorithm_SetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPolyDataAlgorithm_SetInput_s1(self, args);
    case 2:
      return PyvtkPolyDataAlgorithm_SetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkPolyDataAlgorithm_AddInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

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
      op->vtkPolyDataAlgorithm::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataAlgorithm_AddInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataAlgorithm *op = static_cast<vtkPolyDataAlgorithm *>(vp);

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
      op->vtkPolyDataAlgorithm::AddInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPolyDataAlgorithm_AddInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkPolyDataAlgorithm_AddInput_s1(self, args);
    case 2:
      return PyvtkPolyDataAlgorithm_AddInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInput");
  return NULL;
}


static PyMethodDef PyvtkPolyDataAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkPolyDataAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPolyDataAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPolyDataAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPolyDataAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPolyDataAlgorithm\nC++: vtkPolyDataAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkPolyDataAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkPolyData\nC++: vtkPolyData *GetOutput()\nV.GetOutput(int) -> vtkPolyData\nC++: vtkPolyData *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"SetOutput", PyvtkPolyDataAlgorithm_SetOutput, 1,
   (char*)"V.SetOutput(vtkDataObject)\nC++: virtual void SetOutput(vtkDataObject *d)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"GetInput", PyvtkPolyDataAlgorithm_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\nV.GetInput(int) -> vtkDataObject\nC++: vtkDataObject *GetInput(int port)\n\n"},
  {(char*)"GetPolyDataInput", PyvtkPolyDataAlgorithm_GetPolyDataInput, 1,
   (char*)"V.GetPolyDataInput(int) -> vtkPolyData\nC++: vtkPolyData *GetPolyDataInput(int port)\n\n"},
  {(char*)"SetInput", PyvtkPolyDataAlgorithm_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int, vtkDataObject *)\n\nSet an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline.\nNote that these methods support old-style pipeline connections.\nWhen writing new code you should use the more general\nvtkAlgorithm::SetInputConnection().  These methods transform the\ninput index to the input port index, not an index of a connection\nwithin a single port.\n"},
  {(char*)"AddInput", PyvtkPolyDataAlgorithm_AddInput, 1,
   (char*)"V.AddInput(vtkDataObject)\nC++: void AddInput(vtkDataObject *)\nV.AddInput(int, vtkDataObject)\nC++: void AddInput(int, vtkDataObject *)\n\nAdd an input of this algorithm.  Note that these methods support\nold-style pipeline connections.  When writing new code you should\nuse the more general vtkAlgorithm::AddInputConnection().  See\nSetInput() for details.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPolyDataAlgorithm_StaticNew()
{
  return vtkPolyDataAlgorithm::New();
}

PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPolyDataAlgorithm_StaticNew,
    PyvtkPolyDataAlgorithm_Methods,
    "vtkPolyDataAlgorithm", modulename,
    NULL, NULL,
    PyvtkPolyDataAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPolyDataAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkPolyDataAlgorithm - Superclass for algorithms that produce only\npolydata as output\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPolyDataAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPolyDataAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPolyDataAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

