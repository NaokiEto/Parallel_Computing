// python wrapper for vtkDuplicatePolyData
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
#include "vtkDuplicatePolyData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDuplicatePolyData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDuplicatePolyData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDuplicatePolyDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDuplicatePolyDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkDuplicatePolyData_Doc();


static PyObject *
PyvtkDuplicatePolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

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
      tempr = op->vtkDuplicatePolyData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

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
      tempr = op->vtkDuplicatePolyData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkDuplicatePolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDuplicatePolyData::NewInstance();
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
PyvtkDuplicatePolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDuplicatePolyData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDuplicatePolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkDuplicatePolyData::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkDuplicatePolyData::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_InitializeSchedule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSchedule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->InitializeSchedule(temp0);
      }
    else
      {
      op->vtkDuplicatePolyData::InitializeSchedule(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetSynchronous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSynchronous(temp0);
      }
    else
      {
      op->vtkDuplicatePolyData::SetSynchronous(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetSynchronous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSynchronous();
      }
    else
      {
      tempr = op->vtkDuplicatePolyData::GetSynchronous();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SynchronousOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronousOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SynchronousOn();
      }
    else
      {
      op->vtkDuplicatePolyData::SynchronousOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SynchronousOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronousOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->SynchronousOff();
      }
    else
      {
      op->vtkDuplicatePolyData::SynchronousOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkSocketController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSocketController();
      }
    else
      {
      tempr = op->vtkDuplicatePolyData::GetSocketController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkSocketController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketController"))
    {
    if (ap.IsBound())
      {
      op->SetSocketController(temp0);
      }
    else
      {
      op->vtkDuplicatePolyData::SetSocketController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetClientFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClientFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetClientFlag(temp0);
      }
    else
      {
      op->vtkDuplicatePolyData::SetClientFlag(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetClientFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetClientFlag();
      }
    else
      {
      tempr = op->vtkDuplicatePolyData::GetClientFlag();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMemorySize();
      }
    else
      {
      tempr = op->vtkDuplicatePolyData::GetMemorySize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkDuplicatePolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkDuplicatePolyData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDuplicatePolyData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDuplicatePolyData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDuplicatePolyData\nC++: vtkDuplicatePolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDuplicatePolyData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDuplicatePolyData\nC++: vtkDuplicatePolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkDuplicatePolyData_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"GetController", PyvtkDuplicatePolyData_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"InitializeSchedule", PyvtkDuplicatePolyData_InitializeSchedule, 1,
   (char*)"V.InitializeSchedule(int)\nC++: void InitializeSchedule(int numProcs)\n\n"},
  {(char*)"SetSynchronous", PyvtkDuplicatePolyData_SetSynchronous, 1,
   (char*)"V.SetSynchronous(int)\nC++: void SetSynchronous(int a)\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {(char*)"GetSynchronous", PyvtkDuplicatePolyData_GetSynchronous, 1,
   (char*)"V.GetSynchronous() -> int\nC++: int GetSynchronous()\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {(char*)"SynchronousOn", PyvtkDuplicatePolyData_SynchronousOn, 1,
   (char*)"V.SynchronousOn()\nC++: void SynchronousOn()\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {(char*)"SynchronousOff", PyvtkDuplicatePolyData_SynchronousOff, 1,
   (char*)"V.SynchronousOff()\nC++: void SynchronousOff()\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {(char*)"GetSocketController", PyvtkDuplicatePolyData_GetSocketController, 1,
   (char*)"V.GetSocketController() -> vtkSocketController\nC++: vtkSocketController *GetSocketController()\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to diferentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {(char*)"SetSocketController", PyvtkDuplicatePolyData_SetSocketController, 1,
   (char*)"V.SetSocketController(vtkSocketController)\nC++: void SetSocketController(vtkSocketController *controller)\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to diferentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {(char*)"SetClientFlag", PyvtkDuplicatePolyData_SetClientFlag, 1,
   (char*)"V.SetClientFlag(int)\nC++: void SetClientFlag(int a)\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to diferentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {(char*)"GetClientFlag", PyvtkDuplicatePolyData_GetClientFlag, 1,
   (char*)"V.GetClientFlag() -> int\nC++: int GetClientFlag()\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to diferentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {(char*)"GetMemorySize", PyvtkDuplicatePolyData_GetMemorySize, 1,
   (char*)"V.GetMemorySize() -> int\nC++: unsigned long GetMemorySize()\n\nThis returns to size of the output (on this process). This method\nis not really used.  It is needed to have the same API as\nvtkCollectPolyData.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDuplicatePolyData_StaticNew()
{
  return vtkDuplicatePolyData::New();
}

PyObject *PyVTKClass_vtkDuplicatePolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDuplicatePolyData_StaticNew,
    PyvtkDuplicatePolyData_Methods,
    "vtkDuplicatePolyData", modulename,
    NULL, NULL,
    PyvtkDuplicatePolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkDuplicatePolyData_Doc()
{
  static const char *docstring[] = {
    "vtkDuplicatePolyData - For distributed tiled displays.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This filter collects poly data and duplicates it on every node.\nConverts data parallel so every node has a complete copy of the data.\nThe filter is used at the end of a pipeline for driving a tiled\ndisplay.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDuplicatePolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDuplicatePolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDuplicatePolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

