// python wrapper for vtkXMLHyperOctreeWriter
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
#include "vtkXMLHyperOctreeWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLHyperOctreeWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLHyperOctreeWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLHyperOctreeWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLHyperOctreeWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLWriterNew
extern "C" { PyObject *PyVTKClass_vtkXMLWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLWriterNew
#endif

static const char **PyvtkXMLHyperOctreeWriter_Doc();


static PyObject *
PyvtkXMLHyperOctreeWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeWriter *op = static_cast<vtkXMLHyperOctreeWriter *>(vp);

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
      tempr = op->vtkXMLHyperOctreeWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeWriter *op = static_cast<vtkXMLHyperOctreeWriter *>(vp);

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
      tempr = op->vtkXMLHyperOctreeWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeWriter *op = static_cast<vtkXMLHyperOctreeWriter *>(vp);

  vtkXMLHyperOctreeWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLHyperOctreeWriter::NewInstance();
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
PyvtkXMLHyperOctreeWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLHyperOctreeWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLHyperOctreeWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeWriter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeWriter *op = static_cast<vtkXMLHyperOctreeWriter *>(vp);

  vtkHyperOctree *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetInput();
      }
    else
      {
      tempr = op->vtkXMLHyperOctreeWriter::GetInput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeWriter_GetDefaultFileExtension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultFileExtension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeWriter *op = static_cast<vtkXMLHyperOctreeWriter *>(vp);

  const char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetDefaultFileExtension();
      }
    else
      {
      tempr = op->vtkXMLHyperOctreeWriter::GetDefaultFileExtension();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLHyperOctreeWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLHyperOctreeWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLHyperOctreeWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLHyperOctreeWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLHyperOctreeWriter\nC++: vtkXMLHyperOctreeWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLHyperOctreeWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLHyperOctreeWriter\nC++: vtkXMLHyperOctreeWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetInput", PyvtkXMLHyperOctreeWriter_GetInput, 1,
   (char*)"V.GetInput() -> vtkHyperOctree\nC++: vtkHyperOctree *GetInput()\n\nGet/Set the writer's input.\n"},
  {(char*)"GetDefaultFileExtension", PyvtkXMLHyperOctreeWriter_GetDefaultFileExtension, 1,
   (char*)"V.GetDefaultFileExtension() -> string\nC++: const char *GetDefaultFileExtension()\n\nGet the default file extension for files written by this writer.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLHyperOctreeWriter_StaticNew()
{
  return vtkXMLHyperOctreeWriter::New();
}

PyObject *PyVTKClass_vtkXMLHyperOctreeWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLHyperOctreeWriter_StaticNew,
    PyvtkXMLHyperOctreeWriter_Methods,
    "vtkXMLHyperOctreeWriter", modulename,
    NULL, NULL,
    PyvtkXMLHyperOctreeWriter_Doc(),
    PyVTKClass_vtkXMLWriterNew(modulename));
  return cls;
}

const char **PyvtkXMLHyperOctreeWriter_Doc()
{
  static const char *docstring[] = {
    "vtkXMLHyperOctreeWriter - Write VTK XML HyperOctree files.\n\n",
    "Superclass: vtkXMLWriter\n\n",
    "vtkXMLHyperOctreeWriter writes the VTK XML HyperOctree file format. \nOne HyperOctree input can be written into one file in any number of\nstreamed pieces.  The standard extension for this writer's file\nformat is \"vto\".  This writer is also used to write a single piece of\nthe parallel file format.\n\nSee Also:\n\nvtkXMLPHyperOctreeWriter\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLHyperOctreeWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLHyperOctreeWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLHyperOctreeWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

