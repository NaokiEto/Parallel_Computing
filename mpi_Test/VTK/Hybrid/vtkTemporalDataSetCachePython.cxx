// python wrapper for vtkTemporalDataSetCache
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
#include "vtkTemporalDataSetCache.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTemporalDataSetCache(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTemporalDataSetCache(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTemporalDataSetCacheNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTemporalDataSetCacheNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTemporalDataSetAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkTemporalDataSetAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkTemporalDataSetAlgorithmNew
#endif

static const char **PyvtkTemporalDataSetCache_Doc();


static PyObject *
PyvtkTemporalDataSetCache_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

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
      tempr = op->vtkTemporalDataSetCache::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

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
      tempr = op->vtkTemporalDataSetCache::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  vtkTemporalDataSetCache *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTemporalDataSetCache::NewInstance();
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
PyvtkTemporalDataSetCache_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkTemporalDataSetCache *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkTemporalDataSetCache::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_SetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCacheSize(temp0);
      }
    else
      {
      op->vtkTemporalDataSetCache::SetCacheSize(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkTemporalDataSetCache_GetCacheSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTemporalDataSetCache *op = static_cast<vtkTemporalDataSetCache *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCacheSize();
      }
    else
      {
      tempr = op->vtkTemporalDataSetCache::GetCacheSize();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTemporalDataSetCache_Methods[] = {
  {(char*)"GetClassName", PyvtkTemporalDataSetCache_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTemporalDataSetCache_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTemporalDataSetCache_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTemporalDataSetCache\nC++: vtkTemporalDataSetCache *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkTemporalDataSetCache_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkTemporalDataSetCache\nC++: vtkTemporalDataSetCache *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetCacheSize", PyvtkTemporalDataSetCache_SetCacheSize, 1,
   (char*)"V.SetCacheSize(int)\nC++: void SetCacheSize(int size)\n\nThis is the maximum number of time steps that can be retained in\nmemory. it defaults to 10.\n"},
  {(char*)"GetCacheSize", PyvtkTemporalDataSetCache_GetCacheSize, 1,
   (char*)"V.GetCacheSize() -> int\nC++: int GetCacheSize()\n\nThis is the maximum number of time steps that can be retained in\nmemory. it defaults to 10.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkTemporalDataSetCache_StaticNew()
{
  return vtkTemporalDataSetCache::New();
}

PyObject *PyVTKClass_vtkTemporalDataSetCacheNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkTemporalDataSetCache_StaticNew,
    PyvtkTemporalDataSetCache_Methods,
    "vtkTemporalDataSetCache", modulename,
    NULL, NULL,
    PyvtkTemporalDataSetCache_Doc(),
    PyVTKClass_vtkTemporalDataSetAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkTemporalDataSetCache_Doc()
{
  static const char *docstring[] = {
    "vtkTemporalDataSetCache - cache time steps\n\n",
    "Superclass: vtkTemporalDataSetAlgorithm\n\n",
    "vtkTemporalDataSetCache cache time step requests of a temporal\ndataset, when cached data is requested it is returned using a shallow\ncopy.\n\nThanks:\n\nKen Martin (Kitware) and John Bidiscombe of CSCS - Swiss National\nSupercomputing Centre for creating and contributing this class. For\nrelated material, please refer to : John Biddiscombe, Berk Geveci,\nKen Martin, Kenneth Moreland, David Thompson, \"Tim",
    "e Dependent Processing in a Parallel Pipeline\nArchitecture\", IEEE Visualization 2007.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTemporalDataSetCache(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTemporalDataSetCacheNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTemporalDataSetCache", o) != 0)
    {
    Py_DECREF(o);
    }

}

