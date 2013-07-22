// python wrapper for vtkImageFourierCenter
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
#include "vtkImageFourierCenter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageFourierCenter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageFourierCenter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageFourierCenterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageFourierCenterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
extern "C" { PyObject *PyVTKClass_vtkImageDecomposeFilterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageDecomposeFilterNew
#endif

static const char **PyvtkImageFourierCenter_Doc();


static PyObject *
PyvtkImageFourierCenter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierCenter *op = static_cast<vtkImageFourierCenter *>(vp);

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
      tempr = op->vtkImageFourierCenter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierCenter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierCenter *op = static_cast<vtkImageFourierCenter *>(vp);

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
      tempr = op->vtkImageFourierCenter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageFourierCenter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageFourierCenter *op = static_cast<vtkImageFourierCenter *>(vp);

  vtkImageFourierCenter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageFourierCenter::NewInstance();
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
PyvtkImageFourierCenter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkImageFourierCenter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkImageFourierCenter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkImageFourierCenter_Methods[] = {
  {(char*)"GetClassName", PyvtkImageFourierCenter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageFourierCenter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageFourierCenter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageFourierCenter\nC++: vtkImageFourierCenter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkImageFourierCenter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkImageFourierCenter\nC++: vtkImageFourierCenter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkImageFourierCenter_StaticNew()
{
  return vtkImageFourierCenter::New();
}

PyObject *PyVTKClass_vtkImageFourierCenterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkImageFourierCenter_StaticNew,
    PyvtkImageFourierCenter_Methods,
    "vtkImageFourierCenter", modulename,
    NULL, NULL,
    PyvtkImageFourierCenter_Doc(),
    PyVTKClass_vtkImageDecomposeFilterNew(modulename));
  return cls;
}

const char **PyvtkImageFourierCenter_Doc()
{
  static const char *docstring[] = {
    "vtkImageFourierCenter - Shifts constant frequency to center for\n\n",
    "Superclass: vtkImageDecomposeFilter\n\n",
    "Is used for dispaying images in frequency space.  FFT converts\nspatial images into frequency space, but puts the zero frequency at\nthe origin. This filter shifts the zero frequency to the center of\nthe image. Input and output are assumed to be doubles.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageFourierCenter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageFourierCenterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageFourierCenter", o) != 0)
    {
    Py_DECREF(o);
    }

}

