// python wrapper for vtkAppendPolyData
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
#include "vtkAppendPolyData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAppendPolyData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAppendPolyData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAppendPolyDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAppendPolyDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkAppendPolyData_Doc();


static PyObject *
PyvtkAppendPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

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
      tempr = op->vtkAppendPolyData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

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
      tempr = op->vtkAppendPolyData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  vtkAppendPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAppendPolyData::NewInstance();
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
PyvtkAppendPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAppendPolyData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAppendPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetUserManagedInputs(temp0);
      }
    else
      {
      op->vtkAppendPolyData::SetUserManagedInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetUserManagedInputs();
      }
    else
      {
      tempr = op->vtkAppendPolyData::GetUserManagedInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_UserManagedInputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UserManagedInputsOn();
      }
    else
      {
      op->vtkAppendPolyData::UserManagedInputsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_UserManagedInputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UserManagedInputsOff();
      }
    else
      {
      op->vtkAppendPolyData::UserManagedInputsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkAppendPolyData::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_RemoveInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  vtkPolyData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->RemoveInput(temp0);
      }
    else
      {
      op->vtkAppendPolyData::RemoveInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  vtkPolyData *tempr;
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
      tempr = op->vtkAppendPolyData::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAppendPolyData_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkAppendPolyData::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAppendPolyData_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAppendPolyData_GetInput_s1(self, args);
    case 0:
      return PyvtkAppendPolyData_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkAppendPolyData_SetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfInputs(temp0);
      }
    else
      {
      op->vtkAppendPolyData::SetNumberOfInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetInputByNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputByNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  vtkPolyData *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
    {
    if (ap.IsBound())
      {
      op->SetInputByNumber(temp0, temp1);
      }
    else
      {
      op->vtkAppendPolyData::SetInputByNumber(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_SetParallelStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParallelStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParallelStreaming(temp0);
      }
    else
      {
      op->vtkAppendPolyData::SetParallelStreaming(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_GetParallelStreaming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParallelStreaming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParallelStreaming();
      }
    else
      {
      tempr = op->vtkAppendPolyData::GetParallelStreaming();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_ParallelStreamingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelStreamingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelStreamingOn();
      }
    else
      {
      op->vtkAppendPolyData::ParallelStreamingOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendPolyData_ParallelStreamingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParallelStreamingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendPolyData *op = static_cast<vtkAppendPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParallelStreamingOff();
      }
    else
      {
      op->vtkAppendPolyData::ParallelStreamingOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAppendPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkAppendPolyData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAppendPolyData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAppendPolyData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAppendPolyData\nC++: vtkAppendPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAppendPolyData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAppendPolyData\nC++: vtkAppendPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUserManagedInputs", PyvtkAppendPolyData_SetUserManagedInputs, 1,
   (char*)"V.SetUserManagedInputs(int)\nC++: void SetUserManagedInputs(int a)\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {(char*)"GetUserManagedInputs", PyvtkAppendPolyData_GetUserManagedInputs, 1,
   (char*)"V.GetUserManagedInputs() -> int\nC++: int GetUserManagedInputs()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {(char*)"UserManagedInputsOn", PyvtkAppendPolyData_UserManagedInputsOn, 1,
   (char*)"V.UserManagedInputsOn()\nC++: void UserManagedInputsOn()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {(char*)"UserManagedInputsOff", PyvtkAppendPolyData_UserManagedInputsOff, 1,
   (char*)"V.UserManagedInputsOff()\nC++: void UserManagedInputsOff()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {(char*)"AddInput", PyvtkAppendPolyData_AddInput, 1,
   (char*)"V.AddInput(vtkPolyData)\nC++: void AddInput(vtkPolyData *)\n\nAdd a dataset to the list of data to append. Should not be used\nwhen UserManagedInputs is true, use SetInputByNumber instead.\n"},
  {(char*)"RemoveInput", PyvtkAppendPolyData_RemoveInput, 1,
   (char*)"V.RemoveInput(vtkPolyData)\nC++: void RemoveInput(vtkPolyData *)\n\nRemove a dataset from the list of data to append. Should not be\nused when UserManagedInputs is true, use SetInputByNumber (NULL)\ninstead.\n"},
  {(char*)"GetInput", PyvtkAppendPolyData_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkPolyData\nC++: vtkPolyData *GetInput(int idx)\nV.GetInput() -> vtkPolyData\nC++: vtkPolyData *GetInput()\n\nGet any input of this filter.\n"},
  {(char*)"SetNumberOfInputs", PyvtkAppendPolyData_SetNumberOfInputs, 1,
   (char*)"V.SetNumberOfInputs(int)\nC++: void SetNumberOfInputs(int num)\n\nDirectly set(allocate) number of inputs, should only be used when\nUserManagedInputs is true.\n"},
  {(char*)"SetInputByNumber", PyvtkAppendPolyData_SetInputByNumber, 1,
   (char*)"V.SetInputByNumber(int, vtkPolyData)\nC++: void SetInputByNumber(int num, vtkPolyData *input)\n\n"},
  {(char*)"SetParallelStreaming", PyvtkAppendPolyData_SetParallelStreaming, 1,
   (char*)"V.SetParallelStreaming(int)\nC++: void SetParallelStreaming(int a)\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {(char*)"GetParallelStreaming", PyvtkAppendPolyData_GetParallelStreaming, 1,
   (char*)"V.GetParallelStreaming() -> int\nC++: int GetParallelStreaming()\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {(char*)"ParallelStreamingOn", PyvtkAppendPolyData_ParallelStreamingOn, 1,
   (char*)"V.ParallelStreamingOn()\nC++: void ParallelStreamingOn()\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {(char*)"ParallelStreamingOff", PyvtkAppendPolyData_ParallelStreamingOff, 1,
   (char*)"V.ParallelStreamingOff()\nC++: void ParallelStreamingOff()\n\nParallelStreaming is for a particular application. It causes this\nfilter to ask for a different piece from each of its inputs.  If\nall the inputs are the same, then the output of this append\nfilter is the whole dataset pieced back together.  Duplicate\npoints are create along the seams.  The purpose of this feature\nis to get data parallelism at a course scale.  Each of the inputs\ncan be generated in a different process at the same time.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAppendPolyData_StaticNew()
{
  return vtkAppendPolyData::New();
}

PyObject *PyVTKClass_vtkAppendPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAppendPolyData_StaticNew,
    PyvtkAppendPolyData_Methods,
    "vtkAppendPolyData", modulename,
    NULL, NULL,
    PyvtkAppendPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAppendPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkAppendPolyData - appends one or more polygonal datasets together\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkAppendPolyData is a filter that appends one of more polygonal\ndatasets into a single polygonal dataset. All geometry is extracted\nand appended, but point and cell attributes (i.e., scalars, vectors,\nnormals) are extracted and appended only if all datasets have the\npoint and/or cell attributes available.  (For example, if one dataset\nhas point scalars but another does not, point scalars will not",
    " be\nappended.)\n\nSee Also:\n\nvtkAppendFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAppendPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAppendPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAppendPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

