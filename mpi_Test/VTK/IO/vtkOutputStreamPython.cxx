// python wrapper for vtkOutputStream
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
#include "vtkOutputStream.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOutputStream(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOutputStream(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOutputStreamNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOutputStreamNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkObjectNew
extern "C" { PyObject *PyVTKClass_vtkObjectNew(const char *); }
#define DECLARED_PyVTKClass_vtkObjectNew
#endif

static const char **PyvtkOutputStream_Doc();


static PyObject *
PyvtkOutputStream_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

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
      tempr = op->vtkOutputStream::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

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
      tempr = op->vtkOutputStream::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

  vtkOutputStream *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOutputStream::NewInstance();
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
PyvtkOutputStream_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOutputStream *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOutputStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputStream_StartWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->StartWriting();
      }
    else
      {
      tempr = op->vtkOutputStream::StartWriting();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputStream_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

  char *temp0 = NULL;
  unsigned long temp1;
  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      tempr = op->Write(temp0, temp1);
      }
    else
      {
      tempr = op->vtkOutputStream::Write(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutputStream_EndWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutputStream *op = static_cast<vtkOutputStream *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->EndWriting();
      }
    else
      {
      tempr = op->vtkOutputStream::EndWriting();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOutputStream_Methods[] = {
  {(char*)"GetClassName", PyvtkOutputStream_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutputStream_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutputStream_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOutputStream\nC++: vtkOutputStream *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutputStream_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutputStream\nC++: vtkOutputStream *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StartWriting", PyvtkOutputStream_StartWriting, 1,
   (char*)"V.StartWriting() -> int\nC++: virtual int StartWriting()\n\nCalled after the stream position has been set by the caller, but\nbefore any Write calls.  The stream position should not be\nadjusted by the caller until after an EndWriting call.\n"},
  {(char*)"Write", PyvtkOutputStream_Write, 1,
   (char*)"V.Write(string, int) -> int\nC++: int Write(const char *data, unsigned long length)\n\nWrite output data of the given length.\n"},
  {(char*)"EndWriting", PyvtkOutputStream_EndWriting, 1,
   (char*)"V.EndWriting() -> int\nC++: virtual int EndWriting()\n\nCalled after all desired calls to Write have been made.  After\nthis call, the caller is free to change the position of the\nstream.  Additional writes should not be done until after another\ncall to StartWriting.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutputStream_StaticNew()
{
  return vtkOutputStream::New();
}

PyObject *PyVTKClass_vtkOutputStreamNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutputStream_StaticNew,
    PyvtkOutputStream_Methods,
    "vtkOutputStream", modulename,
    NULL, NULL,
    PyvtkOutputStream_Doc(),
    PyVTKClass_vtkObjectNew(modulename));
  return cls;
}

const char **PyvtkOutputStream_Doc()
{
  static const char *docstring[] = {
    "vtkOutputStream - Wraps a binary output stream with a VTK interface.\n\n",
    "Superclass: vtkObject\n\n",
    "vtkOutputStream provides a VTK-style interface wrapping around a\nstandard output stream.  The access methods are virtual so that\nsubclasses can transparently provide encoding of the output.  Data\nlengths for Write calls refer to the length of the data in memory.\nThe actual length in the stream may differ for subclasses that\nimplement an encoding scheme.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutputStream(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutputStreamNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutputStream", o) != 0)
    {
    Py_DECREF(o);
    }

}

