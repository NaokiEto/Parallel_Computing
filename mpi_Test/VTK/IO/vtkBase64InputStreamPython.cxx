// python wrapper for vtkBase64InputStream
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
#include "vtkBase64InputStream.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBase64InputStream(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBase64InputStream(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBase64InputStreamNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBase64InputStreamNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkInputStreamNew
extern "C" { PyObject *PyVTKClass_vtkInputStreamNew(const char *); }
#define DECLARED_PyVTKClass_vtkInputStreamNew
#endif

static const char **PyvtkBase64InputStream_Doc();


static PyObject *
PyvtkBase64InputStream_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

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
      tempr = op->vtkBase64InputStream::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

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
      tempr = op->vtkBase64InputStream::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  vtkBase64InputStream *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBase64InputStream::NewInstance();
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
PyvtkBase64InputStream_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBase64InputStream *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBase64InputStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_StartReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartReading();
      }
    else
      {
      op->vtkBase64InputStream::StartReading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_Seek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Seek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  unsigned long temp0;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->Seek(temp0);
      }
    else
      {
      tempr = op->vtkBase64InputStream::Seek(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64InputStream_EndReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64InputStream *op = static_cast<vtkBase64InputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndReading();
      }
    else
      {
      op->vtkBase64InputStream::EndReading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkBase64InputStream_Methods[] = {
  {(char*)"GetClassName", PyvtkBase64InputStream_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBase64InputStream_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBase64InputStream_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBase64InputStream\nC++: vtkBase64InputStream *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBase64InputStream_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBase64InputStream\nC++: vtkBase64InputStream *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StartReading", PyvtkBase64InputStream_StartReading, 1,
   (char*)"V.StartReading()\nC++: void StartReading()\n\nCalled after the stream position has been set by the caller, but\nbefore any Seek or Read calls.  The stream position should not be\nadjusted by the caller until after an EndReading call.\n"},
  {(char*)"Seek", PyvtkBase64InputStream_Seek, 1,
   (char*)"V.Seek(int) -> int\nC++: int Seek(unsigned long offset)\n\nSeek to the given offset in the input data.  Returns 1 for\nsuccess, 0 for failure.\n"},
  {(char*)"EndReading", PyvtkBase64InputStream_EndReading, 1,
   (char*)"V.EndReading()\nC++: void EndReading()\n\nCalled after all desired calls to Seek and Read have been made.\nAfter this call, the caller is free to change the position of the\nstream.  Additional reads should not be done until after another\ncall to StartReading.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBase64InputStream_StaticNew()
{
  return vtkBase64InputStream::New();
}

PyObject *PyVTKClass_vtkBase64InputStreamNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBase64InputStream_StaticNew,
    PyvtkBase64InputStream_Methods,
    "vtkBase64InputStream", modulename,
    NULL, NULL,
    PyvtkBase64InputStream_Doc(),
    PyVTKClass_vtkInputStreamNew(modulename));
  return cls;
}

const char **PyvtkBase64InputStream_Doc()
{
  static const char *docstring[] = {
    "vtkBase64InputStream - Reads base64-encoded input from a stream.\n\n",
    "Superclass: vtkInputStream\n\n",
    "vtkBase64InputStream implements base64 decoding with the\nvtkInputStream interface.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBase64InputStream(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBase64InputStreamNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBase64InputStream", o) != 0)
    {
    Py_DECREF(o);
    }

}

