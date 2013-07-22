// python wrapper for vtkXGMLReader
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
#include "vtkXGMLReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkXGMLReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkXGMLReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkXGMLReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkXGMLReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkUndirectedGraphAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkUndirectedGraphAlgorithmNew
#endif

static const char **PyvtkXGMLReader_Doc();


static PyObject *
PyvtkXGMLReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGMLReader *op = static_cast<vtkXGMLReader *>(vp);

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
      tempr = op->vtkXGMLReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGMLReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGMLReader *op = static_cast<vtkXGMLReader *>(vp);

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
      tempr = op->vtkXGMLReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGMLReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGMLReader *op = static_cast<vtkXGMLReader *>(vp);

  vtkXGMLReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkXGMLReader::NewInstance();
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
PyvtkXGMLReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkXGMLReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkXGMLReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGMLReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGMLReader *op = static_cast<vtkXGMLReader *>(vp);

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
      tempr = op->vtkXGMLReader::GetFileName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkXGMLReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXGMLReader *op = static_cast<vtkXGMLReader *>(vp);

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
      op->vtkXGMLReader::SetFileName(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkXGMLReader_Methods[] = {
  {(char*)"GetClassName", PyvtkXGMLReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkXGMLReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkXGMLReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkXGMLReader\nC++: vtkXGMLReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkXGMLReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkXGMLReader\nC++: vtkXGMLReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetFileName", PyvtkXGMLReader_GetFileName, 1,
   (char*)"V.GetFileName() -> string\nC++: char *GetFileName()\n\nThe XGML file name.\n"},
  {(char*)"SetFileName", PyvtkXGMLReader_SetFileName, 1,
   (char*)"V.SetFileName(string)\nC++: void SetFileName(char *)\n\nThe XGML file name.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkXGMLReader_StaticNew()
{
  return vtkXGMLReader::New();
}

PyObject *PyVTKClass_vtkXGMLReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkXGMLReader_StaticNew,
    PyvtkXGMLReader_Methods,
    "vtkXGMLReader", modulename,
    NULL, NULL,
    PyvtkXGMLReader_Doc(),
    PyVTKClass_vtkUndirectedGraphAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkXGMLReader_Doc()
{
  static const char *docstring[] = {
    "vtkXGMLReader - Reads XGML graph files.\n\n",
    "Superclass: vtkUndirectedGraphAlgorithm\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkXGMLReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkXGMLReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkXGMLReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

