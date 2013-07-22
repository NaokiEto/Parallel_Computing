// python wrapper for vtkSTLWriter
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
#include "vtkSTLWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSTLWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSTLWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSTLWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSTLWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataWriterNew
#endif

static const char **PyvtkSTLWriter_Doc();


static PyObject *
PyvtkSTLWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

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
      tempr = op->vtkSTLWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

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
      tempr = op->vtkSTLWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSTLWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSTLWriter *op = static_cast<vtkSTLWriter *>(vp);

  vtkSTLWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSTLWriter::NewInstance();
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
PyvtkSTLWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSTLWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSTLWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSTLWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkSTLWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSTLWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSTLWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSTLWriter\nC++: vtkSTLWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSTLWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSTLWriter\nC++: vtkSTLWriter *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSTLWriter_StaticNew()
{
  return vtkSTLWriter::New();
}

PyObject *PyVTKClass_vtkSTLWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSTLWriter_StaticNew,
    PyvtkSTLWriter_Methods,
    "vtkSTLWriter", modulename,
    NULL, NULL,
    PyvtkSTLWriter_Doc(),
    PyVTKClass_vtkPolyDataWriterNew(modulename));
  return cls;
}

const char **PyvtkSTLWriter_Doc()
{
  static const char *docstring[] = {
    "vtkSTLWriter - write stereo lithography files\n\n",
    "Superclass: vtkPolyDataWriter\n\n",
    "vtkSTLWriter writes stereo lithography (.stl) files in either ASCII\nor binary form. Stereo lithography files only contain triangles. If\npolygons with more than 3 vertices are present, only the first 3\nvertices are written.  Use vtkTriangleFilter to convert polygons to\ntriangles.\n\nCaveats:\n\nBinary files written on one system may not be readable on other\nsystems. vtkSTLWriter uses VAX or PC byte ord",
    "ering and swaps bytes on\nother systems.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSTLWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSTLWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSTLWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

