// python wrapper for vtkCompositeDataReader
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
#include "vtkCompositeDataReader.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkCompositeDataReader(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkCompositeDataReader(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkCompositeDataReaderNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkCompositeDataReaderNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkDataReaderNew
extern "C" { PyObject *PyVTKClass_vtkDataReaderNew(const char *); }
#define DECLARED_PyVTKClass_vtkDataReaderNew
#endif

static const char **PyvtkCompositeDataReader_Doc();


static PyObject *
PyvtkCompositeDataReader_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

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
      tempr = op->vtkCompositeDataReader::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

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
      tempr = op->vtkCompositeDataReader::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

  vtkCompositeDataReader *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkCompositeDataReader::NewInstance();
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
PyvtkCompositeDataReader_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkCompositeDataReader *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkCompositeDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkCompositeDataReader_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

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
      tempr = op->vtkCompositeDataReader::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeDataReader_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

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
      tempr = op->vtkCompositeDataReader::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkCompositeDataReader_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkCompositeDataReader_GetOutput_s1(self, args);
    case 1:
      return PyvtkCompositeDataReader_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkCompositeDataReader_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataReader *op = static_cast<vtkCompositeDataReader *>(vp);

  vtkCompositeDataSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataSet"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkCompositeDataReader::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkCompositeDataReader_Methods[] = {
  {(char*)"GetClassName", PyvtkCompositeDataReader_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkCompositeDataReader_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkCompositeDataReader_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkCompositeDataReader\nC++: vtkCompositeDataReader *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkCompositeDataReader_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkCompositeDataReader\nC++: vtkCompositeDataReader *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"GetOutput", PyvtkCompositeDataReader_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetOutput()\nV.GetOutput(int) -> vtkCompositeDataSet\nC++: vtkCompositeDataSet *GetOutput(int idx)\n\nGet the output of this reader.\n"},
  {(char*)"SetOutput", PyvtkCompositeDataReader_SetOutput, 1,
   (char*)"V.SetOutput(vtkCompositeDataSet)\nC++: void SetOutput(vtkCompositeDataSet *output)\n\nGet the output of this reader.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkCompositeDataReader_StaticNew()
{
  return vtkCompositeDataReader::New();
}

PyObject *PyVTKClass_vtkCompositeDataReaderNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkCompositeDataReader_StaticNew,
    PyvtkCompositeDataReader_Methods,
    "vtkCompositeDataReader", modulename,
    NULL, NULL,
    PyvtkCompositeDataReader_Doc(),
    PyVTKClass_vtkDataReaderNew(modulename));
  return cls;
}

const char **PyvtkCompositeDataReader_Doc()
{
  static const char *docstring[] = {
    "vtkCompositeDataReader - read vtkCompositeDataSet data file.\n\n",
    "Superclass: vtkDataReader\n\n",
    "\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkCompositeDataReader(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkCompositeDataReaderNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkCompositeDataReader", o) != 0)
    {
    Py_DECREF(o);
    }

}

