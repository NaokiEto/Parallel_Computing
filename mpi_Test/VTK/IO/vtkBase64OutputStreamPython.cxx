// python wrapper for vtkBase64OutputStream
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
#include "vtkBase64OutputStream.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBase64OutputStream(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBase64OutputStream(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBase64OutputStreamNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBase64OutputStreamNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkOutputStreamNew
extern "C" { PyObject *PyVTKClass_vtkOutputStreamNew(const char *); }
#define DECLARED_PyVTKClass_vtkOutputStreamNew
#endif

static const char **PyvtkBase64OutputStream_Doc();


static PyObject *
PyvtkBase64OutputStream_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64OutputStream *op = static_cast<vtkBase64OutputStream *>(vp);

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
      tempr = op->vtkBase64OutputStream::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64OutputStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64OutputStream *op = static_cast<vtkBase64OutputStream *>(vp);

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
      tempr = op->vtkBase64OutputStream::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64OutputStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64OutputStream *op = static_cast<vtkBase64OutputStream *>(vp);

  vtkBase64OutputStream *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBase64OutputStream::NewInstance();
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
PyvtkBase64OutputStream_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBase64OutputStream *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBase64OutputStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64OutputStream_StartWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64OutputStream *op = static_cast<vtkBase64OutputStream *>(vp);

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
      tempr = op->vtkBase64OutputStream::StartWriting();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBase64OutputStream_EndWriting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndWriting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBase64OutputStream *op = static_cast<vtkBase64OutputStream *>(vp);

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
      tempr = op->vtkBase64OutputStream::EndWriting();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBase64OutputStream_Methods[] = {
  {(char*)"GetClassName", PyvtkBase64OutputStream_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBase64OutputStream_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBase64OutputStream_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBase64OutputStream\nC++: vtkBase64OutputStream *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBase64OutputStream_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBase64OutputStream\nC++: vtkBase64OutputStream *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"StartWriting", PyvtkBase64OutputStream_StartWriting, 1,
   (char*)"V.StartWriting() -> int\nC++: int StartWriting()\n\nCalled after the stream position has been set by the caller, but\nbefore any Write calls.  The stream position should not be\nadjusted by the caller until after an EndWriting call.\n"},
  {(char*)"EndWriting", PyvtkBase64OutputStream_EndWriting, 1,
   (char*)"V.EndWriting() -> int\nC++: int EndWriting()\n\nCalled after all desired calls to Write have been made.  After\nthis call, the caller is free to change the position of the\nstream.  Additional writes should not be done until after another\ncall to StartWriting.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBase64OutputStream_StaticNew()
{
  return vtkBase64OutputStream::New();
}

PyObject *PyVTKClass_vtkBase64OutputStreamNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBase64OutputStream_StaticNew,
    PyvtkBase64OutputStream_Methods,
    "vtkBase64OutputStream", modulename,
    NULL, NULL,
    PyvtkBase64OutputStream_Doc(),
    PyVTKClass_vtkOutputStreamNew(modulename));
  return cls;
}

const char **PyvtkBase64OutputStream_Doc()
{
  static const char *docstring[] = {
    "vtkBase64OutputStream - Writes base64-encoded output to a stream.\n\n",
    "Superclass: vtkOutputStream\n\n",
    "vtkBase64OutputStream implements base64 encoding with the\nvtkOutputStream interface.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBase64OutputStream(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBase64OutputStreamNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBase64OutputStream", o) != 0)
    {
    Py_DECREF(o);
    }

}

