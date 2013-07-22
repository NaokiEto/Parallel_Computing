// python wrapper for vtkXMLHierarchicalBoxDataReader
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
#include "vtkXMLHierarchicalBoxDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLHierarchicalBoxDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLHierarchicalBoxDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLCompositeDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLCompositeDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLCompositeDataReaderNew
#endif

static const char **PyvtkXMLHierarchicalBoxDataReader_Doc();


static PyObject *
PyvtkXMLHierarchicalBoxDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataReader *op = static_cast<vtkXMLHierarchicalBoxDataReader *>(vp);

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
      tempr = op->vtkXMLHierarchicalBoxDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataReader *op = static_cast<vtkXMLHierarchicalBoxDataReader *>(vp);

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
      tempr = op->vtkXMLHierarchicalBoxDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLHierarchicalBoxDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLHierarchicalBoxDataReader *op = static_cast<vtkXMLHierarchicalBoxDataReader *>(vp);

  vtkXMLHierarchicalBoxDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLHierarchicalBoxDataReader::NewInstance();
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
PyvtkXMLHierarchicalBoxDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLHierarchicalBoxDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLHierarchicalBoxDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLHierarchicalBoxDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLHierarchicalBoxDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLHierarchicalBoxDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLHierarchicalBoxDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLHierarchicalBoxDataReader\nC++: vtkXMLHierarchicalBoxDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLHierarchicalBoxDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLHierarchicalBoxDataReader\nC++: vtkXMLHierarchicalBoxDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLHierarchicalBoxDataReader_StaticNew()
{
  return vtkXMLHierarchicalBoxDataReader::New();
}

PyObject *PyVTKClass_vtkXMLHierarchicalBoxDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLHierarchicalBoxDataReader_StaticNew,
    PyvtkXMLHierarchicalBoxDataReader_Methods,
    "vtkXMLHierarchicalBoxDataReader", modulename,
    NULL, NULL,
    PyvtkXMLHierarchicalBoxDataReader_Doc(),
    PyVTKClass_vtkXMLCompositeDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLHierarchicalBoxDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLHierarchicalBoxDataReader - Reader for hierarchical datasets\n\n",
    "Superclass: vtkXMLCompositeDataReader\n\n",
    "vtkXMLHierarchicalBoxDataReader reads the VTK XML hierarchical data\nfile format. XML hierarchical data files are meta-files that point to\na list of serial VTK XML files. When reading in parallel, it will\ndistribute sub-blocks among processor. If the number of sub-blocks is\nless than the number of processors, some processors will not have any\nsub-blocks for that level. If the number of sub-blocks i",
    "s larger than\nthe number of processors, each processor will possibly have more than\n1 sub-block.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLHierarchicalBoxDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLHierarchicalBoxDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLHierarchicalBoxDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

