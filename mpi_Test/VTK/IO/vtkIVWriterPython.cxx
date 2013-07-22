// python wrapper for vtkIVWriter
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
#include "vtkIVWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkIVWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkIVWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkIVWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkIVWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataWriterNew
#endif

static const char **PyvtkIVWriter_Doc();


static PyObject *
PyvtkIVWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIVWriter *op = static_cast<vtkIVWriter *>(vp);

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
      tempr = op->vtkIVWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIVWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIVWriter *op = static_cast<vtkIVWriter *>(vp);

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
      tempr = op->vtkIVWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkIVWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIVWriter *op = static_cast<vtkIVWriter *>(vp);

  vtkIVWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkIVWriter::NewInstance();
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
PyvtkIVWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkIVWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkIVWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkIVWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkIVWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkIVWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkIVWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkIVWriter\nC++: vtkIVWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkIVWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkIVWriter\nC++: vtkIVWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkIVWriter_StaticNew()
{
  return vtkIVWriter::New();
}

PyObject *PyVTKClass_vtkIVWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkIVWriter_StaticNew,
    PyvtkIVWriter_Methods,
    "vtkIVWriter", modulename,
    NULL, NULL,
    PyvtkIVWriter_Doc(),
    PyVTKClass_vtkPolyDataWriterNew(modulename));
  return cls;
}

const char **PyvtkIVWriter_Doc()
{
  static const char *docstring[] = {
    "vtkIVWriter - export polydata into OpenInventor 2.0 format.\n\n",
    "Superclass: vtkPolyDataWriter\n\n",
    "vtkIVWriter is a concrete subclass of vtkWriter that writes\nOpenInventor 2.0 files.\n\nSee Also:\n\nvtkPolyDataWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkIVWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkIVWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkIVWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

