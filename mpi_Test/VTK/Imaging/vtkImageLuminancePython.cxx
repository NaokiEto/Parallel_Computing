// python wrapper for vtkImageLuminance
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
#include "vtkImageLuminance.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageLuminance(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageLuminance(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageLuminanceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageLuminanceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageLuminance_Doc();


static PyObject *
PyvtkImageLuminance_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLuminance *op = static_cast<vtkImageLuminance *>(vp);

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
      tempr = op->vtkImageLuminance::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLuminance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLuminance *op = static_cast<vtkImageLuminance *>(vp);

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
      tempr = op->vtkImageLuminance::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageLuminance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLuminance *op = static_cast<vtkImageLuminance *>(vp);

  vtkImageLuminance *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageLuminance::NewInstance();
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
PyvtkImageLuminance_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageLuminance *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageLuminance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageLuminance_Methods[] = {
  {(char*)"GetClassName", PyvtkImageLuminance_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageLuminance_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageLuminance_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageLuminance\nC++: vtkImageLuminance *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageLuminance_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageLuminance\nC++: vtkImageLuminance *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageLuminance_StaticNew()
{
  return vtkImageLuminance::New();
}

PyObject *PyVTKClass_vtkImageLuminanceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageLuminance_StaticNew,
    PyvtkImageLuminance_Methods,
    "vtkImageLuminance", modulename,
    NULL, NULL,
    PyvtkImageLuminance_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageLuminance_Doc()
{
  static const char *docstring[] = {
    "vtkImageLuminance - Computes the luminance of the input\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageLuminance calculates luminance from an rgb input.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageLuminance(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageLuminanceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageLuminance", o) != 0)
    {
    Py_DECREF(o);
    }

}

