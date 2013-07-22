// python wrapper for vtkGenericDataObjectWriter
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
#include "vtkGenericDataObjectWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkGenericDataObjectWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkGenericDataObjectWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkGenericDataObjectWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkGenericDataObjectWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataWriterNew
#endif

static const char **PyvtkGenericDataObjectWriter_Doc();


static PyObject *
PyvtkGenericDataObjectWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectWriter *op = static_cast<vtkGenericDataObjectWriter *>(vp);

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
      tempr = op->vtkGenericDataObjectWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectWriter *op = static_cast<vtkGenericDataObjectWriter *>(vp);

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
      tempr = op->vtkGenericDataObjectWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkGenericDataObjectWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericDataObjectWriter *op = static_cast<vtkGenericDataObjectWriter *>(vp);

  vtkGenericDataObjectWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkGenericDataObjectWriter::NewInstance();
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
PyvtkGenericDataObjectWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkGenericDataObjectWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkGenericDataObjectWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkGenericDataObjectWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkGenericDataObjectWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkGenericDataObjectWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkGenericDataObjectWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkGenericDataObjectWriter\nC++: vtkGenericDataObjectWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkGenericDataObjectWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkGenericDataObjectWriter\nC++: vtkGenericDataObjectWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkGenericDataObjectWriter_StaticNew()
{
  return vtkGenericDataObjectWriter::New();
}

PyObject *PyVTKClass_vtkGenericDataObjectWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkGenericDataObjectWriter_StaticNew,
    PyvtkGenericDataObjectWriter_Methods,
    "vtkGenericDataObjectWriter", modulename,
    NULL, NULL,
    PyvtkGenericDataObjectWriter_Doc(),
    PyVTKClass_vtkDataWriterNew(modulename));
  return cls;
}

const char **PyvtkGenericDataObjectWriter_Doc()
{
  static const char *docstring[] = {
    "vtkGenericDataObjectWriter - writes any type of vtk data object to\nfile\n\n",
    "Superclass: vtkDataWriter\n\n",
    "vtkGenericDataObjectWriter is a concrete class that writes data\nobjects to disk. The input to this object is any subclass of\nvtkDataObject.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkGenericDataObjectWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkGenericDataObjectWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkGenericDataObjectWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

