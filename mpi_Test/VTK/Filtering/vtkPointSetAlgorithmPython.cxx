// python wrapper for vtkPointSetAlgorithm
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
#include "vtkPointSetAlgorithm.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointSetAlgorithm(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointSetAlgorithm(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkAlgorithmNew
#endif

static const char **PyvtkPointSetAlgorithm_Doc();


static PyObject *
PyvtkPointSetAlgorithm_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

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
      tempr = op->vtkPointSetAlgorithm::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

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
      tempr = op->vtkPointSetAlgorithm::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

  vtkPointSetAlgorithm *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointSetAlgorithm::NewInstance();
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
PyvtkPointSetAlgorithm_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPointSetAlgorithm *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPointSetAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetAlgorithm_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

  vtkPointSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkPointSetAlgorithm::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetAlgorithm_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

  int temp0;
  vtkPointSet *tempr;
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
      tempr = op->vtkPointSetAlgorithm::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetAlgorithm_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPointSetAlgorithm_GetOutput_s1(self, args);
    case 1:
      return PyvtkPointSetAlgorithm_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkPointSetAlgorithm_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPolyDataOutput();
      }
    else
      {
      tempr = op->vtkPointSetAlgorithm::GetPolyDataOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetAlgorithm_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

  vtkStructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetStructuredGridOutput();
      }
    else
      {
      tempr = op->vtkPointSetAlgorithm::GetStructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetAlgorithm_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUnstructuredGridOutput();
      }
    else
      {
      tempr = op->vtkPointSetAlgorithm::GetUnstructuredGridOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetAlgorithm_SetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

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
      op->vtkPointSetAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetAlgorithm_SetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

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
      op->vtkPointSetAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetAlgorithm_SetInput_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

  vtkPointSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0);
      }
    else
      {
      op->vtkPointSetAlgorithm::SetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetAlgorithm_SetInput_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

  int temp0;
  vtkPointSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPointSet"))
    {
    if (ap.IsBound())
      {
      op->SetInput(temp0, temp1);
      }
    else
      {
      op->vtkPointSetAlgorithm::SetInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSetAlgorithm_SetInput_Methods[] = {
  {NULL, PyvtkPointSetAlgorithm_SetInput_s1, 1,
   (char*)"@O *vtkDataObject"},
  {NULL, PyvtkPointSetAlgorithm_SetInput_s2, 1,
   (char*)"@iO *vtkDataObject"},
  {NULL, PyvtkPointSetAlgorithm_SetInput_s3, 1,
   (char*)"@O *vtkPointSet"},
  {NULL, PyvtkPointSetAlgorithm_SetInput_s4, 1,
   (char*)"@iO *vtkPointSet"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPointSetAlgorithm_SetInput(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPointSetAlgorithm_SetInput_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "SetInput");
  return NULL;
}



static PyObject *
PyvtkPointSetAlgorithm_AddInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

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
      op->vtkPointSetAlgorithm::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetAlgorithm_AddInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

  vtkPointSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkPointSetAlgorithm::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetAlgorithm_AddInput_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

  int temp0;
  vtkPointSet *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPointSet"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0, temp1);
      }
    else
      {
      op->vtkPointSetAlgorithm::AddInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetAlgorithm_AddInput_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

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
      op->vtkPointSetAlgorithm::AddInput(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSetAlgorithm_AddInput_Methods[] = {
  {NULL, PyvtkPointSetAlgorithm_AddInput_s1, 1,
   (char*)"@O *vtkDataObject"},
  {NULL, PyvtkPointSetAlgorithm_AddInput_s2, 1,
   (char*)"@O *vtkPointSet"},
  {NULL, PyvtkPointSetAlgorithm_AddInput_s3, 1,
   (char*)"@iO *vtkPointSet"},
  {NULL, PyvtkPointSetAlgorithm_AddInput_s4, 1,
   (char*)"@iO *vtkDataObject"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkPointSetAlgorithm_AddInput(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPointSetAlgorithm_AddInput_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "AddInput");
  return NULL;
}



static PyObject *
PyvtkPointSetAlgorithm_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetAlgorithm *op = static_cast<vtkPointSetAlgorithm *>(vp);

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
      tempr = op->vtkPointSetAlgorithm::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSetAlgorithm_Methods[] = {
  {(char*)"GetClassName", PyvtkPointSetAlgorithm_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointSetAlgorithm_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointSetAlgorithm_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointSetAlgorithm\nC++: vtkPointSetAlgorithm *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPointSetAlgorithm_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPointSetAlgorithm\nC++: vtkPointSetAlgorithm *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkPointSetAlgorithm_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkPointSet\nC++: vtkPointSet *GetOutput()\nV.GetOutput(int) -> vtkPointSet\nC++: vtkPointSet *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {(char*)"GetPolyDataOutput", PyvtkPointSetAlgorithm_GetPolyDataOutput, 1,
   (char*)"V.GetPolyDataOutput() -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as vtkPolyData.\n"},
  {(char*)"GetStructuredGridOutput", PyvtkPointSetAlgorithm_GetStructuredGridOutput, 1,
   (char*)"V.GetStructuredGridOutput() -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as vtkStructuredGrid.\n"},
  {(char*)"GetUnstructuredGridOutput", PyvtkPointSetAlgorithm_GetUnstructuredGridOutput, 1,
   (char*)"V.GetUnstructuredGridOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as vtkUnstructuredGrid.\n"},
  {(char*)"SetInput", PyvtkPointSetAlgorithm_SetInput, 1,
   (char*)"V.SetInput(vtkDataObject)\nC++: void SetInput(vtkDataObject *)\nV.SetInput(int, vtkDataObject)\nC++: void SetInput(int, vtkDataObject *)\nV.SetInput(vtkPointSet)\nC++: void SetInput(vtkPointSet *)\nV.SetInput(int, vtkPointSet)\nC++: void SetInput(int, vtkPointSet *)\n\nSet an input of this algorithm. You should not override these\nmethods because they are not the only way to connect a pipeline.\nNote that these methods support old-style pipeline connections.\nWhen writing new code you should use the more general\nvtkAlgorithm::SetInputConnection().  These methods transform the\ninput index to the input port index, not an index of a connection\nwithin a single port.\n"},
  {(char*)"AddInput", PyvtkPointSetAlgorithm_AddInput, 1,
   (char*)"V.AddInput(vtkDataObject)\nC++: void AddInput(vtkDataObject *)\nV.AddInput(vtkPointSet)\nC++: void AddInput(vtkPointSet *)\nV.AddInput(int, vtkPointSet)\nC++: void AddInput(int, vtkPointSet *)\nV.AddInput(int, vtkDataObject)\nC++: void AddInput(int, vtkDataObject *)\n\nAdd an input of this algorithm.  Note that these methods support\nold-style pipeline connections.  When writing new code you should\nuse the more general vtkAlgorithm::AddInputConnection().  See\nSetInput() for details.\n"},
  {(char*)"GetInput", PyvtkPointSetAlgorithm_GetInput, 1,
   (char*)"V.GetInput() -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPointSetAlgorithm_StaticNew()
{
  return vtkPointSetAlgorithm::New();
}

PyObject *PyVTKClass_vtkPointSetAlgorithmNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPointSetAlgorithm_StaticNew,
    PyvtkPointSetAlgorithm_Methods,
    "vtkPointSetAlgorithm", modulename,
    NULL, NULL,
    PyvtkPointSetAlgorithm_Doc(),
    PyVTKClass_vtkAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPointSetAlgorithm_Doc()
{
  static const char *docstring[] = {
    "vtkPointSetAlgorithm - Superclass for algorithms that produce output\nof the same type as input\n\n",
    "Superclass: vtkAlgorithm\n\n",
    "vtkPointSetAlgorithm is a convenience class to make writing\nalgorithms easier. It is also designed to help transition old\nalgorithms to the new pipeline architecture. Ther are some\nassumptions and defaults made by this class you should be aware of.\nThis class defaults such that your filter will have one input port\nand one output port. If that is not the case simply change it with\nSetNumberOfInputP",
    "orts etc. See this classes contstructor for the\ndefault. This class also provides a FillInputPortInfo method that by\ndefault says that all inputs will be PointSet. If that isn't the case\nthen please override this method in your subclass. This class breaks\nout the downstream requests into seperate functions such as\nRequestDataObject RequestData and ExecuteInformation. The default\nimplementation of ",
    "RequestDataObject will create an output data of the\nsame type as the input.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointSetAlgorithm(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointSetAlgorithmNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointSetAlgorithm", o) != 0)
    {
    Py_DECREF(o);
    }

}

