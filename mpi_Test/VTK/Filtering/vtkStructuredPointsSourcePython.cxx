// python wrapper for vtkStructuredPointsSource
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
#include "vtkStructuredPointsSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkStructuredPointsSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkStructuredPointsSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkStructuredPointsSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkStructuredPointsSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSourceNew
extern "C" { PyObject *PyVTKClass_vtkSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkSourceNew
#endif

static const char **PyvtkStructuredPointsSource_Doc();


static PyObject *
PyvtkStructuredPointsSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsSource *op = static_cast<vtkStructuredPointsSource *>(vp);

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
      tempr = op->vtkStructuredPointsSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsSource *op = static_cast<vtkStructuredPointsSource *>(vp);

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
      tempr = op->vtkStructuredPointsSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsSource *op = static_cast<vtkStructuredPointsSource *>(vp);

  vtkStructuredPointsSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkStructuredPointsSource::NewInstance();
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
PyvtkStructuredPointsSource_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsSource *op = static_cast<vtkStructuredPointsSource *>(vp);

  vtkStructuredPoints *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStructuredPoints"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkStructuredPointsSource::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkStructuredPointsSource_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsSource *op = static_cast<vtkStructuredPointsSource *>(vp);

  vtkStructuredPoints *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkStructuredPointsSource::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredPointsSource_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredPointsSource *op = static_cast<vtkStructuredPointsSource *>(vp);

  int temp0;
  vtkStructuredPoints *tempr;
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
      tempr = op->vtkStructuredPointsSource::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkStructuredPointsSource_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkStructuredPointsSource_GetOutput_s1(self, args);
    case 1:
      return PyvtkStructuredPointsSource_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}


static PyMethodDef PyvtkStructuredPointsSource_Methods[] = {
  {(char*)"GetClassName", PyvtkStructuredPointsSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkStructuredPointsSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkStructuredPointsSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkStructuredPointsSource\nC++: vtkStructuredPointsSource *NewInstance()\n\n"},
  {(char*)"SetOutput", PyvtkStructuredPointsSource_SetOutput, 1,
   (char*)"V.SetOutput(vtkStructuredPoints)\nC++: void SetOutput(vtkStructuredPoints *output)\n\nSet/Get the output of this source.\n"},
  {(char*)"GetOutput", PyvtkStructuredPointsSource_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetOutput()\nV.GetOutput(int) -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetOutput(int idx)\n\nSet/Get the output of this source.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkStructuredPointsSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkStructuredPointsSource_Methods,
    "vtkStructuredPointsSource", modulename,
    NULL, NULL,
    PyvtkStructuredPointsSource_Doc(),
    PyVTKClass_vtkSourceNew(modulename));
  return cls;
}

const char **PyvtkStructuredPointsSource_Doc()
{
  static const char *docstring[] = {
    "vtkStructuredPointsSource - Abstract class whose subclasses generates\nstructured Points data\n\n",
    "Superclass: vtkSource\n\n",
    "vtkStructuredPointsSource is an abstract class whose subclasses\ngenerate structured Points data.\n\nSee Also:\n\nvtkStructuredPointsReader vtkPLOT3DReader\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkStructuredPointsSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkStructuredPointsSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkStructuredPointsSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

