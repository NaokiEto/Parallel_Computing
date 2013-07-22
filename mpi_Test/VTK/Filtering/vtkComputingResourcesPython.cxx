// python wrapper for vtkComputingResources
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
#include "vtkComputingResources.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkComputingResources(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkComputingResources(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkComputingResourcesNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkComputingResourcesNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkComputingResources_Doc();


static PyObject *
PyvtkComputingResources_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputingResources *op = static_cast<vtkComputingResources *>(vp);

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
      tempr = op->vtkComputingResources::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputingResources_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputingResources *op = static_cast<vtkComputingResources *>(vp);

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
      tempr = op->vtkComputingResources::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputingResources_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputingResources *op = static_cast<vtkComputingResources *>(vp);

  vtkComputingResources *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkComputingResources::NewInstance();
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
PyvtkComputingResources_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkComputingResources *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkComputingResources::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputingResources_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputingResources *op = static_cast<vtkComputingResources *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Clear();
      }
    else
      {
      op->vtkComputingResources::Clear();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkComputingResources_ObtainMinimumResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ObtainMinimumResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputingResources *op = static_cast<vtkComputingResources *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ObtainMinimumResources();
      }
    else
      {
      op->vtkComputingResources::ObtainMinimumResources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkComputingResources_ObtainMaximumResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ObtainMaximumResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputingResources *op = static_cast<vtkComputingResources *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ObtainMaximumResources();
      }
    else
      {
      op->vtkComputingResources::ObtainMaximumResources();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkComputingResources_Deploy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Deploy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputingResources *op = static_cast<vtkComputingResources *>(vp);

  vtkThreadedStreamingPipeline *temp0 = NULL;
  vtkInformation *temp1 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkThreadedStreamingPipeline") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
    {
    if (ap.IsBound())
      {
      op->Deploy(temp0, temp1);
      }
    else
      {
      op->vtkComputingResources::Deploy(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkComputingResources_Reserve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reserve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputingResources *op = static_cast<vtkComputingResources *>(vp);

  vtkComputingResources *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkComputingResources"))
    {
    if (ap.IsBound())
      {
      tempr = op->Reserve(temp0);
      }
    else
      {
      tempr = op->vtkComputingResources::Reserve(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkComputingResources_Collect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Collect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputingResources *op = static_cast<vtkComputingResources *>(vp);

  vtkComputingResources *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkComputingResources"))
    {
    if (ap.IsBound())
      {
      op->Collect(temp0);
      }
    else
      {
      op->vtkComputingResources::Collect(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkComputingResources_Methods[] = {
  {(char*)"GetClassName", PyvtkComputingResources_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkComputingResources_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkComputingResources_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkComputingResources\nC++: vtkComputingResources *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkComputingResources_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkComputingResources\nC++: vtkComputingResources *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Clear", PyvtkComputingResources_Clear, 1,
   (char*)"V.Clear()\nC++: void Clear()\n\nSet resources to an empty states\n"},
  {(char*)"ObtainMinimumResources", PyvtkComputingResources_ObtainMinimumResources, 1,
   (char*)"V.ObtainMinimumResources()\nC++: void ObtainMinimumResources()\n\nAssign a minimum amount of usable resources to this object, e.g.\n1 thread\n"},
  {(char*)"ObtainMaximumResources", PyvtkComputingResources_ObtainMaximumResources, 1,
   (char*)"V.ObtainMaximumResources()\nC++: void ObtainMaximumResources()\n\nAssign a maximum amount of usable resources to this object\n"},
  {(char*)"Deploy", PyvtkComputingResources_Deploy, 1,
   (char*)"V.Deploy(vtkThreadedStreamingPipeline, vtkInformation)\nC++: void Deploy(vtkThreadedStreamingPipeline *exec,\n    vtkInformation *info)\n\nAssign the resources and information of this object to an\nexecutive, i.e., set the number of threads of the algorithm the\nexecutive is pointing to\n"},
  {(char*)"Reserve", PyvtkComputingResources_Reserve, 1,
   (char*)"V.Reserve(vtkComputingResources) -> bool\nC++: bool Reserve(vtkComputingResources *res)\n\nTake an amount of computing resources out of this object. Return\ntrue if it is successful.\n"},
  {(char*)"Collect", PyvtkComputingResources_Collect, 1,
   (char*)"V.Collect(vtkComputingResources)\nC++: void Collect(vtkComputingResources *res)\n\nAdd an amount of computing resources to this object\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkComputingResources_StaticNew()
{
  return vtkComputingResources::New();
}

PyObject *PyVTKClass_vtkComputingResourcesNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkComputingResources_StaticNew,
    PyvtkComputingResources_Methods,
    "vtkComputingResources", modulename,
    NULL, NULL,
    PyvtkComputingResources_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkComputingResources_Doc()
{
  static const char *docstring[] = {
    "vtkComputingResources - Definition of computing resource\n\n",
    "Superclass: vtkObject\n\n",
    "This is a class for distribute the number of threads to a network of\nmodules\n\nSee Also:\n\nvtkExecutionScheduler\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkComputingResources(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkComputingResourcesNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkComputingResources", o) != 0)
    {
    Py_DECREF(o);
    }

}

