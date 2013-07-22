// python wrapper for vtkOutlineFilter
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
#include "vtkOutlineFilter.h"

#if defined(WIN32)
extern "C" { __declspec( dllexport ) void PyVTKAddFile_vtkOutlineFilter(PyObject *, const char *); }
#else
extern "C" { void PyVTKAddFile_vtkOutlineFilter(PyObject *, const char *); }
#endif
#if defined(WIN32)
extern "C" { __declspec( dllexport ) PyObject *PyVTKClass_vtkOutlineFilterNew(const char *); }
#else
extern "C" { PyObject *PyVTKClass_vtkOutlineFilterNew(const char *); }
#endif

#ifndef DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
extern "C" { PyObject *PyVTKClass_vtkPolyDataAlgorithmNew(const char *); }
#define DECLARED_PyVTKClass_vtkPolyDataAlgorithmNew
#endif

static const char **PyvtkOutlineFilter_Doc();


static PyObject *
PyvtkOutlineFilter_GetClassName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

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
      tempr = op->vtkOutlineFilter::GetClassName();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

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
      tempr = op->vtkOutlineFilter::IsA(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  vtkOutlineFilter *tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->NewInstance();
      }
    else
      {
      tempr = op->vtkOutlineFilter::NewInstance();
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
PyvtkOutlineFilter_SafeDownCast(PyObject *, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObject *temp0 = NULL;
  vtkOutlineFilter *tempr;
  PyObject *result = NULL;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObject"))
    {
    tempr = vtkOutlineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildVTKObject(tempr);
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  int temp0;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
    {
    if (ap.IsBound())
      {
      op->SetGenerateFaces(temp0);
      }
    else
      {
      op->vtkOutlineFilter::SetGenerateFaces(temp0);
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFacesOn();
      }
    else
      {
      op->vtkOutlineFilter::GenerateFacesOn();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      op->GenerateFacesOff();
      }
    else
      {
      op->vtkOutlineFilter::GenerateFacesOff();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildNone();
      }
    }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  int tempr;
  PyObject *result = NULL;

  if (op && ap.CheckArgCount(0))
    {
    if (ap.IsBound())
      {
      tempr = op->GetGenerateFaces();
      }
    else
      {
      tempr = op->vtkOutlineFilter::GetGenerateFaces();
      }

    if (!ap.ErrorOccurred())
      {
      result = ap.BuildValue(tempr);
      }
    }

  return result;
}

static PyMethodDef PyvtkOutlineFilter_Methods[] = {
  {(char*)"GetClassName", PyvtkOutlineFilter_GetClassName, 1,
   (char*)"V.GetClassName() -> string\nC++: const char *GetClassName()\n\n"},
  {(char*)"IsA", PyvtkOutlineFilter_IsA, 1,
   (char*)"V.IsA(string) -> int\nC++: int IsA(const char *name)\n\n"},
  {(char*)"NewInstance", PyvtkOutlineFilter_NewInstance, 1,
   (char*)"V.NewInstance() -> vtkOutlineFilter\nC++: vtkOutlineFilter *NewInstance()\n\n"},
  {(char*)"SafeDownCast", PyvtkOutlineFilter_SafeDownCast, 1,
   (char*)"V.SafeDownCast(vtkObject) -> vtkOutlineFilter\nC++: vtkOutlineFilter *SafeDownCast(vtkObject* o)\n\n"},
  {(char*)"SetGenerateFaces", PyvtkOutlineFilter_SetGenerateFaces, 1,
   (char*)"V.SetGenerateFaces(int)\nC++: void SetGenerateFaces(int a)\n\nGenerate solid faces for the box. This is off by default.\n"},
  {(char*)"GenerateFacesOn", PyvtkOutlineFilter_GenerateFacesOn, 1,
   (char*)"V.GenerateFacesOn()\nC++: void GenerateFacesOn()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {(char*)"GenerateFacesOff", PyvtkOutlineFilter_GenerateFacesOff, 1,
   (char*)"V.GenerateFacesOff()\nC++: void GenerateFacesOff()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {(char*)"GetGenerateFaces", PyvtkOutlineFilter_GetGenerateFaces, 1,
   (char*)"V.GetGenerateFaces() -> int\nC++: int GetGenerateFaces()\n\nGenerate solid faces for the box. This is off by default.\n"},
  {NULL, NULL, 0, NULL}
};

static vtkObjectBase *PyvtkOutlineFilter_StaticNew()
{
  return vtkOutlineFilter::New();
}

PyObject *PyVTKClass_vtkOutlineFilterNew(const char *modulename)
{
  PyObject *cls = PyVTKClass_New(&PyvtkOutlineFilter_StaticNew,
    PyvtkOutlineFilter_Methods,
    "vtkOutlineFilter", modulename,
    NULL, NULL,
    PyvtkOutlineFilter_Doc(),
    PyVTKClass_vtkPolyDataAlgorithmNew(modulename));
  return cls;
}

const char **PyvtkOutlineFilter_Doc()
{
  static const char *docstring[] = {
    "vtkOutlineFilter - create wireframe outline for arbitrary data set\n\n",
    "Superclass: vtkPolyDataAlgorithm\n\n",
    "vtkOutlineFilter is a filter that generates a wireframe outline of\nany data set. The outline consists of the twelve edges of the dataset\nbounding box.\n\n",
    NULL
  };

  return docstring;
}

void PyVTKAddFile_vtkOutlineFilter(
  PyObject *dict, const char *modulename)
{
  PyObject *o;
  o = PyVTKClass_vtkOutlineFilterNew(modulename);

  if (o && PyDict_SetItemString(dict, (char *)"vtkOutlineFilter", o) != 0)
    {
    Py_DECREF(o);
    }

}

