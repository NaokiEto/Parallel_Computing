// python wrapper for vtkASCIITextCodec
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
#include "vtkASCIITextCodec.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkASCIITextCodec(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkASCIITextCodec(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkASCIITextCodecNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkASCIITextCodecNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTextCodecNew
extern "C" { PyObject *PyVTKClass_vtkTextCodecNew(const char *); }
#define DECLARED_PyVTKClass_vtkTextCodecNew
#endif

static const char **PyvtkASCIITextCodec_Doc();


static PyObject *
PyvtkASCIITextCodec_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

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
      tempr = op->vtkASCIITextCodec::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

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
      tempr = op->vtkASCIITextCodec::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

  vtkASCIITextCodec *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkASCIITextCodec::NewInstance();
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
PyvtkASCIITextCodec_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkASCIITextCodec *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkASCIITextCodec::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_Name(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Name");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

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
      tempr = op->vtkASCIITextCodec::Name();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkASCIITextCodec_CanHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkASCIITextCodec *op = static_cast<vtkASCIITextCodec *>(vp);

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
      tempr = op->vtkASCIITextCodec::CanHandle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkASCIITextCodec_Methods[] = {
  {(char*)"GetClassName", PyvtkASCIITextCodec_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkASCIITextCodec_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkASCIITextCodec_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkASCIITextCodec\nC++: vtkASCIITextCodec *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkASCIITextCodec_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkASCIITextCodec\nC++: vtkASCIITextCodec *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Name", PyvtkASCIITextCodec_Name, 1,
   (char*)"V.Name() -> string\nC++: virtual const char *Name()\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {(char*)"CanHandle", PyvtkASCIITextCodec_CanHandle, 1,
   (char*)"V.CanHandle(string) -> bool\nC++: virtual bool CanHandle(const char *NameString)\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkASCIITextCodec_StaticNew()
{
  return vtkASCIITextCodec::New();
}

PyObject *PyVTKClass_vtkASCIITextCodecNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkASCIITextCodec_StaticNew,
    PyvtkASCIITextCodec_Methods,
    "vtkASCIITextCodec", modulename,
    NULL, NULL,
    PyvtkASCIITextCodec_Doc(),
    PyVTKClass_vtkTextCodecNew(modulename));
  return cls;
}

const char **PyvtkASCIITextCodec_Doc()
{
  static const char *docstring[] = {
    "vtkASCIITextCodec - Class to read/write ascii text.\n\n",
    "Superclass: vtkTextCodec\n\n",
    "A virtual class interface for codecs that readers/writers can rely on\n\nThanks:\n\nThanks to Tim Shed from Sandia National Laboratories for his work on\nthe concepts and to Marcus Hanwell and Jeff Baumes of Kitware for\nkeeping me out of the weeds\n\nSee Also:\n\nvtkASCIITextCodecFactory\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkASCIITextCodec(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkASCIITextCodecNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkASCIITextCodec", o) != 0)
    {
    Py_DECREF(o);
    }

}

