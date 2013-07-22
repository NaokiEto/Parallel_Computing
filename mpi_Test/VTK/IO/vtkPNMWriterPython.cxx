// python wrapper for vtkPNMWriter
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
#include "vtkPNMWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPNMWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPNMWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPNMWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPNMWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkImageWriterNew
extern "C" { PyObject *PyVTKClass_vtkImageWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkImageWriterNew
#endif

static const char **PyvtkPNMWriter_Doc();


static PyObject *
PyvtkPNMWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNMWriter *op = static_cast<vtkPNMWriter *>(vp);

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
      tempr = op->vtkPNMWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNMWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNMWriter *op = static_cast<vtkPNMWriter *>(vp);

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
      tempr = op->vtkPNMWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPNMWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNMWriter *op = static_cast<vtkPNMWriter *>(vp);

  vtkPNMWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPNMWriter::NewInstance();
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
PyvtkPNMWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPNMWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPNMWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkPNMWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkPNMWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPNMWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPNMWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPNMWriter\nC++: vtkPNMWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPNMWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPNMWriter\nC++: vtkPNMWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPNMWriter_StaticNew()
{
  return vtkPNMWriter::New();
}

PyObject *PyVTKClass_vtkPNMWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPNMWriter_StaticNew,
    PyvtkPNMWriter_Methods,
    "vtkPNMWriter", modulename,
    NULL, NULL,
    PyvtkPNMWriter_Doc(),
    PyVTKClass_vtkImageWriterNew(modulename));
  return cls;
}

const char **PyvtkPNMWriter_Doc()
{
  static const char *docstring[] = {
    "vtkPNMWriter - Writes PNM (portable any map)  files.\n\n",
    "Superclass: vtkImageWriter\n\n",
    "vtkPNMWriter writes PNM file. The data type of the file is unsigned\nchar regardless of the input type.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPNMWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPNMWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPNMWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

