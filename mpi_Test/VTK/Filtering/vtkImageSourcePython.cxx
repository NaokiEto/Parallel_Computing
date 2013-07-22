// python wrapper for vtkImageSource
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
#include "vtkImageSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkImageSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkImageSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkImageSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkImageSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSourceNew
extern "C" { PyObject *PyVTKClass_vtkSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkSourceNew
#endif

static const char **PyvtkImageSource_Doc();


static PyObject *
PyvtkImageSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSource *op = static_cast<vtkImageSource *>(vp);

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
      tempr = op->vtkImageSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSource *op = static_cast<vtkImageSource *>(vp);

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
      tempr = op->vtkImageSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkImageSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSource *op = static_cast<vtkImageSource *>(vp);

  vtkImageSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkImageSource::NewInstance();
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
PyvtkImageSource_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSource *op = static_cast<vtkImageSource *>(vp);

  vtkImageData *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkImageSource::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkImageSource_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSource *op = static_cast<vtkImageSource *>(vp);

  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkImageSource::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageSource_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSource *op = static_cast<vtkImageSource *>(vp);

  int temp0;
  vtkImageData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkImageSource::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkImageSource_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkImageSource_GetOutput_s1(self, args);
    case 1:
      return PyvtkImageSource_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkImageSource_Methods[] = {
  {(char*)"GetClassName", PyvtkImageSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkImageSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkImageSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkImageSource\nC++: vtkImageSource *NewInstance()\n\n"},
  {(char*)"SetOutput", PyvtkImageSource_SetOutput, 1,
   (char*)"V.SetOutput(vtkImageData)\nC++: void SetOutput(vtkImageData *output)\n\nGet the output of this source.\n"},
  {(char*)"GetOutput", PyvtkImageSource_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkImageData\nC++: vtkImageData *GetOutput()\nV.GetOutput(int) -> vtkImageData\nC++: vtkImageData *GetOutput(int idx)\n\nGet the output of this source.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkImageSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkImageSource_Methods,
    "vtkImageSource", modulename,
    NULL, NULL,
    PyvtkImageSource_Doc(),
    PyVTKClass_vtkSourceNew(modulename));
  return cls;
}

const char **PyvtkImageSource_Doc()
{
  static const char *docstring[] = {
    "vtkImageSource - Source of data for the imaging pipeline\n\n",
    "Superclass: vtkSource\n\n",
    "vtkImageSource is the superclass for all imaging sources and filters.\nThe method Update(), called by the cache, is the major interface to\nthe source.\n\nSee Also:\n\nvtkImageToImageFilter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkImageSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkImageSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkImageSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

