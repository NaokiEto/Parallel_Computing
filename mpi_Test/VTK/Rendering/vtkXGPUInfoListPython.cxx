// python wrapper for vtkXGPUInfoList
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
#include "vtkXGPUInfoList.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXGPUInfoList(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXGPUInfoList(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXGPUInfoListNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXGPUInfoListNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGPUInfoListNew
extern "C" { PyObject *PyVTKClass_vtkGPUInfoListNew(const char *); }
#define DECLARED_PyVTKClass_vtkGPUInfoListNew
#endif

static const char **PyvtkXGPUInfoList_Doc();


static PyObject *
PyvtkXGPUInfoList_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGPUInfoList *op = static_cast<vtkXGPUInfoList *>(vp);

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
      tempr = op->vtkXGPUInfoList::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGPUInfoList_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGPUInfoList *op = static_cast<vtkXGPUInfoList *>(vp);

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
      tempr = op->vtkXGPUInfoList::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGPUInfoList_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGPUInfoList *op = static_cast<vtkXGPUInfoList *>(vp);

  vtkXGPUInfoList *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXGPUInfoList::NewInstance();
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
PyvtkXGPUInfoList_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXGPUInfoList *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXGPUInfoList::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGPUInfoList_Probe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGPUInfoList *op = static_cast<vtkXGPUInfoList *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Probe();
      }
    else
      {
      op->vtkXGPUInfoList::Probe();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXGPUInfoList_Methods[] = {
  {(char*)"GetClassName", PyvtkXGPUInfoList_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXGPUInfoList_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXGPUInfoList_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXGPUInfoList\nC++: vtkXGPUInfoList *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXGPUInfoList_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXGPUInfoList\nC++: vtkXGPUInfoList *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Probe", PyvtkXGPUInfoList_Probe, 1,
   (char*)"V.Probe()\nC++: virtual void Probe()\n\nBuild the list of vtkInfoGPU if not done yet.\n\\post probed: IsProbed()\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXGPUInfoList_StaticNew()
{
  return vtkXGPUInfoList::New();
}

PyObject *PyVTKClass_vtkXGPUInfoListNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXGPUInfoList_StaticNew,
    PyvtkXGPUInfoList_Methods,
    "vtkXGPUInfoList", modulename,
    NULL, NULL,
    PyvtkXGPUInfoList_Doc(),
    PyVTKClass_vtkGPUInfoListNew(modulename));
  return cls;
}

const char **PyvtkXGPUInfoList_Doc()
{
  static const char *docstring[] = {
    "vtkXGPUInfoList - Get GPUs VRAM information using X server\n\n",
    "Superclass: vtkGPUInfoList\n\n",
    "vtkXGPUInfoList implements Probe() method of vtkGPUInfoList through\nsome X server extensions API. NV-CONTROL for Nvidia. ATIFGLEXTENSION\nfor ATI is not supported yet. There is no support for other vendors.\n\nSee Also:\n\nvtkGPUInfo vtkGPUInfoList\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXGPUInfoList(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXGPUInfoListNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXGPUInfoList", o) != 0)
    {
    Py_DECREF(o);
    }

}

