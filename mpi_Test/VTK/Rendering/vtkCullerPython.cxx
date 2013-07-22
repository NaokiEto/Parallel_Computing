// python wrapper for vtkCuller
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
#include "vtkCuller.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCuller(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCuller(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCullerNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCullerNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkCuller_Doc();


static PyObject *
PyvtkCuller_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCuller *op = static_cast<vtkCuller *>(vp);

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
      tempr = op->vtkCuller::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCuller_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCuller *op = static_cast<vtkCuller *>(vp);

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
      tempr = op->vtkCuller::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCuller_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCuller *op = static_cast<vtkCuller *>(vp);

  vtkCuller *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCuller::NewInstance();
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

static PyMethodDef PyvtkCuller_Methods[] = {
  {(char*)"GetClassName", PyvtkCuller_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCuller_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCuller_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCuller\nC++: vtkCuller *NewInstance()\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkCullerNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkCuller_Methods,
    "vtkCuller", modulename,
    NULL, NULL,
    PyvtkCuller_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkCuller_Doc()
{
  static const char *docstring[] = {
    "vtkCuller - a superclass for prop cullers\n\n",
    "Superclass: vtkObject\n\n",
    "A culler has a cull method called by the vtkRenderer. The cull method\nis called before any rendering is performed, and it allows the culler\nto do some processing on the props and to modify their\nAllocatedRenderTime and re-order them in the prop list.\n\nSee Also:\n\nvtkFrustumCoverageCuller\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCuller(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCullerNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCuller", o) != 0)
    {
    Py_DECREF(o);
    }

}

