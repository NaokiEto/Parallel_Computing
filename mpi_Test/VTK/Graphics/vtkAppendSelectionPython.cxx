// python wrapper for vtkAppendSelection
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
#include "vtkAppendSelection.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkAppendSelection(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkAppendSelection(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkAppendSelectionNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkAppendSelectionNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkSelectionAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkSelectionAlgorithmNew
#endif

static const char **PyvtkAppendSelection_Doc();


static PyObject *
PyvtkAppendSelection_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

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
      tempr = op->vtkAppendSelection::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

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
      tempr = op->vtkAppendSelection::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  vtkAppendSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkAppendSelection::NewInstance();
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
PyvtkAppendSelection_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkAppendSelection *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkAppendSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

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
      op->vtkAppendSelection::SetUserManagedInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

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
      tempr = op->vtkAppendSelection::GetUserManagedInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_UserManagedInputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UserManagedInputsOn();
      }
    else
      {
      op->vtkAppendSelection::UserManagedInputsOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_UserManagedInputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UserManagedInputsOff();
      }
    else
      {
      op->vtkAppendSelection::UserManagedInputsOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_AddInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->AddInput(temp0);
      }
    else
      {
      op->vtkAppendSelection::AddInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_RemoveInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  vtkSelection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->RemoveInput(temp0);
      }
    else
      {
      op->vtkAppendSelection::RemoveInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  vtkSelection *tempr;
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
      tempr = op->vtkAppendSelection::GetInput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAppendSelection_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  vtkSelection *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkAppendSelection::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkAppendSelection_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return PyvtkAppendSelection_GetInput_s1(self, args);
    case 0:
      return PyvtkAppendSelection_GetInput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return NULL;
}



