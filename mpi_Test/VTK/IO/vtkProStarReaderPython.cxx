// python wrapper for vtkProStarReader
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
#include "vtkProStarReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkProStarReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkProStarReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkProStarReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkProStarReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUnstructuredGridAlgorithmNew
#endif

static const char **PyvtkProStarReader_Doc();


static PyObject *
PyvtkProStarReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

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
      tempr = op->vtkProStarReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

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
      tempr = op->vtkProStarReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  vtkProStarReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkProStarReader::NewInstance();
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
PyvtkProStarReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkProStarReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkProStarReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

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
      op->vtkProStarReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

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
      tempr = op->vtkProStarReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  double temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetScaleFactor(temp0);
      }
    else
      {
      op->vtkProStarReader::SetScaleFactor(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_GetScaleFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactorMinValue();
      }
    else
      {
      tempr = op->vtkProStarReader::GetScaleFactorMinValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_GetScaleFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactorMaxValue();
      }
    else
      {
      tempr = op->vtkProStarReader::GetScaleFactorMaxValue();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkProStarReader_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProStarReader *op = static_cast<vtkProStarReader *>(vp);

  double tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetScaleFactor();
      }
    else
      {
      tempr = op->vtkProStarReader::GetScaleFactor();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkProStarReader_Methods[] = {
  {(char*)"GetClassName", PyvtkProStarReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkProStarReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkProStarReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkProStarReader\nC++: vtkProStarReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkProStarReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkProStarReader\nC++: vtkProStarReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetFileName", PyvtkProStarReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nSpecify the file name prefix of the cel/vrt files to read. The\nreader will try to open FileName.cel and FileName.vrt files.\n"},
  {(char*)"GetFileName", PyvtkProStarReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nSpecify the file name prefix of the cel/vrt files to read. The\nreader will try to open FileName.cel and FileName.vrt files.\n"},
  {(char*)"SetScaleFactor", PyvtkProStarReader_SetScaleFactor, 1,
   (char*)"V.SetScaleFactor(float)\nC++: void SetScaleFactor(double)\n\nThe proSTAR files are often in millimeters. Specify an\nalternative scaling factor.\n"},
  {(char*)"GetScaleFactorMinValue", PyvtkProStarReader_GetScaleFactorMinValue, 1,
   (char*)"V.GetScaleFactorMinValue() -> float\nC++: double GetScaleFactorMinValue()\n\nThe proSTAR files are often in millimeters. Specify an\nalternative scaling factor.\n"},
  {(char*)"GetScaleFactorMaxValue", PyvtkProStarReader_GetScaleFactorMaxValue, 1,
   (char*)"V.GetScaleFactorMaxValue() -> float\nC++: double GetScaleFactorMaxValue()\n\nThe proSTAR files are often in millimeters. Specify an\nalternative scaling factor.\n"},
  {(char*)"GetScaleFactor", PyvtkProStarReader_GetScaleFactor, 1,
   (char*)"V.GetScaleFactor() -> float\nC++: double GetScaleFactor()\n\nThe proSTAR files are often in millimeters. Specify an\nalternative scaling factor.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkProStarReader_StaticNew()
{
  return vtkProStarReader::New();
}

PyObject *PyVTKClass_vtkProStarReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkProStarReader_StaticNew,
    PyvtkProStarReader_Methods,
    "vtkProStarReader", modulename,
    NULL, NULL,
    PyvtkProStarReader_Doc(),
    PyVTKClass_vtkUnstructuredGridAlgorithmNew(modulename));

  if (cls)
    {
    PyObject *d = PyVTKClass_GetDict(cls);
    PyObject *o;

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"starcdFluidType", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"starcdSolidType", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"starcdBaffleType", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(4);
    if (o && PyDict_SetItemString(d, (char *)"starcdShellType", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(5);
    if (o && PyDict_SetItemString(d, (char *)"starcdLineType", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(6);
    if (o && PyDict_SetItemString(d, (char *)"starcdPointType", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(1);
    if (o && PyDict_SetItemString(d, (char *)"starcdPoint", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(2);
    if (o && PyDict_SetItemString(d, (char *)"starcdLine", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(3);
    if (o && PyDict_SetItemString(d, (char *)"starcdShell", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(11);
    if (o && PyDict_SetItemString(d, (char *)"starcdHex", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(12);
    if (o && PyDict_SetItemString(d, (char *)"starcdPrism", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(13);
    if (o && PyDict_SetItemString(d, (char *)"starcdTet", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(14);
    if (o && PyDict_SetItemString(d, (char *)"starcdPyr", o) != 0)
      {
      Py_DECREF(o);
      }

    o = PyInt_FromLong(255);
    if (o && PyDict_SetItemString(d, (char *)"starcdPoly", o) != 0)
      {
      Py_DECREF(o);
      }

    }

  return cls;
}

const char **PyvtkProStarReader_Doc()
{
  static const char *docstring[] = {
    "vtkProStarReader - Reads geometry in proSTAR (STARCD) file format.\n\n",
    "Superclass: vtkUnstructuredGridAlgorithm\n\n",
    "vtkProStarReader creates an unstructured grid dataset. It reads\n.cel/.vrt files stored in proSTAR (STARCD) ASCII format.\n\nThanks:\n\nReader written by Mark Olesen\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkProStarReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkProStarReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkProStarReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

