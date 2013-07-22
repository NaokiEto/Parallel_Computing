// python wrapper for vtkXMLMultiGroupDataReader
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
#include "vtkXMLMultiGroupDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXMLMultiGroupDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXMLMultiGroupDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXMLMultiGroupDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXMLMultiGroupDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkXMLMultiBlockDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkXMLMultiBlockDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkXMLMultiBlockDataReaderNew
#endif

static const char **PyvtkXMLMultiGroupDataReader_Doc();


static PyObject *
PyvtkXMLMultiGroupDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiGroupDataReader *op = static_cast<vtkXMLMultiGroupDataReader *>(vp);

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
      tempr = op->vtkXMLMultiGroupDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMultiGroupDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiGroupDataReader *op = static_cast<vtkXMLMultiGroupDataReader *>(vp);

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
      tempr = op->vtkXMLMultiGroupDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXMLMultiGroupDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXMLMultiGroupDataReader *op = static_cast<vtkXMLMultiGroupDataReader *>(vp);

  vtkXMLMultiGroupDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXMLMultiGroupDataReader::NewInstance();
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
PyvtkXMLMultiGroupDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXMLMultiGroupDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXMLMultiGroupDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkXMLMultiGroupDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXMLMultiGroupDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXMLMultiGroupDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXMLMultiGroupDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXMLMultiGroupDataReader\nC++: vtkXMLMultiGroupDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXMLMultiGroupDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXMLMultiGroupDataReader\nC++: vtkXMLMultiGroupDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXMLMultiGroupDataReader_StaticNew()
{
  return vtkXMLMultiGroupDataReader::New();
}

PyObject *PyVTKClass_vtkXMLMultiGroupDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXMLMultiGroupDataReader_StaticNew,
    PyvtkXMLMultiGroupDataReader_Methods,
    "vtkXMLMultiGroupDataReader", modulename,
    NULL, NULL,
    PyvtkXMLMultiGroupDataReader_Doc(),
    PyVTKClass_vtkXMLMultiBlockDataReaderNew(modulename));
  return cls;
}

const char **PyvtkXMLMultiGroupDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkXMLMultiGroupDataReader - Reader for multi-block datasets\n\n",
    "Superclass: vtkXMLMultiBlockDataReader\n\n",
    "vtkXMLMultiGroupDataReader is a legacy reader that reads multi group\nfiles into multiblock datasets.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXMLMultiGroupDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXMLMultiGroupDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXMLMultiGroupDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

