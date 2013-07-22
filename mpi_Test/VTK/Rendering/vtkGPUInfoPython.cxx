// python wrapper for vtkGPUInfo
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
#include "vtkGPUInfo.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGPUInfo(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGPUInfo(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGPUInfoNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGPUInfoNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGPUInfo_Doc();


static PyObject *
PyvtkGPUInfo_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

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
      tempr = op->vtkGPUInfo::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

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
      tempr = op->vtkGPUInfo::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  vtkGPUInfo *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGPUInfo::NewInstance();
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
PyvtkGPUInfo_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGPUInfo *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGPUInfo::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetDedicatedVideoMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDedicatedVideoMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDedicatedVideoMemory(temp0);
      }
    else
      {
      op->vtkGPUInfo::SetDedicatedVideoMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetDedicatedVideoMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDedicatedVideoMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDedicatedVideoMemory();
      }
    else
      {
      tempr = op->vtkGPUInfo::GetDedicatedVideoMemory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetDedicatedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDedicatedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetDedicatedSystemMemory(temp0);
      }
    else
      {
      op->vtkGPUInfo::SetDedicatedSystemMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetDedicatedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDedicatedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDedicatedSystemMemory();
      }
    else
      {
      tempr = op->vtkGPUInfo::GetDedicatedSystemMemory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetSharedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  vtkIdType temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetSharedSystemMemory(temp0);
      }
    else
      {
      op->vtkGPUInfo::SetSharedSystemMemory(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetSharedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetSharedSystemMemory();
      }
    else
      {
      tempr = op->vtkGPUInfo::GetSharedSystemMemory();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGPUInfo_Methods[] = {
  {(char*)"GetClassName", PyvtkGPUInfo_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGPUInfo_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGPUInfo_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGPUInfo\nC++: vtkGPUInfo *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGPUInfo_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGPUInfo\nC++: vtkGPUInfo *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetDedicatedVideoMemory", PyvtkGPUInfo_SetDedicatedVideoMemory, 1,
   (char*)"V.SetDedicatedVideoMemory(int)\nC++: void SetDedicatedVideoMemory(vtkIdType a)\n\nSet/Get dedicated video memory in bytes. Initial value is 0.\nUsually the fastest one. If it is not null, it should be take\ninto account first and DedicatedSystemMemory or\nSharedSystemMemory should be ignored.\n"},
  {(char*)"GetDedicatedVideoMemory", PyvtkGPUInfo_GetDedicatedVideoMemory, 1,
   (char*)"V.GetDedicatedVideoMemory() -> int\nC++: vtkIdType GetDedicatedVideoMemory()\n\nSet/Get dedicated video memory in bytes. Initial value is 0.\nUsually the fastest one. If it is not null, it should be take\ninto account first and DedicatedSystemMemory or\nSharedSystemMemory should be ignored.\n"},
  {(char*)"SetDedicatedSystemMemory", PyvtkGPUInfo_SetDedicatedSystemMemory, 1,
   (char*)"V.SetDedicatedSystemMemory(int)\nC++: void SetDedicatedSystemMemory(vtkIdType a)\n\nSet/Get dedicated system memory in bytes. Initial value is 0.\nThis is slow memory. If it is not null, this value should be\ntaken into account only if there is no DedicatedVideoMemory and\nSharedSystemMemory should be ignored.\n"},
  {(char*)"GetDedicatedSystemMemory", PyvtkGPUInfo_GetDedicatedSystemMemory, 1,
   (char*)"V.GetDedicatedSystemMemory() -> int\nC++: vtkIdType GetDedicatedSystemMemory()\n\nSet/Get dedicated system memory in bytes. Initial value is 0.\nThis is slow memory. If it is not null, this value should be\ntaken into account only if there is no DedicatedVideoMemory and\nSharedSystemMemory should be ignored.\n"},
  {(char*)"SetSharedSystemMemory", PyvtkGPUInfo_SetSharedSystemMemory, 1,
   (char*)"V.SetSharedSystemMemory(int)\nC++: void SetSharedSystemMemory(vtkIdType a)\n\nSet/Get shared system memory in bytes. Initial value is 0.\nSlowest memory. This value should be taken into account only if\nthere is neither DedicatedVideoMemory nor DedicatedSystemMemory.\n"},
  {(char*)"GetSharedSystemMemory", PyvtkGPUInfo_GetSharedSystemMemory, 1,
   (char*)"V.GetSharedSystemMemory() -> int\nC++: vtkIdType GetSharedSystemMemory()\n\nSet/Get shared system memory in bytes. Initial value is 0.\nSlowest memory. This value should be taken into account only if\nthere is neither DedicatedVideoMemory nor DedicatedSystemMemory.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGPUInfo_StaticNew()
{
  return vtkGPUInfo::New();
}

PyObject *PyVTKClass_vtkGPUInfoNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGPUInfo_StaticNew,
    PyvtkGPUInfo_Methods,
    "vtkGPUInfo", modulename,
    NULL, NULL,
    PyvtkGPUInfo_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGPUInfo_Doc()
{
  static const char *docstring[] = {
    "vtkGPUInfo - Stores GPU VRAM information.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGPUInfo stores information about GPU Video RAM. An host can have\nseveral GPUs. The values are set by vtkGPUInfoList.\n\nSee Also:\n\nvtkGPUInfoList vtkDirectXGPUInfoList vtkCoreGraphicsGPUInfoList\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGPUInfo(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGPUInfoNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGPUInfo", o) != 0)
    {
    Py_DECREF(o);
    }

}

