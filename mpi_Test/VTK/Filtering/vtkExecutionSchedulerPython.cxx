// python wrapper for vtkExecutionScheduler
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
#include "vtkExecutionScheduler.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkExecutionScheduler(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkExecutionScheduler(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkExecutionSchedulerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkExecutionSchedulerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkExecutionScheduler_Doc();


static PyObject *
PyvtkExecutionScheduler_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

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
      tempr = op->vtkExecutionScheduler::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

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
      tempr = op->vtkExecutionScheduler::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutionScheduler *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkExecutionScheduler::NewInstance();
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
PyvtkExecutionScheduler_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkExecutionScheduler *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkExecutionScheduler::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_GetGlobalScheduler(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalScheduler");

  vtkExecutionScheduler *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExecutionScheduler::GetGlobalScheduler();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_TASK_PRIORITY(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "TASK_PRIORITY");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkExecutionScheduler::TASK_PRIORITY();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_Schedule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Schedule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutiveCollection *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkExecutiveCollection") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Schedule(temp0, temp1);
      }
    else
      {
      op->vtkExecutionScheduler::Schedule(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_SchedulePropagate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SchedulePropagate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutiveCollection *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkExecutiveCollection") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->SchedulePropagate(temp0, temp1);
      }
    else
      {
      op->vtkExecutionScheduler::SchedulePropagate(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_WaitUntilDone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitUntilDone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutiveCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutiveCollection"))
    {
    if (ap.IsBound())
      {
      op->WaitUntilDone(temp0);
      }
    else
      {
      op->vtkExecutionScheduler::WaitUntilDone(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_WaitUntilReleased(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitUntilReleased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutiveCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutiveCollection"))
    {
    if (ap.IsBound())
      {
      op->WaitUntilReleased(temp0);
      }
    else
      {
      op->vtkExecutionScheduler::WaitUntilReleased(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_WaitUntilAllDone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitUntilAllDone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->WaitUntilAllDone();
      }
    else
      {
      op->vtkExecutionScheduler::WaitUntilAllDone();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_WaitForTaskDone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForTaskDone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      op->WaitForTaskDone(temp0);
      }
    else
      {
      op->vtkExecutionScheduler::WaitForTaskDone(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_WaitForInputsReleased(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForInputsReleased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      op->WaitForInputsReleased(temp0);
      }
    else
      {
      op->vtkExecutionScheduler::WaitForInputsReleased(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_GetTaskDoneMessager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTaskDoneMessager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutive *temp0 = NULL;
  vtkThreadMessager *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetTaskDoneMessager(temp0);
      }
    else
      {
      tempr = op->vtkExecutionScheduler::GetTaskDoneMessager(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_GetInputsReleasedMessager(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputsReleasedMessager");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutive *temp0 = NULL;
  vtkThreadMessager *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputsReleasedMessager(temp0);
      }
    else
      {
      tempr = op->vtkExecutionScheduler::GetInputsReleasedMessager(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_GetInputsReleasedLock(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputsReleasedLock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutive *temp0 = NULL;
  vtkMutexLock *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInputsReleasedLock(temp0);
      }
    else
      {
      tempr = op->vtkExecutionScheduler::GetInputsReleasedLock(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_ReleaseResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      op->ReleaseResources(temp0);
      }
    else
      {
      op->vtkExecutionScheduler::ReleaseResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_ReacquireResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReacquireResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      op->ReacquireResources(temp0);
      }
    else
      {
      op->vtkExecutionScheduler::ReacquireResources(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_RescheduleNetwork(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescheduleNetwork");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    if (ap.IsBound())
      {
      op->RescheduleNetwork(temp0);
      }
    else
      {
      op->vtkExecutionScheduler::RescheduleNetwork(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkExecutionScheduler_RescheduleFrom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RescheduleFrom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutionScheduler *op = static_cast<vtkExecutionScheduler *>(vp);

  vtkExecutive *temp0 = NULL;
  vtkComputingResources *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkExecutive") &&
      ap.GetVTKObject(temp1, "vtkComputingResources"))
    {
    if (ap.IsBound())
      {
      op->RescheduleFrom(temp0, temp1);
      }
    else
      {
      op->vtkExecutionScheduler::RescheduleFrom(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkExecutionScheduler_Methods[] = {
  {(char*)"GetClassName", PyvtkExecutionScheduler_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkExecutionScheduler_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkExecutionScheduler_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkExecutionScheduler\nC++: vtkExecutionScheduler *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkExecutionScheduler_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkExecutionScheduler\nC++: vtkExecutionScheduler *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetGlobalScheduler", PyvtkExecutionScheduler_GetGlobalScheduler, 1,
   (char*)"V.GetGlobalScheduler() -> vtkExecutionScheduler\nC++: static vtkExecutionScheduler *GetGlobalScheduler()\n\nReturn the global instance of the scheduler\n"},
  {(char*)"TASK_PRIORITY", PyvtkExecutionScheduler_TASK_PRIORITY, 1,
   (char*)"V.TASK_PRIORITY() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *TASK_PRIORITY()\n\nKey to store the priority of a task\n"},
  {(char*)"Schedule", PyvtkExecutionScheduler_Schedule, 1,
   (char*)"V.Schedule(vtkExecutiveCollection, vtkInformation)\nC++: void Schedule(vtkExecutiveCollection *execs,\n    vtkInformation *info)\n\nPut the current set of executives (modules) to the be scheduled\ngiven its dependency graph which will be used to compute the set\ntopological orders\n"},
  {(char*)"SchedulePropagate", PyvtkExecutionScheduler_SchedulePropagate, 1,
   (char*)"V.SchedulePropagate(vtkExecutiveCollection, vtkInformation)\nC++: void SchedulePropagate(vtkExecutiveCollection *execs,\n    vtkInformation *info)\n\nPut the current set of executives (modules) to the be scheduled\ngiven its dependency graph which will be used to compute the set\ntopological orders. Then wait for their execution to be complete\n"},
  {(char*)"WaitUntilDone", PyvtkExecutionScheduler_WaitUntilDone, 1,
   (char*)"V.WaitUntilDone(vtkExecutiveCollection)\nC++: void WaitUntilDone(vtkExecutiveCollection *execs)\n\nWait until the current set of executives (modules) have finished\nexecuting\n"},
  {(char*)"WaitUntilReleased", PyvtkExecutionScheduler_WaitUntilReleased, 1,
   (char*)"V.WaitUntilReleased(vtkExecutiveCollection)\nC++: void WaitUntilReleased(vtkExecutiveCollection *execs)\n\nWait until the current set of executives (modules) have their\ninputs released\n"},
  {(char*)"WaitUntilAllDone", PyvtkExecutionScheduler_WaitUntilAllDone, 1,
   (char*)"V.WaitUntilAllDone()\nC++: void WaitUntilAllDone()\n\nWait for all tasks to be done\n"},
  {(char*)"WaitForTaskDone", PyvtkExecutionScheduler_WaitForTaskDone, 1,
   (char*)"V.WaitForTaskDone(vtkExecutive)\nC++: void WaitForTaskDone(vtkExecutive *exec)\n\nWait for a task that is on the scheduling queue to be done. If\nthe task is not there, this will return immediately. If the exec\nis NULL, any task that is done will trigger this the return\n"},
  {(char*)"WaitForInputsReleased", PyvtkExecutionScheduler_WaitForInputsReleased, 1,
   (char*)"V.WaitForInputsReleased(vtkExecutive)\nC++: void WaitForInputsReleased(vtkExecutive *exec)\n\nSimilar to WaitForTaskDone but return whenever input connections\nof a task are released instead of done computing. But exec cannot\nbe NULL.\n"},
  {(char*)"GetTaskDoneMessager", PyvtkExecutionScheduler_GetTaskDoneMessager, 1,
   (char*)"V.GetTaskDoneMessager(vtkExecutive) -> vtkThreadMessager\nC++: vtkThreadMessager *GetTaskDoneMessager(vtkExecutive *exec)\n\nReturn the thread messager reserved for the given exec to notify\nwhen it is done\n"},
  {(char*)"GetInputsReleasedMessager", PyvtkExecutionScheduler_GetInputsReleasedMessager, 1,
   (char*)"V.GetInputsReleasedMessager(vtkExecutive) -> vtkThreadMessager\nC++: vtkThreadMessager *GetInputsReleasedMessager(\n    vtkExecutive *exec)\n\nReturn the thread messager reserved for the given exec to notify\nwhen it releases its inputs\n"},
  {(char*)"GetInputsReleasedLock", PyvtkExecutionScheduler_GetInputsReleasedLock, 1,
   (char*)"V.GetInputsReleasedLock(vtkExecutive) -> vtkMutexLock\nC++: vtkMutexLock *GetInputsReleasedLock(vtkExecutive *exec)\n\nReturn the mutex lock reserved for the given exec to notify when\nit releases its inputs\n"},
  {(char*)"ReleaseResources", PyvtkExecutionScheduler_ReleaseResources, 1,
   (char*)"V.ReleaseResources(vtkExecutive)\nC++: void ReleaseResources(vtkExecutive *exec)\n\nRelease the resources that are being used by the given exec\n"},
  {(char*)"ReacquireResources", PyvtkExecutionScheduler_ReacquireResources, 1,
   (char*)"V.ReacquireResources(vtkExecutive)\nC++: void ReacquireResources(vtkExecutive *exec)\n\nRe-acquire the resource released earlier by ReleaseResource\n"},
  {(char*)"RescheduleNetwork", PyvtkExecutionScheduler_RescheduleNetwork, 1,
   (char*)"V.RescheduleNetwork(vtkExecutive)\nC++: void RescheduleNetwork(vtkExecutive *sink)\n\nRedistribute the thread resources over the network from a sink\nwith a maximum resource\n"},
  {(char*)"RescheduleFrom", PyvtkExecutionScheduler_RescheduleFrom, 1,
   (char*)"V.RescheduleFrom(vtkExecutive, vtkComputingResources)\nC++: void RescheduleFrom(vtkExecutive *sink,\n    vtkComputingResources *resources)\n\nRedistribute the thread resources from a sink given a certain\namount of resource\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkExecutionScheduler_StaticNew()
{
  return vtkExecutionScheduler::New();
}

PyObject *PyVTKClass_vtkExecutionSchedulerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkExecutionScheduler_StaticNew,
    PyvtkExecutionScheduler_Methods,
    "vtkExecutionScheduler", modulename,
    NULL, NULL,
    PyvtkExecutionScheduler_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkExecutionScheduler_Doc()
{
  static const char *docstring[] = {
    "vtkExecutionScheduler - Scheduling execution with\n\n",
    "Superclass: vtkObject\n\n",
    "This is a class for balancing the computing resources throughout the\nnetwork\n\nSee Also:\n\nvtkComputingResources vtkThreadedStreamingPipeline\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkExecutionScheduler(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkExecutionSchedulerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkExecutionScheduler", o) != 0)
    {
    Py_DECREF(o);
    }

}

