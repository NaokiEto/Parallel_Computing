// python wrapper for vtkXMLCompositeDataReader
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
#include "vtkXMLCompositeDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLCompositeDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLCompositeDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLCompositeDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLCompositeDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLReaderNew
#endif

static const char **PyvtkXMLCompositeDataReader_Doc();


static PyObject *
PyvtkXMLCompositeDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

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
      tempr = op->vtkXMLCompositeDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

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
      tempr = op->vtkXMLCompositeDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLCompositeDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  vtkXMLCompositeDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLCompositeDataReader::NewInstance();
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
PyvtkXMLCompositeDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  vtkCompositeDataSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkXMLCompositeDataReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLCompositeDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLCompositeDataReader *op = static_cast<vtkXMLCompositeDataReader *>(vp);

  int temp0;
  vtkCompositeDataSet *tempr;
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
      tempr = op->vtkXMLCompositeDataReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLCompositeDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLCompositeDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLCompositeDataReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLCompositeDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLCompositeDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLCompositeDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLCompositeDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLCompositeDataReader\nC++: vtkXMLCompositeDataReader *NewInstance()\n\n"},
  {(char*)"GetOutput", PyvtkXMLCompositeDataReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetOutput()\nV.GetOutput(int) -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetOutput(int)\n\nGet the output data object for a port on this algorithm.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkXMLCompositeDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkXMLCompositeDataReader_Methods,
    "vtkXMLCompositeDataReader", modulename,
    NULL, NULL,
    PyvtkXMLCompositeDataReader_Doc(),
    PyVTKClass_vtkXMLReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLCompositeDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLCompositeDataReader - Reader for multi-group datasets\n\n",
    "Superclass: vtkXMLReader\n\n",
    "vtkXMLCompositeDataReader reads the VTK XML multi-group data file\nformat. XML multi-group data files are meta-files that point to a\nlist of serial VTK XML files. When reading in parallel, it will\ndistribute sub-blocks among processor. If the number of sub-blocks is\nless than the number of processors, some processors will not have any\nsub-blocks for that group. If the number of sub-blocks is larger",
    " than\nthe number of processors, each processor will possibly have more than\n1 sub-block.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLCompositeDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLCompositeDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLCompositeDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

