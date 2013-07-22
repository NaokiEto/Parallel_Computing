// python wrapper for vtkThreadedStreamingPipeline
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
#include "vtkThreadedStreamingPipeline.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkThreadedStreamingPipeline(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkThreadedStreamingPipeline(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkThreadedStreamingPipelineNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkThreadedStreamingPipelineNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkCompositeDataPipelineNew
extern "C" { PyObject *PyVTKClass_vtkCompositeDataPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkCompositeDataPipelineNew
#endif

static const char **PyvtkThreadedStreamingPipeline_Doc();


static PyObject *
PyvtkThreadedStreamingPipeline_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

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
      tempr = op->vtkThreadedStreamingPipeline::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedStreamingPipeline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

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
      tempr = op->vtkThreadedStreamingPipeline::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedStreamingPipeline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

  vtkThreadedStreamingPipeline *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkThreadedStreamingPipeline::NewInstance();
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
PyvtkThreadedStreamingPipeline_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkThreadedStreamingPipeline *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkThreadedStreamingPipeline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedStreamingPipeline_AUTO_PROPAGATE(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "AUTO_PROPAGATE");

  vtkInformationIntegerKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkThreadedStreamingPipeline::AUTO_PROPAGATE();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedStreamingPipeline_EXTRA_INFORMATION(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "EXTRA_INFORMATION");

  vtkInformationObjectBaseKey *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkThreadedStreamingPipeline::EXTRA_INFORMATION();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedStreamingPipeline_SetMultiThreadedEnabled(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetMultiThreadedEnabled");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkThreadedStreamingPipeline::SetMultiThreadedEnabled(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedStreamingPipeline_SetAutoPropagatePush(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAutoPropagatePush");

  bool temp0 = false;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkThreadedStreamingPipeline::SetAutoPropagatePush(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedStreamingPipeline_Pull_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Pull");

  vtkExecutiveCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutiveCollection"))
    {
    vtkThreadedStreamingPipeline::Pull(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreadedStreamingPipeline_Pull_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Pull");

  vtkExecutiveCollection *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkExecutiveCollection") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    vtkThreadedStreamingPipeline::Pull(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreadedStreamingPipeline_Pull_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Pull");

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    vtkThreadedStreamingPipeline::Pull(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreadedStreamingPipeline_Pull_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Pull");

  vtkExecutive *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkExecutive") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    vtkThreadedStreamingPipeline::Pull(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreadedStreamingPipeline_Pull_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Pull();
      }
    else
      {
      op->vtkThreadedStreamingPipeline::Pull();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreadedStreamingPipeline_Pull_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Pull(temp0);
      }
    else
      {
      op->vtkThreadedStreamingPipeline::Pull(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkThreadedStreamingPipeline_Pull_Methods[] = {
  {NULL, PyvtkThreadedStreamingPipeline_Pull_s1, 1,
   (char*)"O *vtkExecutiveCollection"},
  {NULL, PyvtkThreadedStreamingPipeline_Pull_s2, 1,
   (char*)"OO *vtkExecutiveCollection *vtkInformation"},
  {NULL, PyvtkThreadedStreamingPipeline_Pull_s3, 1,
   (char*)"O *vtkExecutive"},
  {NULL, PyvtkThreadedStreamingPipeline_Pull_s4, 1,
   (char*)"OO *vtkExecutive *vtkInformation"},
  {NULL, PyvtkThreadedStreamingPipeline_Pull_s6, 1,
   (char*)"@O *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkThreadedStreamingPipeline_Pull(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThreadedStreamingPipeline_Pull_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkThreadedStreamingPipeline_Pull_s5(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Pull");
  return NULL;
}



static PyObject *
PyvtkThreadedStreamingPipeline_Push_s1(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Push");

  vtkExecutiveCollection *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutiveCollection"))
    {
    vtkThreadedStreamingPipeline::Push(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreadedStreamingPipeline_Push_s2(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Push");

  vtkExecutiveCollection *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkExecutiveCollection") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    vtkThreadedStreamingPipeline::Push(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreadedStreamingPipeline_Push_s3(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Push");

  vtkExecutive *temp0 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExecutive"))
    {
    vtkThreadedStreamingPipeline::Push(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreadedStreamingPipeline_Push_s4(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "Push");

  vtkExecutive *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkExecutive") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    vtkThreadedStreamingPipeline::Push(temp0, temp1);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreadedStreamingPipeline_Push_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Push();
      }
    else
      {
      op->vtkThreadedStreamingPipeline::Push();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyObject *
PyvtkThreadedStreamingPipeline_Push_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Push");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

  vtkInformation *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Push(temp0);
      }
    else
      {
      op->vtkThreadedStreamingPipeline::Push(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkThreadedStreamingPipeline_Push_Methods[] = {
  {NULL, PyvtkThreadedStreamingPipeline_Push_s1, 1,
   (char*)"O *vtkExecutiveCollection"},
  {NULL, PyvtkThreadedStreamingPipeline_Push_s2, 1,
   (char*)"OO *vtkExecutiveCollection *vtkInformation"},
  {NULL, PyvtkThreadedStreamingPipeline_Push_s3, 1,
   (char*)"O *vtkExecutive"},
  {NULL, PyvtkThreadedStreamingPipeline_Push_s4, 1,
   (char*)"OO *vtkExecutive *vtkInformation"},
  {NULL, PyvtkThreadedStreamingPipeline_Push_s6, 1,
   (char*)"@O *vtkInformation"},
  {NULL, NULL, 0, NULL}
};

static PyObject *
PyvtkThreadedStreamingPipeline_Push(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkThreadedStreamingPipeline_Push_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
    {
    case 0:
      return PyvtkThreadedStreamingPipeline_Push_s5(self, args);
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "Push");
  return NULL;
}



static PyObject *
PyvtkThreadedStreamingPipeline_ReleaseInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ReleaseInputs();
      }
    else
      {
      op->vtkThreadedStreamingPipeline::ReleaseInputs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedStreamingPipeline_ForceUpdateData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceUpdateData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

  int temp0;
  vtkInformation *temp1 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      tempr = op->ForceUpdateData(temp0, temp1);
      }
    else
      {
      tempr = op->vtkThreadedStreamingPipeline::ForceUpdateData(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedStreamingPipeline_UpdateRequestDataTimeFromSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateRequestDataTimeFromSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->UpdateRequestDataTimeFromSource();
      }
    else
      {
      op->vtkThreadedStreamingPipeline::UpdateRequestDataTimeFromSource();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkThreadedStreamingPipeline_GetResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkThreadedStreamingPipeline *op = static_cast<vtkThreadedStreamingPipeline *>(vp);

  vtkComputingResources *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetResources();
      }
    else
      {
      tempr = op->vtkThreadedStreamingPipeline::GetResources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkThreadedStreamingPipeline_Methods[] = {
  {(char*)"GetClassName", PyvtkThreadedStreamingPipeline_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkThreadedStreamingPipeline_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkThreadedStreamingPipeline_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkThreadedStreamingPipeline\nC++: vtkThreadedStreamingPipeline *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkThreadedStreamingPipeline_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkThreadedStreamingPipeline\nC++: vtkThreadedStreamingPipeline *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"AUTO_PROPAGATE", PyvtkThreadedStreamingPipeline_AUTO_PROPAGATE, 1,
   (char*)"V.AUTO_PROPAGATE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *AUTO_PROPAGATE()\n\nKey to store the priority of a task\n"},
  {(char*)"EXTRA_INFORMATION", PyvtkThreadedStreamingPipeline_EXTRA_INFORMATION, 1,
   (char*)"V.EXTRA_INFORMATION() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *EXTRA_INFORMATION()\n\nKey to store the additional information for an update request\n"},
  {(char*)"SetMultiThreadedEnabled", PyvtkThreadedStreamingPipeline_SetMultiThreadedEnabled, 1,
   (char*)"V.SetMultiThreadedEnabled(bool)\nC++: static void SetMultiThreadedEnabled(bool enabled)\n\nEnable/Disable Multi-Threaded updating mechanism\n"},
  {(char*)"SetAutoPropagatePush", PyvtkThreadedStreamingPipeline_SetAutoPropagatePush, 1,
   (char*)"V.SetAutoPropagatePush(bool)\nC++: static void SetAutoPropagatePush(bool enabled)\n\nEnable/Disable automatic propagation of Push events\n"},
  {(char*)"Pull", PyvtkThreadedStreamingPipeline_Pull, 1,
   (char*)"V.Pull(vtkExecutiveCollection)\nC++: static void Pull(vtkExecutiveCollection *execs)\nV.Pull(vtkExecutiveCollection, vtkInformation)\nC++: static void Pull(vtkExecutiveCollection *execs,\n    vtkInformation *info)\nV.Pull(vtkExecutive)\nC++: static void Pull(vtkExecutive *exec)\nV.Pull(vtkExecutive, vtkInformation)\nC++: static void Pull(vtkExecutive *exec, vtkInformation *info)\nV.Pull()\nC++: void Pull()\nV.Pull(vtkInformation)\nC++: void Pull(vtkInformation *info)\n\nTrigger the updates on certain execs and asking all of its\nupstream modules to be updated as well (propagate up)\n"},
  {(char*)"Push", PyvtkThreadedStreamingPipeline_Push, 1,
   (char*)"V.Push(vtkExecutiveCollection)\nC++: static void Push(vtkExecutiveCollection *execs)\nV.Push(vtkExecutiveCollection, vtkInformation)\nC++: static void Push(vtkExecutiveCollection *execs,\n    vtkInformation *info)\nV.Push(vtkExecutive)\nC++: static void Push(vtkExecutive *exec)\nV.Push(vtkExecutive, vtkInformation)\nC++: static void Push(vtkExecutive *exec, vtkInformation *info)\nV.Push()\nC++: void Push()\nV.Push(vtkInformation)\nC++: void Push(vtkInformation *info)\n\nTrigger the updates on certain execs and asking all of its\ndownstream modules to be updated as well (propagate down)\n"},
  {(char*)"ReleaseInputs", PyvtkThreadedStreamingPipeline_ReleaseInputs, 1,
   (char*)"V.ReleaseInputs()\nC++: void ReleaseInputs()\n\nRelease all the locks for input ports living upstream\n"},
  {(char*)"ForceUpdateData", PyvtkThreadedStreamingPipeline_ForceUpdateData, 1,
   (char*)"V.ForceUpdateData(int, vtkInformation) -> int\nC++: int ForceUpdateData(int processingUnit, vtkInformation *info)\n\nSend a direct REQUEST_DATA (on all ports) to this executive\n"},
  {(char*)"UpdateRequestDataTimeFromSource", PyvtkThreadedStreamingPipeline_UpdateRequestDataTimeFromSource, 1,
   (char*)"V.UpdateRequestDataTimeFromSource()\nC++: void UpdateRequestDataTimeFromSource()\n\nUpdate the LastDataRequestTimeFromSource using its upstream time\n"},
  {(char*)"GetResources", PyvtkThreadedStreamingPipeline_GetResources, 1,
   (char*)"V.GetResources() -> vtkComputingResources\nC++: vtkComputingResources *GetResources()\n\nReturn the scheduling for this executive\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkThreadedStreamingPipeline_StaticNew()
{
  return vtkThreadedStreamingPipeline::New();
}

PyObject *PyVTKClass_vtkThreadedStreamingPipelineNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkThreadedStreamingPipeline_StaticNew,
    PyvtkThreadedStreamingPipeline_Methods,
    "vtkThreadedStreamingPipeline", modulename,
    NULL, NULL,
    PyvtkThreadedStreamingPipeline_Doc(),
    PyVTKClass_vtkCompositeDataPipelineNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"PROCESSING_UNIT_NONE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"PROCESSING_UNIT_CPU", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"PROCESSING_UNIT_GPU", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkThreadedStreamingPipeline_Doc()
{
  static const char *docstring[] = {
    "vtkThreadedStreamingPipeline - Executive supporting multi-threads\n\n",
    "Superclass: vtkCompositeDataPipeline\n\n",
    "vtkThreadeStreamingDemandDrivenPipeline is an executive that supports\nupdating input ports based on the number of threads available.\n\nSee Also:\n\nvtkExecutionScheduler\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkThreadedStreamingPipeline(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkThreadedStreamingPipelineNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkThreadedStreamingPipeline", o) != 0)
    {
    Py_DECREF(o);
    }

}

