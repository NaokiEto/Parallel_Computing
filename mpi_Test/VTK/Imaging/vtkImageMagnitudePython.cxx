// python wrapper for vtkImageMagnitude
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
#include "vtkImageMagnitude.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMagnitude(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMagnitude(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMagnitudeNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMagnitudeNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageMagnitude_Doc();


static PyObject *
PyvtkImageMagnitude_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnitude *op = static_cast<vtkImageMagnitude *>(vp);

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
      tempr = op->vtkImageMagnitude::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMagnitude_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnitude *op = static_cast<vtkImageMagnitude *>(vp);

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
      tempr = op->vtkImageMagnitude::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMagnitude_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMagnitude *op = static_cast<vtkImageMagnitude *>(vp);

  vtkImageMagnitude *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMagnitude::NewInstance();
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
PyvtkImageMagnitude_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageMagnitude *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageMagnitude::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMagnitude_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMagnitude_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMagnitude_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMagnitude_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMagnitude\nC++: vtkImageMagnitude *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMagnitude_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMagnitude\nC++: vtkImageMagnitude *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMagnitude_StaticNew()
{
  return vtkImageMagnitude::New();
}

PyObject *PyVTKClass_vtkImageMagnitudeNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMagnitude_StaticNew,
    PyvtkImageMagnitude_Methods,
    "vtkImageMagnitude", modulename,
    NULL, NULL,
    PyvtkImageMagnitude_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageMagnitude_Doc()
{
  static const char *docstring[] = {
    "vtkImageMagnitude - Colapses components with magnitude function..\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageMagnitude takes the magnitude of the components.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMagnitude(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMagnitudeNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMagnitude", o) != 0)
    {
    Py_DECREF(o);
    }

}

