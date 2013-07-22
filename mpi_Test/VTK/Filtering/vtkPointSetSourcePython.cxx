// python wrapper for vtkPointSetSource
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
#include "vtkPointSetSource.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkPointSetSource(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkPointSetSource(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkPointSetSourceNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkPointSetSourceNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkSourceNew
extern "C" { PyObject *PyVTKClass_vtkSourceNew(const char *); }
#define DECLARED_PyVTKClass_vtkSourceNew
#endif

static const char **PyvtkPointSetSource_Doc();


static PyObject *
PyvtkPointSetSource_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetSource *op = static_cast<vtkPointSetSource *>(vp);

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
      tempr = op->vtkPointSetSource::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetSource *op = static_cast<vtkPointSetSource *>(vp);

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
      tempr = op->vtkPointSetSource::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkPointSetSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetSource *op = static_cast<vtkPointSetSource *>(vp);

  vtkPointSetSource *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkPointSetSource::NewInstance();
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
PyvtkPointSetSource_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetSource *op = static_cast<vtkPointSetSource *>(vp);

  vtkPointSet *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetOutput();
      }
    else
      {
      tempr = op->vtkPointSetSource::GetOutput();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetSource_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetSource *op = static_cast<vtkPointSetSource *>(vp);

  int temp0;
  vtkPointSet *tempr;
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
      tempr = op->vtkPointSetSource::GetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}

static PyObject *
PyvtkPointSetSource_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
    {
    case 0:
      return PyvtkPointSetSource_GetOutput_s1(self, args);
    case 1:
      return PyvtkPointSetSource_GetOutput_s2(self, args);
    }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return NULL;
}



static PyObject *
PyvtkPointSetSource_SetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetSource *op = static_cast<vtkPointSetSource *>(vp);

  vtkPointSet *temp0 = NULL;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
    {
    if (ap.IsBound())
      {
      op->SetOutput(temp0);
      }
    else
      {
      op->vtkPointSetSource::SetOutput(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}

static PyMethodDef PyvtkPointSetSource_Methods[] = {
  {(char*)"GetClassName", PyvtkPointSetSource_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkPointSetSource_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkPointSetSource_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkPointSetSource\nC++: vtkPointSetSource *NewInstance()\n\n"},
  {(char*)"GetOutput", PyvtkPointSetSource_GetOutput, 1,
   (char*)"V.GetOutput() -> vtkPointSet\nC++: vtkPointSet *GetOutput()\nV.GetOutput(int) -> vtkPointSet\nC++: vtkPointSet *GetOutput(int idx)\n\nGet the output of this source.\n"},
  {(char*)"SetOutput", PyvtkPointSetSource_SetOutput, 1,
   (char*)"V.SetOutput(vtkPointSet)\nC++: void SetOutput(vtkPointSet *output)\n\nGet the output of this source.\n"},
  {NULL, NULL, 0, NULL}
};

PyObject *PyVTKClass_vtkPointSetSourceNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(NULL,
    PyvtkPointSetSource_Methods,
    "vtkPointSetSource", modulename,
    NULL, NULL,
    PyvtkPointSetSource_Doc(),
    PyVTKClass_vtkSourceNew(modulename));
  return cls;
}

const char **PyvtkPointSetSource_Doc()
{
  static const char *docstring[] = {
    "vtkPointSetSource - abstract class whose subclasses generate point\ndata\n\n",
    "Superclass: vtkSource\n\n",
    "vtkPointSetSource is an abstract class whose subclasses generate\npointdata.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkPointSetSource(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkPointSetSourceNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkPointSetSource", o) != 0)
    {
    Py_DECREF(o);
    }

}

