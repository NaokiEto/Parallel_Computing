// python wrapper for vtkUnstructuredGridSource
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
#include "vtkUnstructuredGridSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkUnstructuredGridSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkUnstructuredGridSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkUnstructuredGridSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkUnstructuredGridSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSourceNew
extern "C" { PyObject *PyVTKClass_vtkSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkSourceNew
#endif

static const char **PyvtkUnstructuredGridSource_Doc();


static PyObject *
PyvtkUnstructuredGridSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridSource *op = static_cast<vtkUnstructuredGridSource *>(vp);

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
      tempr = op->vtkUnstructuredGridSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridSource *op = static_cast<vtkUnstructuredGridSource *>(vp);

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
      tempr = op->vtkUnstructuredGridSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkUnstructuredGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridSource *op = static_cast<vtkUnstructuredGridSource *>(vp);

  vtkUnstructuredGridSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkUnstructuredGridSource::NewInstance();
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
PyvtkUnstructuredGridSource_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridSource *op = static_cast<vtkUnstructuredGridSource *>(vp);

  vtkUnstructuredGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkUnstructuredGridSource::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridSource_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridSource *op = static_cast<vtkUnstructuredGridSource *>(vp);

  int temp0;
  vtkUnstructuredGrid *tempr;
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
      tempr = op->vtkUnstructuredGridSource::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkUnstructuredGridSource_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkUnstructuredGridSource_GetOutput_s1(self, args);
    case 1:
      return PyvtkUnstructuredGridSource_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkUnstructuredGridSource_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridSource *op = static_cast<vtkUnstructuredGridSource *>(vp);

  vtkUnstructuredGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUnstructuredGrid"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkUnstructuredGridSource::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridSource_Methods[] = {
  {(char*)"GetClassName", PyvtkUnstructuredGridSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkUnstructuredGridSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkUnstructuredGridSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkUnstructuredGridSource\nC++: vtkUnstructuredGridSource *NewInstance()\n\n"},
  {(char*)"GetOutput", PyvtkUnstructuredGridSource_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput()\nV.GetOutput(int) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetOutput(int idx)\n\nGet the output of this source.\n"},
  {(char*)"SetOutput", PyvtkUnstructuredGridSource_SetOutput, 1,
   (char*)"V.SetOutput(vtkUnstructuredGrid)\nC++: void SetOutput(vtkUnstructuredGrid *output)\n\nGet the output of this source.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkUnstructuredGridSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkUnstructuredGridSource_Methods,
    "vtkUnstructuredGridSource", modulename,
    NULL, NULL,
    PyvtkUnstructuredGridSource_Doc(),
    PyVTKClass_vtkSourceNew(modulename));
  return cls;
}

const char **PyvtkUnstructuredGridSource_Doc()
{
  static const char *docstring[] = {
    "vtkUnstructuredGridSource - abstract class whose subclasses generate\nunstructured grid data\n\n",
    "Superclass: vtkSource\n\n",
    "vtkUnstructuredGridSource is an abstract class whose subclasses\ngenerate unstructured grid data.\n\nSee Also:\n\nvtkUnstructuredGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkUnstructuredGridSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkUnstructuredGridSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkUnstructuredGridSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

