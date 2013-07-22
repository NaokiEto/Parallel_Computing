// python wrapper for vtkPCosmoReader
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
#include "vtkPCosmoReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPCosmoReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPCosmoReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPCosmoReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPCosmoReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkPCosmoReader_Doc();


static PyObject *
PyvtkPCosmoReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

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
      tempr = op->vtkPCosmoReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

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
      tempr = op->vtkPCosmoReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  vtkPCosmoReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPCosmoReader::NewInstance();
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
PyvtkPCosmoReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkPCosmoReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkPCosmoReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

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
      op->vtkPCosmoReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

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
      tempr = op->vtkPCosmoReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_SetRL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetRL(temp0);
      }
    else
      {
      op->vtkPCosmoReader::SetRL(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_GetRL(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRL");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetRL();
      }
    else
      {
      tempr = op->vtkPCosmoReader::GetRL();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_SetOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  float temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetOverlap(temp0);
      }
    else
      {
      op->vtkPCosmoReader::SetOverlap(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_GetOverlap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverlap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  float tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOverlap();
      }
    else
      {
      tempr = op->vtkPCosmoReader::GetOverlap();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_SetReadMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetReadMode(temp0);
      }
    else
      {
      op->vtkPCosmoReader::SetReadMode(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_GetReadMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetReadMode();
      }
    else
      {
      tempr = op->vtkPCosmoReader::GetReadMode();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_SetCosmoFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCosmoFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetCosmoFormat(temp0);
      }
    else
      {
      op->vtkPCosmoReader::SetCosmoFormat(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_GetCosmoFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCosmoFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetCosmoFormat();
      }
    else
      {
      tempr = op->vtkPCosmoReader::GetCosmoFormat();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  vtkMultiProcessController *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetController();
      }
    else
      {
      tempr = op->vtkPCosmoReader::GetController();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPCosmoReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCosmoReader *op = static_cast<vtkPCosmoReader *>(vp);

  vtkMultiProcessController *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
    {
    if (ap.IsBound())
      {
      op->SetController(temp0);
      }
    else
      {
      op->vtkPCosmoReader::SetController(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPCosmoReader_Methods[] = {
  {(char*)"GetClassName", PyvtkPCosmoReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPCosmoReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPCosmoReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPCosmoReader\nC++: vtkPCosmoReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkPCosmoReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkPCosmoReader\nC++: vtkPCosmoReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkPCosmoReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the name of the cosmology particle binary file to read\n"},
  {(char*)"GetFileName", PyvtkPCosmoReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the name of the cosmology particle binary file to read\n"},
  {(char*)"SetRL", PyvtkPCosmoReader_SetRL, 1,
   (char*)"V.SetRL(float)\nC++: void SetRL(float a)\n\nSpecify the physical box dimensions size (rL) (default 100.0)\n"},
  {(char*)"GetRL", PyvtkPCosmoReader_GetRL, 1,
   (char*)"V.GetRL() -> float\nC++: float GetRL()\n\nSpecify the physical box dimensions size (rL) (default 100.0)\n"},
  {(char*)"SetOverlap", PyvtkPCosmoReader_SetOverlap, 1,
   (char*)"V.SetOverlap(float)\nC++: void SetOverlap(float a)\n\nSpecify the ghost cell spacing in Mpc (in rL units) (edge\nboundary of processor box) (default 5)\n"},
  {(char*)"GetOverlap", PyvtkPCosmoReader_GetOverlap, 1,
   (char*)"V.GetOverlap() -> float\nC++: float GetOverlap()\n\nSpecify the ghost cell spacing in Mpc (in rL units) (edge\nboundary of processor box) (default 5)\n"},
  {(char*)"SetReadMode", PyvtkPCosmoReader_SetReadMode, 1,
   (char*)"V.SetReadMode(int)\nC++: void SetReadMode(int a)\n\nSet the read mode (0 = one-to-one, 1 = default, round-robin)\n"},
  {(char*)"GetReadMode", PyvtkPCosmoReader_GetReadMode, 1,
   (char*)"V.GetReadMode() -> int\nC++: int GetReadMode()\n\nSet the read mode (0 = one-to-one, 1 = default, round-robin)\n"},
  {(char*)"SetCosmoFormat", PyvtkPCosmoReader_SetCosmoFormat, 1,
   (char*)"V.SetCosmoFormat(int)\nC++: void SetCosmoFormat(int a)\n\nSet the filetype to Gadget or Cosmo read mode (0 = Gadget, 1 =\ndefault, Cosmo)\n"},
  {(char*)"GetCosmoFormat", PyvtkPCosmoReader_GetCosmoFormat, 1,
   (char*)"V.GetCosmoFormat() -> int\nC++: int GetCosmoFormat()\n\nSet the filetype to Gadget or Cosmo read mode (0 = Gadget, 1 =\ndefault, Cosmo)\n"},
  {(char*)"GetController", PyvtkPCosmoReader_GetController, 1,
   (char*)"V.GetController() -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\nSet the communicator object for interprocess communication\n"},
  {(char*)"SetController", PyvtkPCosmoReader_SetController, 1,
   (char*)"V.SetController(vtkMultiProcessController)\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet the communicator object for interprocess communication\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkPCosmoReader_StaticNew()
{
  return vtkPCosmoReader::New();
}

PyObject *PyVTKClass_vtkPCosmoReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkPCosmoReader_StaticNew,
    PyvtkPCosmoReader_Methods,
    "vtkPCosmoReader", modulename,
    NULL, NULL,
    PyvtkPCosmoReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkPCosmoReader_Doc()
{
  static const char *docstring[] = {
    "vtkPCosmoReader - Read a binary cosmology data file\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkPCosmoReader creates a vtkUnstructuredGrid from a binary cosmology\nfile.\n\nA cosmo file is a record format file with no header. One record per\nparticle.\n\nEach record is 32 bytes, with fields (in order) for:\n    x_position (float),\n    x_velocity (float),\n    y_position (float),\n    y_velocity (float),\n    z-position (float),\n    z_velocity (float)\n    mass (float)\n    identification tag (integer",
    ")\n\nTotal particle data can be split into per processor files, with each\nfile name ending in the processor number.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPCosmoReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPCosmoReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPCosmoReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

