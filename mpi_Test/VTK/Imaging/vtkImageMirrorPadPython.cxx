// python wrapper for vtkImageMirrorPad
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
#include "vtkImageMirrorPad.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageMirrorPad(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageMirrorPad(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageMirrorPadNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageMirrorPadNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImagePadFilterNew
extern "C" { PyObject *PyVTKClass_vtkImagePadFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImagePadFilterNew
#endif

static const char **PyvtkImageMirrorPad_Doc();


static PyObject *
PyvtkImageMirrorPad_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMirrorPad *op = static_cast<vtkImageMirrorPad *>(vp);

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
      tempr = op->vtkImageMirrorPad::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMirrorPad_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMirrorPad *op = static_cast<vtkImageMirrorPad *>(vp);

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
      tempr = op->vtkImageMirrorPad::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageMirrorPad_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMirrorPad *op = static_cast<vtkImageMirrorPad *>(vp);

  vtkImageMirrorPad *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageMirrorPad::NewInstance();
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
PyvtkImageMirrorPad_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageMirrorPad *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageMirrorPad::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageMirrorPad_Methods[] = {
  {(char*)"GetClassName", PyvtkImageMirrorPad_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageMirrorPad_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageMirrorPad_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageMirrorPad\nC++: vtkImageMirrorPad *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageMirrorPad_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageMirrorPad\nC++: vtkImageMirrorPad *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageMirrorPad_StaticNew()
{
  return vtkImageMirrorPad::New();
}

PyObject *PyVTKClass_vtkImageMirrorPadNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageMirrorPad_StaticNew,
    PyvtkImageMirrorPad_Methods,
    "vtkImageMirrorPad", modulename,
    NULL, NULL,
    PyvtkImageMirrorPad_Doc(),
    PyVTKClass_vtkImagePadFilterNew(modulename));
  return cls;
}

const char **PyvtkImageMirrorPad_Doc()
{
  static const char *docstring[] = {
    "vtkImageMirrorPad - Extra pixels are filled by mirror images.\n\n",
    "Superclass: vtkImagePadFilter\n\n",
    "vtkImageMirrorPad makes an image larger by filling extra pixels with\na mirror image of the original image (mirror at image boundaries).\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageMirrorPad(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageMirrorPadNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageMirrorPad", o) != 0)
    {
    Py_DECREF(o);
    }

}

