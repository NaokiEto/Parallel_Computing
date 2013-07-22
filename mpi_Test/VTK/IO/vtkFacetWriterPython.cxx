// python wrapper for vtkFacetWriter
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
#include "vtkFacetWriter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkFacetWriter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkFacetWriter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkFacetWriterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkFacetWriterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkFacetWriter_Doc();


static PyObject *
PyvtkFacetWriter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFacetWriter *op = static_cast<vtkFacetWriter *>(vp);

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
      tempr = op->vtkFacetWriter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFacetWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFacetWriter *op = static_cast<vtkFacetWriter *>(vp);

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
      tempr = op->vtkFacetWriter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFacetWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFacetWriter *op = static_cast<vtkFacetWriter *>(vp);

  vtkFacetWriter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkFacetWriter::NewInstance();
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
PyvtkFacetWriter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkFacetWriter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkFacetWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFacetWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFacetWriter *op = static_cast<vtkFacetWriter *>(vp);

  char *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetFileName(temp0);
      }
    else
      {
      op->vtkFacetWriter::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkFacetWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFacetWriter *op = static_cast<vtkFacetWriter *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetFileName();
      }
    else
      {
      tempr = op->vtkFacetWriter::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkFacetWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFacetWriter *op = static_cast<vtkFacetWriter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->Write();
      }
    else
      {
      op->vtkFacetWriter::Write();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkFacetWriter_Methods[] = {
  {(char*)"GetClassName", PyvtkFacetWriter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkFacetWriter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkFacetWriter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkFacetWriter\nC++: vtkFacetWriter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkFacetWriter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkFacetWriter\nC++: vtkFacetWriter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkFacetWriter_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify file name of Facet datafile to read\n"},
  {(char*)"GetFileName", PyvtkFacetWriter_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify file name of Facet datafile to read\n"},
  {(char*)"Write", PyvtkFacetWriter_Write, 1,
   (char*)"V.Write()\nC++: void Write()\n\nWrite data\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkFacetWriter_StaticNew()
{
  return vtkFacetWriter::New();
}

PyObject *PyVTKClass_vtkFacetWriterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkFacetWriter_StaticNew,
    PyvtkFacetWriter_Methods,
    "vtkFacetWriter", modulename,
    NULL, NULL,
    PyvtkFacetWriter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkFacetWriter_Doc()
{
  static const char *docstring[] = {
    "vtkFacetWriter - reads a dataset in Facet format\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkFacetWriter creates an unstructured grid dataset. It reads ASCII\nfiles stored in Facet format\n\nThe facet format looks like this: FACET FILE ... nparts Part 1 name 0\nnpoints 0 0 p1x p1y p1z p2x p2y p2z ... 1 Part 1 name ncells\nnpointspercell p1c1 p2c1 p3c1 ... pnc1 materialnum partnum p1c2 p2c2\np3c2 ... pnc2 materialnum partnum ...\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkFacetWriter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkFacetWriterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkFacetWriter", o) != 0)
    {
    Py_DECREF(o);
    }

}

