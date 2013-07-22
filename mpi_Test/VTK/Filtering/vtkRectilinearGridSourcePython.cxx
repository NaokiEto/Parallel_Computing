// python wrapper for vtkRectilinearGridSource
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
#include "vtkRectilinearGridSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkRectilinearGridSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkRectilinearGridSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkRectilinearGridSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkRectilinearGridSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSourceNew
extern "C" { PyObject *PyVTKClass_vtkSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkSourceNew
#endif

static const char **PyvtkRectilinearGridSource_Doc();


static PyObject *
PyvtkRectilinearGridSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridSource *op = static_cast<vtkRectilinearGridSource *>(vp);

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
      tempr = op->vtkRectilinearGridSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridSource *op = static_cast<vtkRectilinearGridSource *>(vp);

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
      tempr = op->vtkRectilinearGridSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkRectilinearGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridSource *op = static_cast<vtkRectilinearGridSource *>(vp);

  vtkRectilinearGridSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkRectilinearGridSource::NewInstance();
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
PyvtkRectilinearGridSource_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridSource *op = static_cast<vtkRectilinearGridSource *>(vp);

  vtkRectilinearGrid *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkRectilinearGridSource::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGridSource_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridSource *op = static_cast<vtkRectilinearGridSource *>(vp);

  int temp0;
  vtkRectilinearGrid *tempr;
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
      tempr = op->vtkRectilinearGridSource::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkRectilinearGridSource_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkRectilinearGridSource_GetOutput_s1(self, args);
    case 1:
      return PyvtkRectilinearGridSource_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkRectilinearGridSource_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridSource *op = static_cast<vtkRectilinearGridSource *>(vp);

  vtkRectilinearGrid *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRectilinearGrid"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkRectilinearGridSource::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkRectilinearGridSource_Methods[] = {
  {(char*)"GetClassName", PyvtkRectilinearGridSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkRectilinearGridSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkRectilinearGridSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkRectilinearGridSource\nC++: vtkRectilinearGridSource *NewInstance()\n\n"},
  {(char*)"GetOutput", PyvtkRectilinearGridSource_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetOutput()\nV.GetOutput(int) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetOutput(int idx)\n\nGet the output of this source.\n"},
  {(char*)"SetOutput", PyvtkRectilinearGridSource_SetOutput, 1,
   (char*)"V.SetOutput(vtkRectilinearGrid)\nC++: void SetOutput(vtkRectilinearGrid *output)\n\nGet the output of this source.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkRectilinearGridSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkRectilinearGridSource_Methods,
    "vtkRectilinearGridSource", modulename,
    NULL, NULL,
    PyvtkRectilinearGridSource_Doc(),
    PyVTKClass_vtkSourceNew(modulename));
  return cls;
}

const char **PyvtkRectilinearGridSource_Doc()
{
  static const char *docstring[] = {
    "vtkRectilinearGridSource - Abstract class whose subclasses generates\nrectilinear grid data\n\n",
    "Superclass: vtkSource\n\n",
    "vtkRectilinearGridSource is an abstract class whose subclasses\ngenerate rectilinear grid data.\n\nSee Also:\n\nvtkRectilinearGridReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkRectilinearGridSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkRectilinearGridSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkRectilinearGridSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

