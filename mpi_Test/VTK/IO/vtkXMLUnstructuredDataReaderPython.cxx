// python wrapper for vtkXMLUnstructuredDataReader
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
#include "vtkXMLUnstructuredDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLUnstructuredDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLUnstructuredDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLUnstructuredDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLUnstructuredDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLDataReaderNew
#endif

static const char **PyvtkXMLUnstructuredDataReader_Doc();


static PyObject *
PyvtkXMLUnstructuredDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

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
      tempr = op->vtkXMLUnstructuredDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

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
      tempr = op->vtkXMLUnstructuredDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  vtkXMLUnstructuredDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLUnstructuredDataReader::NewInstance();
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
PyvtkXMLUnstructuredDataReader_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPoints();
      }
    else
      {
      tempr = op->vtkXMLUnstructuredDataReader::GetNumberOfPoints();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfCells();
      }
    else
      {
      tempr = op->vtkXMLUnstructuredDataReader::GetNumberOfCells();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_SetupUpdateExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupUpdateExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
    {
    if (ap.IsBound())
      {
      op->SetupUpdateExtent(temp0, temp1, temp2);
      }
    else
      {
      op->vtkXMLUnstructuredDataReader::SetupUpdateExtent(temp0, temp1, temp2);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkXMLUnstructuredDataReader_CopyOutputInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyOutputInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLUnstructuredDataReader *op = static_cast<vtkXMLUnstructuredDataReader *>(vp);

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
      op->vtkXMLUnstructuredDataReader::CopyOutputInformation(temp0, temp1);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLUnstructuredDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLUnstructuredDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLUnstructuredDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLUnstructuredDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLUnstructuredDataReader\nC++: vtkXMLUnstructuredDataReader *NewInstance()\n\n"},
  {(char*)"GetNumberOfPoints", PyvtkXMLUnstructuredDataReader_GetNumberOfPoints, 1,
   (char*)"V.GetNumberOfPoints() -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nGet the number of points in the output.\n"},
  {(char*)"GetNumberOfCells", PyvtkXMLUnstructuredDataReader_GetNumberOfCells, 1,
   (char*)"V.GetNumberOfCells() -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nGet the number of cells in the output.\n"},
  {(char*)"SetupUpdateExtent", PyvtkXMLUnstructuredDataReader_SetupUpdateExtent, 1,
   (char*)"V.SetupUpdateExtent(int, int, int)\nC++: void SetupUpdateExtent(int piece, int numberOfPieces,\n    int ghostLevel)\n\nSetup the reader as if the given update extent were requested by\nits output.  This can be used after an UpdateInformation to\nvalidate GetNumberOfPoints() and GetNumberOfCells() without\nactually reading data.\n"},
  {(char*)"CopyOutputInformation", PyvtkXMLUnstructuredDataReader_CopyOutputInformation, 1,
   (char*)"V.CopyOutputInformation(vtkInformation, int)\nC++: virtual void CopyOutputInformation(vtkInformation *outInfo,\n    int port)\n\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLUnstructuredDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLUnstructuredDataReader_Methods,
    "vtkXMLUnstructuredDataReader", modulename,
    NULL, NULL,
    PyvtkXMLUnstructuredDataReader_Doc(),
    PyVTKClass_vtkXMLDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLUnstructuredDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLUnstructuredDataReader - Superclass for unstructured data XML\nreaders.\n\n",
    "Superclass: vtkXMLDataReader\n\n",
    "vtkXMLUnstructuredDataReader provides functionality common to all\nunstructured data format readers.\n\nSee Also:\n\nvtkXMLPolyDataReader vtkXMLUnstructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLUnstructuredDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLUnstructuredDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLUnstructuredDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

