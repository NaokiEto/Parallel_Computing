// python wrapper for vtkDummyGPUInfoList
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
#include "vtkDummyGPUInfoList.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkDummyGPUInfoList(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkDummyGPUInfoList(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkDummyGPUInfoListNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkDummyGPUInfoListNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGPUInfoListNew
extern "C" { PyObject *PyVTKClass_vtkGPUInfoListNew(const char *); }
#define DECLARED_PyVTKClass_vtkGPUInfoListNew
#endif

static const char **PyvtkDummyGPUInfoList_Doc();


static PyObject *
PyvtkDummyGPUInfoList_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyGPUInfoList *op = static_cast<vtkDummyGPUInfoList *>(vp);

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
      tempr = op->vtkDummyGPUInfoList::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyGPUInfoList_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyGPUInfoList *op = static_cast<vtkDummyGPUInfoList *>(vp);

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
      tempr = op->vtkDummyGPUInfoList::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyGPUInfoList_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyGPUInfoList *op = static_cast<vtkDummyGPUInfoList *>(vp);

  vtkDummyGPUInfoList *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkDummyGPUInfoList::NewInstance();
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
PyvtkDummyGPUInfoList_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkDummyGPUInfoList *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkDummyGPUInfoList::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkDummyGPUInfoList_Probe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDummyGPUInfoList *op = static_cast<vtkDummyGPUInfoList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Probe();
      }
    else
      {
      op->vtkDummyGPUInfoList::Probe();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkDummyGPUInfoList_Methods[] = {
  {(char*)"GetClassName", PyvtkDummyGPUInfoList_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkDummyGPUInfoList_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkDummyGPUInfoList_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkDummyGPUInfoList\nC++: vtkDummyGPUInfoList *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkDummyGPUInfoList_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkDummyGPUInfoList\nC++: vtkDummyGPUInfoList *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Probe", PyvtkDummyGPUInfoList_Probe, 1,
   (char*)"V.Probe()\nC++: virtual void Probe()\n\nBuild the list of vtkInfoGPU if not done yet.\n\\post probed: IsProbed()\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkDummyGPUInfoList_StaticNew()
{
  return vtkDummyGPUInfoList::New();
}

PyObject *PyVTKClass_vtkDummyGPUInfoListNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkDummyGPUInfoList_StaticNew,
    PyvtkDummyGPUInfoList_Methods,
    "vtkDummyGPUInfoList", modulename,
    NULL, NULL,
    PyvtkDummyGPUInfoList_Doc(),
    PyVTKClass_vtkGPUInfoListNew(modulename));
  return cls;
}

const char **PyvtkDummyGPUInfoList_Doc()
{
  static const char *docstring[] = {
    "vtkDummyGPUInfoList - Do thing during Probe()\n\n",
    "Superclass: vtkGPUInfoList\n\n",
    "vtkDummyGPUInfoList implements Probe() by just setting the count of\nGPUs to be zero. Useful when an OS specific implementation is not\navailable.\n\nSee Also:\n\nvtkGPUInfo vtkGPUInfoList\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkDummyGPUInfoList(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkDummyGPUInfoListNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkDummyGPUInfoList", o) != 0)
    {
    Py_DECREF(o);
    }

}

