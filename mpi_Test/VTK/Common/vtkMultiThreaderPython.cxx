// python wrapper for vtkMultiThreader
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
#include "vtkMultiThreader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMultiThreader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMultiThreader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMultiThreaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMultiThreaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkMultiThreader_Doc();


static PyObject *
PyvtkMultiThreader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

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
      tempr = op->vtkMultiThreader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

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
      tempr = op->vtkMultiThreader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  vtkMultiThreader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMultiThreader::NewInstance();
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
PyvtkMultiThreader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMultiThreader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMultiThreader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_SetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetNumberOfThreads(temp0);
      }
    else
      {
      op->vtkMultiThreader::SetNumberOfThreads(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_GetNumberOfThreadsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfThreadsMinValue();
      }
    else
      {
      tempr = op->vtkMultiThreader::GetNumberOfThreadsMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_GetNumberOfThreadsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfThreadsMaxValue();
      }
    else
      {
      tempr = op->vtkMultiThreader::GetNumberOfThreadsMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_GetNumberOfThreads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfThreads();
      }
    else
      {
      tempr = op->vtkMultiThreader::GetNumberOfThreads();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_SetGlobalMaximumNumberOfThreads(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalMaximumNumberOfThreads");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMultiThreader::SetGlobalMaximumNumberOfThreads(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_GetGlobalMaximumNumberOfThreads(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalMaximumNumberOfThreads");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMultiThreader::GetGlobalMaximumNumberOfThreads();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_SetGlobalDefaultNumberOfThreads(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalDefaultNumberOfThreads");

  int temp0;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    vtkMultiThreader::SetGlobalDefaultNumberOfThreads(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_GetGlobalDefaultNumberOfThreads(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalDefaultNumberOfThreads");

  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(0))
    {
    tempr = vtkMultiThreader::GetGlobalDefaultNumberOfThreads();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SingleMethodExecute();
      }
    else
      {
      op->vtkMultiThreader::SingleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->MultipleMethodExecute();
      }
    else
      {
      op->vtkMultiThreader::MultipleMethodExecute();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_TerminateThread(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TerminateThread");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->TerminateThread(temp0);
      }
    else
      {
      op->vtkMultiThreader::TerminateThread(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMultiThreader_IsThreadActive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsThreadActive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMultiThreader *op = static_cast<vtkMultiThreader *>(vp);

  int temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsThreadActive(temp0);
      }
    else
      {
      tempr = op->vtkMultiThreader::IsThreadActive(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMultiThreader_Methods[] = {
  {(char*)"GetClassName", PyvtkMultiThreader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMultiThreader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMultiThreader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMultiThreader\nC++: vtkMultiThreader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMultiThreader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMultiThreader\nC++: vtkMultiThreader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetNumberOfThreads", PyvtkMultiThreader_SetNumberOfThreads, 1,
   (char*)"V.SetNumberOfThreads(int)\nC++: void SetNumberOfThreads(int)\n\nGet/Set the number of threads to create. It will be clamped to\nthe range 1 - VTK_MAX_THREADS, so the caller of this method\nshould check that the requested number of threads was accepted.\n"},
  {(char*)"GetNumberOfThreadsMinValue", PyvtkMultiThreader_GetNumberOfThreadsMinValue, 1,
   (char*)"V.GetNumberOfThreadsMinValue() -> int\nC++: int GetNumberOfThreadsMinValue()\n\nGet/Set the number of threads to create. It will be clamped to\nthe range 1 - VTK_MAX_THREADS, so the caller of this method\nshould check that the requested number of threads was accepted.\n"},
  {(char*)"GetNumberOfThreadsMaxValue", PyvtkMultiThreader_GetNumberOfThreadsMaxValue, 1,
   (char*)"V.GetNumberOfThreadsMaxValue() -> int\nC++: int GetNumberOfThreadsMaxValue()\n\nGet/Set the number of threads to create. It will be clamped to\nthe range 1 - VTK_MAX_THREADS, so the caller of this method\nshould check that the requested number of threads was accepted.\n"},
  {(char*)"GetNumberOfThreads", PyvtkMultiThreader_GetNumberOfThreads, 1,
   (char*)"V.GetNumberOfThreads() -> int\nC++: virtual int GetNumberOfThreads()\n\nGet/Set the number of threads to create. It will be clamped to\nthe range 1 - VTK_MAX_THREADS, so the caller of this method\nshould check that the requested number of threads was accepted.\n"},
  {(char*)"SetGlobalMaximumNumberOfThreads", PyvtkMultiThreader_SetGlobalMaximumNumberOfThreads, 1,
   (char*)"V.SetGlobalMaximumNumberOfThreads(int)\nC++: static void SetGlobalMaximumNumberOfThreads(int val)\n\nSet/Get the maximum number of threads to use when multithreading.\nThis limits and overrides any other settings for multithreading.\nA value of zero indicates no limit.\n"},
  {(char*)"GetGlobalMaximumNumberOfThreads", PyvtkMultiThreader_GetGlobalMaximumNumberOfThreads, 1,
   (char*)"V.GetGlobalMaximumNumberOfThreads() -> int\nC++: static int GetGlobalMaximumNumberOfThreads()\n\nSet/Get the maximum number of threads to use when multithreading.\nThis limits and overrides any other settings for multithreading.\nA value of zero indicates no limit.\n"},
  {(char*)"SetGlobalDefaultNumberOfThreads", PyvtkMultiThreader_SetGlobalDefaultNumberOfThreads, 1,
   (char*)"V.SetGlobalDefaultNumberOfThreads(int)\nC++: static void SetGlobalDefaultNumberOfThreads(int val)\n\nSet/Get the value which is used to initialize the NumberOfThreads\nin the constructor.  Initially this default is set to the number\nof processors or VTK_MAX_THREADS (which ever is less).\n"},
  {(char*)"GetGlobalDefaultNumberOfThreads", PyvtkMultiThreader_GetGlobalDefaultNumberOfThreads, 1,
   (char*)"V.GetGlobalDefaultNumberOfThreads() -> int\nC++: static int GetGlobalDefaultNumberOfThreads()\n\nSet/Get the value which is used to initialize the NumberOfThreads\nin the constructor.  Initially this default is set to the number\nof processors or VTK_MAX_THREADS (which ever is less).\n"},
  {(char*)"SingleMethodExecute", PyvtkMultiThreader_SingleMethodExecute, 1,
   (char*)"V.SingleMethodExecute()\nC++: void SingleMethodExecute()\n\nExecute the SingleMethod (as define by SetSingleMethod) using\nthis->NumberOfThreads threads.\n"},
  {(char*)"MultipleMethodExecute", PyvtkMultiThreader_MultipleMethodExecute, 1,
   (char*)"V.MultipleMethodExecute()\nC++: void MultipleMethodExecute()\n\nExecute the MultipleMethods (as define by calling\nSetMultipleMethod for each of the required this->NumberOfThreads\nmethods) using this->NumberOfThreads threads.\n"},
  {(char*)"TerminateThread", PyvtkMultiThreader_TerminateThread, 1,
   (char*)"V.TerminateThread(int)\nC++: void TerminateThread(int thread_id)\n\nTerminate the thread that was created with a SpawnThreadExecute()\n"},
  {(char*)"IsThreadActive", PyvtkMultiThreader_IsThreadActive, 1,
   (char*)"V.IsThreadActive(int) -> int\nC++: int IsThreadActive(int threadID)\n\nDetermine if a thread is still active\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMultiThreader_StaticNew()
{
  return vtkMultiThreader::New();
}

PyObject *PyVTKClass_vtkMultiThreaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMultiThreader_StaticNew,
    PyvtkMultiThreader_Methods,
    "vtkMultiThreader", modulename,
    NULL, NULL,
    PyvtkMultiThreader_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkMultiThreader_Doc()
{
  static const char *docstring[] = {
    "vtkMultiThreader - A class for performing multithreaded execution\n\n",
    "Superclass: vtkObject\n\n",
    "vtkMultithreader is a class that provides support for multithreaded\nexecution using sproc() on an SGI, or pthread_create on any platform\nsupporting POSIX threads.  This class can be used to execute a single\nmethod on multiple threads, or to specify a method per thread.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMultiThreader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMultiThreaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMultiThreader", o) != 0)
    {
    Py_DECREF(o);
    }

}

