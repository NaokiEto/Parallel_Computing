// python wrapper for vtkInputStream
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
#include "vtkInputStream.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkInputStream(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkInputStream(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkInputStreamNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkInputStreamNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkInputStream_Doc();


static PyObject *
PyvtkInputStream_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

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
      tempr = op->vtkInputStream::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

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
      tempr = op->vtkInputStream::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  vtkInputStream *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkInputStream::NewInstance();
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
PyvtkInputStream_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkInputStream *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkInputStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_StartReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->StartReading();
      }
    else
      {
      op->vtkInputStream::StartReading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_Seek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Seek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

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
      tempr = op->vtkInputStream::Seek(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_Read(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  char *temp0 = NULL;
  unsigned long temp1;
  unsigned long tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Read(temp0, temp1);
      }
    else
      {
      tempr = op->vtkInputStream::Read(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkInputStream_EndReading(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndReading");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInputStream *op = static_cast<vtkInputStream *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->EndReading();
      }
    else
      {
      op->vtkInputStream::EndReading();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkInputStream_Methods[] = {
  {(char*)"GetClassName", PyvtkInputStream_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkInputStream_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkInputStream_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkInputStream\nC++: vtkInputStream *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkInputStream_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkInputStream\nC++: vtkInputStream *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StartReading", PyvtkInputStream_StartReading, 1,
   (char*)"V.StartReading()\nC++: virtual void StartReading()\n\nCalled after the stream position has been set by the caller, but\nbefore any Seek or Read calls.  The stream position should not be\nadjusted by the caller until after an EndReading call.\n"},
  {(char*)"Seek", PyvtkInputStream_Seek, 1,
   (char*)"V.Seek(int) -> int\nC++: virtual int Seek(unsigned long offset)\n\nSeek to the given offset in the input data.  Returns 1 for\nsuccess, 0 for failure.\n"},
  {(char*)"Read", PyvtkInputStream_Read, 1,
   (char*)"V.Read(string, int) -> int\nC++: unsigned long Read(char *data, unsigned long length)\n\nRead input data of the given length.  Returns amount actually\nread.\n"},
  {(char*)"EndReading", PyvtkInputStream_EndReading, 1,
   (char*)"V.EndReading()\nC++: virtual void EndReading()\n\nCalled after all desired calls to Seek and Read have been made.\nAfter this call, the caller is free to change the position of the\nstream.  Additional reads should not be done until after another\ncall to StartReading.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkInputStream_StaticNew()
{
  return vtkInputStream::New();
}

PyObject *PyVTKClass_vtkInputStreamNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkInputStream_StaticNew,
    PyvtkInputStream_Methods,
    "vtkInputStream", modulename,
    NULL, NULL,
    PyvtkInputStream_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkInputStream_Doc()
{
  static const char *docstring[] = {
    "vtkInputStream - Wraps a binary input stream with a VTK interface.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkInputStream provides a VTK-style interface wrapping around a\nstandard input stream.  The access methods are virtual so that\nsubclasses can transparently provide decoding of an encoded stream.\nData lengths for Seek and Read calls refer to the length of the input\ndata.  The actual length in the stream may differ for subclasses that\nimplement an encoding scheme.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkInputStream(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkInputStreamNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkInputStream", o) != 0)
    {
    Py_DECREF(o);
    }

}

