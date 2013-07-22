// python wrapper for vtkImageImportExecutive
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
#include "vtkImageImportExecutive.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageImportExecutive(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageImportExecutive(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageImportExecutiveNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageImportExecutiveNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkStreamingDemandDrivenPipelineNew
extern "C" { PyObject *PyVTKClass_vtkStreamingDemandDrivenPipelineNew(const char *); }
#define DECLARED_PyVTKClass_vtkStreamingDemandDrivenPipelineNew
#endif

static const char **PyvtkImageImportExecutive_Doc();


static PyObject *
PyvtkImageImportExecutive_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImportExecutive *op = static_cast<vtkImageImportExecutive *>(vp);

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
      tempr = op->vtkImageImportExecutive::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImportExecutive_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImportExecutive *op = static_cast<vtkImageImportExecutive *>(vp);

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
      tempr = op->vtkImageImportExecutive::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageImportExecutive_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageImportExecutive *op = static_cast<vtkImageImportExecutive *>(vp);

  vtkImageImportExecutive *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageImportExecutive::NewInstance();
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
PyvtkImageImportExecutive_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageImportExecutive *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageImportExecutive::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageImportExecutive_Methods[] = {
  {(char*)"GetClassName", PyvtkImageImportExecutive_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageImportExecutive_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageImportExecutive_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageImportExecutive\nC++: vtkImageImportExecutive *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageImportExecutive_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageImportExecutive\nC++: vtkImageImportExecutive *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageImportExecutive_StaticNew()
{
  return vtkImageImportExecutive::New();
}

PyObject *PyVTKClass_vtkImageImportExecutiveNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageImportExecutive_StaticNew,
    PyvtkImageImportExecutive_Methods,
    "vtkImageImportExecutive", modulename,
    NULL, NULL,
    PyvtkImageImportExecutive_Doc(),
    PyVTKClass_vtkStreamingDemandDrivenPipelineNew(modulename));
  return cls;
}

const char **PyvtkImageImportExecutive_Doc()
{
  static const char *docstring[] = {
    "vtkImageImportExecutive -\n\n",
    "Superclass: vtkStreamingDemandDrivenPipeline\n\n",
    "vtkImageImportExecutive\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageImportExecutive(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageImportExecutiveNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageImportExecutive", o) != 0)
    {
    Py_DECREF(o);
    }

}

