// python wrapper for vtkImageWrapPad
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
#include "vtkImageWrapPad.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageWrapPad(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageWrapPad(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageWrapPadNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageWrapPadNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImagePadFilterNew
extern "C" { PyObject *PyVTKClass_vtkImagePadFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImagePadFilterNew
#endif

static const char **PyvtkImageWrapPad_Doc();


static PyObject *
PyvtkImageWrapPad_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWrapPad *op = static_cast<vtkImageWrapPad *>(vp);

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
      tempr = op->vtkImageWrapPad::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWrapPad_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWrapPad *op = static_cast<vtkImageWrapPad *>(vp);

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
      tempr = op->vtkImageWrapPad::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageWrapPad_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWrapPad *op = static_cast<vtkImageWrapPad *>(vp);

  vtkImageWrapPad *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageWrapPad::NewInstance();
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
PyvtkImageWrapPad_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageWrapPad *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageWrapPad::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageWrapPad_Methods[] = {
  {(char*)"GetClassName", PyvtkImageWrapPad_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageWrapPad_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageWrapPad_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageWrapPad\nC++: vtkImageWrapPad *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageWrapPad_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageWrapPad\nC++: vtkImageWrapPad *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageWrapPad_StaticNew()
{
  return vtkImageWrapPad::New();
}

PyObject *PyVTKClass_vtkImageWrapPadNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageWrapPad_StaticNew,
    PyvtkImageWrapPad_Methods,
    "vtkImageWrapPad", modulename,
    NULL, NULL,
    PyvtkImageWrapPad_Doc(),
    PyVTKClass_vtkImagePadFilterNew(modulename));
  return cls;
}

const char **PyvtkImageWrapPad_Doc()
{
  static const char *docstring[] = {
    "vtkImageWrapPad - Makes an image larger by wrapping existing data.\n\n",
    "Superclass: vtkImagePadFilter\n\n",
    "vtkImageWrapPad performs a modulo operation on the output pixel index\nto determine the source input index.  The new image extent of the\noutput has to be specified.  Input has to be the same scalar type as\noutput.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageWrapPad(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageWrapPadNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageWrapPad", o) != 0)
    {
    Py_DECREF(o);
    }

}

