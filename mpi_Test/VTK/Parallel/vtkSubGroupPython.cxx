// python wrapper for vtkSubGroup
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
#include "vtkSubGroup.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSubGroup(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSubGroup(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSubGroupNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSubGroupNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkSubGroup_Doc();


static PyObject *
PyvtkSubGroup_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

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
      tempr = op->vtkSubGroup::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

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
      tempr = op->vtkSubGroup::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  vtkSubGroup *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSubGroup::NewInstance();
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
PyvtkSubGroup_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSubGroup *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSubGroup::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkCommunicator *temp4 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkCommunicator"))
    {
    if (ap.IsBound())
      {
      tempr = op->Initialize(temp0, temp1, temp2, temp3, temp4);
      }
    else
      {
      tempr = op->vtkSubGroup::Initialize(temp0, temp1, temp2, temp3, temp4);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_Gather(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  char *temp0 = NULL;
  char *temp1 = NULL;
  int temp2;
  int temp3;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
    {
    if (ap.IsBound())
      {
      tempr = op->Gather(temp0, temp1, temp2, temp3);
      }
    else
      {
      tempr = op->vtkSubGroup::Gather(temp0, temp1, temp2, temp3);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_Broadcast(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  char *temp0 = NULL;
  int temp1;
  int temp2;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      tempr = op->Broadcast(temp0, temp1, temp2);
      }
    else
      {
      tempr = op->vtkSubGroup::Broadcast(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_setGatherPattern(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "setGatherPattern");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int temp0;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->setGatherPattern(temp0, temp1);
      }
    else
      {
      op->vtkSubGroup::setGatherPattern(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_getLocalRank(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "getLocalRank");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->getLocalRank(temp0);
      }
    else
      {
      tempr = op->vtkSubGroup::getLocalRank(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Barrier();
      }
    else
      {
      tempr = op->vtkSubGroup::Barrier();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSubGroup_PrintSubGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintSubGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSubGroup *op = static_cast<vtkSubGroup *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PrintSubGroup();
      }
    else
      {
      op->vtkSubGroup::PrintSubGroup();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkSubGroup_Methods[] = {
  {(char*)"GetClassName", PyvtkSubGroup_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSubGroup_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSubGroup_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSubGroup\nC++: vtkSubGroup *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSubGroup_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSubGroup\nC++: vtkSubGroup *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Initialize", PyvtkSubGroup_Initialize, 1,
   (char*)"V.Initialize(int, int, int, int, vtkCommunicator) -> int\nC++: int Initialize(int p0, int p1, int me, int tag,\n    vtkCommunicator *c)\n\nInitialize a communication subgroup for the processes\n   with rank p0 through p1 of the given communicator.  (So\n   vtkSubGroup is limited to working with subgroups that\n   are identified by a contiguous set of rank IDs.)\n   The third argument is the callers rank, which must\n   in the range from p0 through p1.\n"},
  {(char*)"Gather", PyvtkSubGroup_Gather, 1,
   (char*)"V.Gather(string, string, int, int) -> int\nC++: int Gather(char *data, char *to, int length, int root)\n\n"},
  {(char*)"Broadcast", PyvtkSubGroup_Broadcast, 1,
   (char*)"V.Broadcast(string, int, int) -> int\nC++: int Broadcast(char *data, int length, int root)\n\n"},
  {(char*)"setGatherPattern", PyvtkSubGroup_setGatherPattern, 1,
   (char*)"V.setGatherPattern(int, int)\nC++: void setGatherPattern(int root, int length)\n\n"},
  {(char*)"getLocalRank", PyvtkSubGroup_getLocalRank, 1,
   (char*)"V.getLocalRank(int) -> int\nC++: int getLocalRank(int processID)\n\n"},
  {(char*)"Barrier", PyvtkSubGroup_Barrier, 1,
   (char*)"V.Barrier() -> int\nC++: int Barrier()\n\n"},
  {(char*)"PrintSubGroup", PyvtkSubGroup_PrintSubGroup, 1,
   (char*)"V.PrintSubGroup()\nC++: void PrintSubGroup()\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSubGroup_StaticNew()
{
  return vtkSubGroup::New();
}

PyObject *PyVTKClass_vtkSubGroupNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSubGroup_StaticNew,
    PyvtkSubGroup_Methods,
    "vtkSubGroup", modulename,
    NULL, NULL,
    PyvtkSubGroup_Doc(),
    PyVTKClass_vtkObjectNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"MINOP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"MAXOP", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"SUMOP", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkSubGroup_Doc()
{
  static const char *docstring[] = {
    "vtkSubGroup - scalable collective communication for a\n\n",
    "Superclass: vtkObject\n\n",
    "This class provides scalable broadcast, reduce, etc. using\n    only a vtkMultiProcessController. It does not require MPI.\n    Users are vtkPKdTree and vtkDistributedDataFilter.\n\nNote:\n\nThis class will be deprecated soon.  Instead of using this class, use\nthe collective and subgrouping operations now built into\nvtkMultiProcessController.  The only reason this class is not\ndeprecated already is beca",
    "use vtkPKdTree relies heavily on this class\nin ways that are not easy to work around.  Since vtkPKdTree is due\nfor a major overhaul anyway, we are leaving things the way they are\nfor now.\n\nSee Also:\n\n\n     vtkPKdTree vtkDistributedDataFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSubGroup(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSubGroupNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSubGroup", o) != 0)
    {
    Py_DECREF(o);
    }

}

