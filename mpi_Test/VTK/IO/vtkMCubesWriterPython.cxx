// python wrapper for vtkMCubesWriter
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
#include "vtkMCubesWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkMCubesWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkMCubesWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkMCubesWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkMCubesWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataWriterNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataWriterNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataWriterNew
#endif

static const char **PyvtkMCubesWriter_Doc();


static PyObject *
PyvtkMCubesWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesWriter *op = static_cast<vtkMCubesWriter *>(vp);

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
      tempr = op->vtkMCubesWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesWriter *op = static_cast<vtkMCubesWriter *>(vp);

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
      tempr = op->vtkMCubesWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesWriter *op = static_cast<vtkMCubesWriter *>(vp);

  vtkMCubesWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkMCubesWriter::NewInstance();
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
PyvtkMCubesWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkMCubesWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkMCubesWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesWriter_SetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesWriter *op = static_cast<vtkMCubesWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetLimitsFileName(temp0);
      }
    else
      {
      op->vtkMCubesWriter::SetLimitsFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkMCubesWriter_GetLimitsFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLimitsFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMCubesWriter *op = static_cast<vtkMCubesWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetLimitsFileName();
      }
    else
      {
      tempr = op->vtkMCubesWriter::GetLimitsFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkMCubesWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkMCubesWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkMCubesWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkMCubesWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkMCubesWriter\nC++: vtkMCubesWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkMCubesWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkMCubesWriter\nC++: vtkMCubesWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetLimitsFileName", PyvtkMCubesWriter_SetLimitsFileName, 1,
   (char*)"V.SetLimitsFileName(string)\nC++: void SetLimitsFileName(char *)\n\nSet/get file name of marching cubes limits file.\n"},
  {(char*)"GetLimitsFileName", PyvtkMCubesWriter_GetLimitsFileName, 1,
   (char*)"V.GetLimitsFileName() -> string\nC++: char *GetLimitsFileName()\n\nSet/get file name of marching cubes limits file.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkMCubesWriter_StaticNew()
{
  return vtkMCubesWriter::New();
}

PyObject *PyVTKClass_vtkMCubesWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkMCubesWriter_StaticNew,
    PyvtkMCubesWriter_Methods,
    "vtkMCubesWriter", modulename,
    NULL, NULL,
    PyvtkMCubesWriter_Doc(),
    PyVTKClass_vtkPolyDataWriterNew(modulename));
  return cls;
}

const char **PyvtkMCubesWriter_Doc()
{
  static const char *docstring[] = {
    "vtkMCubesWriter - write binary marching cubes file\n\n",
    "Superclass: vtkPolyDataWriter\n\n",
    "vtkMCubesWriter is a polydata writer that writes binary marching\ncubes files. (Marching cubes is an isosurfacing technique that\ngenerates many triangles.) The binary format is supported by W.\nLorensen's marching cubes program (and the vtkSliceCubes object).\nEach triangle is represented by three records, with each record\nconsisting of six single precision floating point numbers\nrepresenting the a t",
    "riangle vertex coordinate and vertex normal.\n\nCaveats:\n\nBinary files are written in sun/hp/sgi (i.e., Big Endian) form.\n\nSee Also:\n\nvtkMarchingCubes vtkSliceCubes vtkMCubesReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkMCubesWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkMCubesWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkMCubesWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

