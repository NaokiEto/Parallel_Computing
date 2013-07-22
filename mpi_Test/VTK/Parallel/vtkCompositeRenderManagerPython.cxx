// python wrapper for vtkCompositeRenderManager
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
#include "vtkCompositeRenderManager.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositeRenderManager(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositeRenderManager(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositeRenderManagerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositeRenderManagerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkParallelRenderManagerNew
extern "C" { PyObject *PyVTKClass_vtkParallelRenderManagerNew(const char *); }
#define DECLARED_PyVTKClass_vtkParallelRenderManagerNew
#endif

static const char **PyvtkCompositeRenderManager_Doc();


static PyObject *
PyvtkCompositeRenderManager_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

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
      tempr = op->vtkCompositeRenderManager::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

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
      tempr = op->vtkCompositeRenderManager::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  vtkCompositeRenderManager *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositeRenderManager::NewInstance();
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
PyvtkCompositeRenderManager_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompositeRenderManager *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompositeRenderManager::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_SetCompositer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  vtkCompositer *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositer"))
    {
    if (ap.IsBound())
      {
      op->SetCompositer(temp0);
      }
    else
      {
      op->vtkCompositeRenderManager::SetCompositer(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_GetCompositer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  vtkCompositer *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCompositer();
      }
    else
      {
      tempr = op->vtkCompositeRenderManager::GetCompositer();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeRenderManager_GetImageProcessingTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageProcessingTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeRenderManager *op = static_cast<vtkCompositeRenderManager *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetImageProcessingTime();
      }
    else
      {
      tempr = op->vtkCompositeRenderManager::GetImageProcessingTime();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeRenderManager_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeRenderManager_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeRenderManager_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeRenderManager_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositeRenderManager\nC++: vtkCompositeRenderManager *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeRenderManager_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeRenderManager\nC++: vtkCompositeRenderManager *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCompositer", PyvtkCompositeRenderManager_SetCompositer, 1,
   (char*)"V.SetCompositer(vtkCompositer)\nC++: void SetCompositer(vtkCompositer *c)\n\nSet/Get the composite algorithm.\n"},
  {(char*)"GetCompositer", PyvtkCompositeRenderManager_GetCompositer, 1,
   (char*)"V.GetCompositer() -> vtkCompositer\nC++: vtkCompositer *GetCompositer()\n\nSet/Get the composite algorithm.\n"},
  {(char*)"GetImageProcessingTime", PyvtkCompositeRenderManager_GetImageProcessingTime, 1,
   (char*)"V.GetImageProcessingTime() -> float\nC++: double GetImageProcessingTime()\n\nGet rendering metrics.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeRenderManager_StaticNew()
{
  return vtkCompositeRenderManager::New();
}

PyObject *PyVTKClass_vtkCompositeRenderManagerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeRenderManager_StaticNew,
    PyvtkCompositeRenderManager_Methods,
    "vtkCompositeRenderManager", modulename,
    NULL, NULL,
    PyvtkCompositeRenderManager_Doc(),
    PyVTKClass_vtkParallelRenderManagerNew(modulename));
  return cls;
}

const char **PyvtkCompositeRenderManager_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeRenderManager - An object to control sort-last parallel\nrendering.\n\n",
    "Superclass: vtkParallelRenderManager\n\n",
    "vtkCompositeRenderManager is a subclass of vtkParallelRenderManager\nthat uses compositing to do parallel rendering.  This class has\nreplaced vtkCompositeManager.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeRenderManager(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeRenderManagerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeRenderManager", o) != 0)
    {
    Py_DECREF(o);
    }

}

