// python wrapper for vtkSLACParticleReader
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
#include "vtkSLACParticleReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkSLACParticleReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkSLACParticleReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkSLACParticleReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkSLACParticleReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkSLACParticleReader_Doc();


static PyObject *
PyvtkSLACParticleReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACParticleReader *op = static_cast<vtkSLACParticleReader *>(vp);

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
      tempr = op->vtkSLACParticleReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACParticleReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACParticleReader *op = static_cast<vtkSLACParticleReader *>(vp);

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
      tempr = op->vtkSLACParticleReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACParticleReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACParticleReader *op = static_cast<vtkSLACParticleReader *>(vp);

  vtkSLACParticleReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkSLACParticleReader::NewInstance();
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
PyvtkSLACParticleReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkSLACParticleReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkSLACParticleReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACParticleReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACParticleReader *op = static_cast<vtkSLACParticleReader *>(vp);

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
      tempr = op->vtkSLACParticleReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkSLACParticleReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSLACParticleReader *op = static_cast<vtkSLACParticleReader *>(vp);

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
      op->vtkSLACParticleReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkSLACParticleReader_CanReadFile(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "CanReadFile");

  char *temp0 = NULL;
  int tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    tempr = vtkSLACParticleReader::CanReadFile(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkSLACParticleReader_Methods[] = {
  {(char*)"GetClassName", PyvtkSLACParticleReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkSLACParticleReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkSLACParticleReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkSLACParticleReader\nC++: vtkSLACParticleReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkSLACParticleReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkSLACParticleReader\nC++: vtkSLACParticleReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkSLACParticleReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\n"},
  {(char*)"SetFileName", PyvtkSLACParticleReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\n"},
  {(char*)"CanReadFile", PyvtkSLACParticleReader_CanReadFile, 1,
   (char*)"V.CanReadFile(string) -> int\nC++: static int CanReadFile(const char *filename)\n\nReturns true if the given file can be read by this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkSLACParticleReader_StaticNew()
{
  return vtkSLACParticleReader::New();
}

PyObject *PyVTKClass_vtkSLACParticleReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkSLACParticleReader_StaticNew,
    PyvtkSLACParticleReader_Methods,
    "vtkSLACParticleReader", modulename,
    NULL, NULL,
    PyvtkSLACParticleReader_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkSLACParticleReader_Doc()
{
  static const char *docstring[] = {
    "vtkSLACParticleReader\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "A reader for a data format used by Omega3p, Tau3p, and several other\ntools used at the Standford Linear Accelerator Center (SLAC).  The\nunderlying format uses netCDF to store arrays, but also imposes some\nconventions to store a list of particles in 3D space.\n\nThis reader supports pieces, but in actuality only loads anything in\npiece 0.  All other pieces are empty.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkSLACParticleReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkSLACParticleReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkSLACParticleReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

