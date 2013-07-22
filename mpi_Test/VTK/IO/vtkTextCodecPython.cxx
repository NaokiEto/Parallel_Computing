// python wrapper for vtkTextCodec
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
#include "vtkTextCodec.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkTextCodec(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkTextCodec(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkTextCodecNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkTextCodecNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkTextCodec_Doc();


static PyObject *
PyvtkTextCodec_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextCodec *op = static_cast<vtkTextCodec *>(vp);

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
      tempr = op->vtkTextCodec::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextCodec_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextCodec *op = static_cast<vtkTextCodec *>(vp);

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
      tempr = op->vtkTextCodec::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextCodec_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextCodec *op = static_cast<vtkTextCodec *>(vp);

  vtkTextCodec *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkTextCodec::NewInstance();
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
PyvtkTextCodec_Name(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Name");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextCodec *op = static_cast<vtkTextCodec *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->Name();
      }
    else
      {
      tempr = op->vtkTextCodec::Name();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkTextCodec_CanHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextCodec *op = static_cast<vtkTextCodec *>(vp);

  char *temp0 = NULL;
  bool tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->CanHandle(temp0);
      }
    else
      {
      tempr = op->vtkTextCodec::CanHandle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkTextCodec_Methods[] = {
  {(char*)"GetClassName", PyvtkTextCodec_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkTextCodec_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkTextCodec_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkTextCodec\nC++: vtkTextCodec *NewInstance()\n\n"},
  {(char*)"Name", PyvtkTextCodec_Name, 1,
   (char*)"V.Name() -> string\nC++: virtual const char *Name()\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {(char*)"CanHandle", PyvtkTextCodec_CanHandle, 1,
   (char*)"V.CanHandle(string) -> bool\nC++: virtual bool CanHandle(const char *NameString)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkTextCodecNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkTextCodec_Methods,
    "vtkTextCodec", modulename,
    NULL, NULL,
    PyvtkTextCodec_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkTextCodec_Doc()
{
  static const char *docstring[] = {
    "vtkTextCodec - Virtual class to act as an interface for all text\ncodecs\n\n",
    "Superclass: vtkObject\n\n",
    "A virtual class interface for codecs that readers/writers can rely on\n\nThanks:\n\nThanks to Tim Shed from Sandia National Laboratories for his work on\nthe concepts and to Marcus Hanwell and Jeff Baumes of Kitware for\nkeeping me out of the weeds\n\nSee Also:\n\nvtkTextCodecFactory\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkTextCodec(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkTextCodecNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkTextCodec", o) != 0)
    {
    Py_DECREF(o);
    }

}

