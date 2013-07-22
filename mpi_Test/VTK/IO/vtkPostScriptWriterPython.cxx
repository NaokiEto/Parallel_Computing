// python wrapper for vtkPostScriptWriter
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
#include "vtkPostScriptWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPostScriptWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPostScriptWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPostScriptWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPostScriptWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkPostScriptWriter_Doc();


static PyObject *
PyvtkPostScriptWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPostScriptWriter *op = static_cast<vtkPostScriptWriter *>(vp);

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
      tempr = op->vtkPostScriptWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPostScriptWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPostScriptWriter *op = static_cast<vtkPostScriptWriter *>(vp);

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
      tempr = op->vtkPostScriptWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPostScriptWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPostScriptWriter *op = static_cast<vtkPostScriptWriter *>(vp);

  vtkPostScriptWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPostScriptWriter::NewInstance();
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
PyvtkPostScriptWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPostScriptWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPostScriptWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPostScriptWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPostScriptWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPostScriptWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPostScriptWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPostScriptWriter\nC++: vtkPostScriptWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPostScriptWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPostScriptWriter\nC++: vtkPostScriptWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPostScriptWriter_StaticNew()
{
  return vtkPostScriptWriter::New();
}

PyObject *PyVTKClass_vtkPostScriptWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPostScriptWriter_StaticNew,
    PyvtkPostScriptWriter_Methods,
    "vtkPostScriptWriter", modulename,
    NULL, NULL,
    PyvtkPostScriptWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkPostScriptWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPostScriptWriter - Writes an image as a PostScript file.\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkPostScriptWriter writes an image as a PostScript file using some\nreasonable scalings and centered on the page which is assumed to be\nabout 8.5 by 11 inches. This is based loosely off of the code from\npnmtops.c. Right now there aren't any real options.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPostScriptWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPostScriptWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPostScriptWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

