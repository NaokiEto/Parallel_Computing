// python wrapper for vtkUTF16TextCodec
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
#include "vtkUTF16TextCodec.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUTF16TextCodec(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUTF16TextCodec(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUTF16TextCodecNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUTF16TextCodecNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkTextCodecNew
extern "C" { PyObject *PyVTKClass_vtkTextCodecNew(const char *); }
#define DECLARED_PyVTKClass_vtkTextCodecNew
#endif

static const char **PyvtkUTF16TextCodec_Doc();


static PyObject *
PyvtkUTF16TextCodec_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF16TextCodec *op = static_cast<vtkUTF16TextCodec *>(vp);

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
      tempr = op->vtkUTF16TextCodec::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUTF16TextCodec_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF16TextCodec *op = static_cast<vtkUTF16TextCodec *>(vp);

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
      tempr = op->vtkUTF16TextCodec::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUTF16TextCodec_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF16TextCodec *op = static_cast<vtkUTF16TextCodec *>(vp);

  vtkUTF16TextCodec *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUTF16TextCodec::NewInstance();
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
PyvtkUTF16TextCodec_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkUTF16TextCodec *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkUTF16TextCodec::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUTF16TextCodec_Name(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Name");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF16TextCodec *op = static_cast<vtkUTF16TextCodec *>(vp);

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
      tempr = op->vtkUTF16TextCodec::Name();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUTF16TextCodec_CanHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF16TextCodec *op = static_cast<vtkUTF16TextCodec *>(vp);

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
      tempr = op->vtkUTF16TextCodec::CanHandle(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUTF16TextCodec_SetBigEndian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBigEndian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUTF16TextCodec *op = static_cast<vtkUTF16TextCodec *>(vp);

  bool temp0 = false;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetBigEndian(temp0);
      }
    else
      {
      op->vtkUTF16TextCodec::SetBigEndian(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUTF16TextCodec_Methods[] = {
  {(char*)"GetClassName", PyvtkUTF16TextCodec_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUTF16TextCodec_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUTF16TextCodec_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUTF16TextCodec\nC++: vtkUTF16TextCodec *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkUTF16TextCodec_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkUTF16TextCodec\nC++: vtkUTF16TextCodec *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"Name", PyvtkUTF16TextCodec_Name, 1,
   (char*)"V.Name() -> string\nC++: virtual const char *Name()\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {(char*)"CanHandle", PyvtkUTF16TextCodec_CanHandle, 1,
   (char*)"V.CanHandle(string) -> bool\nC++: virtual bool CanHandle(const char *NameString)\n\nThe name this codec goes by - should match the string the factory\nwill take to create it\n"},
  {(char*)"SetBigEndian", PyvtkUTF16TextCodec_SetBigEndian, 1,
   (char*)"V.SetBigEndian(bool)\nC++: void SetBigEndian(bool)\n\nSet the endianess - true if Big false is little\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkUTF16TextCodec_StaticNew()
{
  return vtkUTF16TextCodec::New();
}

PyObject *PyVTKClass_vtkUTF16TextCodecNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkUTF16TextCodec_StaticNew,
    PyvtkUTF16TextCodec_Methods,
    "vtkUTF16TextCodec", modulename,
    NULL, NULL,
    PyvtkUTF16TextCodec_Doc(),
    PyVTKClass_vtkTextCodecNew(modulename));
  return cls;
}

const char **PyvtkUTF16TextCodec_Doc()
{
  static const char *docstring[] = {
    "vtkUTF16TextCodec - Class to read/write ascii text.\n\n",
    "Superclass: vtkTextCodec\n\n",
    "A virtual class interface for codecs that readers/writers can rely on\n\nThanks:\n\nThanks to Tim Shed from Sandia National Laboratories for his work on\nthe concepts and to Marcus Hanwell and Jeff Baumes of Kitware for\nkeeping me out of the weeds\n\nSee Also:\n\nvtkUTF16TextCodecFactory\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUTF16TextCodec(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUTF16TextCodecNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUTF16TextCodec", o) != 0)
    {
    Py_DECREF(o);
    }

}

