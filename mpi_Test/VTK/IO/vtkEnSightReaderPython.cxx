// python wrapper for vtkEnSightReader
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
#include "vtkEnSightReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkEnSightReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkEnSightReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkEnSightReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkEnSightReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
extern "C" { PyObject *PyVTKClass_vtkGenericEnSightReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkGenericEnSightReaderNew
#endif

static const char **PyvtkEnSightReader_Doc();


static PyObject *
PyvtkEnSightReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

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
      tempr = op->vtkEnSightReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

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
      tempr = op->vtkEnSightReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  vtkEnSightReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkEnSightReader::NewInstance();
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
PyvtkEnSightReader_GetMeasuredFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasuredFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMeasuredFileName();
      }
    else
      {
      tempr = op->vtkEnSightReader::GetMeasuredFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_GetMatchFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatchFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  char *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetMatchFileName();
      }
    else
      {
      tempr = op->vtkEnSightReader::GetMatchFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_SetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetParticleCoordinatesByIndex(temp0);
      }
    else
      {
      op->vtkEnSightReader::SetParticleCoordinatesByIndex(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_GetParticleCoordinatesByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParticleCoordinatesByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetParticleCoordinatesByIndex();
      }
    else
      {
      tempr = op->vtkEnSightReader::GetParticleCoordinatesByIndex();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_ParticleCoordinatesByIndexOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParticleCoordinatesByIndexOn();
      }
    else
      {
      op->vtkEnSightReader::ParticleCoordinatesByIndexOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkEnSightReader_ParticleCoordinatesByIndexOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParticleCoordinatesByIndexOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->ParticleCoordinatesByIndexOff();
      }
    else
      {
      op->vtkEnSightReader::ParticleCoordinatesByIndexOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkEnSightReader_Methods[] = {
  {(char*)"GetClassName", PyvtkEnSightReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkEnSightReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkEnSightReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkEnSightReader\nC++: vtkEnSightReader *NewInstance()\n\n"},
  {(char*)"GetMeasuredFileName", PyvtkEnSightReader_GetMeasuredFileName, 1,
   (char*)"V.GetMeasuredFileName() -> string\nC++: char *GetMeasuredFileName()\n\nGet the Measured file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {(char*)"GetMatchFileName", PyvtkEnSightReader_GetMatchFileName, 1,
   (char*)"V.GetMatchFileName() -> string\nC++: char *GetMatchFileName()\n\nGet the Match file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {(char*)"SetParticleCoordinatesByIndex", PyvtkEnSightReader_SetParticleCoordinatesByIndex, 1,
   (char*)"V.SetParticleCoordinatesByIndex(int)\nC++: void SetParticleCoordinatesByIndex(int a)\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"GetParticleCoordinatesByIndex", PyvtkEnSightReader_GetParticleCoordinatesByIndex, 1,
   (char*)"V.GetParticleCoordinatesByIndex() -> int\nC++: int GetParticleCoordinatesByIndex()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"ParticleCoordinatesByIndexOn", PyvtkEnSightReader_ParticleCoordinatesByIndexOn, 1,
   (char*)"V.ParticleCoordinatesByIndexOn()\nC++: void ParticleCoordinatesByIndexOn()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {(char*)"ParticleCoordinatesByIndexOff", PyvtkEnSightReader_ParticleCoordinatesByIndexOff, 1,
   (char*)"V.ParticleCoordinatesByIndexOff()\nC++: void ParticleCoordinatesByIndexOff()\n\nThe MeasuredGeometryFile should list particle coordinates from\n0->N-1. If a file is loaded where point Ids are listed from 1-N\nthe Id to points reference will be wrong and the data will be\ngenerated incorrectly. Setting ParticleCoordinatesByIndex to true\nwill force all Id's to increment from 0->N-1 (relative to their\norder in the file) and regardless of the actual Id of of the\npoint. Warning, if the Points are listed in non sequential order\nthen setting this flag will reorder them.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkEnSightReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkEnSightReader_Methods,
    "vtkEnSightReader", modulename,
    NULL, NULL,
    PyvtkEnSightReader_Doc(),
    PyVTKClass_vtkGenericEnSightReaderNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"POINT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"BAR2", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"BAR3", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"NSIDED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"TRIA3", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"TRIA6", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"QUAD4", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"QUAD8", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"NFACED", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"TETRA4", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(10);
    if (o && PyDict_SetItemString(d, (char *)"TETRA10", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"PYRAMID5", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(12);
    if (o && PyDict_SetItemString(d, (char *)"PYRAMID13", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(13);
    if (o && PyDict_SetItemString(d, (char *)"HEXA8", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(14);
    if (o && PyDict_SetItemString(d, (char *)"HEXA20", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(15);
    if (o && PyDict_SetItemString(d, (char *)"PENTA6", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(16);
    if (o && PyDict_SetItemString(d, (char *)"PENTA15", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(17);
    if (o && PyDict_SetItemString(d, (char *)"NUMBER_OF_ELEMENT_TYPES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_PER_NODE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"VECTOR_PER_NODE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"TENSOR_SYMM_PER_NODE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_PER_ELEMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"VECTOR_PER_ELEMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"TENSOR_SYMM_PER_ELEMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"SCALAR_PER_MEASURED_NODE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(7);
    if (o && PyDict_SetItemString(d, (char *)"VECTOR_PER_MEASURED_NODE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(8);
    if (o && PyDict_SetItemString(d, (char *)"COMPLEX_SCALAR_PER_NODE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(9);
    if (o && PyDict_SetItemString(d, (char *)"COMPLEX_VECTOR_PER_NODE", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(10);
    if (o && PyDict_SetItemString(d, (char *)"COMPLEX_SCALAR_PER_ELEMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"COMPLEX_VECTOR_PER_ELEMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(0);
    if (o && PyDict_SetItemString(d, (char *)"COORDINATES", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"BLOCK", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"ELEMENT", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkEnSightReader_Doc()
{
  static const char *docstring[] = {
    "vtkEnSightReader - superclass for EnSight file readers\n\n",
    "Superclass: vtkGenericEnSightReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkEnSightReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkEnSightReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkEnSightReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

