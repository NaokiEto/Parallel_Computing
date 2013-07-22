// python wrapper for vtkGPUInfoList
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
#include "vtkGPUInfoList.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGPUInfoList(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGPUInfoList(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGPUInfoListNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGPUInfoListNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkGPUInfoList_Doc();


static PyObject *
PyvtkGPUInfoList_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

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
      tempr = op->vtkGPUInfoList::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfoList_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

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
      tempr = op->vtkGPUInfoList::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfoList_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  vtkGPUInfoList *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGPUInfoList::NewInstance();
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
PyvtkGPUInfoList_Probe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    op->Probe();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfoList_IsProbed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsProbed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->IsProbed();
      }
    else
      {
      tempr = op->vtkGPUInfoList::IsProbed();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfoList_GetNumberOfGPUs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGPUs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfGPUs();
      }
    else
      {
      tempr = op->vtkGPUInfoList::GetNumberOfGPUs();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGPUInfoList_GetGPUInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGPUInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  int temp0;
  vtkGPUInfo *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGPUInfo(temp0);
      }
    else
      {
      tempr = op->vtkGPUInfoList::GetGPUInfo(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGPUInfoList_Methods[] = {
  {(char*)"GetClassName", PyvtkGPUInfoList_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGPUInfoList_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGPUInfoList_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGPUInfoList\nC++: vtkGPUInfoList *NewInstance()\n\n"},
  {(char*)"Probe", PyvtkGPUInfoList_Probe, 1,
   (char*)"V.Probe()\nC++: virtual void Probe()\n\nBuild the list of vtkInfoGPU if not done yet. Default\nimplementation created an empty list. Useful if there is no\nimplementation available for a given architecture yet.\n\\post probed: IsProbed()\n"},
  {(char*)"IsProbed", PyvtkGPUInfoList_IsProbed, 1,
   (char*)"V.IsProbed() -> bool\nC++: virtual bool IsProbed()\n\nTells if the operating system has been probed. Initial value is\nfalse.\n"},
  {(char*)"GetNumberOfGPUs", PyvtkGPUInfoList_GetNumberOfGPUs, 1,
   (char*)"V.GetNumberOfGPUs() -> int\nC++: virtual int GetNumberOfGPUs()\n\nReturn the number of GPUs.\n\\pre probed: IsProbed()\n"},
  {(char*)"GetGPUInfo", PyvtkGPUInfoList_GetGPUInfo, 1,
   (char*)"V.GetGPUInfo(int) -> vtkGPUInfo\nC++: virtual vtkGPUInfo *GetGPUInfo(int i)\n\nReturn information about GPU i.\n\\pre probed: IsProbed()\n\\pre valid_index: i>=0 && i<GetNumberOfGPUs()\n\\post result_exists: result!=0\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGPUInfoList_StaticNew()
{
  return vtkGPUInfoList::New();
}

PyObject *PyVTKClass_vtkGPUInfoListNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGPUInfoList_StaticNew,
    PyvtkGPUInfoList_Methods,
    "vtkGPUInfoList", modulename,
    NULL, NULL,
    PyvtkGPUInfoList_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkGPUInfoList_Doc()
{
  static const char *docstring[] = {
    "vtkGPUInfoList - Stores the list of GPUs VRAM information.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkGPUInfoList stores a list of vtkGPUInfo. An host can have several\nGPUs. It creates and sets the list by probing the host with system\ncalls. This an abstract class. Concrete classes are OS specific.\n\nSee Also:\n\nvtkGPUInfo vtkDirectXGPUInfoList vtkCoreGraphicsGPUInfoList\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGPUInfoList(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGPUInfoListNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGPUInfoList", o) != 0)
    {
    Py_DECREF(o);
    }

}

