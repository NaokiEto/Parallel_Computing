// python wrapper for vtkCollectPolyData
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
#include "vtkCollectPolyData.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCollectPolyData(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCollectPolyData(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCollectPolyDataNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCollectPolyDataNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkCollectPolyData_Doc();


static PyObject *
PyvtkCollectPolyData_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

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
      tempr = op->vtkCollectPolyData::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

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
      tempr = op->vtkCollectPolyData::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  vtkCollectPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCollectPolyData::NewInstance();
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
PyvtkCollectPolyData_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCollectPolyData *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCollectPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectPolyData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

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
      op->vtkCollectPolyData::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectPolyData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

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
      tempr = op->vtkCollectPolyData::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectPolyData_SetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

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
      op->vtkCollectPolyData::SetSocketController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectPolyData_GetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

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
      tempr = op->vtkCollectPolyData::GetSocketController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectPolyData_SetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetPassThrough(temp0);
      }
    else
      {
      op->vtkCollectPolyData::SetPassThrough(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectPolyData_GetPassThrough(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThrough");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetPassThrough();
      }
    else
      {
      tempr = op->vtkCollectPolyData::GetPassThrough();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCollectPolyData_PassThroughOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughOn();
      }
    else
      {
      op->vtkCollectPolyData::PassThroughOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCollectPolyData_PassThroughOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollectPolyData *op = static_cast<vtkCollectPolyData *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->PassThroughOff();
      }
    else
      {
      op->vtkCollectPolyData::PassThroughOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCollectPolyData_Methods[] = {
  {(char*)"GetClassName", PyvtkCollectPolyData_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCollectPolyData_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCollectPolyData_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCollectPolyData\nC++: vtkCollectPolyData *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCollectPolyData_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCollectPolyData\nC++: vtkCollectPolyData *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetController", PyvtkCollectPolyData_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"GetController", PyvtkCollectPolyData_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\nBy defualt this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {(char*)"SetSocketController", PyvtkCollectPolyData_SetSocketController, 1,
   (char*)"V.SetSocketController(vtkSocketController)\nC++: virtual void SetSocketController(vtkSocketController *)\n\nWhen this filter is being used in client-server mode, this is the\ncontroller used to communicate between client and server.  Client\nshould not set the other controller.\n"},
  {(char*)"GetSocketController", PyvtkCollectPolyData_GetSocketController, 1,
   (char*)"V.GetSocketController() -> vtkSocketController\nC++: vtkSocketController *GetSocketController()\n\nWhen this filter is being used in client-server mode, this is the\ncontroller used to communicate between client and server.  Client\nshould not set the other controller.\n"},
  {(char*)"SetPassThrough", PyvtkCollectPolyData_SetPassThrough, 1,
   (char*)"V.SetPassThrough(int)\nC++: void SetPassThrough(int a)\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {(char*)"GetPassThrough", PyvtkCollectPolyData_GetPassThrough, 1,
   (char*)"V.GetPassThrough() -> int\nC++: int GetPassThrough()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {(char*)"PassThroughOn", PyvtkCollectPolyData_PassThroughOn, 1,
   (char*)"V.PassThroughOn()\nC++: void PassThroughOn()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {(char*)"PassThroughOff", PyvtkCollectPolyData_PassThroughOff, 1,
   (char*)"V.PassThroughOff()\nC++: void PassThroughOff()\n\nTo collect or just copy input to output. Off (collect) by\ndefault.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCollectPolyData_StaticNew()
{
  return vtkCollectPolyData::New();
}

PyObject *PyVTKClass_vtkCollectPolyDataNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCollectPolyData_StaticNew,
    PyvtkCollectPolyData_Methods,
    "vtkCollectPolyData", modulename,
    NULL, NULL,
    PyvtkCollectPolyData_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkCollectPolyData_Doc()
{
  static const char *docstring[] = {
    "vtkCollectPolyData - Collect distributed polydata.\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "This filter has code to collect polydat from across processes onto\nnode 0. Collection can be turned on or off using the \"PassThrough\"\nflag.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCollectPolyData(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCollectPolyDataNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCollectPolyData", o) != 0)
    {
    Py_DECREF(o);
    }

}

