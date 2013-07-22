// python wrapper for vtkSimpleImageFilterExample
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
#include "vtkSimpleImageFilterExample.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSimpleImageFilterExample(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSimpleImageFilterExample(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSimpleImageFilterExampleNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSimpleImageFilterExampleNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSimpleImageToImageFilterNew
extern "C" { PyObject *PyVTKClass_vtkSimpleImageToImageFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkSimpleImageToImageFilterNew
#endif

static const char **PyvtkSimpleImageFilterExample_Doc();


static PyObject *
PyvtkSimpleImageFilterExample_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageFilterExample *op = static_cast<vtkSimpleImageFilterExample *>(vp);

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
      tempr = op->vtkSimpleImageFilterExample::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleImageFilterExample_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageFilterExample *op = static_cast<vtkSimpleImageFilterExample *>(vp);

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
      tempr = op->vtkSimpleImageFilterExample::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSimpleImageFilterExample_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSimpleImageFilterExample *op = static_cast<vtkSimpleImageFilterExample *>(vp);

  vtkSimpleImageFilterExample *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSimpleImageFilterExample::NewInstance();
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
PyvtkSimpleImageFilterExample_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSimpleImageFilterExample *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSimpleImageFilterExample::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSimpleImageFilterExample_Methods[] = {
  {(char*)"GetClassName", PyvtkSimpleImageFilterExample_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSimpleImageFilterExample_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSimpleImageFilterExample_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSimpleImageFilterExample\nC++: vtkSimpleImageFilterExample *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSimpleImageFilterExample_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSimpleImageFilterExample\nC++: vtkSimpleImageFilterExample *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSimpleImageFilterExample_StaticNew()
{
  return vtkSimpleImageFilterExample::New();
}

PyObject *PyVTKClass_vtkSimpleImageFilterExampleNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSimpleImageFilterExample_StaticNew,
    PyvtkSimpleImageFilterExample_Methods,
    "vtkSimpleImageFilterExample", modulename,
    NULL, NULL,
    PyvtkSimpleImageFilterExample_Doc(),
    PyVTKClass_vtkSimpleImageToImageFilterNew(modulename));
  return cls;
}

const char **PyvtkSimpleImageFilterExample_Doc()
{
  static const char *docstring[] = {
    "vtkSimpleImageFilterExample - Simple example of an image-image filter.\n\n",
    "Superclass: vtkSimpleImageToImageFilter\n\n",
    "This is an example of a simple image-image filter. It copies it's\ninput to it's output (point by point). It shows how templates can be\nused to support various data types.\n\nSee also:\n\nvtkSimpleImageToImageFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSimpleImageFilterExample(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSimpleImageFilterExampleNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSimpleImageFilterExample", o) != 0)
    {
    Py_DECREF(o);
    }

}

