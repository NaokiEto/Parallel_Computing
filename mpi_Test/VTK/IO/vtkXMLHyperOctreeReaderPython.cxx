// python wrapper for vtkXMLHyperOctreeReader
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
#include "vtkXMLHyperOctreeReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLHyperOctreeReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLHyperOctreeReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLHyperOctreeReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLHyperOctreeReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLDataReaderNew
#endif

static const char **PyvtkXMLHyperOctreeReader_Doc();


static PyObject *
PyvtkXMLHyperOctreeReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeReader *op = static_cast<vtkXMLHyperOctreeReader *>(vp);

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
      tempr = op->vtkXMLHyperOctreeReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeReader *op = static_cast<vtkXMLHyperOctreeReader *>(vp);

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
      tempr = op->vtkXMLHyperOctreeReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeReader *op = static_cast<vtkXMLHyperOctreeReader *>(vp);

  vtkXMLHyperOctreeReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLHyperOctreeReader::NewInstance();
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
PyvtkXMLHyperOctreeReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLHyperOctreeReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLHyperOctreeReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHyperOctreeReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeReader *op = static_cast<vtkXMLHyperOctreeReader *>(vp);

  vtkHyperOctree *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkXMLHyperOctreeReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLHyperOctreeReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHyperOctreeReader *op = static_cast<vtkXMLHyperOctreeReader *>(vp);

  int temp0;
  vtkHyperOctree *tempr;
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
      tempr = op->vtkXMLHyperOctreeReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkXMLHyperOctreeReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkXMLHyperOctreeReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkXMLHyperOctreeReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkXMLHyperOctreeReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLHyperOctreeReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLHyperOctreeReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLHyperOctreeReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLHyperOctreeReader\nC++: vtkXMLHyperOctreeReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLHyperOctreeReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLHyperOctreeReader\nC++: vtkXMLHyperOctreeReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkXMLHyperOctreeReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkHyperOctree\nC++: vtkHyperOctree *GetOutput()\nV.GetOutput(int) -> vtkHyperOctree\nC++: vtkHyperOctree *GetOutput(int idx)\n\nGet the reader's output.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLHyperOctreeReader_StaticNew()
{
  return vtkXMLHyperOctreeReader::New();
}

PyObject *PyVTKClass_vtkXMLHyperOctreeReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLHyperOctreeReader_StaticNew,
    PyvtkXMLHyperOctreeReader_Methods,
    "vtkXMLHyperOctreeReader", modulename,
    NULL, NULL,
    PyvtkXMLHyperOctreeReader_Doc(),
    PyVTKClass_vtkXMLDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLHyperOctreeReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLHyperOctreeReader - Read VTK XML HyperOctree files.\n\n",
    "Superclass: vtkXMLDataReader\n\n",
    "vtkXMLHyperOctreeReader reads the VTK XML HyperOctree file format. \nOne rectilinear grid file can be read to produce one output. \nStreaming is supported.  The standard extension for this reader's\nfile format is \"vto\".  This reader is also used to read a single\npiece of the parallel file format.\n\nSee Also:\n\nvtkXMLPHyperOctreeReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLHyperOctreeReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLHyperOctreeReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLHyperOctreeReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

