// python wrapper for vtkProcessGroup
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
#include "vtkProcessGroup.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProcessGroup(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProcessGroup(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProcessGroupNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProcessGroupNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkProcessGroup_Doc();


static PyObject *
PyvtkProcessGroup_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

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
      tempr = op->vtkProcessGroup::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

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
      tempr = op->vtkProcessGroup::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  vtkProcessGroup *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProcessGroup::NewInstance();
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
PyvtkProcessGroup_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProcessGroup *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProcessGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkProcessGroup::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkProcessGroup_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  vtkCommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
    {
    if (ap.IsBound())
      {
      op->Initialize(temp0);
      }
    else
      {
      op->vtkProcessGroup::Initialize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProcessGroup_Initialize_Methods[] = {
  {NULL, PyvtkProcessGroup_Initialize_s1, 1,
   (char*)"@O *vtkMultiProcessController"},
  {NULL, PyvtkProcessGroup_Initialize_s2, 1,
   (char*)"@O *vtkCommunicator"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkProcessGroup_Initialize(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkProcessGroup_Initialize_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return NULL;
}



static PyObject *
PyvtkProcessGroup_GetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  vtkCommunicator *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCommunicator();
      }
    else
      {
      tempr = op->vtkProcessGroup::GetCommunicator();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  vtkCommunicator *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCommunicator"))
    {
    if (ap.IsBound())
      {
      op->SetCommunicator(temp0);
      }
    else
      {
      op->vtkProcessGroup::SetCommunicator(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_GetNumberOfProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfProcessIds();
      }
    else
      {
      tempr = op->vtkProcessGroup::GetNumberOfProcessIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_GetProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetProcessId(temp0);
      }
    else
      {
      tempr = op->vtkProcessGroup::GetProcessId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLocalProcessId();
      }
    else
      {
      tempr = op->vtkProcessGroup::GetLocalProcessId();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_FindProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->FindProcessId(temp0);
      }
    else
      {
      tempr = op->vtkProcessGroup::FindProcessId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_AddProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->AddProcessId(temp0);
      }
    else
      {
      tempr = op->vtkProcessGroup::AddProcessId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_RemoveProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->RemoveProcessId(temp0);
      }
    else
      {
      tempr = op->vtkProcessGroup::RemoveProcessId(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_RemoveAllProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->RemoveAllProcessIds();
      }
    else
      {
      op->vtkProcessGroup::RemoveAllProcessIds();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProcessGroup_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcessGroup *op = static_cast<vtkProcessGroup *>(vp);

  vtkProcessGroup *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProcessGroup"))
    {
    if (ap.IsBound())
      {
      op->Copy(temp0);
      }
    else
      {
      op->vtkProcessGroup::Copy(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkProcessGroup_Methods[] = {
  {(char*)"GetClassName", PyvtkProcessGroup_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProcessGroup_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProcessGroup_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProcessGroup\nC++: vtkProcessGroup *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProcessGroup_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProcessGroup\nC++: vtkProcessGroup *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkProcessGroup_Initialize, 1,
   (char*)"V.Initialize(vtkMultiProcessController)\nC++: void Initialize(vtkMultiProcessController *controller)\nV.Initialize(vtkCommunicator)\nC++: void Initialize(vtkCommunicator *communicator)\n\nInitialize the group to the given controller or communicator. \nThe group will be set to contain all of the processes in the\ncontroller/communicator in the same order.\n"},
  {(char*)"GetCommunicator", PyvtkProcessGroup_GetCommunicator, 1,
   (char*)"V.GetCommunicator() -> vtkCommunicator\nC++: vtkCommunicator *GetCommunicator()\n\nGet the communicator on which this group is based on.\n"},
  {(char*)"SetCommunicator", PyvtkProcessGroup_SetCommunicator, 1,
   (char*)"V.SetCommunicator(vtkCommunicator)\nC++: void SetCommunicator(vtkCommunicator *communicator)\n\nSet the communicator.  This has the same effect as Initialize\nexcept that the contents of the group will not be modified\n(although they may be truncated if the new communicator is\nsmaller than the current group). Note that this can lead to an\ninvalid group if there are values in the group that are not valid\nin the new communicator.\n"},
  {(char*)"GetNumberOfProcessIds", PyvtkProcessGroup_GetNumberOfProcessIds, 1,
   (char*)"V.GetNumberOfProcessIds() -> int\nC++: int GetNumberOfProcessIds()\n\nReturns the size of this group (the number of processes defined\nin it).\n"},
  {(char*)"GetProcessId", PyvtkProcessGroup_GetProcessId, 1,
   (char*)"V.GetProcessId(int) -> int\nC++: int GetProcessId(int pos)\n\nGiven a position in the group, returns the id of the process in\nthe communicator this group is based on.  For example, if this\ngroup contains {6, 2, 8, 1}, then GetProcessId(2) will return 8\nand GetProcessId(3) will return 1.\n"},
  {(char*)"GetLocalProcessId", PyvtkProcessGroup_GetLocalProcessId, 1,
   (char*)"V.GetLocalProcessId() -> int\nC++: int GetLocalProcessId()\n\nGet the process id for the local process (as defined by the\ngroup's communicator).  Returns -1 if the local process is not in\nthe group.\n"},
  {(char*)"FindProcessId", PyvtkProcessGroup_FindProcessId, 1,
   (char*)"V.FindProcessId(int) -> int\nC++: int FindProcessId(int processId)\n\nGiven a process id in the communicator, this method returns its\nlocation in the group or -1 if it is not in the group.  For\nexample, if this group contains {6, 2, 8, 1}, then\nFindProcessId(2) will return 1 and FindProcessId(3) will return\n-1.\n"},
  {(char*)"AddProcessId", PyvtkProcessGroup_AddProcessId, 1,
   (char*)"V.AddProcessId(int) -> int\nC++: int AddProcessId(int processId)\n\nAdd a process id to the end of the group (if it is not already in\nthe group).  Returns the location where the id was stored.\n"},
  {(char*)"RemoveProcessId", PyvtkProcessGroup_RemoveProcessId, 1,
   (char*)"V.RemoveProcessId(int) -> int\nC++: int RemoveProcessId(int processId)\n\nRemove the given process id from the group (assuming it is in the\ngroup). All ids to the \"right\" of the removed id are shifted\nover.  Returns 1 if the process id was removed, 0 if the process\nid was not in the group in the first place.\n"},
  {(char*)"RemoveAllProcessIds", PyvtkProcessGroup_RemoveAllProcessIds, 1,
   (char*)"V.RemoveAllProcessIds()\nC++: void RemoveAllProcessIds()\n\nRemoves all the processes ids from the group, leaving the group\nempty.\n"},
  {(char*)"Copy", PyvtkProcessGroup_Copy, 1,
   (char*)"V.Copy(vtkProcessGroup)\nC++: void Copy(vtkProcessGroup *group)\n\nCopies the given group's communicator and process ids.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProcessGroup_StaticNew()
{
  return vtkProcessGroup::New();
}

PyObject *PyVTKClass_vtkProcessGroupNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProcessGroup_StaticNew,
    PyvtkProcessGroup_Methods,
    "vtkProcessGroup", modulename,
    NULL, NULL,
    PyvtkProcessGroup_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkProcessGroup_Doc()
{
  static const char *docstring[] = {
    "vtkProcessGroup - A subgroup of processes from a communicator.\n\n",
    "Superclass: vtkObject\n\n",
    "This class is used for creating groups of processes.  A\nvtkProcessGroup is initialized by passing the controller or\ncommunicator on which the group is based off of.  You can then use\nthe group to subset and reorder the the processes.  Eventually, you\ncan pass the group object to the CreateSubController method of\nvtkMultiProcessController to create a controller for the defined\ngroup of processes.  ",
    "You must use the same controller (or attached\ncommunicator) from which this group was initialized with.\n\nSee Also:\n\nvtkMultiProcessController, vtkCommunicator\n\nThanks:\n\nThis class was originally written by Kenneth Moreland\n(kmorel@sandia.gov) from Sandia National Laboratories.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProcessGroup(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProcessGroupNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProcessGroup", o) != 0)
    {
    Py_DECREF(o);
    }

}
