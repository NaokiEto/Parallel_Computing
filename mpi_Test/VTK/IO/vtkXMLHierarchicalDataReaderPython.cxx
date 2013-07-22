// python wrapper for vtkXMLHierarchicalDataReader
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
#include "vtkXMLHierarchicalDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLHierarchicalDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLHierarchicalDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLHierarchicalDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLHierarchicalDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLMultiGroupDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLMultiGroupDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLMultiGroupDataReaderNew
#endif

static const char **PyvtkXMLHierarchicalDataReader_Doc();


static PyObject *
PyvtkXMLHierarchicalDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalDataReader *op = static_cast<vtkXMLHierarchicalDataReader *>(vp);

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
      tempr = op->vtkXMLHierarchicalDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalDataReader *op = static_cast<vtkXMLHierarchicalDataReader *>(vp);

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
      tempr = op->vtkXMLHierarchicalDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalDataReader *op = static_cast<vtkXMLHierarchicalDataReader *>(vp);

  vtkXMLHierarchicalDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLHierarchicalDataReader::NewInstance();
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
PyvtkXMLHierarchicalDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLHierarchicalDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLHierarchicalDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLHierarchicalDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLHierarchicalDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLHierarchicalDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLHierarchicalDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLHierarchicalDataReader\nC++: vtkXMLHierarchicalDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLHierarchicalDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLHierarchicalDataReader\nC++: vtkXMLHierarchicalDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLHierarchicalDataReader_StaticNew()
{
  return vtkXMLHierarchicalDataReader::New();
}

PyObject *PyVTKClass_vtkXMLHierarchicalDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLHierarchicalDataReader_StaticNew,
    PyvtkXMLHierarchicalDataReader_Methods,
    "vtkXMLHierarchicalDataReader", modulename,
    NULL, NULL,
    PyvtkXMLHierarchicalDataReader_Doc(),
    PyVTKClass_vtkXMLMultiGroupDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLHierarchicalDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLHierarchicalDataReader - Reader for hierarchical datasets\n\n",
    "Superclass: vtkXMLMultiGroupDataReader\n\n",
    "vtkXMLHierarchicalDataReader reads the VTK XML hierarchical data file\nformat. XML hierarchical data files are meta-files that point to a\nlist of serial VTK XML files. When reading in parallel, it will\ndistribute sub-blocks among processor. If the number of sub-blocks is\nless than the number of processors, some processors will not have any\nsub-blocks for that level. If the number of sub-blocks is l",
    "arger than\nthe number of processors, each processor will possibly have more than\n1 sub-block.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLHierarchicalDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLHierarchicalDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLHierarchicalDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