static PyObject *
PyvtkAppendSelection_SetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

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
      op->vtkAppendSelection::SetNumberOfInputs(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetInputByNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputByNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  vtkSelection *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkSelection"))
    {
    if (ap.IsBound())
      {
      op->SetInputByNumber(temp0, temp1);
      }
    else
      {
      op->vtkAppendSelection::SetInputByNumber(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetAppendByUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendByUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetAppendByUnion(temp0);
      }
    else
      {
      op->vtkAppendSelection::SetAppendByUnion(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetAppendByUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendByUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetAppendByUnion();
      }
    else
      {
      tempr = op->vtkAppendSelection::GetAppendByUnion();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_AppendByUnionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendByUnionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AppendByUnionOn();
      }
    else
      {
      op->vtkAppendSelection::AppendByUnionOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkAppendSelection_AppendByUnionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendByUnionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->AppendByUnionOff();
      }
    else
      {
      op->vtkAppendSelection::AppendByUnionOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkAppendSelection_Methods[] = {
  {(char*)"GetClassName", PyvtkAppendSelection_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkAppendSelection_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkAppendSelection_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkAppendSelection\nC++: vtkAppendSelection *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkAppendSelection_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkAppendSelection\nC++: vtkAppendSelection *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetUserManagedInputs", PyvtkAppendSelection_SetUserManagedInputs, 1,
   (char*)"V.SetUserManagedInputs(int)\nC++: void SetUserManagedInputs(int a)\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {(char*)"GetUserManagedInputs", PyvtkAppendSelection_GetUserManagedInputs, 1,
   (char*)"V.GetUserManagedInputs() -> int\nC++: int GetUserManagedInputs()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {(char*)"UserManagedInputsOn", PyvtkAppendSelection_UserManagedInputsOn, 1,
   (char*)"V.UserManagedInputsOn()\nC++: void UserManagedInputsOn()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {(char*)"UserManagedInputsOff", PyvtkAppendSelection_UserManagedInputsOff, 1,
   (char*)"V.UserManagedInputsOff()\nC++: void UserManagedInputsOff()\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput. By default, UserManagedInputs is false.\n"},
  {(char*)"AddInput", PyvtkAppendSelection_AddInput, 1,
   (char*)"V.AddInput(vtkSelection)\nC++: void AddInput(vtkSelection *)\n\nAdd a dataset to the list of data to append. Should not be used\nwhen UserManagedInputs is true, use SetInputByNumber instead.\n"},
  {(char*)"RemoveInput", PyvtkAppendSelection_RemoveInput, 1,
   (char*)"V.RemoveInput(vtkSelection)\nC++: void RemoveInput(vtkSelection *)\n\nRemove a dataset from the list of data to append. Should not be\nused when UserManagedInputs is true, use SetInputByNumber (NULL)\ninstead.\n"},
  {(char*)"GetInput", PyvtkAppendSelection_GetInput, 1,
   (char*)"V.GetInput(int) -> vtkSelection\nC++: vtkSelection *GetInput(int idx)\nV.GetInput() -> vtkSelection\nC++: vtkSelection *GetInput()\n\nGet any input of this filter.\n"},
  {(char*)"SetNumberOfInputs", PyvtkAppendSelection_SetNumberOfInputs, 1,
   (char*)"V.SetNumberOfInputs(int)\nC++: void SetNumberOfInputs(int num)\n\nDirectly set(allocate) number of inputs, should only be used when\nUserManagedInputs is true.\n"},
  {(char*)"SetInputByNumber", PyvtkAppendSelection_SetInputByNumber, 1,
   (char*)"V.SetInputByNumber(int, vtkSelection)\nC++: void SetInputByNumber(int num, vtkSelection *input)\n\n"},
  {(char*)"SetAppendByUnion", PyvtkAppendSelection_SetAppendByUnion, 1,
   (char*)"V.SetAppendByUnion(int)\nC++: void SetAppendByUnion(int a)\n\nWhen set to true, all the selections are combined together to\nform a single vtkSelection output. When set to false, the output\nis a composite selection with input selections as the children of\nthe composite selection. This allows for selections with\ndifferent content types and properties. Default is true.\n"},
  {(char*)"GetAppendByUnion", PyvtkAppendSelection_GetAppendByUnion, 1,
   (char*)"V.GetAppendByUnion() -> int\nC++: int GetAppendByUnion()\n\nWhen set to true, all the selections are combined together to\nform a single vtkSelection output. When set to false, the output\nis a composite selection with input selections as the children of\nthe composite selection. This allows for selections with\ndifferent content types and properties. Default is true.\n"},
  {(char*)"AppendByUnionOn", PyvtkAppendSelection_AppendByUnionOn, 1,
   (char*)"V.AppendByUnionOn()\nC++: void AppendByUnionOn()\n\nWhen set to true, all the selections are combined together to\nform a single vtkSelection output. When set to false, the output\nis a composite selection with input selections as the children of\nthe composite selection. This allows for selections with\ndifferent content types and properties. Default is true.\n"},
  {(char*)"AppendByUnionOff", PyvtkAppendSelection_AppendByUnionOff, 1,
   (char*)"V.AppendByUnionOff()\nC++: void AppendByUnionOff()\n\nWhen set to true, all the selections are combined together to\nform a single vtkSelection output. When set to false, the output\nis a composite selection with input selections as the children of\nthe composite selection. This allows for selections with\ndifferent content types and properties. Default is true.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkAppendSelection_StaticNew()
{
  return vtkAppendSelection::New();
}

PyObject *PyVTKClass_vtkAppendSelectionNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkAppendSelection_StaticNew,
    PyvtkAppendSelection_Methods,
    "vtkAppendSelection", modulename,
    NULL, NULL,
    PyvtkAppendSelection_Doc(),
    PyVTKClass_vtkSelectionAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkAppendSelection_Doc()
{
  static const char *docstring[] = {
    "vtkAppendSelection - appends one or more selections together\n\n",
    "Superclass: vtkSelectionAlgorithm\n\n",
    "vtkAppendSelection is a filter that appends one of more selections\ninto a single selection.  All selections must have the same content\ntype unless AppendByUnion is false.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkAppendSelection(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkAppendSelectionNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkAppendSelection", o) != 0)
    {
    Py_DECREF(o);
    }

}

