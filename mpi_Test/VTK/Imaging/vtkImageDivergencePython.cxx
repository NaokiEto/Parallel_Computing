// python wrapper for vtkImageDivergence
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
#include "vtkImageDivergence.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageDivergence(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageDivergence(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageDivergenceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageDivergenceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkThreadedImageAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkThreadedImageAlgorithmNew
#endif

static const char **PyvtkImageDivergence_Doc();


static PyObject *
PyvtkImageDivergence_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDivergence *op = static_cast<vtkImageDivergence *>(vp);

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
      tempr = op->vtkImageDivergence::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDivergence_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDivergence *op = static_cast<vtkImageDivergence *>(vp);

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
      tempr = op->vtkImageDivergence::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageDivergence_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDivergence *op = static_cast<vtkImageDivergence *>(vp);

  vtkImageDivergence *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageDivergence::NewInstance();
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
PyvtkImageDivergence_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageDivergence *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageDivergence::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageDivergence_Methods[] = {
  {(char*)"GetClassName", PyvtkImageDivergence_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageDivergence_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageDivergence_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageDivergence\nC++: vtkImageDivergence *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageDivergence_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageDivergence\nC++: vtkImageDivergence *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageDivergence_StaticNew()
{
  return vtkImageDivergence::New();
}

PyObject *PyVTKClass_vtkImageDivergenceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageDivergence_StaticNew,
    PyvtkImageDivergence_Methods,
    "vtkImageDivergence", modulename,
    NULL, NULL,
    PyvtkImageDivergence_Doc(),
    PyVTKClass_vtkThreadedImageAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkImageDivergence_Doc()
{
  static const char *docstring[] = {
    "vtkImageDivergence - Divergence of a vector field.\n\n",
    "Superclass: vtkThreadedImageAlgorithm\n\n",
    "vtkImageDivergence takes a 3D vector field and creates a scalar field\nwhich which represents the rate of change of the vector field. The\ndefinition of Divergence: Given V = P(x,y,z), Q(x,y,z), R(x,y,z),\nDivergence = dP/dx + dQ/dy + dR/dz.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageDivergence(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageDivergenceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageDivergence", o) != 0)
    {
    Py_DECREF(o);
    }

}

