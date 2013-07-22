// python wrapper for vtkXMLPolyDataReader
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
#include "vtkXMLPolyDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLPolyDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLPolyDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLPolyDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLPolyDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLUnstructuredDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLUnstructuredDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLUnstructuredDataReaderNew
#endif

static const char **PyvtkXMLPolyDataReader_Doc();


static PyObject *
PyvtkXMLPolyDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

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
      tempr = op->vtkXMLPolyDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

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
      tempr = op->vtkXMLPolyDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  vtkXMLPolyDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLPolyDataReader::NewInstance();
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
PyvtkXMLPolyDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLPolyDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLPolyDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkXMLPolyDataReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPolyDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  int temp0;
  vtkPolyData *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput(temp0);
      }
    else
      {
      tempr = op->vtkXMLPolyDataReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLPolyDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLPolyDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLPolyDataReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkXMLPolyDataReader_GetNumberOfVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVerts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfVerts();
      }
    else
      {
      tempr = op->vtkXMLPolyDataReader::GetNumberOfVerts();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_GetNumberOfLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfLines();
      }
    else
      {
      tempr = op->vtkXMLPolyDataReader::GetNumberOfLines();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_GetNumberOfStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStrips");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfStrips();
      }
    else
      {
      tempr = op->vtkXMLPolyDataReader::GetNumberOfStrips();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLPolyDataReader_GetNumberOfPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPolys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLPolyDataReader *op = static_cast<vtkXMLPolyDataReader *>(vp);

  vtkIdType tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetNumberOfPolys();
      }
    else
      {
      tempr = op->vtkXMLPolyDataReader::GetNumberOfPolys();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLPolyDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLPolyDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLPolyDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLPolyDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLPolyDataReader\nC++: vtkXMLPolyDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLPolyDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLPolyDataReader\nC++: vtkXMLPolyDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLPolyDataReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkPolyData\nC++: vtkPolyData *GetOutput()\nV.GetOutput(int) -> vtkPolyData\nC++: vtkPolyData *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {(char*)"GetNumberOfVerts", PyvtkXMLPolyDataReader_GetNumberOfVerts, 1,
   (char*)"V.GetNumberOfVerts() -> int\nC++: virtual vtkIdType GetNumberOfVerts()\n\nGet the number of verts/lines/strips/polys in the output.\n"},
  {(char*)"GetNumberOfLines", PyvtkXMLPolyDataReader_GetNumberOfLines, 1,
   (char*)"V.GetNumberOfLines() -> int\nC++: virtual vtkIdType GetNumberOfLines()\n\nGet the number of verts/lines/strips/polys in the output.\n"},
  {(char*)"GetNumberOfStrips", PyvtkXMLPolyDataReader_GetNumberOfStrips, 1,
   (char*)"V.GetNumberOfStrips() -> int\nC++: virtual vtkIdType GetNumberOfStrips()\n\nGet the number of verts/lines/strips/polys in the output.\n"},
  {(char*)"GetNumberOfPolys", PyvtkXMLPolyDataReader_GetNumberOfPolys, 1,
   (char*)"V.GetNumberOfPolys() -> int\nC++: virtual vtkIdType GetNumberOfPolys()\n\nGet the number of verts/lines/strips/polys in the output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLPolyDataReader_StaticNew()
{
  return vtkXMLPolyDataReader::New();
}

PyObject *PyVTKClass_vtkXMLPolyDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLPolyDataReader_StaticNew,
    PyvtkXMLPolyDataReader_Methods,
    "vtkXMLPolyDataReader", modulename,
    NULL, NULL,
    PyvtkXMLPolyDataReader_Doc(),
    PyVTKClass_vtkXMLUnstructuredDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLPolyDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLPolyDataReader - Read VTK XML PolyData files.\n\n",
    "Superclass: vtkXMLUnstructuredDataReader\n\n",
    "vtkXMLPolyDataReader reads the VTK XML PolyData file format.  One\npolygonal data file can be read to produce one output.  Streaming is\nsupported.  The standard extension for this reader's file format is\n\"vtp\".  This reader is also used to read a single piece of the\nparallel file format.\n\nSee Also:\n\nvtkXMLPPolyDataReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLPolyDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLPolyDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLPolyDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

