// python wrapper for vtkBMPWriter
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
#include "vtkBMPWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkBMPWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkBMPWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkBMPWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkBMPWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkBMPWriter_Doc();


static PyObject *
PyvtkBMPWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

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
      tempr = op->vtkBMPWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

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
      tempr = op->vtkBMPWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkBMPWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBMPWriter *op = static_cast<vtkBMPWriter *>(vp);

  vtkBMPWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkBMPWriter::NewInstance();
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
PyvtkBMPWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkBMPWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkBMPWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkBMPWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkBMPWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkBMPWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkBMPWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkBMPWriter\nC++: vtkBMPWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkBMPWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkBMPWriter\nC++: vtkBMPWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkBMPWriter_StaticNew()
{
  return vtkBMPWriter::New();
}

PyObject *PyVTKClass_vtkBMPWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkBMPWriter_StaticNew,
    PyvtkBMPWriter_Methods,
    "vtkBMPWriter", modulename,
    NULL, NULL,
    PyvtkBMPWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkBMPWriter_Doc()
{
  static const char *docstring[] = {
    "vtkBMPWriter - Writes Windows BMP files.\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkBMPWriter writes BMP files. The data type of the file is unsigned\nchar regardless of the input type.\n\nSee Also:\n\nvtkBMPReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkBMPWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkBMPWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkBMPWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

