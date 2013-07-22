// python wrapper for vtkXMLDataReader
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
#include "vtkXMLDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLReaderNew
#endif

static const char **PyvtkXMLDataReader_Doc();


static PyObject *
PyvtkXMLDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataReader *op = static_cast<vtkXMLDataReader *>(vp);

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
      tempr = op->vtkXMLDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataReader *op = static_cast<vtkXMLDataReader *>(vp);

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
      tempr = op->vtkXMLDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataReader *op = static_cast<vtkXMLDataReader *>(vp);

  vtkXMLDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLDataReader::NewInstance();
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
PyvtkXMLDataReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataReader *op = static_cast<vtkXMLDataReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataReader *op = static_cast<vtkXMLDataReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
    {
    tempr = op->GetNumberOfCells();

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLDataReader *op = static_cast<vtkXMLDataReader *>(vp);

  vtkInformation *temp0 = NULL;
  int temp1;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1))
    {
    if (ap.IsBound())
      {
      op->CopyOutputInformation(temp0, temp1);
      }
    else
      {
      op->vtkXMLDataReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLDataReader\nC++: vtkXMLDataReader *NewInstance()\n\n"},
  {(char*)"GetNumberOfPoints", PyvtkXMLDataReader_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nGet the number of points in the output.\n"},
  {(char*)"GetNumberOfCells", PyvtkXMLDataReader_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nGet the number of cells in the output.\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLDataReader_CopyOutputInformation, 1,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLDataReader_Methods,
    "vtkXMLDataReader", modulename,
    NULL, NULL,
    PyvtkXMLDataReader_Doc(),
    PyVTKClass_vtkXMLReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLDataReader - Superclass for VTK XML file readers.\n\n",
    "Superclass: vtkXMLReader\n\n",
    "vtkXMLDataReader provides functionality common to all VTK XML file\nreaders.  Concrete subclasses call upon this functionality when\nneeded.\n\nSee Also:\n\nvtkXMLPDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

