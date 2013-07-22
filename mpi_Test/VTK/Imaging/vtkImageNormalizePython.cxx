// python wrapper for vtkImageNormalize
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
#include "vtkImageNormalize.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageNormalize(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageNormalize(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageNormalizeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageNormalizeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageNormalize_Doc();


static PyObject *
PyvtkImageNormalize_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNormalize *op = static_cast<vtkImageNormalize *>(vp);

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
      tempr = op->vtkImageNormalize::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNormalize_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNormalize *op = static_cast<vtkImageNormalize *>(vp);

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
      tempr = op->vtkImageNormalize::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageNormalize_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageNormalize *op = static_cast<vtkImageNormalize *>(vp);

  vtkImageNormalize *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageNormalize::NewInstance();
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
PyvtkImageNormalize_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageNormalize *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageNormalize::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageNormalize_Methods[] = {
  {(char*)"GetClassName", PyvtkImageNormalize_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageNormalize_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageNormalize_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageNormalize\nC++: vtkImageNormalize *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageNormalize_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageNormalize\nC++: vtkImageNormalize *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageNormalize_StaticNew()
{
  return vtkImageNormalize::New();
}

PyObject *PyVTKClass_vtkImageNormalizeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageNormalize_StaticNew,
    PyvtkImageNormalize_Methods,
    "vtkImageNormalize", modulename,
    NULL, NULL,
    PyvtkImageNormalize_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageNormalize_Doc()
{
  static const char *docstring[] = {
    "vtkImageNormalize - Normalizes that scalar components for each point.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "For each point, vtkImageNormalize normalizes the vector defined by\nthe scalar components.  If the magnitude of this vector is zero, the\noutput vector is zero also.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageNormalize(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageNormalizeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageNormalize", o) != 0)
    {
    Py_DECREF(o);
    }

}

